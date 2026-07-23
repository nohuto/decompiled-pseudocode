/*
 * XREFs of PopPdcEngagePhases @ 0x140877FFC
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409938A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcEngagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6AF78 )
    return ((__int64 (*)(void))qword_140C6AF78)();
  return result;
}
