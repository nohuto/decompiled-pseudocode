/*
 * XREFs of PopQueueWorkItem @ 0x14032CCE4
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x14032B428 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032B828 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BB08 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopCheckForIdleness @ 0x14032C620 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032EE4C (PopApplyLegacyPowerRequestFlags.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1403AACE0 (PopPowerRequestUnrevokeRequests.c)
 *     PpmPerfTelemetryCallback @ 0x1403D7160 (PpmPerfTelemetryCallback.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x140583B70 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140583BA0 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PopPowerRequestRevokeRequests @ 0x140583BC4 (PopPowerRequestRevokeRequests.c)
 *     PopThermalCsEntry @ 0x14058F84C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058F8CC (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x14058FD74 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x14058FF60 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405903F0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x140590840 (PopKsrCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140598F20 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140598F50 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140599080 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405994C8 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallback @ 0x14059E4A0 (PopDripsWatchdogTimerCallback.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUpdateExternalDisplayState @ 0x1407EA7AC (PopUpdateExternalDisplayState.c)
 *     PoEnableCriticalShutdown @ 0x1408643D4 (PoEnableCriticalShutdown.c)
 *     PopNetSetConnectivityConstraint @ 0x1408648F8 (PopNetSetConnectivityConstraint.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140983530 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x140984400 (PopLidSwitchChangeCallback.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopNetClearConnectivityConstraint @ 0x140996680 (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x140997930 (PdcPoNetworkResiliency.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
