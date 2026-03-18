/*
 * XREFs of MiMakeValidPte @ 0x1402CF2B0
 * Callers:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C700 (MiGetPageChain.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiFillSystemPtes @ 0x14027E8C0 (MiFillSystemPtes.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x1402818C0 (MiPfnShareCountIsZero.c)
 *     MiComputeCombineHash @ 0x140281C50 (MiComputeCombineHash.c)
 *     MiGetPteFromCopyList @ 0x140284030 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiLinkPoolCommitChain @ 0x1402862A0 (MiLinkPoolCommitChain.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiMakeProtoTransition @ 0x1402D8D90 (MiMakeProtoTransition.c)
 *     MiCreateSharedZeroPages @ 0x1402E0DC0 (MiCreateSharedZeroPages.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiWriteLargePte @ 0x1402EC26C (MiWriteLargePte.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140325150 (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeTransitionPteValid @ 0x140334FD0 (MiMakeTransitionPteValid.c)
 *     MiFillPhysicalPages @ 0x140339290 (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x14033E81C (MiUnlinkStandbyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358670 (MiSetProtectionOnTransitionPte.c)
 *     MiMapArbitraryPage @ 0x140359F9C (MiMapArbitraryPage.c)
 *     MiInitializeNewPfns @ 0x140375770 (MiInitializeNewPfns.c)
 *     MiMapWithLargePages @ 0x14038E714 (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F4F8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiReplacePageOfProtoPool @ 0x14061D9E0 (MiReplacePageOfProtoPool.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628F7C (MiUpdateLargePageSectionPfns.c)
 *     MiMapFrame @ 0x14062EBA4 (MiMapFrame.c)
 *     MiMapMemoryDumpMdl @ 0x14062FD48 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140632678 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140637004 (MiMakeLargePageTable.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiEnableLargeSubsection @ 0x14063CE00 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14063D090 (MiFillPageWithImageExtentContents.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140643EF8 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140645810 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x14064615C (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E490 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargePage @ 0x14065E96C (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F0F0 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB28 (MiCopyMemoryPagefileData.c)
 *     MiBuildForkPageTable @ 0x140661F14 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1406644FC (MiFinishLastForkPageTable.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiInsertLargeUserMapping @ 0x140668AF0 (MiInsertLargeUserMapping.c)
 *     MiInitializeProtoPfn @ 0x14066B270 (MiInitializeProtoPfn.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiRelocateImagePfn @ 0x1407442C0 (MiRelocateImagePfn.c)
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x14081DF00 (MiInitializeShadowPageTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C23C (MmAllocateIndependentPagesEx.c)
 *     MmAllocateNonCachedMemory @ 0x140A2D910 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3D788 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140A42ED4 (MiCaptureSparsePages.c)
 *     MmMapProtectedKernelPage @ 0x140A44118 (MmMapProtectedKernelPage.c)
 *     MiInitializeGapFrames @ 0x140B41EF8 (MiInitializeGapFrames.c)
 *     MxMapVa @ 0x140B431AC (MxMapVa.c)
 *     MiMapDummyPages @ 0x140B43A0C (MiMapDummyPages.c)
 *     MiInitializeDummyPages @ 0x140B44C50 (MiInitializeDummyPages.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiFillGapPtes @ 0x140B5EB30 (MiFillGapPtes.c)
 *     MiInitializeSharedUserData @ 0x140B6BC64 (MiInitializeSharedUserData.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140B99540 (MxCopyPage.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14033C630 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v15; // rcx
  int v16; // eax

  v3 = a3;
  v4 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x121;
    v9 = a3 & 0x4000000;
    goto LABEL_3;
  }
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1, v6, a3) )
      v7 |= 4uLL;
  }
  v15 = v7;
  v8 = v7 | 4;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v15;
  v9 = v3 & 0x4000000;
  if ( (v3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v16 = HIBYTE(word_140C66CFC);
  }
  else
  {
    if ( byte_140C6A3D8[((LeafVa >> 39) & 0x1FF) - 256] == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_3;
    }
    if ( LeafVa > qword_140C67070 || LeafVa < qword_140C6A558 )
      v16 = (unsigned __int8)word_140C66CFC;
    else
      v16 = HIBYTE(word_140C66CFC);
  }
  if ( v16 )
    v8 |= 0x100uLL;
LABEL_3:
  v10 = v8 | 0x42;
  if ( v3 >= 0 || (v4 & 5) != 4 )
    v10 = v8;
  if ( (v3 & 0x40000000) != 0 )
    v10 &= ~4uLL;
  if ( (v3 & 0x20000000) != 0 )
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140C66CFC << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( !v9 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
