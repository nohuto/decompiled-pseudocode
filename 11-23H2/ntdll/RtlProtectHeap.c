/*
 * XREFs of RtlProtectHeap @ 0x180049120
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180078068 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085CA0 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x18008CC90 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC830 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpGetHeapProtection @ 0x1800466C4 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlpAddHeapToUnprotectedList @ 0x180048D7C (RtlpAddHeapToUnprotectedList.c)
 *     RtlpRemoveHeapFromUnprotectedList @ 0x180048E8C (RtlpRemoveHeapFromUnprotectedList.c)
 *     RtlpProtectHeap @ 0x18004927C (RtlpProtectHeap.c)
 *     RtlpAddHeapToProtectedList @ 0x18004988C (RtlpAddHeapToProtectedList.c)
 *     RtlpRemoveHeapFromProtectedList @ 0x180049904 (RtlpRemoveHeapFromProtectedList.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHpHeapProtect @ 0x180123294 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edi
  int v6; // eax
  int v7; // eax
  signed __int32 LockCount; // ebx
  void *LockSemaphore; // rdi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4,
                         (unsigned __int8)BYTE1(*(_QWORD *)HeapHandle),
                         _mm_srli_si128(*(__m128i *)HeapHandle, 8).m128i_u64[0]);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpRemoveHeapFromUnprotectedList((__int64)HeapHandle);
      RtlpAddHeapToProtectedList(HeapHandle);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v7 = RtlpHpHeapProtect(HeapHandle, v5);
    else
      v7 = RtlpProtectHeap(HeapHandle, v5);
    if ( v7 >= 0 && !MakeReadOnly )
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
        v10 = 0;
        while ( LockCount != _InterlockedCompareExchange(
                               &RtlpProcessHeapsListLock.LockCount,
                               (LockCount & 2 | 1) + LockCount,
                               LockCount) )
        {
          RtlBackoff(&v10);
          _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
          LockCount = RtlpProcessHeapsListLock.LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)&RtlpProcessHeapsListLock, LockSemaphore);
      }
    }
  }
}
