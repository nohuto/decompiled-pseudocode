/*
 * XREFs of PopQueueWorkItem @ 0x14032CF74
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x14032B6B8 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032BAB8 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032BD98 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopCheckForIdleness @ 0x14032C8B0 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032F0DC (PopApplyLegacyPowerRequestFlags.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1403AAEC0 (PopPowerRequestUnrevokeRequests.c)
 *     PpmPerfTelemetryCallback @ 0x1403D7340 (PpmPerfTelemetryCallback.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x140584060 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140584090 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PopPowerRequestRevokeRequests @ 0x1405840B4 (PopPowerRequestRevokeRequests.c)
 *     PopThermalCsEntry @ 0x14058FD3C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058FDBC (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x140590264 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x140590450 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405908E0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x140590D30 (PopKsrCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140599410 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140599440 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140599570 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405999B8 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallback @ 0x14059E990 (PopDripsWatchdogTimerCallback.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUpdateExternalDisplayState @ 0x1407EAA7C (PopUpdateExternalDisplayState.c)
 *     PoEnableCriticalShutdown @ 0x140864614 (PoEnableCriticalShutdown.c)
 *     PopNetSetConnectivityConstraint @ 0x140864B38 (PopNetSetConnectivityConstraint.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140983730 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x140984600 (PopLidSwitchChangeCallback.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopNetClearConnectivityConstraint @ 0x140996880 (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x140997B30 (PdcPoNetworkResiliency.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
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
