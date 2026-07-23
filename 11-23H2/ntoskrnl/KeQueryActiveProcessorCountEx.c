/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140222050
 * Callers:
 *     KeInitializeQueue @ 0x140220E10 (KeInitializeQueue.c)
 *     KiIntSteerCalculatePriorityDistribution @ 0x140221950 (KiIntSteerCalculatePriorityDistribution.c)
 *     KeIntSteerSnapPerf @ 0x140221D60 (KeIntSteerSnapPerf.c)
 *     KiOutSwapKernelStacks @ 0x140222854 (KiOutSwapKernelStacks.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3650 (KiUpdateProcessConcurrencyCounts.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     KdpSetCommonState @ 0x14033F3EC (KdpSetCommonState.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345450 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiInitiateGenericCallDpc @ 0x140347144 (KiInitiateGenericCallDpc.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1403767E0 (KiAssignProcessorNumberToPrcb.c)
 *     KeBalanceSetManager @ 0x1403946E0 (KeBalanceSetManager.c)
 *     HalpTscSynchronization @ 0x14039ACF0 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14039AD94 (KeOptimizeSpecCtrlSettings.c)
 *     KeIpiGenericCall @ 0x14039AE10 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AF44 (HalpTscInitializeSynchronizationContext.c)
 *     CcInitializePartition @ 0x1403A0570 (CcInitializePartition.c)
 *     KeInitializePriQueue @ 0x1403A5720 (KeInitializePriQueue.c)
 *     KeQueryActiveProcessorCount @ 0x1403B6AD0 (KeQueryActiveProcessorCount.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0C88 (CcInitializePrivateVolumeCacheMap.c)
 *     HalpMceHandlerWithRendezvous @ 0x140504210 (HalpMceHandlerWithRendezvous.c)
 *     HalpTscCheckDisposition @ 0x14050AA54 (HalpTscCheckDisposition.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050AC84 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050CFCC (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050D040 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E680 (EmonReleaseProfileResourcesInternal.c)
 *     EmonRemoveProfileSource @ 0x14051E940 (EmonRemoveProfileSource.c)
 *     Amd64InitializeUncoreProfiling @ 0x140529E20 (Amd64InitializeUncoreProfiling.c)
 *     Amd64RemoveProfileSource @ 0x14052A3E0 (Amd64RemoveProfileSource.c)
 *     DbgkpLkmdSnapGlobals @ 0x14053C1AC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140547700 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x140549D00 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140550288 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140554980 (KeCapturePersistentThreadState.c)
 *     KeAdjustInterruptTime @ 0x14056C834 (KeAdjustInterruptTime.c)
 *     KeCheckForTimer @ 0x14057102C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140572900 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140577090 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140586110 (PpmSetPlatformIdleDurationHint.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BEA34 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D86C (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     HalpCmcWorkerRoutine @ 0x14081E9C0 (HalpCmcWorkerRoutine.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140864C30 (PopCheckSkipTick.c)
 *     ExProcessorCounterSetCallback @ 0x14086DDE0 (ExProcessorCounterSetCallback.c)
 *     HalAllocateHardwareCounters @ 0x1409333E0 (HalAllocateHardwareCounters.c)
 *     HalpLoadMicrocode @ 0x140934D30 (HalpLoadMicrocode.c)
 *     HalpLoadMicrocodeSerialized @ 0x140934ED8 (HalpLoadMicrocodeSerialized.c)
 *     HalpLbrConfigurationWorker @ 0x140935FD4 (HalpLbrConfigurationWorker.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14093ED4C (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14094419C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140974080 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140A048B0 (NtStartProfile.c)
 *     HalpCmciInit @ 0x140A8A70C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A8A918 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A8ADA0 (HalpInitializeMce.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8F74C (KeRestoreMtrrBroadcast.c)
 *     HalpCorrectMachineCheckErrSrc @ 0x140A91C84 (HalpCorrectMachineCheckErrSrc.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A94E60 (HalpHandlePreviousMcaErrors.c)
 *     HalpBuildResumeStructures @ 0x140A95D68 (HalpBuildResumeStructures.c)
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
