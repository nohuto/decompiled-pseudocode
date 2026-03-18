/*
 * XREFs of PopPdcEngagePhases @ 0x140877DBC
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409936A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 PopPdcEngagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6AF78 )
    return ((__int64 (*)(void))qword_140C6AF78)();
  return result;
}
