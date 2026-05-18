/*
 * XREFs of sub_18005C5C0 @ 0x18005C5C0
 * Callers:
 *     sub_18005DBFC @ 0x18005DBFC (sub_18005DBFC.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18005C5C0(_OWORD *a1, _OWORD *a2, _OWORD *a3)
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
