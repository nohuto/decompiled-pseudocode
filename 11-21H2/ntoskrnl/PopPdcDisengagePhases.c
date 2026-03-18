/*
 * XREFs of PopPdcDisengagePhases @ 0x140808BE8
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140995D10 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C5ADB0 )
    return ((__int64 (*)(void))qword_140C5ADB0)();
  return result;
}
