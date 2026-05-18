/*
 * XREFs of sub_1800B7A1C @ 0x1800B7A1C
 * Callers:
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_1800595B4 @ 0x1800595B4 (sub_1800595B4.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800B7A1C(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __m128 v5; // xmm7
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  _DWORD *v20; // r15
  int v21; // xmm2_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  _DWORD *v24; // rcx
  int v25; // xmm2_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  _DWORD *v28; // rcx
  int v29; // xmm3_4
  int v30; // xmm1_4
  int v31; // xmm0_4
  _DWORD *v32; // rcx
  int v33; // xmm2_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  _DWORD *v36; // rcx
  int v37; // xmm3_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  _DWORD *v40; // rcx
  int v41; // xmm2_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  _DWORD *v44; // rcx
  int v45; // xmm3_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  _DWORD *v48; // rcx
  int v49; // xmm2_4
  int v50; // xmm1_4
  int v51; // xmm0_4
  _DWORD *v52; // rcx
  int v53; // xmm3_4
  int v54; // xmm1_4
  int v55; // xmm0_4
  _DWORD *v56; // rcx
  __int64 v57; // rbx
  __m128 v58; // xmm6
  __m128 *v59; // rax
  __m128 v60; // xmm3
  __m128 v61; // xmm0
  __m128 v62; // xmm3
  float *v63; // rax
  _QWORD v65[2]; // [rsp+30h] [rbp-51h] BYREF
  _QWORD v66[2]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v67; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v68[5]; // [rsp+60h] [rbp-21h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v5.m128_i32[0] = 0;
  v6 = 0.0;
  v7 = 0.0;
  v8 = 1.0;
  v9 = *a2;
  if ( *a2 == a2[1] )
  {
    v10 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v10 + 192) = 0LL;
    *(_QWORD *)(v10 + 200) = 0LL;
    v11 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    v12 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v12 + 224) = 0LL;
    *(_QWORD *)(v12 + 232) = 0LL;
    v13 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    v14 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v14 + 256) = 0LL;
    *(_QWORD *)(v14 + 264) = 0LL;
    v15 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v15 + 272) = 0LL;
    *(_QWORD *)(v15 + 280) = 0LL;
    v16 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_QWORD *)(v16 + 296) = 0LL;
    v17 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v17 + 304) = 0LL;
    *(_QWORD *)(v17 + 312) = 0LL;
    v18 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v18 + 320) = 0LL;
    *(_QWORD *)(v18 + 328) = 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(v9 + 8);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = *(_QWORD *)(v9 + 8);
    }
    v20 = *(_DWORD **)v9;
    v66[0] = v20;
    v66[1] = v19;
    v21 = v20[67];
    v22 = v20[66];
    v23 = v20[65];
    v24 = *(_DWORD **)(a3 + 64);
    v24[48] = v20[64];
    v24[49] = v23;
    v24[50] = v22;
    v24[51] = v21;
    v25 = v20[71];
    v26 = v20[70];
    v27 = v20[69];
    v28 = *(_DWORD **)(a3 + 64);
    v28[52] = v20[68];
    v28[53] = v27;
    v28[54] = v26;
    v28[55] = v25;
    v29 = v20[75];
    v30 = v20[74];
    v31 = v20[73];
    v32 = *(_DWORD **)(a3 + 64);
    v32[56] = v20[72];
    v32[57] = v31;
    v32[58] = v30;
    v32[59] = v29;
    v33 = v20[79];
    v34 = v20[78];
    v35 = v20[77];
    v36 = *(_DWORD **)(a3 + 64);
    v36[60] = v20[76];
    v36[61] = v35;
    v36[62] = v34;
    v36[63] = v33;
    v37 = v20[83];
    v38 = v20[82];
    v39 = v20[81];
    v40 = *(_DWORD **)(a3 + 64);
    v40[64] = v20[80];
    v40[65] = v39;
    v40[66] = v38;
    v40[67] = v37;
    v41 = v20[87];
    v42 = v20[86];
    v43 = v20[85];
    v44 = *(_DWORD **)(a3 + 64);
    v44[68] = v20[84];
    v44[69] = v43;
    v44[70] = v42;
    v44[71] = v41;
    v45 = v20[91];
    v46 = v20[90];
    v47 = v20[89];
    v48 = *(_DWORD **)(a3 + 64);
    v48[72] = v20[88];
    v48[73] = v47;
    v48[74] = v46;
    v48[75] = v45;
    v49 = v20[95];
    v50 = v20[94];
    v51 = v20[93];
    v52 = *(_DWORD **)(a3 + 64);
    v52[76] = v20[92];
    v52[77] = v51;
    v52[78] = v50;
    v52[79] = v49;
    v53 = v20[99];
    v54 = v20[98];
    v55 = v20[97];
    v56 = *(_DWORD **)(a3 + 64);
    v56[80] = v20[96];
    v56[81] = v55;
    v56[82] = v54;
    v56[83] = v53;
    v57 = *(_QWORD *)sub_18004871C((__int64)v20, &v67);
    sub_180043668(v57);
    v58 = (__m128)_mm_loadu_si128((const __m128i *)(v57 + 156));
    v59 = (__m128 *)sub_1800595B4((__int64)v20, v68);
    v60 = _mm_shuffle_ps(*v59, *v59, 27);
    v61 = _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v60);
    v62 = _mm_shuffle_ps(v60, v60, 177);
    v5 = _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v58, v58, 85), v62), (__m128)xmmword_18012A4B0),
             _mm_mul_ps(
               _mm_mul_ps(_mm_shuffle_ps(v58, v58, 170), _mm_shuffle_ps(v62, v62, 27)),
               (__m128)xmmword_18012A4A0)),
           _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v58, v58, 255), *v59), _mm_mul_ps(v61, (__m128)xmmword_18012A490)));
    LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
    sub_180010910((__int64)&v67);
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v65[0] = *a1;
    *a1 = v20;
    v65[1] = a1[1];
    a1[1] = v19;
    sub_180010910((__int64)v65);
    sub_180010910((__int64)v66);
  }
  v63 = *(float **)(a3 + 64);
  v63[84] = v5.m128_f32[0] * 1.4142135;
  v63[85] = v6 * 1.4142135;
  v63[86] = v7 * 1.4142135;
  v63[87] = v8 * 1.4142135;
  return a1;
}
