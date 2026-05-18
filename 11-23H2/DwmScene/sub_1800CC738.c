/*
 * XREFs of sub_1800CC738 @ 0x1800CC738
 * Callers:
 *     sub_1800CC6D0 @ 0x1800CC6D0 (sub_1800CC6D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CC738(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
