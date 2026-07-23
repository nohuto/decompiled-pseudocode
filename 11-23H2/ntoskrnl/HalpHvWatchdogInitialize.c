/*
 * XREFs of HalpHvWatchdogInitialize @ 0x140372410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHvWatchdogInitialize()
{
  __writemsr(0x40000110u, 2uLL);
  return 0LL;
}
