/*
 * XREFs of sub_180091390 @ 0x180091390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008FB5C @ 0x18008FB5C (sub_18008FB5C.c)
 */

__m128 *__fastcall sub_180091390(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_18008FB5C(v3, a2, &v6);
  return a2;
}
