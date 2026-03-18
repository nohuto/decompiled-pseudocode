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
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385F0 (MiComputeMaximumFaultCluster.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402619B0 (MiSynchronizeSystemVa.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x140273910 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiPfCompleteInPageSupport @ 0x1402A3AEC (MiPfCompleteInPageSupport.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E56B0 (MiGetNextPageTable.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324E4C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMarkPteDirty @ 0x14034B510 (MiMarkPteDirty.c)
 *     MiEncodeProtoFill @ 0x14034EA60 (MiEncodeProtoFill.c)
 *     MiRecheckCombineVm @ 0x14035A564 (MiRecheckCombineVm.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140362200 (MmQuerySystemWorkingSetInformation.c)
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     MiMapContiguousMemoryLarge @ 0x14038E404 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EBD0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x14038EF90 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x14038FEF8 (MiDeleteBootRange.c)
 *     MiLockStealSystemVm @ 0x140398A4C (MiLockStealSystemVm.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiGetFileOnlyRanges @ 0x14061AC94 (MiGetFileOnlyRanges.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x140630140 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406306DC (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140630AC0 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140630B58 (MiFaultInPagedPool.c)
 *     MiLockPatchIatForDV @ 0x1406404A0 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MmWriteSystemImageTracepoint @ 0x14064336C (MmWriteSystemImageTracepoint.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644964 (MiInitializeBootShadowStackPage.c)
 *     MiOutSwapKernelStackPage @ 0x140652B58 (MiOutSwapKernelStackPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F7D4 (MiReleaseLargePdeMappings.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MiGetCcAccessLog @ 0x140748F90 (MiGetCcAccessLog.c)
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 *     HvTrimHive @ 0x14085F91C (HvTrimHive.c)
 *     MiCompleteSecureDriverLoad @ 0x140885888 (MiCompleteSecureDriverLoad.c)
 *     MmMapLockedRestartPages @ 0x140A2B3E0 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140A2B4A0 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A309A0 (MmReturnChargesToLockPagedPool.c)
 *     MiLockAndMapEntireDriver @ 0x140A342C8 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A34878 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BD68 (MiUnapplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A3FEB8 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140AAC06C (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140AAC2A8 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AAC3F8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AAC494 (MiMarkNonPagedHiberPhasePages.c)
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
