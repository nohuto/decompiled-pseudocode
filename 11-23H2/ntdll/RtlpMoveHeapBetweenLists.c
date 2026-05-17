/*
 * XREFs of RtlpMoveHeapBetweenLists @ 0x180048C64
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048D7C (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180048E8C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x18004988C (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180049904 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
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
  if ( !a4 && !--dword_18018606C )
  {
    qword_180186070 = 0LL;
    v10 = _InterlockedCompareExchange(&dword_180186068, -1, -2);
    if ( v10 != -2 )
    {
      if ( (dword_180186068 & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      DeferredCriticalSectionEvent = qword_180186078;
      if ( !qword_180186078 )
        DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
      v12 = 0;
      while ( v10 != _InterlockedCompareExchange(&dword_180186068, (v10 & 2 | 1) + v10, v10) )
      {
        RtlBackoff(&v12);
        _m_prefetchw(&dword_180186068);
        v10 = dword_180186068;
      }
      if ( (v10 & 2) != 0 )
        RtlpUnWaitCriticalSectionEx((__int64)&RtlpProcessHeapsListLock, DeferredCriticalSectionEvent);
    }
  }
}
