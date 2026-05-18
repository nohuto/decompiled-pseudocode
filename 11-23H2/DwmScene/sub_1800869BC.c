/*
 * XREFs of sub_1800869BC @ 0x1800869BC
 * Callers:
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008C1A0 @ 0x18008C1A0 (sub_18008C1A0.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 * Callees:
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

_QWORD *__fastcall sub_1800869BC(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    sub_18007E7DC((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
