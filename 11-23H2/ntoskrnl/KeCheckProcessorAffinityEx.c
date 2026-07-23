/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140257420
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     PpmParkSteerInterrupts @ 0x140256AE0 (PpmParkSteerInterrupts.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027E280 (KiGetNextTimerExpirationDueTime.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     PpmCheckContinueExecution @ 0x1402BFCF4 (PpmCheckContinueExecution.c)
 *     KiCheckKeepAlive @ 0x1402C01DC (KiCheckKeepAlive.c)
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmExitCoordinatedIdle @ 0x1402C6F60 (PpmExitCoordinatedIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393514 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiForwardTick @ 0x1403CB8C0 (KiForwardTick.c)
 *     EmonEnableMonitoring @ 0x14051D790 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E940 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405296B0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14052A3E0 (Amd64RemoveProfileSource.c)
 *     KiProcessProfileList @ 0x140574874 (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x140574970 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140574CC0 (KiStopProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D4B4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140584B5C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405863EC (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586B60 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkReportParkedCore @ 0x14059D5EC (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059D6FC (PpmParkReportSoftParkChange.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     KiSetCacheInformationAmd @ 0x140A9F748 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulateProcessorClass @ 0x140B965A4 (PopReadLegacySimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> (v3 & 0x3F)) & 1LL;
}
