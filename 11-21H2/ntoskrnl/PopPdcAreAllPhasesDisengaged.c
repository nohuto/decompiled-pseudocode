/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140809180
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140808480 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x140808F30 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C5ADC0 )
    return ((__int64 (*)(void))qword_140C5ADC0)();
  return result;
}
