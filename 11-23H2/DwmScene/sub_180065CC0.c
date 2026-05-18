/*
 * XREFs of sub_180065CC0 @ 0x180065CC0
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_18003BF94 @ 0x18003BF94 (sub_18003BF94.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_180043428 @ 0x180043428 (sub_180043428.c)
 *     sub_180051C0C @ 0x180051C0C (sub_180051C0C.c)
 *     sub_180059E2C @ 0x180059E2C (sub_180059E2C.c)
 *     sub_18005D444 @ 0x18005D444 (sub_18005D444.c)
 *     sub_1800618F8 @ 0x1800618F8 (sub_1800618F8.c)
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_1800642E4 @ 0x1800642E4 (sub_1800642E4.c)
 *     sub_18008ECF0 @ 0x18008ECF0 (sub_18008ECF0.c)
 *     sub_18008ED2C @ 0x18008ED2C (sub_18008ED2C.c)
 *     sub_180090FAC @ 0x180090FAC (sub_180090FAC.c)
 */

// Hidden C++ exception states: #wind=50
__int64 __fastcall sub_180065CC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  int v12; // r15d
  _QWORD *v13; // r13
  __int64 v14; // rbx
  int v15; // r12d
  __int64 *v16; // rdi
  _QWORD *v17; // rsi
  _BYTE *v18; // r14
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rbx
  void **v23; // rax
  __int64 v24; // rbx
  __m128 v25; // xmm2
  __m128 v26; // xmm0
  __int64 v27; // rbx
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __int64 v30; // rbx
  __m128 v31; // xmm2
  __m128 v32; // xmm0
  __int64 *v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 *v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rdi
  _QWORD *v49; // rbx
  __int64 v50; // rax
  __int64 *v51; // rax
  __int128 v53; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h]
  __int64 v56; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B8h]
  __int64 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h]
  _QWORD v60[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-68h]
  _DWORD *v63; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-48h]
  __int64 v65; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-28h]
  _QWORD v67[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v68; // [rsp+118h] [rbp+10h] BYREF
  __int64 v69; // [rsp+120h] [rbp+18h]
  __int64 v70; // [rsp+138h] [rbp+30h] BYREF
  __int64 v71; // [rsp+140h] [rbp+38h]
  __int64 v72; // [rsp+158h] [rbp+50h] BYREF
  __int64 v73; // [rsp+160h] [rbp+58h]
  __int64 v74; // [rsp+178h] [rbp+70h] BYREF
  __int64 v75; // [rsp+180h] [rbp+78h]
  _QWORD v76[4]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v77[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v78[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v79[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  v54 = a2;
  sub_180012440(v76, (__int64)&qword_1801D3FE8);
  v3 = *a2;
  v56 = (__int64)v67;
  v4 = sub_180012440(v67, (__int64)v76);
  sub_180010DD0(&v68, (__int64)"Key");
  v5 = sub_18003BF94(&v68);
  sub_18004051C(v3, (__int64)v77, v5, (__int64)v4);
  sub_180011B24((__int64)&v68);
  v6 = *a2;
  v56 = (__int64)&v58;
  v7 = sub_180012440(&v58, (__int64)v76);
  sub_180010DD0(&v74, (__int64)"Fill");
  v8 = sub_18003BF94(&v74);
  sub_18004051C(v6, (__int64)v78, v8, (__int64)v7);
  sub_180011B24((__int64)&v74);
  v9 = *a2;
  v56 = (__int64)v67;
  v10 = sub_180012440(v67, (__int64)v76);
  sub_180010DD0(&v68, (__int64)"Back");
  v11 = sub_18003BF94(&v68);
  sub_18004051C(v9, (__int64)v79, v11, (__int64)v10);
  sub_180011B24((__int64)&v68);
  v56 = sub_1800628C8(*a2);
  v12 = 0;
  v13 = (_QWORD *)(v56 + 8);
  v14 = v56 + 56;
  *(_QWORD *)&v53 = v56 + 56;
  v15 = 3;
  v16 = (__int64 *)(v56 + 136);
  v17 = (_QWORD *)(v56 + 8);
  v18 = &v77[-v56];
  do
  {
    v19 = sub_180011E04(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v68);
    sub_180011020(v17, v19);
    if ( v69 )
      sub_180010530(v69);
    v20 = sub_1800618F8(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v74);
    sub_180011020((_QWORD *)((char *)v17 + v14 - (_QWORD)v13), v20);
    if ( v75 )
      sub_180010530(v75);
    v21 = sub_180061C08(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v58);
    sub_180011020(v17 + 16, v21);
    if ( v59 )
      sub_180010530(v59);
    sub_18008ED2C(*v16, 1LL);
    v22 = *v16;
    sub_180027C80((__int64)&v65, v12);
    v23 = (void **)sub_18001C6E8(v67, (__int64)"ShadowMap", &v65);
    sub_1800134DC((void **)(v22 + 24), v23);
    sub_180011B24((__int64)v67);
    sub_180011B24((__int64)&v65);
    sub_180059E2C(*v16, (__int64)&unk_1801D3F68);
    sub_18005D444(*v16, v15);
    sub_180027C80((__int64)&v65, v12);
    sub_18001C6E8(&v63, (__int64)"Global/ShadowBuffer", &v65);
    sub_180011B24((__int64)&v65);
    sub_180027C80((__int64)&v72, v12);
    sub_18001C6E8(&v70, (__int64)"Global/ColoredShadowBuffer", &v72);
    sub_180011B24((__int64)&v72);
    sub_18008ECF0(*v16, &v63, &v70);
    sub_180011B24((__int64)&v70);
    sub_180011B24((__int64)&v63);
    ++v12;
    v17 += 2;
    --v15;
    v16 += 2;
    v14 = v53;
  }
  while ( v15 > 0 );
  sub_18001246C(&v68, v13);
  sub_18001246C(&v74, (_QWORD *)(v56 + 24));
  sub_18001246C(&v58, (_QWORD *)(v56 + 40));
  sub_180010DD0(&v65, (__int64)"Key");
  v24 = v68;
  sub_1800134DC((void **)(v68 + 24), (void **)&v65);
  sub_180011B24((__int64)&v65);
  *(_BYTE *)(v24 + 72) = 1;
  sub_180043428(v24, 1);
  sub_180011C50(v24 + 56, &v63);
  v25 = 0LL;
  v25.m128_u64[0] = _mm_unpacklo_ps((__m128)0xBFDE17FA, (__m128)0x40153B12u).m128_u64[0];
  *(_QWORD *)&v53 = 0LL;
  v26 = _mm_mul_ps(_mm_movelh_ps(v25, (__m128)0xBFEF92EB), (__m128)xmmword_18019B9A0);
  v61 = v26.m128_u64[0];
  LODWORD(v62) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  sub_180012ED8(v63, &v61);
  if ( v64 )
    sub_180010530(v64);
  sub_180011C50(v24 + 56, &v63);
  v61 = 0x3F80000000000000LL;
  LODWORD(v62) = 0;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  sub_18003C998((__int64)v63, (unsigned __int64 *)&v53, (__int64)&v61);
  if ( v64 )
    sub_180010530(v64);
  *(_DWORD *)(v24 + 104) = 1092370432;
  *(_DWORD *)(v24 + 116) = 1028443341;
  sub_180010DD0(&v65, (__int64)"Fill");
  v27 = v74;
  sub_1800134DC((void **)(v74 + 24), (void **)&v65);
  sub_180011B24((__int64)&v65);
  *(_BYTE *)(v27 + 72) = 1;
  sub_180043428(v27, 1);
  *(_DWORD *)(v27 + 88) = 1060487823;
  *(_DWORD *)(v27 + 92) = 1061997773;
  *(_DWORD *)(v27 + 96) = 1065151889;
  *(_DWORD *)(v27 + 100) = 1065353216;
  sub_180011C50(v27 + 56, &v63);
  v28 = 0LL;
  v28.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FE02A60u, (__m128)0x4011700Cu).m128_u64[0];
  *(_QWORD *)&v53 = 0LL;
  v29 = _mm_mul_ps(_mm_movelh_ps(v28, (__m128)0xC023EE53), (__m128)xmmword_18019B9A0);
  DWORD2(v53) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
  v61 = v29.m128_u64[0];
  LODWORD(v62) = DWORD2(v53);
  sub_180012ED8(v63, &v61);
  if ( v64 )
    sub_180010530(v64);
  sub_180011C50(v27 + 56, &v63);
  v61 = 0x3F80000000000000LL;
  LODWORD(v62) = 0;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  sub_18003C998((__int64)v63, (unsigned __int64 *)&v53, (__int64)&v61);
  if ( v64 )
    sub_180010530(v64);
  *(_DWORD *)(v27 + 104) = 1086849024;
  *(_DWORD *)(v27 + 116) = 1036831949;
  sub_180010DD0(&v65, (__int64)"Back");
  v30 = v58;
  sub_1800134DC((void **)(v58 + 24), (void **)&v65);
  sub_180011B24((__int64)&v65);
  *(_BYTE *)(v30 + 72) = 1;
  sub_180043428(v30, 1);
  *(_DWORD *)(v30 + 88) = 1063144775;
  *(_DWORD *)(v30 + 92) = 1060773036;
  *(_DWORD *)(v30 + 96) = 1065353216;
  *(_DWORD *)(v30 + 100) = 1065353216;
  sub_180011C50(v30 + 56, &v63);
  v31 = 0LL;
  v31.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FD6B197u, (__m128)0x4025238Bu).m128_u64[0];
  *(_QWORD *)&v53 = 0LL;
  v32 = _mm_mul_ps(_mm_movelh_ps(v31, (__m128)0x3FC5CCF6u), (__m128)xmmword_18019B9A0);
  DWORD2(v53) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
  v61 = v32.m128_u64[0];
  LODWORD(v62) = DWORD2(v53);
  sub_180012ED8(v63, &v61);
  if ( v64 )
    sub_180010530(v64);
  sub_180011C50(v30 + 56, &v63);
  v61 = 0x3F80000000000000LL;
  LODWORD(v62) = 0;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  sub_18003C998((__int64)v63, (unsigned __int64 *)&v53, (__int64)&v61);
  if ( v64 )
    sub_180010530(v64);
  *(_DWORD *)(v30 + 104) = 1078460416;
  *(_DWORD *)(v30 + 116) = 1045220557;
  v33 = v54;
  v34 = *v54;
  v54 = v67;
  v35 = sub_180012440(v67, (__int64)&qword_1801D3FE8);
  sub_180010DD0(&v72, (__int64)"LightProbe0");
  v36 = sub_18003BF94(&v72);
  sub_18004051C(v34, (__int64)&v65, v36, (__int64)v35);
  sub_180011B24((__int64)&v72);
  v37 = *v33;
  v54 = (__int64 *)&v63;
  v38 = sub_180012440(&v63, (__int64)&qword_1801D3FE8);
  sub_180010DD0(&v70, (__int64)"LightProbe1");
  v39 = sub_18003BF94(&v70);
  sub_18004051C(v37, (__int64)&v72, v39, (__int64)v38);
  sub_180011B24((__int64)&v70);
  v40 = *v33;
  v54 = v67;
  v41 = sub_180012440(v67, (__int64)&qword_1801D3FE8);
  sub_180010DD0(&v61, (__int64)"LightProbe2");
  v42 = sub_18003BF94(&v61);
  sub_18004051C(v40, (__int64)&v70, v42, (__int64)v41);
  sub_180011B24((__int64)&v61);
  sub_180061AE8(v65, &v63);
  sub_180061AE8(v72, &v54);
  sub_180061AE8(v70, &v61);
  v53 = xmmword_18019B9C0;
  sub_180051C0C((__int64)v63, (__int64)&v53);
  v53 = xmmword_18019B9C0;
  sub_180051C0C((__int64)v54, (__int64)&v53);
  v53 = xmmword_18019B9C0;
  sub_180051C0C(v61, (__int64)&v53);
  v43 = v56;
  v44 = (__int64 *)(v56 + 104);
  LODWORD(v53) = 0;
  v45 = (__int64 *)sub_1800642E4((__int64 *)(v56 + 104), (int *)&v53);
  sub_1800124F8(v45, &v63);
  LODWORD(v53) = 1;
  v46 = (__int64 *)sub_1800642E4(v44, (int *)&v53);
  sub_1800124F8(v46, &v54);
  LODWORD(v53) = 2;
  v47 = (__int64 *)sub_1800642E4(v44, (int *)&v53);
  sub_1800124F8(v47, &v61);
  v48 = *v33;
  v56 = (__int64)v60;
  v49 = sub_180012440(v60, (__int64)&qword_1801D3FE8);
  sub_180010DD0(v67, (__int64)"ColorTransform");
  v50 = sub_18003BF94(v67);
  sub_18004051C(v48, (__int64)&v56, v50, (__int64)v49);
  sub_180011B24((__int64)v67);
  v51 = sub_1800619C8(v56, &v53);
  sub_180011020((_QWORD *)(v43 + 120), v51);
  if ( *((_QWORD *)&v53 + 1) )
    sub_180010530(*((__int64 *)&v53 + 1));
  sub_180090FAC(*(_QWORD *)(v43 + 120));
  if ( v57 )
    sub_180010530(v57);
  if ( v62 )
    sub_180010530(v62);
  if ( v55 )
    sub_180010530(v55);
  if ( v64 )
    sub_180010530(v64);
  if ( v71 )
    sub_180010530(v71);
  if ( v73 )
    sub_180010530(v73);
  if ( v66 )
    sub_180010530(v66);
  if ( v59 )
    sub_180010530(v59);
  if ( v75 )
    sub_180010530(v75);
  if ( v69 )
    sub_180010530(v69);
  sub_18000B4B0((__int64)v77, 16LL, 3LL);
  return sub_180013348((__int64)v76);
}
