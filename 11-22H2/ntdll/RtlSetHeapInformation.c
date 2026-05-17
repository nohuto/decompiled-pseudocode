/*
 * XREFs of RtlSetHeapInformation @ 0x18007CB90
 * Callers:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpFlushHeap @ 0x18005A8EC (RtlpFlushHeap.c)
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007CC74 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FDD4C (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpSetHeapTag @ 0x1800FFAFC (RtlpHpSetHeapTag.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHpStackTraceConfig @ 0x180115FF8 (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(_DWORD *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // edi
  __int64 DeferredCriticalSectionEvent; // r10
  int v11; // eax
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  switch ( a2 )
  {
    case -2147483646:
      if ( !a3 || a4 != 48 )
        return 3221225473LL;
      result = RtlSetHeapDebuggingInformation(a1, a3);
LABEL_9:
      if ( (int)result < 0 )
        return result;
      return 0LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[4] != -571548178 )
        {
          if ( (a1[28] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
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
        v8 = 7LL;
        if ( a1[4] != -571548178 )
          v8 = 52LL;
        if ( LOWORD(a1[v8]) != 0xFFFF )
          RtlpFlushHeap((__int64)a1);
        if ( !--dword_180182FCC )
        {
          qword_180182FD0 = 0LL;
          v9 = _InterlockedCompareExchange(&dword_180182FC8, -1, -2);
          if ( v9 != -2 )
          {
            if ( (dword_180182FC8 & 1) != 0 )
              RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
            DeferredCriticalSectionEvent = qword_180182FD8;
            if ( !qword_180182FD8 )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
            v13 = 0;
            while ( v9 != _InterlockedCompareExchange(&dword_180182FC8, (v9 & 2 | 1) + v9, v9) )
            {
              RtlBackoff(&v13);
              _m_prefetchw(&dword_180182FC8);
              v9 = dword_180182FC8;
            }
            if ( (v9 & 2) != 0 )
            {
              if ( DeferredCriticalSectionEvent == -1 )
              {
                _InterlockedOr(v12, 0);
                RtlpWakeByAddress((unsigned __int64)&dword_180182FC8, 0);
              }
              else
              {
                v11 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
                if ( v11 < 0 )
                  RtlRaiseStatus((unsigned int)v11);
              }
            }
          }
        }
      }
      else
      {
        RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpFlushHeapsCallback, 0LL, 0);
      }
      return 0LL;
    }
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
      {
        if ( a2 == 7 )
          return RtlpHpSetHeapTag(a1, a3, a4);
        return 0LL;
      }
      if ( a4 < 0x28
        || *(_DWORD *)a3 != 1
        || ((*(_QWORD *)(a3 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *(_QWORD *)(a3 + 8) )
      {
        return 3221225485LL;
      }
      if ( a1 )
      {
        if ( a1[4] == -571548178 )
        {
          v6 = 8LL;
        }
        else
        {
          if ( (a1[29] & 0x1000000) != 0 )
            return 0LL;
          v6 = 94LL;
        }
        v7 = (__int64 *)&a1[v6];
      }
      else
      {
        v7 = &qword_180184E58;
      }
      v7[1] = *(_QWORD *)(a3 + 16);
      v7[3] = *(_QWORD *)(a3 + 32);
      *v7 = *(_QWORD *)(a3 + 8);
      v7[2] = *(_QWORD *)(a3 + 24);
      return 0LL;
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
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0LL;
  }
  return result;
}
