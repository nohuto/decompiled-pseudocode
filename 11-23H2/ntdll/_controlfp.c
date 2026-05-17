/*
 * XREFs of _controlfp @ 0x18009746C
 * Callers:
 *     atan @ 0x180091570 (atan.c)
 *     atan2 @ 0x1800917D0 (atan2.c)
 *     cos @ 0x180092260 (cos.c)
 *     sin @ 0x180092680 (sin.c)
 *     tan @ 0x180094B60 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
