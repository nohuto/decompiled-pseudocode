/*
 * XREFs of _controlfp @ 0x18009BB74
 * Callers:
 *     atan @ 0x180095DA0 (atan.c)
 *     atan2 @ 0x180096000 (atan2.c)
 *     cos @ 0x180096A70 (cos.c)
 *     sin @ 0x180096E90 (sin.c)
 *     tan @ 0x1800992A0 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
