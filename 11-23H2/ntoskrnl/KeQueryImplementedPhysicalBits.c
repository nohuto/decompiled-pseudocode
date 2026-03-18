/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405791E0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140975488 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
