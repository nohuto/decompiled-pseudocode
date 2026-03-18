/*
 * XREFs of HalpTimerGetSkip @ 0x14040F9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
