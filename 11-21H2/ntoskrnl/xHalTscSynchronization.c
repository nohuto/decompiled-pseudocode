/*
 * XREFs of xHalTscSynchronization @ 0x1405430C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140398D58 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
