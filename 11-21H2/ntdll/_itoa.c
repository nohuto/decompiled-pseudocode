/*
 * XREFs of _itoa @ 0x1800945B0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x1800946DC (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtoa(Value, Buffer, Radix, v3);
  return Buffer;
}
