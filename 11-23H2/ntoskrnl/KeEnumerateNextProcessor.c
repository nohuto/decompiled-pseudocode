/*
 * XREFs of KeEnumerateNextProcessor @ 0x140257370
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
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254700 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140255360 (PpmIdleWaitForDependentTransitions.c)
 *     PpmCheckComputeEnergy @ 0x1402566A0 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllUtility @ 0x1402568E0 (PpmCheckSnapAllUtility.c)
 *     PpmCheckRecordAllUtility @ 0x140256A00 (PpmCheckRecordAllUtility.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkDistributeUtility @ 0x140257130 (PpmParkDistributeUtility.c)
 *     KeFlushQueuedDpcs @ 0x14028FC50 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     PopQueueTargetDpc @ 0x1402BFEE0 (PopQueueTargetDpc.c)
 *     PpmEstimateIdleDuration @ 0x1402C22FC (PpmEstimateIdleDuration.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KeRemoveQueueDpcEx @ 0x14031F360 (KeRemoveQueueDpcEx.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140320280 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     HalGetMessageRoutingInfo @ 0x1403204B0 (HalGetMessageRoutingInfo.c)
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x14033CAA8 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14034B820 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EFB0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x140350F60 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1403539D0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140356DB0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140356E00 (PpmParkReportUnparkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140357580 (PpmCheckMakeupSkippedChecks.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmParkRegisterParking @ 0x140391AA0 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403927E0 (PpmParkApplyPolicy.c)
 *     KeUpdateSoftParkRankList @ 0x140392ECC (KeUpdateSoftParkRankList.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x14039306C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroDetectHgsCores @ 0x14039360C (PpmHeteroDetectHgsCores.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403ADECC (KeEtwInitializeCpuStarvationProvider.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507E88 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140549D70 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055CF2C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574CC0 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D4B4 (KiForceIdleUpdateSchedulerParkState.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405807B0 (WheaFlushETWEventsSelectProcessor.c)
 *     PopDetermineBucketFrequencies @ 0x140583BE0 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140584B5C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmUnlockProcessors @ 0x140586658 (PpmUnlockProcessors.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596960 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x1405971B8 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroDistributeUtility @ 0x140597850 (PpmHeteroDistributeUtility.c)
 *     PpmCapturePerformanceDistribution @ 0x140597F0C (PpmCapturePerformanceDistribution.c)
 *     PpmEventHgsHardwareTable @ 0x14059A7DC (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E9CC (PPmHeteroHgsUpdateOrderValue.c)
 *     PopProcessorInformation @ 0x1407A5B54 (PopProcessorInformation.c)
 *     PopEtIsrDpcQuery @ 0x1407B35A4 (PopEtIsrDpcQuery.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAD4C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x14082F4E4 (PpmPerfResetHistoryAll.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1408400F8 (PpmPerfGetFrequencyBandStats.c)
 *     PpmEventTraceControlCallback @ 0x140864ED0 (PpmEventTraceControlCallback.c)
 *     ExProcessorCounterSetCallback @ 0x14086DDE0 (ExProcessorCounterSetCallback.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409734C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiSynchNumaCounterSetCallback @ 0x1409741A0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986B18 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x140986CCC (PpmPerfResizeHistoryAll.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E07C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A99EA0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AD20 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A9BC14 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
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
