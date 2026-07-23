/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14023C5D0
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2DC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPageTables @ 0x140212D0C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223424 (MiInitializeWorkingSetList.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiProbeAndLockComplete @ 0x140238940 (MiProbeAndLockComplete.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277940 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiUnlockPoolCommitWs @ 0x1402867D0 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140287128 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1402F254C (MiLockProtoPage.c)
 *     MiAllowProtectionChange @ 0x140304278 (MiAllowProtectionChange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033D1CC (MiDeleteEmptyPageTableCommit.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiComparePteProtections @ 0x14034918C (MiComparePteProtections.c)
 *     MiMarkPteDirty @ 0x14034B6B0 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034BBDC (MiUnlockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14034C3F8 (MmQueryWorkingSetInformation.c)
 *     MiEncodeProtoFill @ 0x14034EC00 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140351718 (MiDirtySystemCachePte.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403623A0 (MmQuerySystemWorkingSetInformation.c)
 *     MiUnlockFaultWorkingSet @ 0x1403625E4 (MiUnlockFaultWorkingSet.c)
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
 *     MmCheckProcessShadow @ 0x1403D0420 (MmCheckProcessShadow.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4238 (MiReturnSystemCacheRegionsToKva.c)
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
 *     MiMakeProtoPrivate @ 0x14064D824 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x140650880 (MiUnlockWorkingSetOptimal.c)
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
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14035D710 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B63C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  char v2; // r8
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int8 v8; // r8
  volatile signed __int32 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v14; // zf
  unsigned __int8 v15; // cl
  _DWORD *v16; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 184);
  v2 = v5;
  v6 = HIBYTE(v5);
  v7 = HIBYTE(v5);
  v8 = v2 & 7;
  if ( v8 >= 6u )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
LABEL_28:
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    if ( v8 <= 4u )
      LOBYTE(v6) = v7;
    if ( (*(_DWORD *)(a1 + 188) & 3) != 0 || (v6 & 0x10) != 0 )
      MiPreUnlockWorkingSetShared(a1, a2);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v9 = (volatile signed __int32 *)&unk_140C6A180;
    else
      v9 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
    }
    else
    {
      _InterlockedAnd(v9, 0xBFFFFFFF);
      _InterlockedDecrement(v9);
    }
    result = (unsigned int)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v14 = ((unsigned int)result & v16[5]) == 0;
        v16[5] &= result;
        if ( v14 )
          goto LABEL_28;
      }
    }
  }
  __writecr8(v4);
  return result;
}
