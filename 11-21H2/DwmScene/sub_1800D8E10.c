/*
 * XREFs of sub_1800D8E10 @ 0x1800D8E10
 * Callers:
 *     sub_1800D8E90 @ 0x1800D8E90 (sub_1800D8E90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D8E10(__int64 a1, unsigned __int64 a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  return a1;
}
