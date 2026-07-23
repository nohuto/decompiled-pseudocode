/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14023C4E0
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2FC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPageTables @ 0x140212D2C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223444 (MiInitializeWorkingSetList.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiProbeAndLockComplete @ 0x140238850 (MiProbeAndLockComplete.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B380 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283870 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiUnlockPoolCommitWs @ 0x140286420 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1402F22BC (MiLockProtoPage.c)
 *     MiAllowProtectionChange @ 0x140303FE8 (MiAllowProtectionChange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033CD3C (MiDeleteEmptyPageTableCommit.c)
 *     MiReleaseWalkLocks @ 0x14033D09C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiComparePteProtections @ 0x140348A0C (MiComparePteProtections.c)
 *     MiMarkPteDirty @ 0x14034AF10 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034B43C (MiUnlockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14034BC58 (MmQueryWorkingSetInformation.c)
 *     MiEncodeProtoFill @ 0x14034E460 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140350F78 (MiDirtySystemCachePte.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x140361A64 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140361BB0 (MmQuerySystemWorkingSetInformation.c)
 *     MiUnlockFaultWorkingSet @ 0x140361DF4 (MiUnlockFaultWorkingSet.c)
 *     MiGetWorkingSetInfoEx @ 0x140362D5C (MiGetWorkingSetInfoEx.c)
 *     MmQueryCommitReleaseState @ 0x1403662D8 (MmQueryCommitReleaseState.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036D5A4 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x14036DA1C (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MiMapWithLargePages @ 0x14038CB94 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MiCopyWorkingSetFields @ 0x1403AE134 (MiCopyWorkingSetFields.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B0EB4 (MiGetWsAndMakePageTablesNx.c)
 *     MmCheckProcessShadow @ 0x1403CFBE0 (MmCheckProcessShadow.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D39F8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x14046B368 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1406196B8 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14061AD04 (MiGetFileOnlyRanges.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140626550 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CFF0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MmAddRangeToCrashDump @ 0x1406301B0 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14063074C (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140630B30 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140630BC8 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406313EC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiObtainRotateProtectionRanges @ 0x140632938 (MiObtainRotateProtectionRanges.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiHandleForceTrimWorkingSets @ 0x140634B30 (MiHandleForceTrimWorkingSets.c)
 *     MmUpdateOldWorkingSetPages @ 0x14063574C (MmUpdateOldWorkingSetPages.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x140642318 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1406474CC (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648BF8 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648FBC (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BF48 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D0C4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D250 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064D344 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x1406503A0 (MiUnlockWorkingSetOptimal.c)
 *     MiCombineWorkingSet @ 0x140653488 (MiCombineWorkingSet.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667790 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2D870 (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140B48290 (MiAddLoaderHalIoMappings.c)
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B5AF48 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x14023F0E0 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14035CF20 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B15C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v9 = (volatile signed __int32 *)&unk_140C6A280;
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
