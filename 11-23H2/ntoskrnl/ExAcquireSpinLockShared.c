/*
 * XREFs of ExAcquireSpinLockShared @ 0x140314620
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     ExReferenceCallBackBlock @ 0x140214EF0 (ExReferenceCallBackBlock.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140221054 (MiAbsorbPossibleEngineChanges.c)
 *     MiObtainParkedCoreMasks @ 0x14022320C (MiObtainParkedCoreMasks.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140226558 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C928 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiLocateSubsectionNode @ 0x1402892C0 (MiLocateSubsectionNode.c)
 *     MiLockVadTree @ 0x14028A8C0 (MiLockVadTree.c)
 *     PopFxLockDevice @ 0x14028D184 (PopFxLockDevice.c)
 *     MiCheckSlabPage @ 0x1402923E8 (MiCheckSlabPage.c)
 *     MiFindLastSubsection @ 0x140293258 (MiFindLastSubsection.c)
 *     MiFindFreePageFileSpace @ 0x1402946D4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140294C94 (MiPageFileLargestBitmapsRun.c)
 *     ExProtectPoolEx @ 0x140296E5C (ExProtectPoolEx.c)
 *     MiReferenceInPageFile @ 0x1402A1504 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A23F0 (MiReferenceControlAreaFileWithTag.c)
 *     IoPageReadEx @ 0x1402A6810 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7C30 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B6914 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C0FA8 (IopReferenceIoAttributionFromProcess.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiStartingOffsetNeedLock @ 0x1402E1EA0 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x1402EF974 (MiTrimSection.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14030FE5C (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetNextPartitionUnsafe @ 0x140310EF0 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapLock @ 0x1403135B0 (RtlpCSparseBitmapLock.c)
 *     ExpStampBigPoolEntry @ 0x140313608 (ExpStampBigPoolEntry.c)
 *     PopPepLockActivityLink @ 0x140313B68 (PopPepLockActivityLink.c)
 *     PfSnGetFileInformation @ 0x1403142C0 (PfSnGetFileInformation.c)
 *     RtlpHpAcquireLockShared @ 0x140315B28 (RtlpHpAcquireLockShared.c)
 *     IopFindDiskIoAttribution @ 0x140316E48 (IopFindDiskIoAttribution.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033DD80 (MiSystemImageHasPrivateFixups.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A73B0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403B52E0 (HalpQueryNumaRangeTableInformation.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     ExRemovePoolTag @ 0x1403C380C (ExRemovePoolTag.c)
 *     MiObtainPagefileHashes @ 0x14046F254 (MiObtainPagefileHashes.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140531B80 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14055EFA4 (IopMcFindNextTableEntryForUnlock.c)
 *     PopPepGetComponentVetoMasks @ 0x14059EDA4 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14059EE9C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x14059EFB8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14059F090 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14059F994 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14059FC0C (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1405A4100 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A4570 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B952C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D2578 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14060AC58 (ExpCheckForResource.c)
 *     MmUnmapReservedMapping @ 0x14061E910 (MmUnmapReservedMapping.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406224D0 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140629E08 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140629FF8 (MiGetListOfPendingBadPages.c)
 *     MiKernelStackVaToStackNode @ 0x14062D23C (MiKernelStackVaToStackNode.c)
 *     MmIsFileObjectAPagingFile @ 0x14063BD18 (MmIsFileObjectAPagingFile.c)
 *     MiInitializeCachedExtentWalker @ 0x14063DBE8 (MiInitializeCachedExtentWalker.c)
 *     MiGenerateAccessViolation @ 0x140645F8C (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiTransientPageListWriter @ 0x14064FF08 (MiTransientPageListWriter.c)
 *     MiTransientCombineAddress @ 0x140653704 (MiTransientCombineAddress.c)
 *     MiGetPartitionNodeInformation @ 0x14065A0A8 (MiGetPartitionNodeInformation.c)
 *     MiFindPageFileMemoryExtent @ 0x1406600C0 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x1406696E4 (MiGetPrototypePteBoundaries.c)
 *     MiGetPrototypePteRanges @ 0x140669840 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x140669AF0 (MiReferencePfBackedSection.c)
 *     ExQuerySystemLockInformation @ 0x140AAAD68 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316D70 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B4F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
