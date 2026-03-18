/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14036EF74
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822924 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x14098BBE4 (PoInitializeBroadcast.c)
 *     PdcPoPerfOverride @ 0x1409979A8 (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14032B828 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
