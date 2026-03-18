/*
 * XREFs of PopIsHibernateSupported @ 0x140873604
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 *     PopVerifyPowerActionPolicy @ 0x140824778 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1408248AC (PopVerifySystemPowerState.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140884A90 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980B04 (PopIsDozeSupported.c)
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
