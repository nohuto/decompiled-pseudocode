/*
 * XREFs of sub_18003BE8C @ 0x18003BE8C
 * Callers:
 *     sub_18003E1D0 @ 0x18003E1D0 (sub_18003E1D0.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003BE8C(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  result = a1;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v3 = (__m128)*((unsigned int *)a2 + 2);
  v4 = (__m128)*a2;
  *(_OWORD *)a1 = xmmword_1801063C0;
  *(_OWORD *)(a1 + 16) = xmmword_180106350;
  *(_OWORD *)(a1 + 32) = xmmword_1801063F0;
  *(__m128 *)(a1 + 48) = _mm_movelh_ps(v4, _mm_unpacklo_ps(v3, (__m128)0x3F800000u));
  return result;
}
