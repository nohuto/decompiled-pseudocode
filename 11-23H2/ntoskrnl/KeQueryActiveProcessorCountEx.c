/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140222050
 * Callers:
 *     KeInitializeQueue @ 0x140220E10 (KeInitializeQueue.c)
 *     KiIntSteerCalculatePriorityDistribution @ 0x140221950 (KiIntSteerCalculatePriorityDistribution.c)
 *     KeIntSteerSnapPerf @ 0x140221D60 (KeIntSteerSnapPerf.c)
 *     KiOutSwapKernelStacks @ 0x140222854 (KiOutSwapKernelStacks.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C33C0 (KiUpdateProcessConcurrencyCounts.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     PopCheckForIdleness @ 0x14032C620 (PopCheckForIdleness.c)
 *     KdpSetCommonState @ 0x14033F15C (KdpSetCommonState.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1403451C0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiInitiateGenericCallDpc @ 0x140346EB4 (KiInitiateGenericCallDpc.c)
 *     KiAssignProcessorNumberToPrcb @ 0x140376640 (KiAssignProcessorNumberToPrcb.c)
 *     KeBalanceSetManager @ 0x140394500 (KeBalanceSetManager.c)
 *     HalpTscSynchronization @ 0x14039AB10 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14039ABB4 (KeOptimizeSpecCtrlSettings.c)
 *     KeIpiGenericCall @ 0x14039AC30 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AD64 (HalpTscInitializeSynchronizationContext.c)
 *     CcInitializePartition @ 0x1403A0390 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403A5540 (KeInitializePriQueue.c)
 *     KeQueryActiveProcessorCount @ 0x1403B68F0 (KeQueryActiveProcessorCount.c)
 *     PpmIdleSelectStates @ 0x1403B7470 (PpmIdleSelectStates.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0AA8 (CcInitializePrivateVolumeCacheMap.c)
 *     HalpMceHandlerWithRendezvous @ 0x140503CC0 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscCheckDisposition @ 0x14050A504 (HalpTscCheckDisposition.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050A734 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050CA7C (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050CAF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E130 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x14051E3F0 (EmonRemoveProfileSource.c)
 *     Amd64InitializeUncoreProfiling @ 0x1405298D0 (Amd64InitializeUncoreProfiling.c)
 *     Amd64RemoveProfileSource @ 0x140529E90 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x14053BC5C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140547040 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x140549640 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x14054FBC8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405542C0 (KeCapturePersistentThreadState.c)
 *     KeAdjustInterruptTime @ 0x14056C174 (KeAdjustInterruptTime.c)
 *     KeCheckForTimer @ 0x140570AEC (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1405723C0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140576BA0 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140585C20 (PpmSetPlatformIdleDurationHint.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BE4C4 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D31C (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406408E8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     HalpCmcWorkerRoutine @ 0x14081E6F0 (HalpCmcWorkerRoutine.c)
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1408649F0 (PopCheckSkipTick.c)
 *     ExProcessorCounterSetCallback @ 0x14086DBA0 (ExProcessorCounterSetCallback.c)
 *     HalAllocateHardwareCounters @ 0x1409331E0 (HalAllocateHardwareCounters.c)
 *     HalpLoadMicrocode @ 0x140934B30 (HalpLoadMicrocode.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934CD8 (HalpLoadMicrocodeSerialized.c)
 *     HalpLbrConfigurationWorker @ 0x140935DD4 (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093EB4C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140943F9C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140973E80 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140A04620 (NtStartProfile.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8A918 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8ADA0 (HalpInitializeMce.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8F8CC (KeRestoreMtrrBroadcast.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A91E04 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A94FF0 (HalpHandlePreviousMcaErrors.c)
 *     HalpBuildResumeStructures @ 0x140A95EF8 (HalpBuildResumeStructures.c)
 *     KdpSysReadControlSpace @ 0x140AB1C50 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140AB1EE4 (KdpSysWriteControlSpace.c)
 *     KdpGetStateChange @ 0x140AB2478 (KdpGetStateChange.c)
 *     KdpAllowDisable @ 0x140AB56EC (KdpAllowDisable.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     KiIntPartInit @ 0x140B4E6D0 (KiIntPartInit.c)
 *     IntpAllocateProcessorContext @ 0x140B4E8E4 (IntpAllocateProcessorContext.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B748B0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140D1EFF8[GroupNumber] - (((unsigned __int64)qword_140D1EFF8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
