/*
 * XREFs of sub_1800592F4 @ 0x1800592F4
 * Callers:
 *     sub_180059610 @ 0x180059610 (sub_180059610.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800592F4(__m128 *a1, __m128 *a2)
{
  __int64 result; // rax
  __m128 v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  _DWORD *v8; // rbx
  unsigned int v9; // r8d
  int *v10; // r10
  unsigned int v11; // edx
  int v12; // r11d
  _DWORD v13[6]; // [rsp+58h] [rbp-30h] BYREF

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128)
    || (result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(a1[31], *a2)), (_DWORD)result) )
  {
    v5 = _mm_mul_ps(
           _mm_min_ps(_mm_max_ps(*a2, (__m128)xmmword_1801284F0), (__m128)xmmword_1801284E0),
           (__m128)xmmword_180128300);
    v6 = _mm_cvtps_epi32(_mm_shuffle_ps(v5, v5, 198));
    v7 = _mm_packs_epi32(v6, v6);
    v13[0] = _mm_packus_epi16(v7, v7).m128i_u32[0];
    v13[1] = v13[0];
    v13[2] = v13[0];
    v13[3] = v13[0];
    v13[4] = v13[0];
    v13[5] = v13[0];
    v8 = (_DWORD *)sub_18001D684();
    v9 = 0;
    v10 = v13;
    do
    {
      v11 = 0;
      v12 = *v10;
      do
        v8[1024 * v9 + v11++] = v12;
      while ( v11 < 0x400 );
      ++v9;
      ++v10;
    }
    while ( v9 < 6 );
    sub_18005D70C(a1[28].m128_u64[0], 32, 32, 0, 16, 0, 17, (__int64)v8, 24576, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    result = a2->m128_u32[3];
    a1[31].m128_i32[3] = result;
    if ( v8 )
      result = sub_18001D6B8(v8);
  }
  a1[33].m128_i32[0] = 1065353216;
  return result;
}
