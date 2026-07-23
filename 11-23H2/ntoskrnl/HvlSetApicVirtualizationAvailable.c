/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14054044C
 * Callers:
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
