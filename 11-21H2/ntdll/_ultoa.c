/*
 * XREFs of _ultoa @ 0x180094640
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x1800946DC (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
