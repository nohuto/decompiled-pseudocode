/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1402859D4
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2AD0 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiSlistGetFreePage @ 0x1402EB994 (MiSlistGetFreePage.c)
 *     MiGetUltraPage @ 0x1402EC570 (MiGetUltraPage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403390FC (MiReInitializeFreeSlabPfn.c)
 *     MiChangePageAttribute @ 0x14036F3BC (MiChangePageAttribute.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038F5A4 (MiPreparePfnDatabasePageForFree.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403953EC (MiFreeLargeInitializationCodePages.c)
 *     MiSwapStackPageNoDpc @ 0x14039A2CC (MiSwapStackPageNoDpc.c)
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1403BDAD0 (MiConvertContiguousPages.c)
 *     MiTradeTransitionPage @ 0x1403BDC20 (MiTradeTransitionPage.c)
 *     MiGetPageSlist @ 0x1403D71D0 (MiGetPageSlist.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiPreInitializeSystemImagePage @ 0x14062C5CC (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651854 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReuseStandbyPage @ 0x140651CBC (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066713C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
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
