/*
 * XREFs of RtlProtectHeap @ 0x180030B10
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180088BC0 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800EBD50 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002F674 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18003099C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpProtectHeap @ 0x180030C68 (RtlpProtectHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18008476C (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180085118 (RtlpAddHeapToProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x18011F8D8 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  signed __int32 LockCount; // edi
  void *LockSemaphore; // rbx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpRemoveHeapFromUnprotectedList((__int64)HeapHandle);
      RtlpAddHeapToProtectedList(v6);
      v7 = 2;
      if ( v5 == 64 )
        v7 = 32;
      v5 = v7;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v8 = RtlpHpHeapProtect(HeapHandle, v5);
    else
      v8 = RtlpProtectHeap(HeapHandle, v5);
    if ( v8 >= 0 && !MakeReadOnly )
    {
      RtlpRemoveHeapFromProtectedList(HeapHandle);
      RtlpAddHeapToUnprotectedList((__int64)HeapHandle);
    }
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
        v11 = 0;
        while ( LockCount != _InterlockedCompareExchange(
                               &RtlpProcessHeapsListLock.LockCount,
                               (LockCount & 2 | 1) + LockCount,
                               LockCount) )
        {
          RtlBackoff(&v11);
          _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
          LockCount = RtlpProcessHeapsListLock.LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(&RtlpProcessHeapsListLock, LockSemaphore);
      }
    }
  }
}
