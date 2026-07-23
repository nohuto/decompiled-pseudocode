/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14036F114
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822C24 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x14098BDE4 (PoInitializeBroadcast.c)
 *     PdcPoPerfOverride @ 0x140997BA8 (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14032BAB8 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
