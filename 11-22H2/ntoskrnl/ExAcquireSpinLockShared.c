/*
 * XREFs of ExAcquireSpinLockShared @ 0x140314440
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F80 (InsertEventEntryInLookUpTable.c)
 *     ExReferenceCallBackBlock @ 0x140214F10 (ExReferenceCallBackBlock.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140221074 (MiAbsorbPossibleEngineChanges.c)
 *     MiObtainParkedCoreMasks @ 0x14022322C (MiObtainParkedCoreMasks.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140226578 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C948 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiLocateSubsectionNode @ 0x1402891A0 (MiLocateSubsectionNode.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     PopFxLockDevice @ 0x14028D064 (PopFxLockDevice.c)
 *     MiCheckSlabPage @ 0x1402922C8 (MiCheckSlabPage.c)
 *     MiFindLastSubsection @ 0x140293138 (MiFindLastSubsection.c)
 *     MiFindFreePageFileSpace @ 0x1402945B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140294B74 (MiPageFileLargestBitmapsRun.c)
 *     ExProtectPoolEx @ 0x140296D3C (ExProtectPoolEx.c)
 *     MiReferenceInPageFile @ 0x1402A13E4 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A22D0 (MiReferenceControlAreaFileWithTag.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B68E4 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C0F78 (IopReferenceIoAttributionFromProcess.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiStartingOffsetNeedLock @ 0x1402E1EA0 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x1402EF974 (MiTrimSection.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14030FC7C (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetNextPartitionUnsafe @ 0x140310D10 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapLock @ 0x1403133D0 (RtlpCSparseBitmapLock.c)
 *     ExpStampBigPoolEntry @ 0x140313428 (ExpStampBigPoolEntry.c)
 *     PopPepLockActivityLink @ 0x140313988 (PopPepLockActivityLink.c)
 *     PfSnGetFileInformation @ 0x1403140E0 (PfSnGetFileInformation.c)
 *     RtlpHpAcquireLockShared @ 0x140315948 (RtlpHpAcquireLockShared.c)
 *     IopFindDiskIoAttribution @ 0x140316C68 (IopFindDiskIoAttribution.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033DB80 (MiSystemImageHasPrivateFixups.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A6C20 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403B4C50 (HalpQueryNumaRangeTableInformation.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     ExRemovePoolTag @ 0x1403C31AC (ExRemovePoolTag.c)
 *     MiObtainPagefileHashes @ 0x14046EBF4 (MiObtainPagefileHashes.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140531C30 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14055F044 (IopMcFindNextTableEntryForUnlock.c)
 *     PopPepGetComponentVetoMasks @ 0x14059EE34 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14059EF2C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x14059F048 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14059F120 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14059FA24 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14059FC9C (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1405A4190 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A4600 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B95BC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D2608 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14060ACC8 (ExpCheckForResource.c)
 *     MmUnmapReservedMapping @ 0x14061E980 (MmUnmapReservedMapping.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140622540 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140629E78 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x14062A068 (MiGetListOfPendingBadPages.c)
 *     MiKernelStackVaToStackNode @ 0x14062D2AC (MiKernelStackVaToStackNode.c)
 *     MmIsFileObjectAPagingFile @ 0x14063BD88 (MmIsFileObjectAPagingFile.c)
 *     MiInitializeCachedExtentWalker @ 0x14063DC58 (MiInitializeCachedExtentWalker.c)
 *     MiGenerateAccessViolation @ 0x140645FFC (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiTransientPageListWriter @ 0x14064FF78 (MiTransientPageListWriter.c)
 *     MiTransientCombineAddress @ 0x140653774 (MiTransientCombineAddress.c)
 *     MiGetPartitionNodeInformation @ 0x14065A118 (MiGetPartitionNodeInformation.c)
 *     MiFindPageFileMemoryExtent @ 0x140660130 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140669754 (MiGetPrototypePteBoundaries.c)
 *     MiGetPrototypePteRanges @ 0x1406698B0 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x140669B60 (MiReferencePfBackedSection.c)
 *     ExQuerySystemLockInformation @ 0x140AAAE28 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v4; // rdx
  signed __int32 v5; // [rsp+38h] [rbp+10h]
  signed __int32 v6; // [rsp+38h] [rbp+10h]
  signed __int32 v7; // [rsp+40h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v4) = 4;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    v7 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
    if ( v7 != v5 )
    {
      while ( v7 >= 0 )
      {
        v6 = v7;
        v7 = _InterlockedCompareExchange(SpinLock, v7 + 1, v7);
        if ( v7 == v6 )
          return CurrentIrql;
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
