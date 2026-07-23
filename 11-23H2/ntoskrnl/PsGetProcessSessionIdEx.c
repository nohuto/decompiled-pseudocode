/*
 * XREFs of PsGetProcessSessionIdEx @ 0x14036FBA0
 * Callers:
 *     PsApplyDeepFreezeOptimizations @ 0x14067ED7C (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067EDC0 (PsRemoveDeepFreezeOptimizations.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PsFreezeProcess @ 0x1407EBF50 (PsFreezeProcess.c)
 *     PopGetSettingValue @ 0x1407EC470 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopGetSessionId @ 0x140822B8C (PopGetSessionId.c)
 *     PopSetDisplayStatus @ 0x1408853A8 (PopSetDisplayStatus.c)
 *     DbgkpLkmdFireCallbacks @ 0x14093AF34 (DbgkpLkmdFireCallbacks.c)
 *     TtmCleanupCurrentSession @ 0x1409A4090 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A41A0 (TtmInitCurrentSession.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4B30 (TtmiAcquireCurrentSession.c)
 *     TtmiLogCalloutStart @ 0x1409A6DEC (TtmiLogCalloutStart.c)
 *     TtmiLogCalloutStop @ 0x1409A6F28 (TtmiLogCalloutStop.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x1409A7164 (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1409A72D0 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1409A7378 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1409A74E8 (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7634 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A7774 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A7864 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1409A7934 (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A7A4C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiLogDeviceFromTerminalRemoved @ 0x1409A7B8C (TtmiLogDeviceFromTerminalRemoved.c)
 *     TtmiLogDeviceInputNotified @ 0x1409A7CC0 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogDeviceSetInputWakeCapability @ 0x1409A7F84 (TtmiLogDeviceSetInputWakeCapability.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1409A8094 (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogDispatchApiStart @ 0x1409A8184 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1409A8254 (TtmiLogDispatchApiStop.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1409A8344 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogEnterProximity @ 0x1409A8474 (TtmiLogEnterProximity.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiLogExitProximity @ 0x1409A869C (TtmiLogExitProximity.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A87B0 (TtmiLogInactivityTimerReset.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A8880 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1409A8950 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1409A89F8 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A8AC8 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A8BBC (TtmiLogInitiateModernStandbyTransitionStop.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409A8C8C (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogProximityPowerPress @ 0x1409A8DAC (TtmiLogProximityPowerPress.c)
 *     TtmiLogQueueCreated @ 0x1409A8EFC (TtmiLogQueueCreated.c)
 *     TtmiLogSessionActivate @ 0x1409A937C (TtmiLogSessionActivate.c)
 *     TtmiLogSessionDeactivate @ 0x1409A94B8 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1409A9560 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A9970 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A9A64 (TtmiLogSessionPowerControlStop.c)
 *     TtmiLogSessionPowerStateChange @ 0x1409A9DE0 (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogTerminalCreated @ 0x1409AA318 (TtmiLogTerminalCreated.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409AA4A0 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmiLogTerminalOffRequest @ 0x1409AA894 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409AA9AC (TtmiLogTerminalOnRequest.c)
 *     TtmiLogTerminalStateMachine @ 0x1409AAD1C (TtmiLogTerminalStateMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSessionIdEx(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v1 + 8);
}
