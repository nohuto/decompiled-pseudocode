/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140255050
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KiChooseTargetProcessor @ 0x1402392C0 (KiChooseTargetProcessor.c)
 *     KiIpiSetTargetAffinity @ 0x1402543D4 (KiIpiSetTargetAffinity.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254520 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalRequestIpiSpecifyVector @ 0x140254570 (HalRequestIpiSpecifyVector.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027DED0 (KiGetNextTimerExpirationDueTime.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0414 (KiComputeCpuSetAffinity.c)
 *     KeRemoveQueueDpcEx @ 0x14031EEF0 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x14034C9F8 (MmOutSwapProcess.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403831E0 (KiConfigureCpuSetSchedulingInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403CB080 (KiForwardTick.c)
 *     PoExecuteIdleCheck @ 0x1403CB450 (PoExecuteIdleCheck.c)
 *     HalpQueryProfileSource @ 0x140507C1C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140507DB8 (HalpQueryProfileSourceList.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051E1F0 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140574820 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140583DB0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1405861F8 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059C694 (PpmParkComputeUnparkMask.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E56C (PPmHeteroHgsUpdateOrderValue.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9D74 (PspSetEffectiveJobLimits.c)
 *     RtlUpdateSwapReference @ 0x140810658 (RtlUpdateSwapReference.c)
 *     PpmParkParkingAvailable @ 0x14082E76C (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140830C58 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140973378 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x1409753D8 (KeDeleteCpuPartition.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFAC8 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E43C8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     PsInitializeBootCpuPartitions @ 0x140B72D1C (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B979F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
