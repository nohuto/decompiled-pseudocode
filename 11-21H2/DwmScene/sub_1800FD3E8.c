/*
 * XREFs of sub_1800FD3E8 @ 0x1800FD3E8
 * Callers:
 *     sub_1800FC4BC @ 0x1800FC4BC (sub_1800FC4BC.c)
 *     sub_1800FC660 @ 0x1800FC660 (sub_1800FC660.c)
 *     sub_1800FCBB0 @ 0x1800FCBB0 (sub_1800FCBB0.c)
 *     sub_1800FCDCC @ 0x1800FCDCC (sub_1800FCDCC.c)
 *     sub_1800FD0A8 @ 0x1800FD0A8 (sub_1800FD0A8.c)
 *     sub_1800FD2A0 @ 0x1800FD2A0 (sub_1800FD2A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FD3E8(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 v6; // rdx
  __m128 v7; // xmm2
  __int64 v8; // r9
  __int64 v9; // r8
  __m128 v10; // xmm5
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __int64 result; // rax
  __m128 v23; // xmm3
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  unsigned __int32 v28; // [rsp+8h] [rbp-18h]

  v6 = 3LL * a2;
  v7 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 4 * v6), (__m128)*(unsigned int *)(a1 + 4 * v6 + 8));
  v8 = 3LL * a4;
  v9 = 3LL * a3;
  v10 = _mm_sub_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 4 * v8), (__m128)*(unsigned int *)(a1 + 4 * v8 + 8)),
          v7);
  v11 = _mm_sub_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 4 * v9), (__m128)*(unsigned int *)(a1 + 4 * v9 + 8)),
          v7);
  v12 = 0LL;
  v12.m128_u64[0] = v11.m128_u64[0];
  v13 = (__m128)_mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v14 = 0LL;
  v14.m128_u64[0] = v10.m128_u64[0];
  v15 = _mm_movelh_ps(v12, v13);
  v16 = _mm_movelh_ps(v14, (__m128)_mm_shuffle_ps(v10, v10, 170).m128_u32[0]);
  v17 = _mm_shuffle_ps(v16, v16, 210);
  v18 = _mm_shuffle_ps(v15, v15, 201);
  v19 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v17, v18), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 210), _mm_shuffle_ps(v18, v18, 201))),
          (__m128)xmmword_1801283A0);
  v28 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  if ( a5 )
  {
    v20 = 0LL;
    v20.m128_u64[0] = v19.m128_u64[0];
    v21 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v20, (__m128)v28));
    v19.m128_u64[0] = v21.m128_u64[0];
    v28 = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
  }
  result = a6;
  v23 = 0LL;
  v23.m128_u64[0] = v19.m128_u64[0];
  v24 = _mm_movelh_ps(v23, (__m128)v28);
  v25 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a6 + 4 * v6), (__m128)*(unsigned int *)(a6 + 4 * v6 + 8)),
          v24);
  *(_QWORD *)(a6 + 4 * v6) = v25.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v6 + 8) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  v26 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(result + 4 * v9), (__m128)*(unsigned int *)(result + 4 * v9 + 8)),
          v24);
  *(_QWORD *)(a6 + 4 * v9) = v26.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v9 + 8) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  v27 = _mm_add_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)(a6 + 4 * v8), (__m128)*(unsigned int *)(a6 + 4 * v8 + 8)),
          v24);
  *(_QWORD *)(a6 + 4 * v8) = v27.m128_u64[0];
  *(_DWORD *)(a6 + 4 * v8 + 8) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
  return result;
}
