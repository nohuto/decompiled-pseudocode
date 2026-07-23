/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1402858CC
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140219FF4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiLargePageFreeToZero @ 0x1402871D0 (MiLargePageFreeToZero.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageChain @ 0x1402D6B70 (MiInsertLargePageChain.c)
 *     MiLargePagePromote @ 0x1402D7A60 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D8C50 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishLargePageFree @ 0x1402E7824 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x1402E8440 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBCD0 (MiGetLargePageChain.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiInitializeMdlBatchPages @ 0x1402F95A0 (MiInitializeMdlBatchPages.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiCreatePfnTemplate @ 0x1403756F4 (MiCreatePfnTemplate.c)
 *     MiInitializeMdlPfn @ 0x14038C400 (MiInitializeMdlPfn.c)
 *     MiDrainZeroLookasides @ 0x1403BC388 (MiDrainZeroLookasides.c)
 *     MiConvertContiguousPages @ 0x1403BDCB0 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D7924 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiEnableNewPfns @ 0x14061AEB0 (MiEnableNewPfns.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651DA4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MiClearPageFileHash @ 0x1406660E0 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1407B7424 (MiFreeReservationRun.c)
 *     MiCreateBootSlabEntries @ 0x140B46868 (MiCreateBootSlabEntries.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( qword_140C65B40 )
    {
      if ( (a1 & 0x10) != 0 )
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      else
        LODWORD(a1) = ~(_DWORD)qword_140C65B40 & a1;
    }
    v2 = a1;
  }
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
