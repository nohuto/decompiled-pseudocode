/*
 * XREFs of sub_18007CA50 @ 0x18007CA50
 * Callers:
 *     sub_18007C6AC @ 0x18007C6AC (sub_18007C6AC.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18007CA50(_OWORD *a1, _OWORD *a2, _OWORD *a3)
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
