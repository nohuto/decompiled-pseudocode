/*
 * XREFs of sub_1800C3AA8 @ 0x1800C3AA8
 * Callers:
 *     sub_1800C3908 @ 0x1800C3908 (sub_1800C3908.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800C3AA8(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
