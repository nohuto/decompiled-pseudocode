/*
 * XREFs of RtlSetHeapInformation @ 0x180080EF0
 * Callers:
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180080FDC (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180115C20 (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  signed __int32 v10; // edi
  __int64 DeferredCriticalSectionEvent; // r10
  int v12; // eax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  switch ( a2 )
  {
    case -2147483646:
      if ( !a3 || a4 != 48 )
        return 3221225473LL;
      result = RtlSetHeapDebuggingInformation(a1, a3);
LABEL_9:
      if ( (int)result < 0 )
        return result;
      return v4;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return v4;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return v4;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
        v9 = 28LL;
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
          v9 = 208LL;
        if ( *(_WORD *)(v9 + a1) != 0xFFFF )
          RtlpFlushHeap(a1);
        if ( !--dword_180178D4C )
        {
          qword_180178D50 = 0LL;
          v10 = _InterlockedCompareExchange(&dword_180178D48, -1, -2);
          if ( v10 != -2 )
          {
            if ( (dword_180178D48 & 1) != 0 )
              RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
            DeferredCriticalSectionEvent = qword_180178D58;
            if ( !qword_180178D58 )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
            v14 = 0;
            while ( v10 != _InterlockedCompareExchange(&dword_180178D48, (v10 & 2 | 1) + v10, v10) )
            {
              RtlBackoff(&v14);
              _m_prefetchw(&dword_180178D48);
              v10 = dword_180178D48;
            }
            if ( (v10 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == -1 )
              {
                _InterlockedOr(v13, 0);
                RtlpWakeByAddress((unsigned __int64)&dword_180178D48, 0);
              }
              else
              {
                v12 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
                if ( v12 < 0 )
                {
                  RtlRaiseStatus((unsigned int)v12);
                  __debugbreak();
                }
              }
            }
          }
        }
      }
      else
      {
        RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpFlushHeapsCallback, 0LL, 0);
      }
      return v4;
    }
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
      {
        if ( a2 == 7 )
        {
          if ( a1 && a3 && *(_DWORD *)(a1 + 16) == -571548178 && a4 == 8 )
            *(_QWORD *)(a1 + 104) = *(_QWORD *)a3;
          else
            return (unsigned int)-1073741811;
        }
        return v4;
      }
      if ( a4 < 0x28
        || *(_DWORD *)a3 != 1
        || ((*(_QWORD *)(a3 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *(_QWORD *)(a3 + 8) )
      {
        return 3221225485LL;
      }
      if ( a1 )
      {
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
        {
          v7 = 32LL;
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
            return v4;
          v7 = 376LL;
        }
        v8 = (__int64 *)(v7 + a1);
      }
      else
      {
        v8 = &qword_18017AC18;
      }
      v8[1] = *(_QWORD *)(a3 + 16);
      v8[3] = *(_QWORD *)(a3 + 32);
      *v8 = *(_QWORD *)(a3 + 8);
      v8[2] = *(_QWORD *)(a3 + 24);
      return v4;
    }
    if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
      return 3221225485LL;
    result = RtlpHpStackTraceConfig(a3);
    goto LABEL_9;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpTagInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return v4;
  }
  return result;
}
