/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140577C74
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140962C48 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
