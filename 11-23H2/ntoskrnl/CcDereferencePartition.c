/*
 * XREFs of CcDereferencePartition @ 0x14029C430
 * Callers:
 *     CcWorkerThread @ 0x140298940 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402994A0 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140299FC0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14029BC40 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14029C390 (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x1402FB700 (CcZeroData.c)
 *     CcForEachPartition @ 0x140310DCC (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x1403535A0 (CcCompleteAsyncReadWorker.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x140369D44 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcAsyncReadWorker @ 0x1403BEB00 (CcAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BF060 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x1403C1BA0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcPostDeferredWrites @ 0x1403C1E48 (CcPostDeferredWrites.c)
 *     CcQueueLazyWriteScanThread @ 0x140536E40 (CcQueueLazyWriteScanThread.c)
 *     CcRemoveExternalCache @ 0x1405371EC (CcRemoveExternalCache.c)
 *     CcDeferWrite @ 0x140537480 (CcDeferWrite.c)
 *     CcUnmapInactiveViews @ 0x140538278 (CcUnmapInactiveViews.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140538B20 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorkerThread @ 0x140539D00 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncReadWorkerThread @ 0x14053AB10 (CcAsyncReadWorkerThread.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14053B330 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
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
