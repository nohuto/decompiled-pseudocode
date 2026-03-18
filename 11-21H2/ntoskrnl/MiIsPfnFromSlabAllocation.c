/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x140277C50
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiFreeLargeZeroPages @ 0x14026E05C (MiFreeLargeZeroPages.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140276DE4 (MiIsPageEligibleForProtectedStandby.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiFinalizeImageHeaderPage @ 0x1402EB1A0 (MiFinalizeImageHeaderPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1403CA414 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403CB284 (MiFreeLargeInitializationCodePages.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x1405898DC (MiFreeSmallPageFromMdl.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x1405A5628 (MiKernelShadowStackIdealForCaching.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MiCheckContiguityTradeEligible @ 0x1405A5F5C (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x1405B1530 (MiIsFreeSlabPage.c)
 *     MiPurgeSlabEntries @ 0x1405B1568 (MiPurgeSlabEntries.c)
 *     MmFreeSecureKernelPages @ 0x1405B1D98 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C58C66
      && _bittest64(
           (const signed __int64 *)qword_140C58DE0,
           (0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9);
}
