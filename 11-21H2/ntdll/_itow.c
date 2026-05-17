/*
 * XREFs of _itow @ 0x1800947A0
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x1800948E8 (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtow(Value, Buffer, Radix, v3);
  return Buffer;
}
