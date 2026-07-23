/*
 * XREFs of HalpTimerGetSkip @ 0x14040FBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
