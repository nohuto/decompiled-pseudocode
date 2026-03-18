/*
 * XREFs of TtmIsEnabled @ 0x1407A6090
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x14036DE6C (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1403846F0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A60B8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopPowerRequestDelete @ 0x1407A6790 (PopPowerRequestDelete.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A91D8 (PopProcessSessionDisplayStateChange.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3744 (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407D3800 (PopPowerRequestCallbackDisplayRequired.c)
 *     TtmInit @ 0x140820E84 (TtmInit.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140981814 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993B24 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140997D70 (PopControlMonitor.c)
 *     TtmpAcquireSessionById @ 0x1409A4F30 (TtmpAcquireSessionById.c)
 *     TtmDispatchApi @ 0x1409A5F8C (TtmDispatchApi.c)
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
