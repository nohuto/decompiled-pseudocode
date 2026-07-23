/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x14029BEA4
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140298944 (CcPostWorkQueueRegular.c)
 *     CcShouldWorkOnThisQueue @ 0x140298B50 (CcShouldWorkOnThisQueue.c)
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x14029BAF0 (CcWriteBehindPreProcess.c)
 *     CcApplyLowIoPriorityToThread @ 0x14029BE38 (CcApplyLowIoPriorityToThread.c)
 *     CcComputeNextScanTime @ 0x1403A9708 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1405361A4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && !CcEnablePerVolumeLazyWriter
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
