/*
 * XREFs of sub_18005E124 @ 0x18005E124
 * Callers:
 *     sub_18005BA14 @ 0x18005BA14 (sub_18005BA14.c)
 *     sub_18005BB38 @ 0x18005BB38 (sub_18005BB38.c)
 *     sub_18005BC40 @ 0x18005BC40 (sub_18005BC40.c)
 *     sub_18005DC48 @ 0x18005DC48 (sub_18005DC48.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_1800189B4 @ 0x1800189B4 (sub_1800189B4.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     sub_18003BE1C @ 0x18003BE1C (sub_18003BE1C.c)
 *     sub_18003BE8C @ 0x18003BE8C (sub_18003BE8C.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_18005BAE4 @ 0x18005BAE4 (sub_18005BAE4.c)
 *     sub_18005BCD0 @ 0x18005BCD0 (sub_18005BCD0.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

char __fastcall sub_18005E124(__int64 a1)
{
  _QWORD *v2; // rax
  bool v3; // di
  _QWORD *v4; // r9
  __int64 *v5; // r8
  __int64 *v6; // r9
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // eax
  __int64 *v10; // r8
  __int64 v11; // rcx
  float v12; // xmm3_4
  float v13; // xmm4_4
  int v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  __m128 v19; // xmm3
  float v20; // xmm1_4
  __m128 v21; // xmm5
  __m128 v22; // xmm2
  __m128 v23; // xmm6
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  float v26; // xmm0_4
  __int128 *v27; // rax
  _OWORD *v28; // r9
  __int64 v29; // rcx
  int v30; // r10d
  int v31; // r11d
  __int32 v33; // [rsp+28h] [rbp-E0h] BYREF
  float v34; // [rsp+2Ch] [rbp-DCh]
  __int64 v35; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B0h]
  __int128 v40; // [rsp+68h] [rbp-A0h]
  __int128 v41; // [rsp+78h] [rbp-90h]
  __int128 v42[4]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v43[5]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+128h] [rbp+20h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 4) == 0 || sub_18005BDF4(a1, 4) )
    return 0;
  v2 = sub_18004330C(a1, &v36);
  v3 = sub_180011DE0(v2);
  if ( v37 )
    sub_180010530(v37);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 1596) = 0;
    *(_DWORD *)(a1 + 1600) = 0;
    *(_DWORD *)(a1 + 1604) = 0;
    *(_DWORD *)(a1 + 1608) = 0;
    if ( !sub_180011DD0((_QWORD *)(a1 + 136)) || !sub_180011DD0((_QWORD *)(a1 + 152)) )
    {
      if ( sub_180011DE0(v4) )
      {
        sub_18002650C(*v6, &v44);
        v7 = *(float *)&v44;
        v8 = *((float *)&v44 + 1);
        *(_DWORD *)(a1 + 1596) = v44;
      }
      else
      {
        v9 = sub_18005BCD0(*v5);
        v11 = *v10;
        v7 = (float)v9;
        *(float *)(a1 + 1596) = (float)v9;
        v8 = (float)(int)sub_18005BAE4(v11);
      }
      *(float *)(a1 + 1600) = v8;
      *(float *)(a1 + 1608) = v8;
      *(float *)(a1 + 1604) = v7;
    }
    if ( *(_DWORD *)(a1 + 360) )
    {
      v12 = 1.0;
      v13 = 1.0;
    }
    else
    {
      v12 = *(float *)(a1 + 1604);
      v13 = *(float *)(a1 + 1608);
    }
    v14 = *(_DWORD *)(a1 + 392);
    v34 = 0.0;
    v36 = 0LL;
    v15 = v12 * *(float *)(a1 + 344);
    v16 = v13 * *(float *)(a1 + 348);
    v33 = 0;
    *(float *)(a1 + 1572) = v15;
    *(_DWORD *)(a1 + 1580) = v14;
    *(float *)(a1 + 1576) = v16;
    v17 = v12 * *(float *)(a1 + 352);
    v18 = v13 * *(float *)(a1 + 356);
    *(_DWORD *)(a1 + 1592) = *(_DWORD *)(a1 + 396);
    *(float *)(a1 + 1584) = v17;
    v19 = 0LL;
    *(float *)(a1 + 1588) = v18;
    v20 = *(float *)(a1 + 392);
    v21 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1572), (__m128)*(unsigned int *)(a1 + 1580));
    v22 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1584), (__m128)*(unsigned int *)(a1 + 1592));
    v23 = _mm_sub_ps(v22, v21);
    v24 = _mm_add_ps(v22, v21);
    LODWORD(v37) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    v19.m128_u64[0] = v24.m128_u64[0];
    v25 = 0LL;
    v19.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v19, (__m128)(unsigned int)v37), (__m128)xmmword_18019B990).m128_u64[0];
    v25.m128_u64[0] = v23.m128_u64[0];
    LODWORD(v35) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    v25.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v25, (__m128)(unsigned int)v35), (__m128)xmmword_18019B990).m128_u64[0];
    v26 = *(float *)(a1 + 396) - v20;
    *(float *)&v37 = v20;
    v36 = v19.m128_u64[0];
    v33 = v25.m128_i32[0];
    *(float *)&v35 = v26;
    v34 = v25.m128_f32[1] * -1.0;
    sub_18003BE8C((__int64)v43, &v36);
    v27 = (__int128 *)sub_18003BE1C((__int64)&v38, (unsigned int *)&v33);
    sub_180017E18((__int64)v42, v27, v28);
    sub_1800189B4(v42, (__int64)v43);
    v38 = v42[0];
    v39 = v42[1];
    v40 = v42[2];
    v41 = v42[3];
    sub_18005D514(a1, 2, 3, &v38);
    v38 = v43[0];
    v39 = v43[1];
    v40 = v43[2];
    v41 = v43[3];
    sub_18005D514(v29, v31, v30, &v38);
  }
  *(_DWORD *)(a1 + 544) &= ~4u;
  return 1;
}
