/*
 * XREFs of sub_1800E31E4 @ 0x1800E31E4
 * Callers:
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800E31E4(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    a3 += 2;
    a1 += 2;
  }
  return a3;
}
