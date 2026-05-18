/*
 * XREFs of sub_180062060 @ 0x180062060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_18003DA04 @ 0x18003DA04 (sub_18003DA04.c)
 *     sub_18003DA78 @ 0x18003DA78 (sub_18003DA78.c)
 *     sub_18003DC20 @ 0x18003DC20 (sub_18003DC20.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_180057DD4 @ 0x180057DD4 (sub_180057DD4.c)
 *     sub_180057DF0 @ 0x180057DF0 (sub_180057DF0.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_180063B74 @ 0x180063B74 (sub_180063B74.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180063C98 @ 0x180063C98 (sub_180063C98.c)
 *     sub_180063CDC @ 0x180063CDC (sub_180063CDC.c)
 *     sub_180063D5C @ 0x180063D5C (sub_180063D5C.c)
 *     sub_180063DA0 @ 0x180063DA0 (sub_180063DA0.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180062060(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // xmm6_4
  int v14; // eax
  __int128 v15; // xmm13
  float v16; // xmm9_4
  int v17; // r12d
  int v18; // xmm6_4
  int v19; // r15d
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int v24; // ebx
  int v25; // edi
  __m128 v26; // xmm11
  float v27; // xmm4_4
  __m128 v28; // xmm1
  __m128 v29; // xmm3
  double v30; // xmm5_8
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  float v35; // xmm6_4
  int v36; // ebx
  float v37; // xmm9_4
  int v38; // esi
  float v39; // xmm11_4
  int v40; // edi
  float v41; // xmm12_4
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // r15d
  int v48; // r12d
  int v49; // r15d
  char v50; // bl
  const char *v51; // r9
  const char *v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rax
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __m128 v61; // xmm2
  __m128 v62; // xmm6
  __int64 v63; // rax
  __m128 v64; // xmm0
  __m128 v65; // xmm1
  __m128 v66; // xmm3
  __m128 v67; // xmm4
  __m128 v68; // xmm0
  __m128 v69; // xmm2
  int v71; // [rsp+30h] [rbp-D8h]
  char v72; // [rsp+48h] [rbp-C0h]
  __int128 v73; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v75; // [rsp+78h] [rbp-90h]
  int v76; // [rsp+88h] [rbp-80h]
  int v77; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v78; // [rsp+90h] [rbp-78h] BYREF
  int v79; // [rsp+98h] [rbp-70h]
  unsigned __int64 v80; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v81; // [rsp+A4h] [rbp-64h]
  __int64 v82[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v83; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v84; // [rsp+C8h] [rbp-40h]
  __m128 v85; // [rsp+D8h] [rbp-30h]
  __m128 v86; // [rsp+E8h] [rbp-20h]
  __int128 v87; // [rsp+F8h] [rbp-10h] BYREF
  char v88; // [rsp+108h] [rbp+0h]

  sub_180063BE4(a1, v82, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = sub_18008E70C(a1);
    v6 = sub_180037388(v5);
    v7 = v6;
    if ( *(_QWORD *)(a1 + 200) )
    {
      v74 = 0LL;
      sub_180057E0C(v6, a1 + 184, &v74);
      sub_180010910((__int64)&v74);
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v74 = 0LL;
      sub_180057E0C(v7, a1 + 216, &v74);
      sub_180010910((__int64)&v74);
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v83 = (__m128)xmmword_1801289D0;
      v84 = (__m128)xmmword_1801289E0;
      v85 = (__m128)xmmword_1801289F0;
      v86 = (__m128)xmmword_180128A00;
      sub_180057DD4(v7);
    }
  }
  v8 = (_QWORD *)(a1 + 136);
  if ( sub_1800122B0((_QWORD *)(a1 + 136)) && sub_1800122B0(v9) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 40LL))(*a3, &v73);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 32LL))(*a3, &v74);
    v12 = v82[0];
    sub_18003DA04(v82[0], v11, v10);
    sub_180010910((__int64)&v74);
    sub_180010910((__int64)&v73);
    *(float *)&v13 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 80LL))(*a3);
    sub_18003DC20(v12, 0.0, 0.0, (float)v14, v13, 0, 1065353216);
  }
  else
  {
    v12 = v82[0];
    sub_18003DA04(v82[0], a1 + 136, (__int64)v9);
  }
  v15 = xmmword_1801BD750;
  v74 = xmmword_1801BD750;
  sub_180063B74(a1, &v73);
  v16 = *(float *)&v73;
  v17 = (int)o_roundf();
  v18 = SDWORD1(v73);
  v19 = (int)o_roundf();
  sub_180063CDC(a1, &v87);
  if ( v88 )
  {
    v75 = v87;
    v20 = HIDWORD(v87);
    v21 = DWORD2(v87);
    v22 = DWORD1(v87);
    v23 = v87;
  }
  else
  {
    sub_180063DA0(a1, &v78);
    v23 = (int)o_roundf();
    v77 = (int)o_roundf();
    v76 = (int)o_roundf();
    v20 = (int)o_roundf();
    v21 = v76;
    v22 = v77;
  }
  v24 = 0;
  if ( v23 >= 0 )
    v24 = v23;
  if ( v17 < v24 )
    v24 = v17;
  v77 = v24;
  v25 = 0;
  if ( v22 >= 0 )
    v25 = v22;
  if ( v19 < v25 )
    v25 = v19;
  v76 = v25;
  if ( v17 >= v21 )
    v17 = v21;
  if ( v17 < 0 )
    v17 = 0;
  if ( v19 >= v20 )
    v19 = v20;
  if ( v19 < 0 )
    v19 = 0;
  v72 = 0;
  sub_180063DA0(a1, &v78);
  if ( (*(_DWORD *)(a1 + 440) & 0x1000000) != 0 )
  {
    v26 = (__m128)v81;
    sub_18003DC20(v12, 0.0, 0.0, v16, v18, v79, v81);
    if ( v16 == 0.0 || *(float *)&v18 == 0.0 )
      v72 = 1;
    v28 = 0LL;
    v28.m128_f32[0] = v27;
    v29 = 0LL;
    v29.m128_u64[0] = _mm_movelh_ps((__m128)v78, v28).m128_u64[0];
    v30 = *(double *)_mm_div_ps(v29, (__m128)(unsigned __int64)v73).m128_u64;
    v31 = 0LL;
    v31.m128_u64[0] = _mm_movelh_ps((__m128)v80, v26).m128_u64[0];
    v32 = 0LL;
    v32.m128_u64[0] = _mm_div_ps(v31, (__m128)(unsigned __int64)v73).m128_u64[0];
    v33 = 0LL;
    *(double *)v33.m128_u64 = v30;
    *(_QWORD *)&v75 = _mm_sub_ps(v32, v33).m128_u64[0];
    v34 = 0LL;
    v34.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3F800000u, (__m128)0x3F800000u).m128_u64[0];
    *(_QWORD *)&v73 = _mm_sub_ps(_mm_add_ps(v33, v32), v34).m128_u64[0];
    *(_QWORD *)&v74 = v75;
    DWORD2(v74) = v73;
    *((float *)&v74 + 3) = -*((float *)&v73 + 1);
    v35 = *(float *)&v78;
    v36 = (int)o_roundf();
    v37 = *((float *)&v78 + 1);
    v38 = (int)o_roundf();
    v39 = *(float *)&v80;
    v40 = (int)o_roundf();
    v41 = *((float *)&v80 + 1);
    v42 = (int)o_roundf();
    v43 = v36;
    if ( v77 >= v36 )
      v43 = v77;
    if ( v40 < v43 )
      v43 = v40;
    v44 = v38;
    if ( v76 >= v38 )
      v44 = v76;
    if ( v42 < v44 )
      v44 = v42;
    if ( v40 >= v17 )
      v40 = v17;
    if ( v40 < v36 )
      v40 = v36;
    if ( v42 >= v19 )
      v42 = v19;
    if ( v42 < v38 )
      v42 = v38;
    *(_QWORD *)&v73 = __PAIR64__(v44, v43);
    *((_QWORD *)&v73 + 1) = __PAIR64__(v42, v40);
    sub_18003DA78(v12, &v73);
    v47 = v19 - v46;
    v48 = v17 - v45;
    v15 = v74;
    v8 = (_QWORD *)(a1 + 136);
  }
  else
  {
    v39 = *(float *)&v80;
    v35 = *(float *)&v78;
    v41 = *((float *)&v80 + 1);
    v37 = *((float *)&v78 + 1);
    sub_18003DC20(
      v12,
      *(float *)&v78,
      *((float *)&v78 + 1),
      *(float *)&v80 - *(float *)&v78,
      COERCE_INT(*((float *)&v80 + 1) - *((float *)&v78 + 1)),
      v79,
      v81);
    *(_QWORD *)&v74 = __PAIR64__(v25, v24);
    *((_QWORD *)&v74 + 1) = __PAIR64__(v19, v17);
    sub_18003DA78(v12, &v74);
    v47 = v19 - v25;
    v48 = v17 - v24;
  }
  v49 = v48 * v47;
  if ( v35 == v39 || v37 == v41 )
    v50 = 1;
  else
    v50 = v72;
  if ( !v49 )
  {
    v51 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v51 = *(const char **)v51;
    sub_18001F2B4(
      &stru_1801EA388,
      4,
      "Warning: camera '%s' scissor rectangle is empty -- no pixels will be rendered",
      v51);
  }
  if ( v50 )
  {
    v52 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v52 = *(const char **)v52;
    sub_18001F2B4(
      &stru_1801EA388,
      4,
      "Warning: camera '%s' viewport rectangle is empty -- no pixels will be rendered",
      v52);
  }
  LOBYTE(v45) = *(_BYTE *)(a1 + 465);
  if ( (v45 & 1) != 0 && *v8 )
  {
    v53 = *(_QWORD *)v12;
    v74 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(__int64, _QWORD *, __int128 *))(v53 + 88))(v12, v8, &v74);
    LOBYTE(v45) = *(_BYTE *)(a1 + 465);
  }
  if ( (v45 & 6) != 0 && *(_QWORD *)(a1 + 152) )
  {
    LOBYTE(v46) = (v45 & 4) != 0;
    LOBYTE(v45) = (v45 & 2) != 0;
    LOBYTE(v71) = *(_BYTE *)(a1 + 464);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, int))(*(_QWORD *)v12 + 104LL))(
      v12,
      a1 + 152,
      v45,
      v46,
      *(_DWORD *)(a1 + 312),
      v71);
  }
  v54 = sub_18008E70C(a1);
  v55 = sub_180037388(v54);
  v56 = (__int64 *)sub_18004871C(a1, &v74);
  sub_180040FB8(*v56, (__int64)&v73);
  sub_180010910((__int64)&v74);
  *(_QWORD *)&v75 = v73;
  *((_QWORD *)&v75 + 1) = DWORD2(v73) | 0x3F80000000000000LL;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v57 = (__int64 *)sub_18004871C(a1, &v74);
    v58 = sub_180040BA4(*v57, (__int64)&v83);
    v59 = _mm_xor_ps((__m128)*(unsigned int *)(v58 + 36), (__m128)0x80000000);
    v60 = _mm_xor_ps((__m128)*(unsigned int *)(v58 + 32), (__m128)0x80000000);
    *((float *)&v73 + 2) = -*(float *)(v58 + 40);
    v61 = 0LL;
    v61.m128_u64[0] = _mm_unpacklo_ps(v60, v59).m128_u64[0];
    v62 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v61, (__m128)DWORD2(v73)));
    *(_QWORD *)&v73 = v62.m128_u64[0];
    sub_180010910((__int64)&v74);
    *(_QWORD *)&v75 = v73;
    *((_QWORD *)&v75 + 1) = _mm_shuffle_ps(v62, v62, 170).m128_u32[0];
  }
  v74 = v75;
  sub_180057EA4(v55);
  v74 = v15;
  sub_180057EA4(v55);
  sub_180057DF0(v55);
  v63 = sub_180063D5C(a1, &v83);
  v64 = *(__m128 *)(v63 + 16);
  v65 = *(__m128 *)(v63 + 48);
  v66 = _mm_shuffle_ps(*(__m128 *)v63, v64, 68);
  v67 = _mm_shuffle_ps(*(__m128 *)v63, v64, 238);
  v68 = _mm_shuffle_ps(*(__m128 *)(v63 + 32), v65, 68);
  v69 = _mm_shuffle_ps(*(__m128 *)(v63 + 32), v65, 238);
  v83 = _mm_shuffle_ps(v66, v68, 136);
  v84 = _mm_shuffle_ps(v66, v68, 221);
  v85 = _mm_shuffle_ps(v67, v69, 136);
  v86 = _mm_shuffle_ps(v67, v69, 221);
  sub_180057DD4(v55);
  sub_180063C98(a1, &v73);
  *(_QWORD *)&v74 = v73;
  *((float *)&v74 + 2) = 1.0 / *(float *)&v73;
  *((float *)&v74 + 3) = 1.0 / *((float *)&v73 + 1);
  sub_180057EA4(v55);
  return sub_180010910((__int64)v82);
}
