/*
 * XREFs of sub_1800A1080 @ 0x1800A1080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F620 @ 0x18009F620 (sub_18009F620.c)
 */

__m128 *__fastcall sub_1800A1080(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_18009F620(v3, a2, &v6);
  return a2;
}
