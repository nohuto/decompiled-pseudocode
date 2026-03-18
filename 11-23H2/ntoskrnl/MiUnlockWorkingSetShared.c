/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14023C500
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
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiProbeAndLockComplete @ 0x140238870 (MiProbeAndLockComplete.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B4A0 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14025C170 (MiWalkPageTablesRecursively.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x140273910 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x140273D60 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x1402776B0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283990 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiUnlockPoolCommitWs @ 0x140286540 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140286E98 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A2F0 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
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
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324E4C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033CF3C (MiDeleteEmptyPageTableCommit.c)
 *     MiReleaseWalkLocks @ 0x14033D29C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiComparePteProtections @ 0x140348EFC (MiComparePteProtections.c)
 *     MiMarkPteDirty @ 0x14034B510 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034BA3C (MiUnlockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14034C258 (MmQueryWorkingSetInformation.c)
 *     MiEncodeProtoFill @ 0x14034EA60 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140351578 (MiDirtySystemCachePte.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x1403620B4 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140362200 (MmQuerySystemWorkingSetInformation.c)
 *     MiUnlockFaultWorkingSet @ 0x140362444 (MiUnlockFaultWorkingSet.c)
 *     MiGetWorkingSetInfoEx @ 0x1403633AC (MiGetWorkingSetInfoEx.c)
 *     MmQueryCommitReleaseState @ 0x140366928 (MmQueryCommitReleaseState.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DBF4 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x14036E06C (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     MiMapWithLargePages @ 0x14038E714 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MiCopyWorkingSetFields @ 0x1403AE7C4 (MiCopyWorkingSetFields.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1544 (MiGetWsAndMakePageTablesNx.c)
 *     MmCheckProcessShadow @ 0x1403D0240 (MmCheckProcessShadow.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4058 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x14046B9C8 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617C30 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x140619648 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x140619E30 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14061AC94 (MiGetFileOnlyRanges.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1406264E0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CF80 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 *     MmAddRangeToCrashDump @ 0x140630140 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406306DC (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140630AC0 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x140630B58 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630C30 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14063137C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1406316F4 (MiVadRangeIsIoSpace.c)
 *     MiObtainRotateProtectionRanges @ 0x1406328C8 (MiObtainRotateProtectionRanges.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632A38 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiHandleForceTrimWorkingSets @ 0x140634AC0 (MiHandleForceTrimWorkingSets.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406356DC (MmUpdateOldWorkingSetPages.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1406422A8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x140646780 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647238 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x14064745C (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648B88 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648F4C (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BED8 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D054 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D1E0 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064D2D4 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x140650330 (MiUnlockWorkingSetOptimal.c)
 *     MiCombineWorkingSet @ 0x140653418 (MiCombineWorkingSet.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F7D4 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667720 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140668DC0 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2D800 (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140B44B90 (MiAddLoaderHalIoMappings.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B57F98 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x14023F100 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14035D570 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B0EC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
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
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v15 >= 2u )
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
