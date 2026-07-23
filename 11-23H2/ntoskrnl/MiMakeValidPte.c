/*
 * XREFs of MiMakeValidPte @ 0x1402CF540
 * Callers:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiComputeCombineHash @ 0x140281EE0 (MiComputeCombineHash.c)
 *     MiGetPteFromCopyList @ 0x1402842C0 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiLinkPoolCommitChain @ 0x140286530 (MiLinkPoolCommitChain.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiMakeProtoTransition @ 0x1402D9020 (MiMakeProtoTransition.c)
 *     MiCreateSharedZeroPages @ 0x1402E1050 (MiCreateSharedZeroPages.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2C20 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiResolveProtoCombine @ 0x1402E3D88 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiWriteLargePte @ 0x1402EC4FC (MiWriteLargePte.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F19A4 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403253E0 (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeTransitionPteValid @ 0x140335260 (MiMakeTransitionPteValid.c)
 *     MiFillPhysicalPages @ 0x140339520 (MiFillPhysicalPages.c)
 *     MiUnlinkStandbyPfn @ 0x14033EAAC (MiUnlinkStandbyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358810 (MiSetProtectionOnTransitionPte.c)
 *     MiMapArbitraryPage @ 0x14035A13C (MiMapArbitraryPage.c)
 *     MiInitializeNewPfns @ 0x140375910 (MiInitializeNewPfns.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2E50 (MmSetPageProtection.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061F320 (MmProtectMdlSystemAddress.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406294CC (MiUpdateLargePageSectionPfns.c)
 *     MiMapFrame @ 0x14062F0F4 (MiMapFrame.c)
 *     MiMapMemoryDumpMdl @ 0x140630298 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140632BC8 (MiInitializeSlowPte.c)
 *     MiMakeLargePageTable @ 0x140637554 (MiMakeLargePageTable.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiEnableLargeSubsection @ 0x14063D350 (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x14063D5E0 (MiFillPageWithImageExtentContents.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiMapRetpolineStubs @ 0x140640C2C (MiMapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140644448 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x140645D60 (MmReadProcessPageTables.c)
 *     MiInsertLargeVadMapping @ 0x1406466AC (MiInsertLargeVadMapping.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E9E0 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargePage @ 0x14065EEBC (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F640 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x140660078 (MiCopyMemoryPagefileData.c)
 *     MiBuildForkPageTable @ 0x140662464 (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x140664A4C (MiFinishLastForkPageTable.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiInsertLargeUserMapping @ 0x140669040 (MiInsertLargeUserMapping.c)
 *     MiInitializeProtoPfn @ 0x14066B7C0 (MiInitializeProtoPfn.c)
 *     MiValidateImagePfn @ 0x1406B1028 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiRelocateImagePfn @ 0x1407444B0 (MiRelocateImagePfn.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x14081E1D0 (MiInitializeShadowPageTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 *     MmAllocateNonCachedMemory @ 0x140A2DBC0 (MmAllocateNonCachedMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D274 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140A43184 (MiCaptureSparsePages.c)
 *     MmMapProtectedKernelPage @ 0x140A443C8 (MmMapProtectedKernelPage.c)
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
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUserPdeOrAbove @ 0x14033C8C0 (MiUserPdeOrAbove.c)
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
