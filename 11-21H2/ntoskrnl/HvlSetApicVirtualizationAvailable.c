/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14054381C
 * Callers:
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
