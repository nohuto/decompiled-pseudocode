/*
 * XREFs of PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140877C20
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874A08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 */

__int64 PopPowerAggregatorScreenOffActiveToScreenOffStateHandler()
{
  if ( PopPowerAggregatorUmpoInitialized )
    PopPowerAggregatorEnterScreenOff();
  return 0LL;
}
