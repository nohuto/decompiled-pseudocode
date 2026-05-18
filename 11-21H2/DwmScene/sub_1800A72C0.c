/*
 * XREFs of sub_1800A72C0 @ 0x1800A72C0
 * Callers:
 *     <none>
 * Callees:
 *     _o_atan2f @ 0x18000C000 (_o_atan2f.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_180040E84 @ 0x180040E84 (sub_180040E84.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_1800430F0 @ 0x1800430F0 (sub_1800430F0.c)
 *     sub_180043184 @ 0x180043184 (sub_180043184.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800A7230 @ 0x1800A7230 (sub_1800A7230.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A72C0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rsi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __m128 **v9; // rcx
  __m128 v10; // xmm4
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  float v18; // xmm8_4
  __m128 *v19; // rbx
  __m128 v20; // xmm7
  __m128 v21; // xmm2
  __m128 v22; // xmm6
  __m128 v23; // xmm0
  __m128 v24; // xmm7
  unsigned __int64 *v25; // r8
  unsigned __int64 *v26; // rdx
  int v27; // xmm6_4
  __m128 v28; // xmm7
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  unsigned __int64 v32; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int32 v39; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v40; // [rsp+70h] [rbp-98h]
  unsigned __int32 v41; // [rsp+80h] [rbp-88h]
  __int128 v42; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int32 v46; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-30h]
  unsigned int v51; // [rsp+E0h] [rbp-28h]
  unsigned __int32 v52; // [rsp+F0h] [rbp-18h]
  __m128 *v53[2]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v54; // [rsp+108h] [rbp+0h] BYREF
  int v55; // [rsp+110h] [rbp+8h]
  unsigned __int64 v56; // [rsp+118h] [rbp+10h] BYREF
  int v57; // [rsp+120h] [rbp+18h]
  unsigned __int64 v58; // [rsp+128h] [rbp+20h] BYREF
  int v59; // [rsp+130h] [rbp+28h]
  unsigned int v60; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v61; // [rsp+140h] [rbp+38h]
  unsigned __int64 v62; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int32 v63; // [rsp+150h] [rbp+48h]
  unsigned __int64 v64; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int32 v65; // [rsp+160h] [rbp+58h]
  __int128 v66; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int32 v67; // [rsp+180h] [rbp+78h]

  v42 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v5 = *(_QWORD *)(a1 + 56);
        v42 = *(_OWORD *)(a1 + 56);
        goto LABEL_6;
      }
    }
  }
  v5 = v42;
LABEL_6:
  sub_180043668(v5);
  v66 = 0LL;
  v6 = *(_QWORD *)(v5 + 64);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v66 = *(_OWORD *)(v5 + 56);
        break;
      }
    }
    v5 = v42;
  }
  sub_180040E84(v5, v53);
  v54 = *(_QWORD *)(a1 + 112);
  v55 = *(_DWORD *)(a1 + 120);
  sub_1800430F0(v53[0], (__int64)&v48, &v54);
  v56 = *(_QWORD *)(a1 + 124);
  v57 = *(_DWORD *)(a1 + 132);
  sub_1800430F0(v53[0], (__int64)&v32, &v56);
  if ( sub_1800122B0((_QWORD *)(a1 + 96)) || !*(_DWORD *)(a1 + 88) )
  {
    v38 = *(_QWORD *)(a1 + 112);
    v39 = *(_DWORD *)(a1 + 120);
    sub_18001380C(v5, &v38);
    v36 = 0x3F80000000000000LL;
    LODWORD(v37) = 0;
    v34 = v32;
    LODWORD(v35) = v33;
    sub_1800417D8(v5, &v34, &v36);
    *(_QWORD *)(a1 + 140) = v32;
    *(_DWORD *)(a1 + 148) = v33;
    goto LABEL_22;
  }
  v58 = 0LL;
  v59 = 1065353216;
  sub_180043184(*v9, (__int64)&v60, &v58);
  v51 = v61;
  v10 = 0LL;
  v10.m128_u64[0] = _mm_unpacklo_ps((__m128)v60, (__m128)0LL).m128_u64[0];
  v11 = _mm_movelh_ps(v10, (__m128)v61);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_shuffle_ps(v12, v12, 153);
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v14 = _mm_shuffle_ps(v12, v12, 0);
  v15 = _mm_sqrt_ps(v14);
  v16 = _mm_cmpneq_ps(v14, (__m128)xmmword_1801282E0);
  v17 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v11, v15), _mm_cmpneq_ps(v15, (__m128)0LL)), v16),
          _mm_andnot_ps(v16, (__m128)xmmword_180128330));
  v50 = v17.m128_u64[0];
  v13.m128_f32[0] = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
  o_atan2f();
  o_atan2f();
  v18 = (float)(v13.m128_f32[0] - 1.0) + *(float *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    v19 = v53[0];
    sub_180043668((__int64)v53[0]);
    v67 = v19[9].m128_u32[2];
    v20 = _mm_movelh_ps((__m128)v19[9].m128_u64[0], (__m128)v67);
    v21 = _mm_sub_ps(_mm_movelh_ps((__m128)v32, (__m128)(unsigned int)v33), v20);
    v52 = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    v22 = _mm_sub_ps(_mm_movelh_ps((__m128)v48, (__m128)v49), v20);
    v40 = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    v62 = v21.m128_u64[0];
    v63 = v52;
    sub_1800A7230((__int64)&v34, (__int64)&v62, v18);
    v64 = v22.m128_u64[0];
    v65 = v40;
    sub_1800A7230((__int64)&v43, (__int64)&v64, v18);
    v23 = _mm_add_ps(v20, _mm_movelh_ps((__m128)v43, (__m128)v44));
    v41 = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    v45 = v23.m128_u64[0];
    v46 = v41;
    sub_18001380C(v5, &v45);
    v24 = _mm_add_ps(v20, _mm_movelh_ps((__m128)v34, (__m128)(unsigned int)v35));
    v47 = v24.m128_u64[0];
    *(_DWORD *)(a1 + 140) = v24.m128_i32[0];
    *(_DWORD *)(a1 + 144) = HIDWORD(v47);
    *(_DWORD *)(a1 + 148) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    v36 = 0x3F80000000000000LL;
    LODWORD(v37) = 0;
    v38 = *(_QWORD *)(a1 + 140);
    v39 = *(_DWORD *)(a1 + 148);
    v25 = &v36;
    v26 = &v38;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 88) != 1 )
      goto LABEL_22;
    v27 = v33;
    v28 = _mm_movelh_ps((__m128)v32, (__m128)(unsigned int)v33);
    v29 = _mm_sub_ps(_mm_movelh_ps((__m128)v48, (__m128)v49), v28);
    v41 = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
    v38 = v29.m128_u64[0];
    v39 = v41;
    sub_1800A7230((__int64)&v36, (__int64)&v38, v18);
    *(_QWORD *)(a1 + 140) = v32;
    *(_DWORD *)(a1 + 148) = v27;
    v30 = _mm_add_ps(v28, _mm_movelh_ps((__m128)v36, (__m128)(unsigned int)v37));
    v40 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    v34 = v30.m128_u64[0];
    LODWORD(v35) = v40;
    sub_18001380C(v5, &v34);
    v45 = 0x3F80000000000000LL;
    v46 = 0;
    v43 = *(_QWORD *)(a1 + 140);
    v44 = *(_DWORD *)(a1 + 148);
    v25 = (unsigned __int64 *)&v45;
    v26 = &v43;
  }
  sub_1800417D8(v5, v26, v25);
LABEL_22:
  sub_180010910((__int64)v53);
  sub_180010910((__int64)&v66);
  return sub_180010910((__int64)&v42);
}
