/*
 * XREFs of MiNotifyPageHeat @ 0x1406545FC
 * Callers:
 *     MiGetPageChain @ 0x14026C700 (MiGetPageChain.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140273080 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBA40 (MiGetLargePageChain.c)
 *     MmSetPfnListInfo @ 0x14038C2D0 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x140653DEC (MiChangePageHeatImmediate.c)
 *     MiProcessTransitionHeatBatch @ 0x140654634 (MiProcessTransitionHeatBatch.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x140653F2C (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x140679314 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  MiLogNotifyPageHeat();
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
