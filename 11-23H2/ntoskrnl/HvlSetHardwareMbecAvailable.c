/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14036F154
 * Callers:
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
