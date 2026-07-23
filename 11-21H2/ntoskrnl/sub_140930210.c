/*
 * XREFs of sub_140930210 @ 0x140930210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406509E0 @ 0x1406509E0 (sub_1406509E0.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 */

_QWORD *__fastcall sub_140930210(_QWORD *a1, char a2)
{
  *a1 = off_140006F60;
  sub_140650D38(a1);
  if ( (a2 & 1) != 0 )
    sub_1406509E0((__int64)a1);
  return a1;
}
