/*
 * XREFs of MiLockWorkingSetShared @ 0x140283B70
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2FC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPageTables @ 0x140212D2C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223444 (MiInitializeWorkingSetList.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B380 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283870 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x140285270 (MiFillPoolCommitPageTable.c)
 *     MiLockWorkingSetOptimal @ 0x14028584C (MiLockWorkingSetOptimal.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x140285D10 (MiCommitPoolMemory.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1402F22BC (MiLockProtoPage.c)
 *     MiAllowProtectionChange @ 0x140303FE8 (MiAllowProtectionChange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033CD3C (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiComparePteProtections @ 0x140348A0C (MiComparePteProtections.c)
 *     MiLockProbePacketWorkingSet @ 0x14034B3F4 (MiLockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x14034BC58 (MmQueryWorkingSetInformation.c)
 *     MiEncodeProtoFill @ 0x14034E460 (MiEncodeProtoFill.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x140361A64 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140361BB0 (MmQuerySystemWorkingSetInformation.c)
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
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MmCheckProcessShadow @ 0x1403CFBE0 (MmCheckProcessShadow.c)
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
  v2 = (volatile __int32 *)&unk_140C6A280;
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
