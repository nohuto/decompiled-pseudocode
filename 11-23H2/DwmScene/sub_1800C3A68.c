/*
 * XREFs of sub_1800C3A68 @ 0x1800C3A68
 * Callers:
 *     sub_1800C3AE8 @ 0x1800C3AE8 (sub_1800C3AE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C3A68(__int64 a1, unsigned __int64 a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  return a1;
}
