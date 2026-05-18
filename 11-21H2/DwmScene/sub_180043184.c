/*
 * XREFs of sub_180043184 @ 0x180043184
 * Callers:
 *     sub_1800412FC @ 0x1800412FC (sub_1800412FC.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 * Callees:
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 */

__int64 __fastcall sub_180043184(__m128 *a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *v5; // rax
  __m128 v6; // xmm6
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __int64 result; // rax
  __m128 v10; // xmm5
  __m128 v11; // xmm4
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (__m128 *)sub_1800414A0(a1, v12);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  result = a2;
  v10 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v11 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v8), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v7)),
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v6));
  *(_QWORD *)a2 = v11.m128_u64[0];
  *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  return result;
}
