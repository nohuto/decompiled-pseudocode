/*
 * XREFs of _itoa @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x18008FE6C (xtoa.c)
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
