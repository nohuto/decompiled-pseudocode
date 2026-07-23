/*
 * XREFs of HalpInterruptIsHvMsiRemappingSupported @ 0x14040F91C
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031FBE0 (HalpInterruptSetDestination.c)
 *     HalpInterruptRemap @ 0x14037C278 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvMsiRemappingSupported()
{
  return qword_140C624C8 != 0;
}
