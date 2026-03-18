/*
 * XREFs of PopPdcEngagePhases @ 0x1408093DC
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14099596C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcEngagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C5ADA8 )
    return ((__int64 (*)(void))qword_140C5ADA8)();
  return result;
}
