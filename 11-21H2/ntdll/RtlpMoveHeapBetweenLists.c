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
  signed __int32 v10; // edi
  __int64 DeferredCriticalSectionEvent; // rbx
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
  if ( !a4 && !--dword_180178D4C )
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
      v12 = 0;
      while ( v10 != _InterlockedCompareExchange(&dword_180178D48, (v10 & 2 | 1) + v10, v10) )
      {
        RtlBackoff(&v12);
        _m_prefetchw(&dword_180178D48);
        v10 = dword_180178D48;
      }
      if ( (v10 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx(&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
    }
  }
}
