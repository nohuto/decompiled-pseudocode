/*
 * XREFs of sub_1800E2F50 @ 0x1800E2F50
 * Callers:
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E14D0 @ 0x1800E14D0 (sub_1800E14D0.c)
 *     sub_1800E16A4 @ 0x1800E16A4 (sub_1800E16A4.c)
 *     sub_1800E18C0 @ 0x1800E18C0 (sub_1800E18C0.c)
 *     sub_1800E1CF4 @ 0x1800E1CF4 (sub_1800E1CF4.c)
 *     sub_1800E1E10 @ 0x1800E1E10 (sub_1800E1E10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2F50(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm12_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  __int64 result; // rax
  float v19; // xmm9_4
  float v20; // xmm11_4
  float v21; // xmm13_4
  float v22; // xmm1_4
  __m128 v23; // xmm3
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm2
  __m128 v31; // xmm2
  __m128 v32; // xmm2
  __int64 v33; // [rsp+8h] [rbp-79h]
  unsigned __int64 v34; // [rsp+8h] [rbp-79h]
  float v35; // [rsp+10h] [rbp-71h]
  float v36; // [rsp+10h] [rbp-71h]
  __int64 v37; // [rsp+18h] [rbp-69h]
  unsigned __int64 v38; // [rsp+18h] [rbp-69h]
  __int64 v39; // [rsp+28h] [rbp-59h]

  v8 = a3;
  v9 = a4;
  v10 = 3LL * a4;
  v11 = *(float *)(a2 + 8 * v9 + 4) - *(float *)(a2 + 8 * v8 + 4);
  v12 = *(float *)(a2 + 8 * v9) - *(float *)(a2 + 8 * v8);
  v33 = *(_QWORD *)(a1 + 12 * v8);
  v37 = *(_QWORD *)(a1 + 4 * v10);
  v13 = *(float *)&v37 - *(float *)&v33;
  v14 = *((float *)&v37 + 1) - *((float *)&v33 + 1);
  v35 = *(float *)(a1 + 12 * v8 + 8);
  v15 = *(float *)(a1 + 4 * v10 + 8) - v35;
  v16 = *(float *)(a2 + 8LL * a5 + 4) - *(float *)(a2 + 8 * v8 + 4);
  v17 = *(float *)(a2 + 8LL * a5) - *(float *)(a2 + 8 * v8);
  result = *(unsigned int *)(a1 + 12LL * a5 + 8);
  v39 = *(_QWORD *)(a1 + 12LL * a5);
  v19 = *(float *)&v39 - *(float *)&v33;
  v20 = *((float *)&v39 + 1) - *((float *)&v33 + 1);
  v21 = *(float *)&result - v35;
  v22 = (float)(v16 * v12) - (float)(v11 * v17);
  if ( v22 != 0.0 )
  {
    *(float *)&v34 = (float)((float)(v16 * v13) - (float)(v11 * v19)) * (float)(1.0 / v22);
    *((float *)&v34 + 1) = (float)((float)(v16 * v14) - (float)(v11 * v20)) * (float)(1.0 / v22);
    v36 = (float)((float)(v16 * v15) - (float)(v11 * v21)) * (float)(1.0 / v22);
    if ( a6 )
    {
      v23 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v34, (__m128)LODWORD(v36)));
      v34 = v23.m128_u64[0];
      LODWORD(v36) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    }
    v25 = _mm_movelh_ps((__m128)v34, (__m128)LODWORD(v36));
    v26 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12 * v8), (__m128)*(unsigned int *)(a7 + 12 * v8 + 8)),
            v25);
    *(_QWORD *)(a7 + 12 * v8) = v26.m128_u64[0];
    *(_DWORD *)(a7 + 12 * v8 + 8) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    v27 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 4 * v10), (__m128)*(unsigned int *)(a7 + 4 * v10 + 8)),
            v25);
    *(_QWORD *)(a7 + 4 * v10) = v27.m128_u64[0];
    *(_DWORD *)(a7 + 4 * v10 + 8) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
    v28 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a7 + 12LL * a5), (__m128)*(unsigned int *)(a7 + 12LL * a5 + 8)),
            v25);
    *((float *)&v38 + 1) = (float)((float)(v12 * v20) - (float)(v17 * v14)) * (float)(1.0 / v22);
    *(float *)&v38 = (float)((float)(v12 * v19) - (float)(v17 * v13)) * (float)(1.0 / v22);
    v29 = _mm_movelh_ps(
            (__m128)v38,
            (__m128)COERCE_UNSIGNED_INT((float)((float)(v12 * v21) - (float)(v17 * v15)) * (float)(1.0 / v22)));
    *(_QWORD *)(a7 + 12LL * a5) = v28.m128_u64[0];
    *(_DWORD *)(a7 + 12LL * a5 + 8) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    result = a8;
    v30 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a8 + 12 * v8), (__m128)*(unsigned int *)(a8 + 12 * v8 + 8)),
            v29);
    *(_QWORD *)(a8 + 12 * v8) = v30.m128_u64[0];
    *(_DWORD *)(a8 + 12 * v8 + 8) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    v31 = _mm_add_ps(
            _mm_movelh_ps(
              (__m128)*(unsigned __int64 *)(result + 4 * v10),
              (__m128)*(unsigned int *)(result + 4 * v10 + 8)),
            v29);
    *(_QWORD *)(a8 + 4 * v10) = v31.m128_u64[0];
    *(_DWORD *)(a8 + 4 * v10 + 8) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    v32 = _mm_add_ps(
            _mm_movelh_ps((__m128)*(unsigned __int64 *)(a8 + 12LL * a5), (__m128)*(unsigned int *)(a8 + 12LL * a5 + 8)),
            v29);
    *(_QWORD *)(a8 + 12LL * a5) = v32.m128_u64[0];
    *(_DWORD *)(a8 + 12LL * a5 + 8) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
  }
  return result;
}
