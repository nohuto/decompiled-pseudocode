/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14036E924
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822BE4 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x14098BC94 (PoInitializeBroadcast.c)
 *     PdcPoPerfOverride @ 0x140997A58 (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14032B648 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
