/*
 * XREFs of sub_180050654 @ 0x180050654
 * Callers:
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_180050654(__int64 a1, unsigned __int64 **a2, unsigned int a3)
{
  unsigned __int64 *result; // rax
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __int64 v7; // rcx
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm0

  result = *a2;
  v5 = _mm_movelh_ps((__m128)**a2, (__m128)*((unsigned int *)*a2 + 2));
  v6 = v5;
  if ( a3 > 1uLL )
  {
    result = (unsigned __int64 *)((char *)result + 12);
    v7 = a3 - 1LL;
    do
    {
      v8 = (__m128)*result;
      v9 = (__m128)*((unsigned int *)result + 2);
      result = (unsigned __int64 *)((char *)result + 12);
      v10 = _mm_movelh_ps(v8, v9);
      v6 = _mm_min_ps(v6, v10);
      v5 = _mm_max_ps(v5, v10);
      --v7;
    }
    while ( v7 );
  }
  v11 = v5;
  v12 = _mm_mul_ps(_mm_sub_ps(v5, v6), (__m128)xmmword_1801BD910);
  v13 = _mm_mul_ps(_mm_add_ps(v11, v6), (__m128)xmmword_1801BD910);
  *(_QWORD *)(a1 + 88) = v13.m128_u64[0];
  *(_DWORD *)(a1 + 96) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  *(_QWORD *)(a1 + 100) = v12.m128_u64[0];
  *(_DWORD *)(a1 + 108) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  return result;
}
