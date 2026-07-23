/*
 * XREFs of MiLockWorkingSetShared @ 0x140283F20
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2DC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPageTables @ 0x140212D0C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223424 (MiInitializeWorkingSetList.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277940 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiLockWorkingSetOptimal @ 0x140285BFC (MiLockWorkingSetOptimal.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MiRelockFaultState @ 0x140287128 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1402F254C (MiLockProtoPage.c)
 *     MiAllowProtectionChange @ 0x140304278 (MiAllowProtectionChange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033D1CC (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiComparePteProtections @ 0x14034918C (MiComparePteProtections.c)
 *     MiLockProbePacketWorkingSet @ 0x14034BB94 (MiLockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14034C3F8 (MmQueryWorkingSetInformation.c)
 *     MiEncodeProtoFill @ 0x14034EC00 (MiEncodeProtoFill.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403623A0 (MmQuerySystemWorkingSetInformation.c)
 *     MiGetWorkingSetInfoEx @ 0x14036354C (MiGetWorkingSetInfoEx.c)
 *     MmQueryCommitReleaseState @ 0x140366AC8 (MmQueryCommitReleaseState.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DD94 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x14036E20C (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MiCopyWorkingSetFields @ 0x1403AE9A4 (MiCopyWorkingSetFields.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MmCheckProcessShadow @ 0x1403D0420 (MmCheckProcessShadow.c)
 *     MiReacquireWalkLocks @ 0x14046BDC8 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x140619B98 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14061B1E4 (MiGetFileOnlyRanges.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140626A30 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140630C2C (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140631010 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140631180 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631C44 (MiVadRangeIsIoSpace.c)
 *     MiObtainRotateProtectionRanges @ 0x140632E18 (MiObtainRotateProtectionRanges.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiHandleForceTrimWorkingSets @ 0x140635010 (MiHandleForceTrimWorkingSets.c)
 *     MmUpdateOldWorkingSetPages @ 0x140635C2C (MmUpdateOldWorkingSetPages.c)
 *     MiMapRetpolineStubs @ 0x140640C2C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1406427F8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1406479AC (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406490D8 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064C428 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D5A4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D730 (MiUnlockPageTableRange.c)
 *     MiCombineWorkingSet @ 0x140653968 (MiCombineWorkingSet.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667C70 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2DAB0 (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140B44B90 (MiAddLoaderHalIoMappings.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B57F98 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  volatile __int32 *v2; // rbx
  unsigned __int8 v3; // di
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r8
  signed __int32 v10; // [rsp+30h] [rbp+8h]
  signed __int32 v11; // [rsp+30h] [rbp+8h]
  signed __int32 v12; // [rsp+38h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 > 4u )
  {
    if ( v1 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v7) = 4;
        else
          v7 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v7;
      }
      return CurrentIrql;
    }
    goto LABEL_3;
  }
  if ( v1 != 2 )
  {
LABEL_3:
    v2 = (volatile __int32 *)(a1 + 192);
    goto LABEL_4;
  }
  v2 = (volatile __int32 *)&unk_140C6A180;
LABEL_4:
  v3 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v3 == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (v3 + 1)) & 4;
    v8[5] |= v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v3);
  }
  else
  {
    _m_prefetchw((const void *)v2);
    v10 = *v2 & 0x7FFFFFFF;
    v12 = _InterlockedCompareExchange(v2, v10 + 1, v10);
    if ( v12 != v10 )
    {
      while ( v12 >= 0 )
      {
        v11 = v12;
        v12 = _InterlockedCompareExchange(v2, v12 + 1, v12);
        if ( v12 == v11 )
          goto LABEL_7;
      }
      ExpWaitForSpinLockSharedAndAcquire(v2, v3);
    }
  }
LABEL_7:
  if ( *((_DWORD *)v2 + 1) )
    _InterlockedExchange(v2 + 1, 0);
  return v3;
}
