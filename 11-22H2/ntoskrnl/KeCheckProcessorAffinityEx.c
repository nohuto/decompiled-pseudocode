/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140257240
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027DED0 (KiGetNextTimerExpirationDueTime.c)
 *     KiComputeThreadAffinity @ 0x1402BF804 (KiComputeThreadAffinity.c)
 *     PpmCheckContinueExecution @ 0x1402BFA34 (PpmCheckContinueExecution.c)
 *     KiCheckKeepAlive @ 0x1402BFF1C (KiCheckKeepAlive.c)
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmExitCoordinatedIdle @ 0x1402C6CA0 (PpmExitCoordinatedIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiForwardTick @ 0x1403CB080 (KiForwardTick.c)
 *     EmonEnableMonitoring @ 0x14051D300 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E4B0 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140529210 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140529F40 (Amd64RemoveProfileSource.c)
 *     KiProcessProfileList @ 0x1405743D4 (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x1405744D0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140574820 (KiStopProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D054 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405846FC (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x140585F8C (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586700 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkReportParkedCore @ 0x14059D18C (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059D29C (PpmParkReportSoftParkChange.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     KiSetCacheInformationAmd @ 0x140A9F998 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulateProcessorClass @ 0x140B975A4 (PopReadLegacySimulateProcessorClass.c)
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
