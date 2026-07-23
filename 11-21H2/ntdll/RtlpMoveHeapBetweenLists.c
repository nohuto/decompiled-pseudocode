/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x18002F448
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18002F674 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x18003099C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x18008476C (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180085118 (RtlpAddHeapToProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

void __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  signed __int32 LockCount; // edi
  void *LockSemaphore; // rbx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !a4 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        RtlpRemoveHeapFromProtectedList(a1);
    }
    else
    {
      RtlpRemoveHeapFromUnprotectedList(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        RtlpAddHeapToProtectedList(a1);
    }
    else
    {
      RtlpAddHeapToUnprotectedList(a1);
    }
  }
  if ( !a4 && !--RtlpProcessHeapsListLock.RecursionCount )
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
      v12 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v12);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
        RtlpUnWaitCriticalSectionEx(&RtlpProcessHeapsListLock, LockSemaphore);
    }
  }
}
