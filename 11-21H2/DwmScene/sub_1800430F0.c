/*
 * XREFs of sub_1800430F0 @ 0x1800430F0
 * Callers:
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 * Callees:
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 */

__int64 __fastcall sub_1800430F0(__m128 *a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *v5; // rax
  __m128 v6; // xmm6
  __m128 v7; // xmm2
  __m128 v8; // xmm4
  __m128 v9; // xmm3
  __int64 result; // rax
  __m128 v11; // xmm5
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  _OWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (__m128 *)sub_1800414A0(a1, v14);
  v6 = *v5;
  v7 = v5[2];
  v8 = v5[1];
  v9 = v5[3];
  result = a2;
  v11 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v12 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 170), v7), v9),
            _mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v8)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v6));
  v13 = _mm_div_ps(v12, _mm_shuffle_ps(v12, v12, 255));
  *(_QWORD *)a2 = v13.m128_u64[0];
  *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  return result;
}
