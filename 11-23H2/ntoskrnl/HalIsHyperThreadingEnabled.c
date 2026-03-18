/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1403828A0
 * Callers:
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
