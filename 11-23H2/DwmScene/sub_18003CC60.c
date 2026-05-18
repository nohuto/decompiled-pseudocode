/*
 * XREFs of sub_18003CC60 @ 0x18003CC60
 * Callers:
 *     sub_18003DA14 @ 0x18003DA14 (sub_18003DA14.c)
 * Callees:
 *     sub_18003AFEC @ 0x18003AFEC (sub_18003AFEC.c)
 *     sub_18003BF10 @ 0x18003BF10 (sub_18003BF10.c)
 */

char __fastcall sub_18003CC60(__int32 *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned __int32 v3; // xmm5_4
  unsigned __int32 v4; // xmm4_4
  unsigned __int32 v6; // xmm3_4
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __m128 v12; // xmm11
  __int32 v13; // xmm12_4
  __m128 v14; // xmm13
  __m128 v15; // xmm14
  __m128 v16; // xmm15
  __m128 v17; // xmm14
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm15
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  float v23; // xmm6_4
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  float v26; // xmm0_4
  __m128 v27; // xmm1
  float v28; // xmm7_4
  __m128 v29; // xmm5
  __m128 v30; // xmm5
  __m128 v31; // xmm4
  __m128 v32; // xmm4
  __m128 v33; // xmm3
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm2_4
  __int64 v36; // r10
  char result; // al
  __m128 v38; // xmm3
  __int128 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v42; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-90h]
  float v44; // [rsp+80h] [rbp-88h]
  __m128 v45; // [rsp+88h] [rbp-80h]
  _BYTE v46[224]; // [rsp+98h] [rbp-70h] BYREF

  v3 = a1[2];
  v4 = a1[6];
  v6 = a1[10];
  v8 = 0LL;
  v9 = (__m128)(unsigned int)a1[8];
  v10 = (__m128)(unsigned int)a1[9];
  v11 = (__m128)(unsigned int)a1[4];
  v12 = (__m128)(unsigned int)a1[5];
  v13 = *a1;
  v14 = (__m128)(unsigned int)a1[1];
  v15 = 0LL;
  v15.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)*a1, v14).m128_u64[0];
  DWORD2(v39) = v3;
  v16 = 0LL;
  v17 = _mm_movelh_ps(v15, (__m128)v3);
  DWORD2(v40) = v4;
  v18 = _mm_mul_ps(v17, v17);
  DWORD2(v41) = v6;
  v19 = _mm_shuffle_ps(v18, v18, 102);
  v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
  v42 = _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0));
  v16.m128_u64[0] = _mm_unpacklo_ps(v11, v12).m128_u64[0];
  v20 = _mm_movelh_ps(v16, (__m128)v4);
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 102);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
  v8.m128_u64[0] = _mm_unpacklo_ps(v9, v10).m128_u64[0];
  v45 = _mm_movelh_ps(v8, (__m128)v6);
  LODWORD(v23) = _mm_sqrt_ps(_mm_shuffle_ps(v21, v21, 0)).m128_u32[0];
  v24 = _mm_mul_ps(v45, v45);
  v25 = _mm_shuffle_ps(v24, v24, 102);
  v24.m128_f32[0] = v24.m128_f32[0] + v25.m128_f32[0];
  v26 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
  v27 = (__m128)0x3F800000u;
  v24.m128_f32[0] = v24.m128_f32[0] + v26;
  v43 = __PAIR64__(LODWORD(v23), v42.m128_u32[0]);
  LODWORD(v28) = _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)).m128_u32[0];
  v44 = v28;
  if ( v42.m128_f32[0] != 0.0 )
  {
    v29 = (__m128)0x3F800000u;
    v29.m128_f32[0] = 1.0 / v42.m128_f32[0];
    v30 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v17);
    *(_QWORD *)&v39 = v30.m128_u64[0];
    v14.m128_i32[0] = v30.m128_i32[1];
    v13 = v30.m128_i32[0];
    v3 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  }
  if ( v23 != 0.0 )
  {
    v31 = (__m128)0x3F800000u;
    v31.m128_f32[0] = 1.0 / v23;
    v32 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v20);
    *(_QWORD *)&v40 = v32.m128_u64[0];
    v12.m128_i32[0] = v32.m128_i32[1];
    v11.m128_i32[0] = v32.m128_i32[0];
    v4 = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
  }
  if ( v28 != 0.0 )
  {
    v27.m128_f32[0] = 1.0 / v28;
    v33 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v45);
    *(_QWORD *)&v41 = v33.m128_u64[0];
    v10.m128_i32[0] = v33.m128_i32[1];
    v9.m128_i32[0] = v33.m128_i32[0];
    v6 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  }
  v34 = a1[13];
  v35 = a1[14];
  LODWORD(v41) = a1[12];
  *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(v35, v34);
  v42.m128_u64[0] = __PAIR64__(v14.m128_u32[0], v13);
  v42.m128_u64[1] = v3;
  *(_QWORD *)&v39 = __PAIR64__(v12.m128_u32[0], v11.m128_u32[0]);
  *((_QWORD *)&v39 + 1) = v4;
  *(_QWORD *)&v40 = __PAIR64__(v10.m128_u32[0], v9.m128_u32[0]);
  *((_QWORD *)&v40 + 1) = v6;
  HIDWORD(v41) = 1065353216;
  sub_18003AFEC((__int64)v46, (int *)&v42, &v39, &v40, &v41);
  if ( !sub_18003BF10((__int64)v46, (__int64)a2, a3, v36) )
    return 0;
  result = 1;
  v38 = _mm_mul_ps(
          _mm_movelh_ps((__m128)v43, (__m128)LODWORD(v44)),
          _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)));
  *a2 = v38.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
  return result;
}
