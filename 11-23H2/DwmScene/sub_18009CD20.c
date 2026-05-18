/*
 * XREFs of sub_18009CD20 @ 0x18009CD20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180028A40 @ 0x180028A40 (sub_180028A40.c)
 *     sub_180028A90 @ 0x180028A90 (sub_180028A90.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 *     sub_180085AFC @ 0x180085AFC (sub_180085AFC.c)
 *     sub_18009C708 @ 0x18009C708 (sub_18009C708.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_18009CD20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v6; // r13
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64); // rbx
  __int64 v10; // rax
  int *v11; // rcx
  __m128 v12; // xmm6
  float v13; // xmm1_4
  int v14; // eax
  __int64 v15; // r12
  __int64 *v16; // r15
  __int64 v17; // r12
  __int64 *v18; // r13
  int *v19; // rcx
  __m128 v20; // xmm2
  int v21; // eax
  __m128 v22; // xmm1
  double v23; // xmm0_8
  __m128 v24; // xmm2
  double v25; // xmm3_8
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  double v30; // xmm5_8
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __int64 v33; // rax
  void (__fastcall *v34)(__int64 *, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v35; // rdi
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 *v38; // r15
  float v39; // xmm0_4
  __int64 v40; // rdi
  int *v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  unsigned __int16 v44; // bx
  int *v45; // rcx
  int v46; // eax
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  double v49; // xmm3_8
  __m128 v50; // xmm2
  __m128 v51; // xmm0
  __m128 v52; // xmm2
  __m128 v53; // xmm2
  __m128 v54; // xmm3
  __int64 v55; // rax
  void (__fastcall *v56)(__int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v57; // rdi
  _QWORD *v58; // rbx
  __int64 v59; // rax
  __m128 v60; // xmm2
  __m128 v61; // xmm1
  __m128 v62; // xmm6
  double v63; // xmm0_8
  __m128 v64; // xmm2
  __m128 v65; // xmm2
  __m128 v66; // xmm0
  __m128 v67; // xmm2
  __m128 v68; // xmm3
  __m128 v69; // xmm2
  __int64 v70; // rax
  void (__fastcall *v71)(__int64 *, __int64, __int64, __int64, _QWORD *); // rsi
  _QWORD *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v77; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B8h]
  unsigned __int16 v80; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+80h] [rbp-88h]
  unsigned __int64 v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  __int64 v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h]
  __int64 v88; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-58h]
  __int64 v90; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-48h]
  __int64 *v92; // [rsp+C8h] [rbp-40h]
  __int64 v93; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-20h]
  __int64 v96; // [rsp+F0h] [rbp-18h]
  _QWORD v97[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v98[256]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v99[256]; // [rsp+218h] [rbp+110h] BYREF

  v87 = a4;
  v6 = (_QWORD *)a2;
  v85 = a2;
  sub_1800294DC((__int64)v98, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  sub_1800294DC((__int64)v99, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  v8 = a1[3];
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 88LL);
  v86 = a3 + 8;
  v10 = sub_180011D4C(a3 + 8, &v82);
  v9(v8, v10);
  sub_18001246C(&v88, a5);
  v11 = *(int **)(*a5 + 128LL);
  v12 = 0LL;
  v13 = 0.0;
  if ( v11 )
  {
    v13 = (float)v11[1];
    v14 = *v11;
  }
  else
  {
    v14 = 0;
  }
  *(float *)&v78 = (float)v14;
  *((float *)&v78 + 1) = v13;
  v15 = sub_180026618(a3);
  v85 = v15;
  v16 = (__int64 *)a1[27];
  if ( v16 != (__int64 *)a1[28] )
  {
    v17 = 0LL;
    v18 = (__int64 *)a1[28];
    do
    {
      v84 = *(_QWORD *)(v17 + a1[30]);
      v19 = *(int **)(v88 + 128);
      v20 = 0LL;
      if ( v19 )
      {
        v20.m128_f32[0] = (float)v19[1];
        v21 = *v19;
      }
      else
      {
        v21 = 0;
      }
      v22 = 0LL;
      v22.m128_f32[0] = (float)v21;
      v23 = *(double *)_mm_unpacklo_ps(v22, v20).m128_u64;
      v24 = 0LL;
      *(double *)v24.m128_u64 = v23;
      v25 = *(double *)_mm_div_ps((__m128)v78, v24).m128_u64;
      v26 = 0LL;
      v26.m128_f32[0] = (float)(int)sub_180028A40(*v16);
      v27 = 0LL;
      v27.m128_f32[0] = (float)(int)sub_180028A90(*v16);
      v22.m128_u64[0] = _mm_unpacklo_ps(v27, v26).m128_u64[0];
      v28 = 0LL;
      v28.m128_u64[0] = v22.m128_u64[0];
      v29 = 0LL;
      *(double *)v29.m128_u64 = v30;
      v29.m128_u64[0] = _mm_div_ps(v28, v29).m128_u64[0];
      v31 = 0LL;
      *(double *)v31.m128_u64 = v25;
      v32 = 0LL;
      v32.m128_u64[0] = v29.m128_u64[0];
      v33 = sub_180034870(v85);
      v95 = _mm_mul_ps(v32, v31).m128_u64[0];
      v96 = 0LL;
      sub_180050854(v33);
      v34 = *(void (__fastcall **)(__int64 *, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 56);
      v35 = sub_18001246C(&v93, v16);
      v92 = v97;
      v36 = sub_18001246C(v97, &v88);
      v37 = sub_180011D4C(v86, &v90);
      v34(a1, &v82, v37, v87, v36, v35);
      if ( v91 )
        sub_180010530(v91);
      sub_1800124F8(&v88, &v82);
      v78 = v84;
      v17 += 8LL;
      if ( v83 )
        sub_180010530(v83);
      v16 += 2;
    }
    while ( v16 != v18 );
    v6 = (_QWORD *)a2;
    v15 = v85;
  }
  if ( sub_180011DE0(&v88) )
  {
    v38 = a1 + 23;
    v39 = (float)(int)sub_180028A40(a1[23]);
    v40 = v88;
    v41 = *(int **)(v88 + 128);
    if ( v41 )
      v42 = *v41;
    else
      v42 = 0;
    sub_18009C708((__int64)a1, (__int64)v98, (__int64)v99, (float)v42, v39);
    v43 = *(_QWORD *)sub_180085130(a1[36], &v90);
    sub_180010DD0(v97, (__int64)"BlurSampleArray");
    v44 = sub_180082CD8(v43, v97);
    v80 = v44;
    sub_180011B24((__int64)v97);
    if ( v91 )
      sub_180010530(v91);
    sub_180085AFC(a1[36], v44, v98, 0x10u);
    v45 = *(int **)(v40 + 128);
    if ( v45 )
    {
      v12 = 0LL;
      v12.m128_f32[0] = (float)v45[1];
      v46 = *v45;
    }
    else
    {
      v46 = 0;
    }
    v47 = 0LL;
    v47.m128_f32[0] = (float)v46;
    v48 = 0LL;
    v48.m128_u64[0] = _mm_unpacklo_ps(v47, v12).m128_u64[0];
    v49 = *(double *)_mm_div_ps((__m128)v78, v48).m128_u64;
    v50 = 0LL;
    v50.m128_f32[0] = (float)(int)sub_180028A40(*v38);
    v51 = 0LL;
    v51.m128_f32[0] = (float)(int)sub_180028A90(*v38);
    v47.m128_u64[0] = _mm_unpacklo_ps(v51, v50).m128_u64[0];
    v52 = 0LL;
    v52.m128_u64[0] = v47.m128_u64[0];
    v47.m128_u64[0] = _mm_div_ps(v52, (__m128)(unsigned __int64)a1[33]).m128_u64[0];
    v53 = 0LL;
    *(double *)v53.m128_u64 = v49;
    v54 = 0LL;
    v54.m128_u64[0] = v47.m128_u64[0];
    v55 = sub_180034870(v15);
    v82 = _mm_mul_ps(v54, v53).m128_u64[0];
    v83 = 0LL;
    sub_180050854(v55);
    v56 = *(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 48);
    v92 = &v90;
    v57 = sub_18001246C(&v90, a1 + 23);
    v58 = sub_18001246C(v97, &v88);
    v59 = sub_180011D4C(v86, &v93);
    v56(a1, v59, v87, v58, v57);
    if ( v94 )
      sub_180010530(v94);
    sub_180085AFC(a1[36], v80, v99, 0x10u);
    v60 = 0LL;
    v60.m128_f32[0] = (float)(int)sub_180028A40(*v38);
    v61 = 0LL;
    v61.m128_f32[0] = (float)(int)sub_180028A90(*v38);
    v62 = (__m128)(unsigned __int64)a1[33];
    v63 = *(double *)_mm_unpacklo_ps(v61, v60).m128_u64;
    v64 = 0LL;
    *(double *)v64.m128_u64 = v63;
    v77 = _mm_div_ps(v62, v64).m128_u64[0];
    v65 = 0LL;
    v65.m128_f32[0] = (float)(int)sub_180028A40(a1[25]);
    v66 = 0LL;
    v66.m128_f32[0] = (float)(int)sub_180028A90(a1[25]);
    v61.m128_u64[0] = _mm_unpacklo_ps(v66, v65).m128_u64[0];
    v67 = 0LL;
    v67.m128_u64[0] = v61.m128_u64[0];
    v79 = _mm_div_ps(v67, v62).m128_u64[0];
    v68 = 0LL;
    v68.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v77, (__m128)HIDWORD(v77)).m128_u64[0];
    v69 = 0LL;
    v69.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v79, (__m128)HIDWORD(v79)).m128_u64[0];
    v70 = sub_180034870(v15);
    v82 = _mm_mul_ps(v69, v68).m128_u64[0];
    v83 = 0LL;
    sub_180050854(v70);
    v71 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64, _QWORD *))(*a1 + 48);
    v92 = &v90;
    v72 = sub_18001246C(&v90, a1 + 25);
    v73 = sub_180026B04(*v38, v97);
    v74 = sub_180011D4C(v86, &v93);
    v71(a1, v74, v87, v73, v72);
    if ( v94 )
      sub_180010530(v94);
  }
  v75 = sub_180034870(v15);
  v82 = 0x3F8000003F800000LL;
  v83 = _mm_srli_si128((__m128i)xmmword_18019B790, 8).m128i_u64[0];
  sub_180050854(v75);
  sub_180026B04(a1[25], v6);
  if ( v89 )
    sub_180010530(v89);
  return v6;
}
