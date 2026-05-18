/*
 * XREFs of sub_18005A490 @ 0x18005A490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800397B8 @ 0x1800397B8 (sub_1800397B8.c)
 *     sub_18003982C @ 0x18003982C (sub_18003982C.c)
 *     sub_1800399D4 @ 0x1800399D4 (sub_1800399D4.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_1800507AC @ 0x1800507AC (sub_1800507AC.c)
 *     sub_1800507C8 @ 0x1800507C8 (sub_1800507C8.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_18005BA14 @ 0x18005BA14 (sub_18005BA14.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18005BB38 @ 0x18005BB38 (sub_18005BB38.c)
 *     sub_18005BB7C @ 0x18005BB7C (sub_18005BB7C.c)
 *     sub_18005BBFC @ 0x18005BBFC (sub_18005BBFC.c)
 *     sub_18005BC40 @ 0x18005BC40 (sub_18005BC40.c)
 *     sub_18005BD5C @ 0x18005BD5C (sub_18005BD5C.c)
 *     sub_18005D880 @ 0x18005D880 (sub_18005D880.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18005A490(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // xmm6_4
  int v14; // eax
  __int128 v15; // xmm14
  float v16; // xmm10_4
  int v17; // xmm9_4
  __m128i v18; // xmm6
  char v19; // r12
  __m128 v20; // xmm6
  float v21; // xmm4_4
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  double v24; // xmm5_8
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  float v29; // xmm9_4
  float v30; // xmm10_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  __int64 v33; // r9
  __int64 v34; // r8
  bool v35; // zf
  const char *v36; // rsi
  const char *v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm2
  __m128 v47; // xmm6
  unsigned __int32 v48; // xmm6_4
  __int64 v49; // rax
  __int64 result; // rax
  int v51; // [rsp+30h] [rbp-D8h]
  _BYTE v52[20]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-ACh]
  __m128i v54; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-50h]
  __int128 v61; // [rsp+C8h] [rbp-40h]
  __int128 v62; // [rsp+D8h] [rbp-30h]
  __m128i v63; // [rsp+E8h] [rbp-20h] BYREF
  char v64; // [rsp+F8h] [rbp-10h]
  _OWORD v65[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v66; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int64 v67; // [rsp+210h] [rbp+108h]

  sub_18005BA84(a1, &v57, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = sub_18008141C(a1);
    v6 = sub_180034870(v5);
    if ( !sub_18001F84C(a1 + 184) )
    {
      v55 = 0LL;
      sub_1800507E4(v6, v7, &v55);
    }
    if ( !sub_18001F84C(a1 + 216) )
    {
      v55 = 0LL;
      sub_1800507E4(v6, v8, &v55);
    }
    if ( !sub_18001F84C(a1 + 248) )
    {
      v59 = xmmword_180106A40;
      v60 = xmmword_180106A50;
      v61 = xmmword_180106A60;
      v62 = xmmword_180106A70;
      sub_1800507AC(v6);
    }
  }
  if ( sub_180011DD0((_QWORD *)(a1 + 136)) && sub_180011DD0((_QWORD *)(a1 + 152)) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 40LL))(*a3, &v56);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 32LL))(*a3, &v55);
    v11 = v9;
    v12 = v57;
    sub_1800397B8(v57, v10, v11);
    if ( *((_QWORD *)&v55 + 1) )
      sub_180010530(*((__int64 *)&v55 + 1));
    if ( *((_QWORD *)&v56 + 1) )
      sub_180010530(*((__int64 *)&v56 + 1));
    *(float *)&v13 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 80LL))(*a3);
    sub_1800399D4(v12, 0.0, 0.0, (float)v14, v13, 0, 1065353216);
  }
  else
  {
    v12 = v57;
    sub_1800397B8(v57, a1 + 136, a1 + 152);
  }
  v15 = xmmword_18019B790;
  v56 = xmmword_18019B790;
  sub_18005BA14(a1, &v66);
  *(_QWORD *)&v55 = 0LL;
  v16 = *(float *)&v66;
  DWORD2(v55) = (int)o_roundf();
  v17 = SHIDWORD(v66);
  HIDWORD(v55) = (int)o_roundf();
  sub_18005BB7C(a1, &v63);
  if ( v64 )
  {
    v54 = v63;
  }
  else
  {
    sub_18005BC40(a1, v52);
    v54.m128i_i32[0] = (int)o_roundf();
    v54.m128i_i32[1] = (int)o_roundf();
    v54.m128i_i32[2] = (int)o_roundf();
    v54.m128i_i32[3] = (int)o_roundf();
  }
  v18 = *(__m128i *)sub_18005BD5C(v52, &v54, &v55);
  v54 = v18;
  v19 = 0;
  sub_18005BC40(a1, v52);
  if ( (*(_DWORD *)(a1 + 440) & 0x1000000) != 0 )
  {
    v20 = (__m128)v53;
    sub_1800399D4(v12, 0.0, 0.0, v16, v17, *(int *)&v52[8], v53);
    if ( v16 == 0.0 || *(float *)&v17 == 0.0 )
      v19 = 1;
    v22 = 0LL;
    v22.m128_f32[0] = v21;
    v23 = 0LL;
    v23.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)v52, v22).m128_u64[0];
    v24 = *(double *)_mm_div_ps(v23, (__m128)v66).m128_u64;
    v25 = 0LL;
    v25.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v52[12], v20).m128_u64[0];
    v26 = 0LL;
    v26.m128_u64[0] = _mm_div_ps(v25, (__m128)v66).m128_u64[0];
    v27 = 0LL;
    *(double *)v27.m128_u64 = v24;
    v66 = _mm_sub_ps(v26, v27).m128_u64[0];
    v28 = 0LL;
    v28.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3F800000u, (__m128)0x3F800000u).m128_u64[0];
    v67 = _mm_sub_ps(_mm_add_ps(v27, v26), v28).m128_u64[0];
    *(_QWORD *)&v56 = v66;
    DWORD2(v56) = v67;
    *((float *)&v56 + 3) = -*((float *)&v67 + 1);
    v29 = *(float *)v52;
    LODWORD(v55) = (int)o_roundf();
    v30 = *(float *)&v52[4];
    DWORD1(v55) = (int)o_roundf();
    v31 = *(float *)&v52[12];
    DWORD2(v55) = (int)o_roundf();
    v32 = *(float *)&v52[16];
    HIDWORD(v55) = (int)o_roundf();
    sub_18005BD5C(v52, &v54, &v55);
    sub_18003982C(v12, (__int128 *)v52);
    v34 = (unsigned int)((v54.m128i_i32[2] - v54.m128i_i32[0]) * (v54.m128i_i32[3] - v54.m128i_i32[1]));
    v35 = (_DWORD)v34 == 0;
    v15 = v56;
  }
  else
  {
    v31 = *(float *)&v52[12];
    v29 = *(float *)v52;
    v32 = *(float *)&v52[16];
    v30 = *(float *)&v52[4];
    sub_1800399D4(
      v12,
      *(float *)v52,
      *(float *)&v52[4],
      *(float *)&v52[12] - *(float *)v52,
      COERCE_INT(*(float *)&v52[16] - *(float *)&v52[4]),
      *(int *)&v52[8],
      v53);
    *(__m128i *)v52 = v18;
    sub_18003982C(v12, (__int128 *)v52);
    v35 = (_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - _mm_cvtsi128_si32(v18))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4))) == 0;
  }
  if ( v29 == v31 || v30 == v32 )
    v19 = 1;
  v36 = (const char *)(a1 + 24);
  if ( v35 )
  {
    v37 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v37 = *(const char **)v36;
    sub_18001DB68(
      &stru_1801C8388,
      4,
      "Warning: camera '%s' scissor rectangle is empty -- no pixels will be rendered",
      v37);
  }
  if ( v19 )
  {
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v36 = *(const char **)v36;
    sub_18001DB68(
      &stru_1801C8388,
      4,
      "Warning: camera '%s' viewport rectangle is empty -- no pixels will be rendered",
      v36);
  }
  if ( (*(_BYTE *)(a1 + 465) & 1) != 0 && *(_QWORD *)(a1 + 136) )
  {
    v38 = *(_QWORD *)v12;
    *(_OWORD *)v52 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(v38 + 88))(v12, a1 + 136, v52);
  }
  LOBYTE(v34) = *(_BYTE *)(a1 + 465);
  if ( (v34 & 6) != 0 && *(_QWORD *)(a1 + 152) )
  {
    LOBYTE(v33) = (v34 & 4) != 0;
    LOBYTE(v34) = (v34 & 2) != 0;
    LOBYTE(v51) = *(_BYTE *)(a1 + 464);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, int))(*(_QWORD *)v12 + 104LL))(
      v12,
      a1 + 152,
      v34,
      v33,
      *(_DWORD *)(a1 + 312),
      v51);
  }
  v39 = sub_18008141C(a1);
  v40 = sub_180034870(v39);
  v41 = sub_18004330C(a1, v52);
  sub_18003C3B4(*v41, (__int64)&v54);
  if ( *(_QWORD *)&v52[8] )
    sub_180010530(*(__int64 *)&v52[8]);
  *(_QWORD *)&v56 = v54.m128i_i64[0];
  *((_QWORD *)&v56 + 1) = v54.m128i_u32[2] | 0x3F80000000000000LL;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v42 = sub_18004330C(a1, v52);
    v43 = sub_18003C04C(*v42, (__int64)v65);
    v44 = _mm_xor_ps((__m128)*(unsigned int *)(v43 + 36), (__m128)xmmword_18019BAB0);
    v45 = _mm_xor_ps((__m128)*(unsigned int *)(v43 + 32), (__m128)xmmword_18019BAB0);
    *(float *)&v54.m128i_i32[2] = -*(float *)(v43 + 40);
    v46 = 0LL;
    v46.m128_u64[0] = _mm_unpacklo_ps(v45, v44).m128_u64[0];
    v47 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v46, (__m128)v54.m128i_u32[2]));
    v54.m128i_i64[0] = v47.m128_u64[0];
    v48 = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
    if ( *(_QWORD *)&v52[8] )
      sub_180010530(*(__int64 *)&v52[8]);
    *(_QWORD *)&v56 = v54.m128i_i64[0];
    *((_QWORD *)&v56 + 1) = v48;
  }
  *(_OWORD *)v52 = v56;
  sub_180050854(v40);
  *(_OWORD *)v52 = v15;
  sub_180050854(v40);
  sub_1800507C8(v40);
  v59 = xmmword_18019B770;
  v60 = xmmword_18019B780;
  v61 = xmmword_18019B7C0;
  v62 = xmmword_18019BA00;
  v49 = sub_18005BBFC(a1, v65);
  sub_18005D880(v49, &v59);
  v65[0] = v59;
  v65[1] = v60;
  v65[2] = v61;
  v65[3] = v62;
  sub_1800507AC(v40);
  sub_18005BB38(a1, &v66);
  *(_QWORD *)&v55 = v66;
  *((float *)&v55 + 2) = 1.0 / *(float *)&v66;
  *((float *)&v55 + 3) = 1.0 / *((float *)&v66 + 1);
  *(_OWORD *)v52 = v55;
  result = sub_180050854(v40);
  if ( v58 )
    return sub_180010530(v58);
  return result;
}
