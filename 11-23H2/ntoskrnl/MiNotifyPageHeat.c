/*
 * XREFs of MiNotifyPageHeat @ 0x140654B4C
 * Callers:
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140273310 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x1402E7D60 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1402E8440 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBCD0 (MiGetLargePageChain.c)
 *     MmSetPfnListInfo @ 0x14038C4B0 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 *     MiProcessTransitionHeatBatch @ 0x140654B84 (MiProcessTransitionHeatBatch.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MmPrefetchPagesEx @ 0x14073E8C8 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14065447C (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x140679864 (HvlNotifyPageHeat.c)
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
