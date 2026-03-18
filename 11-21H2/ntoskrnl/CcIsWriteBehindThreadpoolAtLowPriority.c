/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4
 * Callers:
 *     CcComputeNextScanTime @ 0x140258774 (CcComputeNextScanTime.c)
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14029E260 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPostWorkQueueRegular @ 0x1402EEC18 (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && CcEnablePerVolumeLazyWriter != 1
      && *(_DWORD *)(a1 + 1224) < *(_DWORD *)(a1 + 776);
}
