/*
 * XREFs of _ultoa @ 0x18008F5C0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18008F66C (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
