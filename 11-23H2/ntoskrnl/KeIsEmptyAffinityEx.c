/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140255170
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KiChooseTargetProcessor @ 0x1402392E0 (KiChooseTargetProcessor.c)
 *     KiIpiSetTargetAffinity @ 0x1402544F4 (KiIpiSetTargetAffinity.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254640 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalRequestIpiSpecifyVector @ 0x140254690 (HalRequestIpiSpecifyVector.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027DFF0 (KiGetNextTimerExpirationDueTime.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0444 (KiComputeCpuSetAffinity.c)
 *     KeRemoveQueueDpcEx @ 0x14031F0D0 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x14034CFF8 (MmOutSwapProcess.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140382B90 (KiConfigureCpuSetSchedulingInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403CB6E0 (KiForwardTick.c)
 *     PoExecuteIdleCheck @ 0x1403CBAB0 (PoExecuteIdleCheck.c)
 *     HalpQueryProfileSource @ 0x140507B1C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140507CD4 (HalpQueryProfileSourceList.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E130 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140574780 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140583D20 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059C604 (PpmParkComputeUnparkMask.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E4DC (PPmHeteroHgsUpdateOrderValue.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PspSetEffectiveJobLimits @ 0x1407D97F4 (PspSetEffectiveJobLimits.c)
 *     RtlUpdateSwapReference @ 0x14080E0D8 (RtlUpdateSwapReference.c)
 *     PpmParkParkingAvailable @ 0x14082CC1C (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14082F108 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409732C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x140975328 (KeDeleteCpuPartition.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFA18 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E4318 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B969F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
