/*
 * XREFs of sub_180029A9C @ 0x180029A9C
 * Callers:
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18007FBF4 @ 0x18007FBF4 (sub_18007FBF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029A9C(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
