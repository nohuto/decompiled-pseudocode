/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x14029BC14
 * Callers:
 *     CcPostWorkQueueRegular @ 0x1402986B4 (CcPostWorkQueueRegular.c)
 *     CcShouldWorkOnThisQueue @ 0x1402988C0 (CcShouldWorkOnThisQueue.c)
 *     CcWorkerThread @ 0x140298940 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x14029B558 (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x14029B860 (CcWriteBehindPreProcess.c)
 *     CcApplyLowIoPriorityToThread @ 0x14029BBA8 (CcApplyLowIoPriorityToThread.c)
 *     CcComputeNextScanTime @ 0x1403A9528 (CcComputeNextScanTime.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140535C54 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && !CcEnablePerVolumeLazyWriter
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
