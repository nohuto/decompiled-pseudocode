/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14029C620
 * Callers:
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140299730 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x14029E110 (CcFlushCachePreProcess.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034E154 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140353740 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403BECE0 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140539070 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncLazywriteWorker @ 0x140539D8C (CcAsyncLazywriteWorker.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053B164 (CcAsyncLazywriteWorkerMulti.c)
 *     CcCompleteAsyncWriteBehind @ 0x14053B9B8 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next = ListEntry[9].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
  }
  result = CcDereferencePartition(v3);
  if ( Next )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)&Next->Next + 1);
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
