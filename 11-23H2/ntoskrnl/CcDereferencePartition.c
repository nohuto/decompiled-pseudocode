/*
 * XREFs of CcDereferencePartition @ 0x14029C6C0
 * Callers:
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140299730 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14029C620 (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x1402FB990 (CcZeroData.c)
 *     CcForEachPartition @ 0x14031105C (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x140353740 (CcCompleteAsyncReadWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x140369EE4 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcAsyncReadWorker @ 0x1403BECE0 (CcAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BF240 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1403C1D80 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcPostDeferredWrites @ 0x1403C2028 (CcPostDeferredWrites.c)
 *     CcQueueLazyWriteScanThread @ 0x140537390 (CcQueueLazyWriteScanThread.c)
 *     CcRemoveExternalCache @ 0x14053773C (CcRemoveExternalCache.c)
 *     CcDeferWrite @ 0x1405379D0 (CcDeferWrite.c)
 *     CcUnmapInactiveViews @ 0x1405387C8 (CcUnmapInactiveViews.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140539070 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorkerThread @ 0x14053A250 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorkerThread @ 0x14053B060 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14053B880 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  return v2;
}
