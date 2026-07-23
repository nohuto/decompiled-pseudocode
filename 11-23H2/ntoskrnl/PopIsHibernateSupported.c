/*
 * XREFs of PopIsHibernateSupported @ 0x140873844
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 *     PopVerifyPowerActionPolicy @ 0x140824A78 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140824BAC (PopVerifySystemPowerState.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140884CD0 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980D04 (PopIsDozeSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
