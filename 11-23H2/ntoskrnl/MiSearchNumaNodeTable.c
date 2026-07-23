/*
 * XREFs of MiSearchNumaNodeTable @ 0x14026ED60
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 *     MiLargePageFreeToZero @ 0x1402871D0 (MiLargePageFreeToZero.c)
 *     MiCheckSlabPage @ 0x140292678 (MiCheckSlabPage.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1402D64B0 (MiDeleteClusterPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiLargePagePromote @ 0x1402D7A60 (MiLargePagePromote.c)
 *     MiGetFreeLargePage @ 0x1402D89B0 (MiGetFreeLargePage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiPfnToStandbyLookaside @ 0x1402DE180 (MiPfnToStandbyLookaside.c)
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9AA0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiPurgingPageFromLookaside @ 0x140331740 (MiPurgingPageFromLookaside.c)
 *     MiQueryLeafPte @ 0x140331B40 (MiQueryLeafPte.c)
 *     MiCoalesceFreeLargePages @ 0x140333050 (MiCoalesceFreeLargePages.c)
 *     MiUpdatePageAttributeStamp @ 0x140334F08 (MiUpdatePageAttributeStamp.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiPfnBestZeroAttribute @ 0x1403397FC (MiPfnBestZeroAttribute.c)
 *     MiClearStackOwners @ 0x14033D8AC (MiClearStackOwners.c)
 *     MiReturnPhysicalPoolPages @ 0x14034078C (MiReturnPhysicalPoolPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1403616E4 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiDescribePageRun @ 0x14037562C (MiDescribePageRun.c)
 *     MiRestrictRangeToNode @ 0x1403758B4 (MiRestrictRangeToNode.c)
 *     MiMapContiguousMemoryLarge @ 0x14038E5E4 (MiMapContiguousMemoryLarge.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x140398AA4 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiDemoteLargeFreePage @ 0x1403A0C48 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0D5C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C49B8 (MiReplaceNumaStandbyPage.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CD2A0 (MiDemoteSlabEntriesDpc.c)
 *     MiPruneStandbyPages @ 0x14046D3B0 (MiPruneStandbyPages.c)
 *     MiReuseUltraPageTable @ 0x14046F48C (MiReuseUltraPageTable.c)
 *     MiPageToNode @ 0x140617D40 (MiPageToNode.c)
 *     MiFindHighestDescriptorByNode @ 0x140617F58 (MiFindHighestDescriptorByNode.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiHugeRangeFreeToZero @ 0x1406211D4 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x14062151C (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621A64 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140622344 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140622608 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x140622D58 (MiSetHugeRangePartitionId.c)
 *     MiUnlinkHugeRange @ 0x14062300C (MiUnlinkHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x140623298 (MiUpdateHugePageCounts.c)
 *     MiPrefetchPreallocatePages @ 0x140632678 (MiPrefetchPreallocatePages.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140645324 (MiKernelShadowStackIdealForCaching.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiFreeListPageContentsChanged @ 0x14064DC34 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14064DE54 (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14064E404 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EFF4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesInProgress @ 0x14064F864 (MiLargePageMovesInProgress.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1406571A8 (MiGetSlabAllocatorStandbyList.c)
 *     MiGetPartitionNodeInformation @ 0x14065A5F8 (MiGetPartitionNodeInformation.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065C254 (MiUpdatePartitionChildPageCounts.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065DA3C (MiCoalesceActivePagesIntoFree.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 *     MiFreeLargePages @ 0x1406687A0 (MiFreeLargePages.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668B94 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
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
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
