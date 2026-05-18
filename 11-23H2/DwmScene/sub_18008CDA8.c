/*
 * XREFs of sub_18008CDA8 @ 0x18008CDA8
 * Callers:
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     sub_18008C8C8 @ 0x18008C8C8 (sub_18008C8C8.c)
 */

_QWORD *__fastcall sub_18008CDA8(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18008C8C8((__int64)a1, a2);
  return a1;
}
