/*
 * XREFs of sub_180051948 @ 0x180051948
 * Callers:
 *     sub_180051C0C @ 0x180051C0C (sub_180051C0C.c)
 *     sub_180051CB0 @ 0x180051CB0 (sub_180051CB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051948(__m128 *a1, __m128 *a2)
{
  __int64 result; // rax
  __m128 v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  void *v8; // rax
  unsigned int v9; // r9d
  int *v10; // r11
  unsigned int v11; // r8d
  int v12; // esi
  void *v13; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v14[6]; // [rsp+58h] [rbp-30h] BYREF

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128)
    || (result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(a1[31], *a2)), (_DWORD)result) )
  {
    v5 = _mm_mul_ps(
           _mm_min_ps(_mm_max_ps(*a2, (__m128)xmmword_180106550), (__m128)xmmword_180106540),
           (__m128)xmmword_180106360);
    v6 = _mm_cvtps_epi32(_mm_shuffle_ps(v5, v5, 198));
    v7 = _mm_packs_epi32(v6, v6);
    v14[0] = _mm_packus_epi16(v7, v7).m128i_u32[0];
    v14[1] = v14[0];
    v14[2] = v14[0];
    v14[3] = v14[0];
    v14[4] = v14[0];
    v14[5] = v14[0];
    v8 = (void *)sub_18001C190();
    v13 = v8;
    v9 = 0;
    v10 = v14;
    do
    {
      v11 = 0;
      v12 = *v10;
      do
        *((_DWORD *)v8 + 1024 * v9 + v11++) = v12;
      while ( v11 < 0x400 );
      ++v9;
      ++v10;
    }
    while ( v9 < 6 );
    sub_180055EA0(a1[28].m128_u64[0], 32, 32, 0, 16, 0, 17, (__int64)v8, 24576, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    a1[31].m128_i32[3] = a2->m128_i32[3];
    result = sub_180025AEC(&v13);
  }
  a1[33].m128_i32[0] = 1065353216;
  return result;
}
