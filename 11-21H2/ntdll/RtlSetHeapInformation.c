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

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  signed __int32 LockCount; // edi
  void *LockSemaphore; // r10
  int v12; // eax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( !HeapInformation || HeapInformationLength != 48 )
        return -1073741823;
      result = RtlSetHeapDebuggingInformation(HeapHandle);
LABEL_9:
      if ( result < 0 )
        return result;
      return v4;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return v4;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return v4;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass == HeapOptimizeResources )
    {
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
        v9 = 28LL;
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
          v9 = 208LL;
        if ( *(_WORD *)((char *)HeapHandle + v9) != 0xFFFF )
          RtlpFlushHeap((__int64)HeapHandle);
        if ( !--RtlpProcessHeapsListLock.RecursionCount )
        {
          RtlpProcessHeapsListLock.OwningThread = 0LL;
          LockCount = _InterlockedCompareExchange(&RtlpProcessHeapsListLock.LockCount, -1, -2);
          if ( LockCount != -2 )
          {
            if ( (RtlpProcessHeapsListLock.LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
            LockSemaphore = RtlpProcessHeapsListLock.LockSemaphore;
            if ( !RtlpProcessHeapsListLock.LockSemaphore )
              LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
            v14 = 0;
            while ( LockCount != _InterlockedCompareExchange(
                                   &RtlpProcessHeapsListLock.LockCount,
                                   (LockCount & 2 | 1) + LockCount,
                                   LockCount) )
            {
              RtlBackoff(&v14);
              _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
              LockCount = RtlpProcessHeapsListLock.LockCount;
            }
            if ( (LockCount & 2) != 0 )
            {
              if ( LockSemaphore == (void *)-1LL )
              {
                _InterlockedOr(v13, 0);
                RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
              }
              else
              {
                v12 = ZwSetEvent(LockSemaphore, 0LL);
                if ( v12 < 0 )
                  RtlRaiseStatus(v12);
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
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass != 6 )
      {
        if ( HeapInformationClass == HeapTag )
        {
          if ( HeapHandle && HeapInformation && *((_DWORD *)HeapHandle + 4) == -571548178 && HeapInformationLength == 8 )
            *((_QWORD *)HeapHandle + 13) = *(_QWORD *)HeapInformation;
          else
            return -1073741811;
        }
        return v4;
      }
      if ( HeapInformationLength < 0x28
        || *(_DWORD *)HeapInformation != 1
        || ((*((_QWORD *)HeapInformation + 1) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *((_QWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        {
          v7 = 32LL;
        }
        else
        {
          if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
            return v4;
          v7 = 376LL;
        }
        v8 = (__int64 *)((char *)HeapHandle + v7);
      }
      else
      {
        v8 = &qword_18017AC18;
      }
      v8[1] = *((_QWORD *)HeapInformation + 2);
      v8[3] = *((_QWORD *)HeapInformation + 4);
      *v8 = *((_QWORD *)HeapInformation + 1);
      v8[2] = *((_QWORD *)HeapInformation + 3);
      return v4;
    }
    if ( !HeapInformation
      || HeapInformationLength < 0x10
      || *(_WORD *)HeapInformation != 1
      || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
    {
      return -1073741811;
    }
    result = RtlpHpStackTraceConfig(HeapInformation);
    goto LABEL_9;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return v4;
  }
  return result;
}
