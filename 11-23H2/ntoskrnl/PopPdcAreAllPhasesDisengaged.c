/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140883BD8
 * Callers:
 *     PopArmIdlePhaseWatchdog @ 0x140883AB4 (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409940A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C6AF90 )
    return ((__int64 (*)(void))qword_140C6AF90)();
  return result;
}
