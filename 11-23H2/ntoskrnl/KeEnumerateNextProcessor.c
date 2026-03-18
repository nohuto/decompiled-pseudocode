/*
 * XREFs of KeEnumerateNextProcessor @ 0x1402572B0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KiSendFreeze @ 0x14020D150 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254640 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402552A0 (PpmIdleWaitForDependentTransitions.c)
 *     PpmCheckComputeEnergy @ 0x1402565E0 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllUtility @ 0x140256820 (PpmCheckSnapAllUtility.c)
 *     PpmCheckRecordAllUtility @ 0x140256940 (PpmCheckRecordAllUtility.c)
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256E80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkDistributeUtility @ 0x140257070 (PpmParkDistributeUtility.c)
 *     KeFlushQueuedDpcs @ 0x14028F9C0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     PopQueueTargetDpc @ 0x1402BFC50 (PopQueueTargetDpc.c)
 *     PpmEstimateIdleDuration @ 0x1402C206C (PpmEstimateIdleDuration.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     KeRemoveQueueDpcEx @ 0x14031F0D0 (KeRemoveQueueDpcEx.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14031FFF0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     HalGetMessageRoutingInfo @ 0x140320220 (HalGetMessageRoutingInfo.c)
 *     PopCheckForIdleness @ 0x14032C620 (PopCheckForIdleness.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x14033C818 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14034B680 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EE10 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x140350DC0 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140353830 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140356C10 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140356C60 (PpmParkReportUnparkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1403573E0 (PpmCheckMakeupSkippedChecks.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmParkRegisterParking @ 0x1403918C0 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140392600 (PpmParkApplyPolicy.c)
 *     KeUpdateSoftParkRankList @ 0x140392CEC (KeUpdateSoftParkRankList.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x140392E8C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393334 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroDetectHgsCores @ 0x14039342C (PpmHeteroDetectHgsCores.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403ADCEC (KeEtwInitializeCpuStarvationProvider.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507938 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405496B0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055C86C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574780 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A7BC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057CFC4 (KiForceIdleUpdateSchedulerParkState.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405802C0 (WheaFlushETWEventsSelectProcessor.c)
 *     PopDetermineBucketFrequencies @ 0x1405836F0 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x14058466C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596470 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140596CC8 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroDistributeUtility @ 0x140597360 (PpmHeteroDistributeUtility.c)
 *     PpmCapturePerformanceDistribution @ 0x140597A1C (PpmCapturePerformanceDistribution.c)
 *     PpmEventHgsHardwareTable @ 0x14059A2EC (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E4DC (PPmHeteroHgsUpdateOrderValue.c)
 *     PopProcessorInformation @ 0x1407A5964 (PopProcessorInformation.c)
 *     PopEtIsrDpcQuery @ 0x1407B33B4 (PopEtIsrDpcQuery.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAA7C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x14082F1E4 (PpmPerfResetHistoryAll.c)
 *     PpmPerfGetFrequencyBandStats @ 0x14083FDF8 (PpmPerfGetFrequencyBandStats.c)
 *     PpmEventTraceControlCallback @ 0x140864C90 (PpmEventTraceControlCallback.c)
 *     ExProcessorCounterSetCallback @ 0x14086DBA0 (ExProcessorCounterSetCallback.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409732C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiSynchNumaCounterSetCallback @ 0x140973FA0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986918 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x140986ACC (PpmPerfResizeHistoryAll.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E204 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A9A030 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A9BDA4 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140A9D904 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B4EC40 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B969F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int16 v7; // ax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_WORD *)a2 + 8) + 1;
      *((_WORD *)a2 + 8) = v7;
      if ( v7 >= v3 )
        return 3221226021LL;
      v4 = *(_QWORD *)&(*a2)[4 * v7 + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
  }
}
