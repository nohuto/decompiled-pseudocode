/*
 * XREFs of TtmIsEnabled @ 0x1407A6280
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x14036E00C (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1403848D0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A62A8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopPowerRequestDelete @ 0x1407A6980 (PopPowerRequestDelete.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A93C8 (PopProcessSessionDisplayStateChange.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3A14 (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407D3AD0 (PopPowerRequestCallbackDisplayRequired.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140981A14 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993BE0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993D24 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140997F70 (PopControlMonitor.c)
 *     TtmpAcquireSessionById @ 0x1409A5130 (TtmpAcquireSessionById.c)
 *     TtmDispatchApi @ 0x1409A618C (TtmDispatchApi.c)
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
