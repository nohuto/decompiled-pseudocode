/*
 * XREFs of ExAcquireSpinLockShared @ 0x1403148B0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     ExReferenceCallBackBlock @ 0x140214EF0 (ExReferenceCallBackBlock.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140221054 (MiAbsorbPossibleEngineChanges.c)
 *     MiObtainParkedCoreMasks @ 0x14022320C (MiObtainParkedCoreMasks.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140226668 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022CA38 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     PopFxLockDevice @ 0x14028D414 (PopFxLockDevice.c)
 *     MiCheckSlabPage @ 0x140292678 (MiCheckSlabPage.c)
 *     MiFindLastSubsection @ 0x1402934E8 (MiFindLastSubsection.c)
 *     MiFindFreePageFileSpace @ 0x140294964 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140294F24 (MiPageFileLargestBitmapsRun.c)
 *     ExProtectPoolEx @ 0x1402970EC (ExProtectPoolEx.c)
 *     MiReferenceInPageFile @ 0x1402A1794 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7EC0 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B6BA4 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C1238 (IopReferenceIoAttributionFromProcess.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiStartingOffsetNeedLock @ 0x1402E2130 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x1402EFC04 (MiTrimSection.c)
 *     MiGetChannelInformation @ 0x1402F9F04 (MiGetChannelInformation.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403100EC (RtlpHpVaMgrCtxAlloc.c)
 *     PsGetNextPartitionUnsafe @ 0x140311180 (PsGetNextPartitionUnsafe.c)
 *     RtlpCSparseBitmapLock @ 0x140313840 (RtlpCSparseBitmapLock.c)
 *     ExpStampBigPoolEntry @ 0x140313898 (ExpStampBigPoolEntry.c)
 *     PopPepLockActivityLink @ 0x140313DF8 (PopPepLockActivityLink.c)
 *     PfSnGetFileInformation @ 0x140314550 (PfSnGetFileInformation.c)
 *     RtlpHpAcquireLockShared @ 0x140315DB8 (RtlpHpAcquireLockShared.c)
 *     IopFindDiskIoAttribution @ 0x1403170D8 (IopFindDiskIoAttribution.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033E010 (MiSystemImageHasPrivateFixups.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A7590 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403B54C0 (HalpQueryNumaRangeTableInformation.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     ExRemovePoolTag @ 0x1403C39EC (ExRemovePoolTag.c)
 *     MiObtainPagefileHashes @ 0x14046F654 (MiObtainPagefileHashes.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1405320D0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14055F664 (IopMcFindNextTableEntryForUnlock.c)
 *     PopPepGetComponentVetoMasks @ 0x14059F294 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14059F38C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepGetDeviceVetoMasks @ 0x14059F4A8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14059F580 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14059FE84 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405A00FC (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1405A4670 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A4AE0 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B9A9C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405D2AE8 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14060B1A8 (ExpCheckForResource.c)
 *     MmUnmapReservedMapping @ 0x14061EE60 (MmUnmapReservedMapping.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140622A20 (MiReleasePartitionHugeIoSpace.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14062A358 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x14062A548 (MiGetListOfPendingBadPages.c)
 *     MiKernelStackVaToStackNode @ 0x14062D78C (MiKernelStackVaToStackNode.c)
 *     MmIsFileObjectAPagingFile @ 0x14063C268 (MmIsFileObjectAPagingFile.c)
 *     MiInitializeCachedExtentWalker @ 0x14063E138 (MiInitializeCachedExtentWalker.c)
 *     MiGenerateAccessViolation @ 0x1406464DC (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiTransientPageListWriter @ 0x140650458 (MiTransientPageListWriter.c)
 *     MiTransientCombineAddress @ 0x140653C54 (MiTransientCombineAddress.c)
 *     MiGetPartitionNodeInformation @ 0x14065A5F8 (MiGetPartitionNodeInformation.c)
 *     MiFindPageFileMemoryExtent @ 0x140660610 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140669C34 (MiGetPrototypePteBoundaries.c)
 *     MiGetPrototypePteRanges @ 0x140669D90 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x14066A040 (MiReferencePfBackedSection.c)
 *     ExQuerySystemLockInformation @ 0x140AAABD8 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
