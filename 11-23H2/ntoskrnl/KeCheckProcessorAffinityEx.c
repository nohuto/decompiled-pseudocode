/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140257360
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027DFF0 (KiGetNextTimerExpirationDueTime.c)
 *     KiComputeThreadAffinity @ 0x1402BF834 (KiComputeThreadAffinity.c)
 *     PpmCheckContinueExecution @ 0x1402BFA64 (PpmCheckContinueExecution.c)
 *     KiCheckKeepAlive @ 0x1402BFF4C (KiCheckKeepAlive.c)
 *     PoIdle @ 0x1402C4B60 (PoIdle.c)
 *     PpmExitCoordinatedIdle @ 0x1402C6CD0 (PpmExitCoordinatedIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7060 (KeResumeClockTimerFromIdle.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140393334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiForwardTick @ 0x1403CB6E0 (KiForwardTick.c)
 *     EmonEnableMonitoring @ 0x14051D240 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E3F0 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140529160 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140529E90 (Amd64RemoveProfileSource.c)
 *     KiProcessProfileList @ 0x140574334 (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x140574430 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140574780 (KiStopProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057CFC4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x14058466C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x140585EFC (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586670 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkReportParkedCore @ 0x14059D0FC (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059D20C (PpmParkReportSoftParkChange.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     KiSetCacheInformationAmd @ 0x140A9F8D8 (KiSetCacheInformationAmd.c)
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
