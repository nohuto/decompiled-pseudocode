/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1402146B4
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x140213B54 (MiReturnSystemVa.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiCapturePfnVm @ 0x140215CDC (MiCapturePfnVm.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiComputeMaximumFaultCluster @ 0x1402386C0 (MiComputeMaximumFaultCluster.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiPfCompleteInPageSupport @ 0x1402A3D7C (MiPfCompleteInPageSupport.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMarkPteDirty @ 0x14034B6B0 (MiMarkPteDirty.c)
 *     MiEncodeProtoFill @ 0x14034EC00 (MiEncodeProtoFill.c)
 *     MiRecheckCombineVm @ 0x14035A704 (MiRecheckCombineVm.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403623A0 (MmQuerySystemWorkingSetInformation.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiMapContiguousMemoryLarge @ 0x14038E5E4 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EDB0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x14038F170 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MiLockStealSystemVm @ 0x140398C2C (MiLockStealSystemVm.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiGetFileOnlyRanges @ 0x14061B1E4 (MiGetFileOnlyRanges.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140630C2C (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140631010 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x140640C2C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 *     MiOutSwapKernelStackPage @ 0x1406530A8 (MiOutSwapKernelStackPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MiGetCcAccessLog @ 0x140749180 (MiGetCcAccessLog.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 *     HvTrimHive @ 0x14085FB5C (HvTrimHive.c)
 *     MiCompleteSecureDriverLoad @ 0x140885AC8 (MiCompleteSecureDriverLoad.c)
 *     MmMapLockedRestartPages @ 0x140A2B690 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140A2B750 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A30C50 (MmReturnChargesToLockPagedPool.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3C018 (MiUnapplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A40168 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140AABEDC (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140AAC118 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AAC268 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AAC304 (MiMarkNonPagedHiberPhasePages.c)
 *     MiBuildPagedPool @ 0x140B43794 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140B44B90 (MiAddLoaderHalIoMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140B456F8 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B57F98 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiInitializeNonPagedPool @ 0x140B5E52C (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicVa @ 0x140B6F0BC (MiInitializeDynamicVa.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 3LL * a1;
    v2 = (char *)&unk_140C6F800;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C69A00;
  }
  return &v2[64 * v1];
}
