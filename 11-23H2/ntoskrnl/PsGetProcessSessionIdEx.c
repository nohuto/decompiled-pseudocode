/*
 * XREFs of PsGetProcessSessionIdEx @ 0x14036FA00
 * Callers:
 *     PsApplyDeepFreezeOptimizations @ 0x14067ED7C (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067EDC0 (PsRemoveDeepFreezeOptimizations.c)
 *     PopGetSettingNotificationName @ 0x140783080 (PopGetSettingNotificationName.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PsFreezeProcess @ 0x1407EBC80 (PsFreezeProcess.c)
 *     PopGetSettingValue @ 0x1407EC1A0 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopGetSessionId @ 0x14082288C (PopGetSessionId.c)
 *     PopSetDisplayStatus @ 0x140885168 (PopSetDisplayStatus.c)
 *     DbgkpLkmdFireCallbacks @ 0x14093AD34 (DbgkpLkmdFireCallbacks.c)
 *     TtmCleanupCurrentSession @ 0x1409A3E90 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A3FA0 (TtmInitCurrentSession.c)
 *     TtmiAcquireCurrentSession @ 0x1409A4930 (TtmiAcquireCurrentSession.c)
 *     TtmiLogCalloutStart @ 0x1409A6BEC (TtmiLogCalloutStart.c)
 *     TtmiLogCalloutStop @ 0x1409A6D28 (TtmiLogCalloutStop.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x1409A6F64 (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1409A70D0 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1409A7178 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1409A72E8 (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7434 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A7574 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A7664 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1409A7734 (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A784C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiLogDeviceFromTerminalRemoved @ 0x1409A798C (TtmiLogDeviceFromTerminalRemoved.c)
 *     TtmiLogDeviceInputNotified @ 0x1409A7AC0 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogDeviceSetInputWakeCapability @ 0x1409A7D84 (TtmiLogDeviceSetInputWakeCapability.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1409A7E94 (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogDispatchApiStart @ 0x1409A7F84 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1409A8054 (TtmiLogDispatchApiStop.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1409A8144 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogEnterProximity @ 0x1409A8274 (TtmiLogEnterProximity.c)
 *     TtmiLogError @ 0x1409A8344 (TtmiLogError.c)
 *     TtmiLogExitProximity @ 0x1409A849C (TtmiLogExitProximity.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A85B0 (TtmiLogInactivityTimerReset.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A8680 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1409A8750 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1409A87F8 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A88C8 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A89BC (TtmiLogInitiateModernStandbyTransitionStop.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409A8A8C (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogProximityPowerPress @ 0x1409A8BAC (TtmiLogProximityPowerPress.c)
 *     TtmiLogQueueCreated @ 0x1409A8CFC (TtmiLogQueueCreated.c)
 *     TtmiLogSessionActivate @ 0x1409A917C (TtmiLogSessionActivate.c)
 *     TtmiLogSessionDeactivate @ 0x1409A92B8 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1409A9360 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A9770 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A9864 (TtmiLogSessionPowerControlStop.c)
 *     TtmiLogSessionPowerStateChange @ 0x1409A9BE0 (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogTerminalCreated @ 0x1409AA118 (TtmiLogTerminalCreated.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409AA2A0 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmiLogTerminalOffRequest @ 0x1409AA694 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409AA7AC (TtmiLogTerminalOnRequest.c)
 *     TtmiLogTerminalStateMachine @ 0x1409AAB1C (TtmiLogTerminalStateMachine.c)
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
