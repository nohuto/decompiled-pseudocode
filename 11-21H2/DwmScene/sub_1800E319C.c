/*
 * XREFs of sub_1800E319C @ 0x1800E319C
 * Callers:
 *     sub_1800E3118 @ 0x1800E3118 (sub_1800E3118.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E319C(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
