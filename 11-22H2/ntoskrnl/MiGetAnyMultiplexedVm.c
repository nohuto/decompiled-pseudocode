/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1402146D4
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MmFreePoolMemory @ 0x140212244 (MmFreePoolMemory.c)
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x140213B74 (MiReturnSystemVa.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiCapturePfnVm @ 0x140215CFC (MiCapturePfnVm.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385D0 (MiComputeMaximumFaultCluster.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x140261890 (MiSynchronizeSystemVa.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiPfCompleteInPageSupport @ 0x1402A39CC (MiPfCompleteInPageSupport.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E56B0 (MiGetNextPageTable.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMarkPteDirty @ 0x14034AF10 (MiMarkPteDirty.c)
 *     MiEncodeProtoFill @ 0x14034E460 (MiEncodeProtoFill.c)
 *     MiRecheckCombineVm @ 0x140359F64 (MiRecheckCombineVm.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140361BB0 (MmQuerySystemWorkingSetInformation.c)
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MiMapContiguousMemoryLarge @ 0x14038C884 (MiMapContiguousMemoryLarge.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038D050 (MiFreeUnusedPfnPagesDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x14038D410 (MiGetNextNonGapPfnPage.c)
 *     MiDeleteBootRange @ 0x14038E378 (MiDeleteBootRange.c)
 *     MiLockStealSystemVm @ 0x14039875C (MiLockStealSystemVm.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiGetFileOnlyRanges @ 0x14061AD04 (MiGetFileOnlyRanges.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MmAddRangeToCrashDump @ 0x1406301B0 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14063074C (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140630B30 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140630BC8 (MiFaultInPagedPool.c)
 *     MiLockPatchIatForDV @ 0x140640510 (MiLockPatchIatForDV.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 *     MiOutSwapKernelStackPage @ 0x140652BC8 (MiOutSwapKernelStackPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MiGetCcAccessLog @ 0x1407494A0 (MiGetCcAccessLog.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 *     HvTrimHive @ 0x14085FA7C (HvTrimHive.c)
 *     MiCompleteSecureDriverLoad @ 0x140885D58 (MiCompleteSecureDriverLoad.c)
 *     MmMapLockedRestartPages @ 0x140A2B450 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140A2B510 (MmUnmapLockedRestartPages.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A30A10 (MmReturnChargesToLockPagedPool.c)
 *     MiLockAndMapEntireDriver @ 0x140A34338 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140A348E8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A3FF28 (MmLogSystemShareablePfnInfo.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     MiConvertHiberPhasePages @ 0x140AAC12C (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140AAC368 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AAC4B8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AAC554 (MiMarkNonPagedHiberPhasePages.c)
 *     MiBuildPagedPool @ 0x140B46E94 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B4790C (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x140B48290 (MiAddLoaderHalIoMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140B48DF8 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B5AF48 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 *     MiInitializeNonPagedPool @ 0x140B6156C (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicVa @ 0x140B700A8 (MiInitializeDynamicVa.c)
 *     MmReapplyBootPatchImports @ 0x140B750B4 (MmReapplyBootPatchImports.c)
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
    v2 = (char *)&unk_140C6F8C0;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C69B00;
  }
  return &v2[64 * v1];
}
