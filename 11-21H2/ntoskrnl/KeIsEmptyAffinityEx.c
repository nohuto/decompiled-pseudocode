/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140292F90
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiComputeCpuSetAffinity @ 0x140292BA4 (KiComputeCpuSetAffinity.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1403000B0 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     HalpQueryProfileSource @ 0x140376F58 (HalpQueryProfileSource.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403C1214 (KiConfigureCpuSetSchedulingInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x14050B88C (HalpQueryProfileSourceList.c)
 *     HvlParkedVirtualProcessors @ 0x140549B84 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiStopProfileTarget @ 0x140571D50 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1405C6C1C (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406CC024 (PspSetEffectiveJobLimits.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PpmParkParkingAvailable @ 0x14081A654 (PpmParkParkingAvailable.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14084A750 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AE968 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1200 (EtwpLoadMicroarchitecturalProfileGroup.c)
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
