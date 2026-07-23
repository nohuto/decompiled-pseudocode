/*
 * XREFs of PopPdcDisengagePhases @ 0x140998250
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993CE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6AF80 )
    return ((__int64 (*)(void))qword_140C6AF80)();
  return result;
}
