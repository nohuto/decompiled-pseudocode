/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405796D0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140975688 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
