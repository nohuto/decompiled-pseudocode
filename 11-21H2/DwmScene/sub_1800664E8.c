/*
 * XREFs of sub_1800664E8 @ 0x1800664E8
 * Callers:
 *     sub_180063B74 @ 0x180063B74 (sub_180063B74.c)
 *     sub_180063C98 @ 0x180063C98 (sub_180063C98.c)
 *     sub_180063DA0 @ 0x180063DA0 (sub_180063DA0.c)
 *     sub_180065FB8 @ 0x180065FB8 (sub_180065FB8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180063EA8 @ 0x180063EA8 (sub_180063EA8.c)
 *     sub_180065944 @ 0x180065944 (sub_180065944.c)
 */

char __fastcall sub_1800664E8(__int64 a1)
{
  _QWORD *v2; // rax
  bool v3; // bl
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // xmm0_4
  int v9; // xmm1_4
  __int64 v10; // rdx
  __int64 v11; // rax
  int *v12; // rcx
  int v13; // eax
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm4_4
  int v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  __m128 v26; // xmm3
  __m128 v27; // xmm7
  __m128 v28; // xmm5
  __m128 v29; // xmm2
  __m128 v30; // xmm6
  __m128 v31; // xmm2
  __m128 v32; // xmm0
  __m128 v33; // xmm2
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  __m128 v38; // xmm7
  __int128 v39; // xmm8
  __int128 v40; // xmm9
  __int128 v41; // xmm1
  __int128 v42; // xmm10
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __m128 v45; // xmm0
  __int64 v46; // rcx
  int v47; // r10d
  int v48; // r11d
  __m128 v50; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v52; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v53; // [rsp+50h] [rbp-B0h]
  __int128 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v57[48]; // [rsp+90h] [rbp-70h]
  _BYTE v58[64]; // [rsp+C0h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 4) == 0 || sub_180063EA8(a1, 4) )
    return 0;
  v2 = sub_18004871C(a1, &v50);
  v3 = sub_1800122C0(v2);
  sub_180010910((__int64)&v50);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 1596) = 0;
    *(_DWORD *)(a1 + 1600) = 0;
    *(_DWORD *)(a1 + 1604) = 0;
    *(_DWORD *)(a1 + 1608) = 0;
    if ( !sub_1800122B0((_QWORD *)(a1 + 136)) || !sub_1800122B0((_QWORD *)(a1 + 152)) )
    {
      if ( sub_1800122C0(v4) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v5 + 136LL);
        if ( v6 )
        {
          v7 = sub_18005E244(v6, v51);
        }
        else
        {
          v51[0] = 0LL;
          v7 = v51;
        }
        v8 = *(_DWORD *)v7;
        v9 = *((_DWORD *)v7 + 1);
        *(_DWORD *)(a1 + 1596) = *(_DWORD *)v7;
        *(_DWORD *)(a1 + 1600) = v9;
        *(_DWORD *)(a1 + 1604) = v8;
        *(_DWORD *)(a1 + 1608) = v9;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 152);
        v11 = *(_QWORD *)(v10 + 112);
        if ( v11 && (v12 = *(int **)(v11 + 128)) != 0LL )
          v13 = *v12;
        else
          v13 = 0;
        v14 = (float)v13;
        *(float *)(a1 + 1596) = (float)v13;
        v15 = *(_QWORD *)(v10 + 112);
        if ( v15 && (v16 = *(_QWORD *)(v15 + 128)) != 0 )
          v17 = *(_DWORD *)(v16 + 4);
        else
          v17 = 0;
        *(float *)(a1 + 1604) = v14;
        *(float *)(a1 + 1600) = (float)v17;
        *(_DWORD *)(a1 + 1608) = *(_DWORD *)(a1 + 1600);
      }
    }
    if ( *(_DWORD *)(a1 + 360) )
    {
      v18 = 1.0;
      v19 = 1.0;
    }
    else
    {
      v18 = *(float *)(a1 + 1604);
      v19 = *(float *)(a1 + 1608);
    }
    v20 = *(_DWORD *)(a1 + 392);
    v21 = v18 * *(float *)(a1 + 344);
    v22 = v19;
    v50.m128_u64[0] = 0LL;
    v23 = v18 * *(float *)(a1 + 352);
    v24 = v19 * *(float *)(a1 + 356);
    v50.m128_u64[0] = 0LL;
    v25 = v22 * *(float *)(a1 + 348);
    *(float *)(a1 + 1572) = v21;
    *(_DWORD *)(a1 + 1580) = v20;
    *(float *)(a1 + 1576) = v25;
    *(_DWORD *)(a1 + 1592) = *(_DWORD *)(a1 + 396);
    *(float *)(a1 + 1584) = v23;
    v26 = 0LL;
    *(float *)(a1 + 1588) = v24;
    v27 = (__m128)*(unsigned int *)(a1 + 392);
    v28 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1572), (__m128)*(unsigned int *)(a1 + 1580));
    v29 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1584), (__m128)*(unsigned int *)(a1 + 1592));
    v30 = _mm_sub_ps(v29, v28);
    v31 = _mm_add_ps(v29, v28);
    *(_OWORD *)&v57[8] = 0LL;
    *(_OWORD *)&v58[24] = 0LL;
    v26.m128_u64[0] = v31.m128_u64[0];
    v32 = (__m128)_mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    v33 = 0LL;
    v26.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v26, v32), (__m128)xmmword_1801BD910).m128_u64[0];
    v33.m128_u64[0] = v30.m128_u64[0];
    v50.m128_i32[2] = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    *(_DWORD *)v57 = 0;
    *(_OWORD *)&v57[28] = 0LL;
    v50.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v33, (__m128)v50.m128_u32[2]), (__m128)xmmword_1801BD910).m128_u64[0];
    *(_OWORD *)&v58[4] = 0LL;
    *(_OWORD *)&v58[44] = 0LL;
    v34 = (__m128)v50.m128_u32[1];
    v34.m128_f32[0] = v50.m128_f32[1] * -1.0;
    v51[0] = v26.m128_u64[0];
    v35 = _mm_movelh_ps((__m128)v26.m128_u64[0], _mm_unpacklo_ps(v27, (__m128)0x3F800000u));
    v56 = xmmword_180128360;
    v36 = _mm_unpacklo_ps((__m128)0LL, v34);
    v37 = (__m128)*(unsigned int *)(a1 + 396);
    v37.m128_f32[0] = v37.m128_f32[0] - v27.m128_f32[0];
    *(__m128 *)&v57[32] = v35;
    *(_OWORD *)v57 = xmmword_1801282F0;
    *(__m128 *)&v58[32] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0LL, v37), (__m128)xmmword_1801BD710);
    *(_OWORD *)&v57[16] = xmmword_180128390;
    *(_OWORD *)v58 = v50.m128_u32[0];
    *(__m128 *)&v58[16] = v36;
    *(_OWORD *)&v58[48] = xmmword_1801284B0;
    sub_180018EB0(&v52, (__m128 *)v58, (__m128 *)&v56);
    v38 = v52;
    v39 = v53;
    v40 = v54;
    v41 = v53;
    v42 = v55;
    v43 = v54;
    v44 = v55;
    v45 = sub_18001C880(&v50, *(double *)&v53, *(double *)&v54, *(double *)&v55);
    v52 = v38;
    v53 = v39;
    v54 = v40;
    v55 = v42;
    sub_180065944(a1, 2, 3, &v52);
    v52 = v45;
    v53 = v41;
    v54 = v43;
    v55 = v44;
    sub_180065944(v46, v48, v47, &v52);
  }
  *(_DWORD *)(a1 + 544) &= ~4u;
  return 1;
}
