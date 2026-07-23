/*
 * XREFs of PpmReleaseLock @ 0x14032C510
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032C270 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x14032C480 (PpmCheckRun.c)
 *     PpmHeteroHgsBackupInit @ 0x1403AC594 (PpmHeteroHgsBackupInit.c)
 *     PpmMediaBufferingWorker @ 0x1403ACDD0 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1405844F4 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x14058607C (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x14058D614 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x14058D814 (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x14058D900 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596878 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1405968BC (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x140598940 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14059D77C (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6540 (PpmPerfUpdateDomainPolicy.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PpmInfoReleaseLocks @ 0x14082C900 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x14082C9C0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1408400F8 (PpmPerfGetFrequencyBandStats.c)
 *     PpmRegisterProfiles @ 0x140849E18 (PpmRegisterProfiles.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084EA60 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085EA38 (PpmIdleGetConcurrencyStats.c)
 *     PopPpmHeteroPolicyCallback @ 0x140864570 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140864ED0 (PpmEventTraceControlCallback.c)
 *     PpmPerfTelemetryWorker @ 0x140884EA0 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984810 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1409869F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986B18 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986DA4 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140986EC0 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099304C (PpmCompareAndApplyPolicySettings.c)
 *     PopEnforceResiliencyScenarios @ 0x140994438 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x140997BD0 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x14099A054 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A154 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099D220 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D384 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099D820 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DC10 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5BF50 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 */

void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
    KeLeaveCriticalRegion();
  }
}
