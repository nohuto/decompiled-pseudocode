/*
 * XREFs of sub_180088D8C @ 0x180088D8C
 * Callers:
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180088D8C(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    a3[2] = a1[2];
    a3[3] = a1[3];
    a3 += 4;
    a1 += 4;
  }
  return a3;
}
