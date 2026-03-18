/*
 * XREFs of PpmReleaseLock @ 0x14032C280
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032BFE0 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x14032C1F0 (PpmCheckRun.c)
 *     PpmHeteroHgsBackupInit @ 0x1403AC3B4 (PpmHeteroHgsBackupInit.c)
 *     PpmMediaBufferingWorker @ 0x1403ACBF0 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140584004 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140585B8C (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x14058D124 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x14058D324 (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x14058D410 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596388 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1405963CC (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x140598450 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14059D28C (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6350 (PpmPerfUpdateDomainPolicy.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PpmInfoReleaseLocks @ 0x14082C600 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x14082C6C0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PpmPerfGetFrequencyBandStats @ 0x14083FDF8 (PpmPerfGetFrequencyBandStats.c)
 *     PpmRegisterProfiles @ 0x140849B18 (PpmRegisterProfiles.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084E760 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085E7F8 (PpmIdleGetConcurrencyStats.c)
 *     PopPpmHeteroPolicyCallback @ 0x140864330 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140864C90 (PpmEventTraceControlCallback.c)
 *     PpmPerfTelemetryWorker @ 0x140884C60 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984610 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1409867F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986918 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986BA4 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140986CC0 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992E4C (PpmCompareAndApplyPolicySettings.c)
 *     PopEnforceResiliencyScenarios @ 0x140994238 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x1409979D0 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x140999E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140999F54 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099D020 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D184 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099D620 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DA10 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5BF50 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KiClearSystemPriority @ 0x140345FE0 (KiClearSystemPriority.c)
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
