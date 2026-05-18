/*
 * XREFs of sub_18003BDE0 @ 0x18003BDE0
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     sub_18003EAD0 @ 0x18003EAD0 (sub_18003EAD0.c)
 */

__m128 *__fastcall sub_18003BDE0(__int64 a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm0
  __m128 *result; // rax

  v2 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  result = (__m128 *)sub_18003EAD0();
  *result = v2;
  return result;
}
