/*
 * XREFs of _itow @ 0x1403E0E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E0EB4 @ 0x1403E0EB4 (sub_1403E0EB4.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Dest, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_1403E0EB4(Value, Dest, Radix, v3);
  return Dest;
}
