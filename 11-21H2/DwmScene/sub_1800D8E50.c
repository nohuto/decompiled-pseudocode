/*
 * XREFs of sub_1800D8E50 @ 0x1800D8E50
 * Callers:
 *     sub_1800D8C84 @ 0x1800D8C84 (sub_1800D8C84.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800D8E50(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
