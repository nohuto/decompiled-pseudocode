/*
 * XREFs of _controlfp @ 0x180096C6C
 * Callers:
 *     atan @ 0x180090D70 (atan.c)
 *     atan2 @ 0x180090FD0 (atan2.c)
 *     cos @ 0x180091A60 (cos.c)
 *     sin @ 0x180091E80 (sin.c)
 *     tan @ 0x180094360 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
