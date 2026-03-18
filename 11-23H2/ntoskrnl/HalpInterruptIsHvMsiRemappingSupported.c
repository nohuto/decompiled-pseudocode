/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x14040F73C
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F950 (HalpInterruptSetDestination.c)
 *     HalpInterruptRemap @ 0x14037C0D8 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140C624C8 != 0;
}
