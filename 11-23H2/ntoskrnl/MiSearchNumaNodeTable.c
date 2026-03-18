/*
 * XREFs of MiSearchNumaNodeTable @ 0x14026EAD0
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiGetPageChain @ 0x14026C700 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MmDeleteKernelStackEx @ 0x14026F8D0 (MmDeleteKernelStackEx.c)
 *     MiLargePageFreeToZero @ 0x140286F40 (MiLargePageFreeToZero.c)
 *     MiCheckSlabPage @ 0x1402923E8 (MiCheckSlabPage.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiGetFreeLargePage @ 0x1402D8720 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9810 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiPurgingPageFromLookaside @ 0x1403314B0 (MiPurgingPageFromLookaside.c)
 *     MiQueryLeafPte @ 0x1403318B0 (MiQueryLeafPte.c)
 *     MiCoalesceFreeLargePages @ 0x140332DC0 (MiCoalesceFreeLargePages.c)
 *     MiUpdatePageAttributeStamp @ 0x140334C78 (MiUpdatePageAttributeStamp.c)
 *     MiReferenceIoPages @ 0x140336500 (MiReferenceIoPages.c)
 *     MiPfnBestZeroAttribute @ 0x14033956C (MiPfnBestZeroAttribute.c)
 *     MiClearStackOwners @ 0x14033D61C (MiClearStackOwners.c)
 *     MiReturnPhysicalPoolPages @ 0x1403404FC (MiReturnPhysicalPoolPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x140361544 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiDescribePageRun @ 0x14037548C (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x140375714 (MiRestrictRangeToNode.c)
 *     MiMapContiguousMemoryLarge @ 0x14038E404 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x1403988C4 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x1403A0A68 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0B7C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDC20 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C47D8 (MiReplaceNumaStandbyPage.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CD0C0 (MiDemoteSlabEntriesDpc.c)
 *     MiPruneStandbyPages @ 0x14046CFB0 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046F08C (MiReuseUltraPageTable.c)
 *     MiPageToNode @ 0x1406177F0 (MiPageToNode.c)
 *     MiFindHighestDescriptorByNode @ 0x140617A08 (MiFindHighestDescriptorByNode.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiInitializeDynamicPfns @ 0x14061AEF8 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiHugeRangeFreeToZero @ 0x140620C84 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x140620FCC (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621514 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621DF4 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406220B8 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x140622808 (MiSetHugeRangePartitionId.c)
 *     MiUnlinkHugeRange @ 0x140622ABC (MiUnlinkHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x140622D48 (MiUpdateHugePageCounts.c)
 *     MiPrefetchPreallocatePages @ 0x140632128 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140644DD4 (MiKernelShadowStackIdealForCaching.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064D6E4 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D904 (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14064DEB4 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EAA4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesInProgress @ 0x14064F314 (MiLargePageMovesInProgress.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140656C58 (MiGetSlabAllocatorStandbyList.c)
 *     MiGetPartitionNodeInformation @ 0x14065A0A8 (MiGetPartitionNodeInformation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065BD04 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065D4EC (MiCoalesceActivePagesIntoFree.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 *     MiFreeLargePages @ 0x140668250 (MiFreeLargePages.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668644 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B42B78 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B42F28 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B43494 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B45044 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateKernelHalSlabRange @ 0x140B466A0 (MiCreateKernelHalSlabRange.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6CE0C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiHotAddBootDescriptor @ 0x140B994C0 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140B996CC (MxSwitchDescriptors.c)
 *     MxInsertEnclaveBootPages @ 0x140B99E40 (MxInsertEnclaveBootPages.c)
 *     MmUpdateSlabRangeType @ 0x140B9A53C (MmUpdateSlabRangeType.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // eax
  _QWORD *v5; // rdx

  v1 = dword_140C65A88;
  if ( dword_140C65A84 > (unsigned int)dword_140C65A88
    || (result = (char *)qword_140C65AC8 + 16 * dword_140C65A84, BugCheckParameter2 < *result)
    || dword_140C65A84 != dword_140C65A88 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C65A88 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      v5 = (char *)qword_140C65AC8 + 16 * v4;
      if ( BugCheckParameter2 < *v5 )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C65A88 || BugCheckParameter2 < v5[2] )
        {
          dword_140C65A84 = (v3 + v1) >> 1;
          return (char *)qword_140C65AC8 + 16 * v4;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
