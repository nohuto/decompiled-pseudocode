/*
 * XREFs of PoUserShutdownInitiated @ 0x1406822C0
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  __int64 v1; // rdx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    LOBYTE(v1) = 1;
    return PopSwitchUpdateUserShutdownScenarioState(3LL, v1);
  }
  return result;
}
