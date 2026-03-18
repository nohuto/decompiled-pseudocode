/*
 * XREFs of PpmReleaseLock @ 0x140224C00
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140224810 (PpmMediaBufferingWorker.c)
 *     PoNotifyVSyncChange @ 0x140224940 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x140224B50 (PpmCheckRun.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140399068 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140399140 (PpmCheckPausePpmEngineForSx.c)
 *     PpmHeteroHgsBackupInit @ 0x1403DC9D4 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1405C70B4 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405C8AFC (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1405CF580 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x1405CF77C (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x1405CF800 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405D77A0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1405DD354 (PpmParkSetLpiCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1407F9EBC (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x1407FBB54 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x1407FC3E8 (PpmIdleGetConcurrencyStats.c)
 *     PpmInfoReleaseLocks @ 0x1407FD604 (PpmInfoReleaseLocks.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x14080BBA0 (PpmPerfTelemetryWorker.c)
 *     PdcPoPpmResetProfile @ 0x1408310F0 (PdcPoPpmResetProfile.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x140863A40 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140864680 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14098CB20 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x14098E9D8 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x14098EB00 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x14098ED44 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x14098EE60 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099788C (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x14099D500 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D66C (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099DB50 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DE60 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14099E10C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099E20C (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B151EC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    KeLeaveCriticalRegion();
}
