/*
 * XREFs of PsGetProcessSessionIdEx @ 0x14036F3B0
 * Callers:
 *     PsApplyDeepFreezeOptimizations @ 0x14067ED7C (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067EDC0 (PsRemoveDeepFreezeOptimizations.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PsFreezeProcess @ 0x1407EC200 (PsFreezeProcess.c)
 *     PopGetSettingValue @ 0x1407EC720 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopGetSessionId @ 0x140822B4C (PopGetSessionId.c)
 *     PopSetDisplayStatus @ 0x140885638 (PopSetDisplayStatus.c)
 *     DbgkpLkmdFireCallbacks @ 0x14093ADE4 (DbgkpLkmdFireCallbacks.c)
 *     TtmCleanupCurrentSession @ 0x1409A3F40 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A4050 (TtmInitCurrentSession.c)
 *     TtmiAcquireCurrentSession @ 0x1409A49E0 (TtmiAcquireCurrentSession.c)
 *     TtmiLogCalloutStart @ 0x1409A6C9C (TtmiLogCalloutStart.c)
 *     TtmiLogCalloutStop @ 0x1409A6DD8 (TtmiLogCalloutStop.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x1409A7014 (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1409A7180 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1409A7228 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1409A7398 (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A74E4 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A7624 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A7714 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1409A77E4 (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A78FC (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiLogDeviceFromTerminalRemoved @ 0x1409A7A3C (TtmiLogDeviceFromTerminalRemoved.c)
 *     TtmiLogDeviceInputNotified @ 0x1409A7B70 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogDeviceSetInputWakeCapability @ 0x1409A7E34 (TtmiLogDeviceSetInputWakeCapability.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1409A7F44 (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogDispatchApiStart @ 0x1409A8034 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1409A8104 (TtmiLogDispatchApiStop.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1409A81F4 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogEnterProximity @ 0x1409A8324 (TtmiLogEnterProximity.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 *     TtmiLogExitProximity @ 0x1409A854C (TtmiLogExitProximity.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A8660 (TtmiLogInactivityTimerReset.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A8730 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1409A8800 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1409A88A8 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A8978 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A8A6C (TtmiLogInitiateModernStandbyTransitionStop.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409A8B3C (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogProximityPowerPress @ 0x1409A8C5C (TtmiLogProximityPowerPress.c)
 *     TtmiLogQueueCreated @ 0x1409A8DAC (TtmiLogQueueCreated.c)
 *     TtmiLogSessionActivate @ 0x1409A922C (TtmiLogSessionActivate.c)
 *     TtmiLogSessionDeactivate @ 0x1409A9368 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1409A9410 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A9820 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A9914 (TtmiLogSessionPowerControlStop.c)
 *     TtmiLogSessionPowerStateChange @ 0x1409A9C90 (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogTerminalCreated @ 0x1409AA1C8 (TtmiLogTerminalCreated.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409AA350 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmiLogTerminalOffRequest @ 0x1409AA744 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409AA85C (TtmiLogTerminalOnRequest.c)
 *     TtmiLogTerminalStateMachine @ 0x1409AABCC (TtmiLogTerminalStateMachine.c)
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
