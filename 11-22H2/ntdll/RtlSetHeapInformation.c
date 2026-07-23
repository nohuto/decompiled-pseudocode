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

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  signed __int32 LockCount; // edi
  void *LockSemaphore; // r10
  int v11; // eax
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( !HeapInformation || HeapInformationLength != 48 )
        return -1073741823;
      result = RtlSetHeapDebuggingInformation(HeapHandle);
LABEL_9:
      if ( result < 0 )
        return result;
      return 0;
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
        return 0;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
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
        v8 = 28LL;
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
          v8 = 208LL;
        if ( *(_WORD *)((char *)HeapHandle + v8) != 0xFFFF )
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
            v13 = 0;
            while ( LockCount != _InterlockedCompareExchange(
                                   &RtlpProcessHeapsListLock.LockCount,
                                   (LockCount & 2 | 1) + LockCount,
                                   LockCount) )
            {
              RtlBackoff(&v13);
              _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
              LockCount = RtlpProcessHeapsListLock.LockCount;
            }
            if ( (LockCount & 2) != 0 )
            {
              if ( LockSemaphore == (void *)-1LL )
              {
                _InterlockedOr(v12, 0);
                RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
              }
              else
              {
                v11 = ZwSetEvent(LockSemaphore, 0LL);
                if ( v11 < 0 )
                  RtlRaiseStatus(v11);
              }
            }
          }
        }
      }
      else
      {
        RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpFlushHeapsCallback, 0LL, 0);
      }
      return 0;
    }
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass != 6 )
      {
        if ( HeapInformationClass == HeapTag )
          return RtlpHpSetHeapTag(HeapHandle, HeapInformation, HeapInformationLength);
        return 0;
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
          v6 = 32LL;
        }
        else
        {
          if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
            return 0;
          v6 = 376LL;
        }
        v7 = (__int64 *)((char *)HeapHandle + v6);
      }
      else
      {
        v7 = &qword_180184E58;
      }
      v7[1] = *((_QWORD *)HeapInformation + 2);
      v7[3] = *((_QWORD *)HeapInformation + 4);
      *v7 = *((_QWORD *)HeapInformation + 1);
      v7[2] = *((_QWORD *)HeapInformation + 3);
      return 0;
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
    return 0;
  }
  return result;
}
