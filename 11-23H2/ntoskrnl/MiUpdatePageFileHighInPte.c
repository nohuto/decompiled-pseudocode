/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14028563C
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140219FF4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiReservePageFileSpace @ 0x1402849A0 (MiReservePageFileSpace.c)
 *     MiTransferSoftwarePte @ 0x1402857D0 (MiTransferSoftwarePte.c)
 *     MiLargePageFreeToZero @ 0x140286F40 (MiLargePageFreeToZero.c)
 *     MiActOnPte @ 0x1402940D4 (MiActOnPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageChain @ 0x1402D68E0 (MiInsertLargePageChain.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishLargePageFree @ 0x1402E7594 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1402E77E0 (MiAllocateLargeZeroPages.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePageChain @ 0x1402EBA40 (MiGetLargePageChain.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiInitializeMdlBatchPages @ 0x1402F9310 (MiInitializeMdlBatchPages.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiCreatePfnTemplate @ 0x140375554 (MiCreatePfnTemplate.c)
 *     MiInitializeMdlPfn @ 0x14038C220 (MiInitializeMdlPfn.c)
 *     MiDrainZeroLookasides @ 0x1403BC1A8 (MiDrainZeroLookasides.c)
 *     MiConvertContiguousPages @ 0x1403BDAD0 (MiConvertContiguousPages.c)
 *     MiLargeFreePageToMdl @ 0x1403D7744 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     MiEnableNewPfns @ 0x14061A960 (MiEnableNewPfns.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651854 (MiRemoveLowestPriorityStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MiClearPageFileHash @ 0x140665B90 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1407B7144 (MiFreeReservationRun.c)
 *     MiCreateBootSlabEntries @ 0x140B46868 (MiCreateBootSlabEntries.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
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
