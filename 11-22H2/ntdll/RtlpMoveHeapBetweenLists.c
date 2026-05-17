/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x180048DC4
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048EDC (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180048FEC (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800499EC (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180049A64 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 */

void __fastcall RtlpMoveHeapBetweenLists(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  signed __int32 v10; // edi
  __int64 DeferredCriticalSectionEvent; // rbx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !a4 )
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
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
  if ( !a4 && !--dword_180182FCC )
  {
    qword_180182FD0 = 0LL;
    v10 = _InterlockedCompareExchange(&dword_180182FC8, -1, -2);
    if ( v10 != -2 )
    {
      if ( (dword_180182FC8 & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      DeferredCriticalSectionEvent = qword_180182FD8;
      if ( !qword_180182FD8 )
        DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
      v12 = 0;
      while ( v10 != _InterlockedCompareExchange(&dword_180182FC8, (v10 & 2 | 1) + v10, v10) )
      {
        RtlBackoff(&v12);
        _m_prefetchw(&dword_180182FC8);
        v10 = dword_180182FC8;
      }
      if ( (v10 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx((__int64)&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
    }
  }
}
