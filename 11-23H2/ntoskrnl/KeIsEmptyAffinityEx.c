/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140255230
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KiChooseTargetProcessor @ 0x1402393B0 (KiChooseTargetProcessor.c)
 *     KiIpiSetTargetAffinity @ 0x1402545B4 (KiIpiSetTargetAffinity.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254700 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalRequestIpiSpecifyVector @ 0x140254750 (HalRequestIpiSpecifyVector.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027E280 (KiGetNextTimerExpirationDueTime.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     KiComputeCpuSetAffinity @ 0x1402C06D4 (KiComputeCpuSetAffinity.c)
 *     KeRemoveQueueDpcEx @ 0x14031F360 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140382D30 (KiConfigureCpuSetSchedulingInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     PoExecuteIdleCheck @ 0x1403CBC90 (PoExecuteIdleCheck.c)
 *     HalpQueryProfileSource @ 0x14050806C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140508224 (HalpQueryProfileSourceList.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E680 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140574CC0 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140584210 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140586658 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059CAF4 (PpmParkComputeUnparkMask.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E9CC (PPmHeteroHgsUpdateOrderValue.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9AC4 (PspSetEffectiveJobLimits.c)
 *     RtlUpdateSwapReference @ 0x14080E3A8 (RtlUpdateSwapReference.c)
 *     PpmParkParkingAvailable @ 0x14082CF1C (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14082F408 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1409734C8 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x140975528 (KeDeleteCpuPartition.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFC18 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E45A8 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
