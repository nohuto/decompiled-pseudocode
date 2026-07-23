/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140285C64
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D8C50 (MiUnlinkNodeLargePageHelper.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiSlistGetFreePage @ 0x1402EBC24 (MiSlistGetFreePage.c)
 *     MiGetUltraPage @ 0x1402EC800 (MiGetUltraPage.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x14033938C (MiReInitializeFreeSlabPfn.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038F784 (MiPreparePfnDatabasePageForFree.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403955CC (MiFreeLargeInitializationCodePages.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1403BDCB0 (MiConvertContiguousPages.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiGetPageSlist @ 0x1403D73B0 (MiGetPageSlist.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiPreInitializeSystemImagePage @ 0x14062CB1C (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651DA4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReuseStandbyPage @ 0x14065220C (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
