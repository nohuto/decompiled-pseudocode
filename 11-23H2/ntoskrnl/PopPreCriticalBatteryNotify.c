/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1409926C0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361D90 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140993844 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
