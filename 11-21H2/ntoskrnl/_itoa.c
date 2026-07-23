/*
 * XREFs of _itoa @ 0x1403E0DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E0DE0 @ 0x1403E0DE0 (sub_1403E0DE0.c)
 */

char *__cdecl itoa(int Value, char *Dest, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_1403E0DE0(Value, Dest, Radix, v3);
  return Dest;
}
