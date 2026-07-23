/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1409928C0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x140993A44 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopPowerAggregatorForceSessionSwitch(45LL);
  return 0LL;
}
