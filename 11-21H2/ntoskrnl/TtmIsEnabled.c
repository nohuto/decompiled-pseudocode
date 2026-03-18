/*
 * XREFs of TtmIsEnabled @ 0x1407F0F98
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x140369ECC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1403C10B0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407EF258 (PopAdaptiveGetConsoleSessionState.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407F2028 (PopProcessSessionDisplayStateChange.c)
 *     PopNotifyConsoleUserPresent @ 0x1407F2A20 (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407F2D00 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1407FE640 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1408080F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140989FA4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopControlMonitor @ 0x140996EE0 (PopControlMonitor.c)
 *     TtmpAcquireSessionById @ 0x1409A5200 (TtmpAcquireSessionById.c)
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 *     PopPowerRequestInitialize @ 0x140B248EC (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
