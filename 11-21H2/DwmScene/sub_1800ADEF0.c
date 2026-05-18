/*
 * XREFs of sub_1800ADEF0 @ 0x1800ADEF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     unknown_libname_6 @ 0x180048C50 (unknown_libname_6.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 *     sub_1800938AC @ 0x1800938AC (sub_1800938AC.c)
 *     sub_1800AD694 @ 0x1800AD694 (sub_1800AD694.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_1800ADEF0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  void (__fastcall *v14)(__int64, __int128 *); // r9
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // rsi
  __int64 v19; // r15
  int *v20; // rax
  __m128 v21; // xmm6
  float v22; // xmm1_4
  int v23; // ecx
  __int64 v24; // r8
  _QWORD *v25; // rbx
  __int64 v26; // r13
  __m128 v27; // xmm4
  int *v28; // rax
  int v29; // ecx
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm1
  double v33; // xmm3_8
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  __m128 v37; // xmm2
  int *v38; // rax
  int v39; // eax
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __int64 v44; // rax
  void (__fastcall *v45)(_QWORD *, __int64 *, __int128 *, __int64, __int128 *, __int128 *); // r11
  __int64 v46; // rcx
  __int64 v47; // rdx
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  float v53; // xmm0_4
  int *v54; // rax
  int v55; // ecx
  __int64 v56; // rbx
  unsigned __int16 v57; // bx
  int *v58; // rax
  int v59; // ecx
  __m128 v60; // xmm3
  __m128 v61; // xmm1
  __m128 v62; // xmm1
  double v63; // xmm3_8
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // edx
  __m128 v67; // xmm2
  int *v68; // rax
  int v69; // eax
  __m128 v70; // xmm0
  __m128 v71; // xmm2
  __m128 v72; // xmm2
  __m128 v73; // xmm3
  __int64 v74; // r15
  __int64 v75; // rax
  void (__fastcall *v76)(_QWORD *, __int128 *, __int64, __int128 *, __int128 *); // r11
  __int64 v77; // rcx
  __int64 v78; // rdx
  signed __int32 v79; // eax
  signed __int32 v80; // ett
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // edx
  __m128 v84; // xmm2
  int *v85; // rax
  int v86; // eax
  __m128 v87; // xmm1
  __m128 v88; // xmm3
  __m128 v89; // xmm1
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // edx
  int *v93; // rax
  int v94; // eax
  __m128 v95; // xmm0
  __m128 v96; // xmm2
  __m128 v97; // xmm1
  __int64 v98; // rax
  void (__fastcall *v99)(_QWORD *, __int128 *, __int64, __int128 *, __int128 *); // r11
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  signed __int32 v104; // eax
  signed __int32 v105; // ett
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  double v111; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v112; // [rsp+60h] [rbp-A8h]
  _QWORD v113[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v114; // [rsp+88h] [rbp-80h]
  unsigned __int64 v115; // [rsp+90h] [rbp-78h]
  unsigned __int64 v116; // [rsp+98h] [rbp-70h]
  unsigned __int64 v117; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v118; // [rsp+A8h] [rbp-60h]
  __int64 v119; // [rsp+B0h] [rbp-58h]
  _QWORD *v120; // [rsp+B8h] [rbp-50h]
  double v121; // [rsp+C0h] [rbp-48h]
  double v122; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v123; // [rsp+D0h] [rbp-38h]
  __int128 *v124; // [rsp+D8h] [rbp-30h]
  __int128 *v125; // [rsp+E0h] [rbp-28h]
  __int128 v126; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v127; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v128; // [rsp+108h] [rbp+0h] BYREF
  __int64 v129; // [rsp+118h] [rbp+10h] BYREF
  __int64 v130; // [rsp+120h] [rbp+18h]
  __int128 v131; // [rsp+128h] [rbp+20h] BYREF
  __int128 v132; // [rsp+138h] [rbp+30h] BYREF
  __int128 v133; // [rsp+148h] [rbp+40h] BYREF
  __int128 v134; // [rsp+158h] [rbp+50h] BYREF
  __int128 v135; // [rsp+168h] [rbp+60h] BYREF
  __int128 v136; // [rsp+178h] [rbp+70h] BYREF
  __int128 v137; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v138; // [rsp+198h] [rbp+90h]
  __int64 v139; // [rsp+1A0h] [rbp+98h]
  __int128 v140; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned __int64 v141; // [rsp+1B8h] [rbp+B0h]
  __int64 v142; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v143; // [rsp+1C8h] [rbp+C0h]
  __int64 v144; // [rsp+1D0h] [rbp+C8h]
  __int64 v145; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v146; // [rsp+1E0h] [rbp+D8h]
  double v147; // [rsp+1E8h] [rbp+E0h]
  double v148; // [rsp+1F0h] [rbp+E8h]
  double v149; // [rsp+1F8h] [rbp+F0h]
  double v150; // [rsp+200h] [rbp+F8h]
  double v151; // [rsp+208h] [rbp+100h]
  double v152; // [rsp+210h] [rbp+108h]
  _QWORD v153[2]; // [rsp+218h] [rbp+110h] BYREF
  char *v154[3]; // [rsp+228h] [rbp+120h] BYREF
  unsigned __int64 v155; // [rsp+240h] [rbp+138h]
  _BYTE v156[256]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v157[256]; // [rsp+348h] [rbp+240h] BYREF

  v5 = a4;
  v120 = a2;
  v9 = v156;
  v10 = 16LL;
  do
  {
    unknown_libname_6(v9);
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v11 = v157;
  v12 = 16LL;
  do
  {
    unknown_libname_6(v11);
    v11 += 2;
    --v12;
  }
  while ( v12 );
  v13 = a1[3];
  v14 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 88LL);
  v126 = 0LL;
  v15 = *(_QWORD *)(a3 + 16);
  if ( !v15 )
LABEL_100:
    sub_1800120F4();
  v16 = *(_DWORD *)(v15 + 8);
  do
  {
    if ( !v16 )
      goto LABEL_100;
    v17 = v16;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16);
  }
  while ( v17 != v16 );
  v126 = *(_OWORD *)(a3 + 8);
  v14(v13, &v126);
  v18 = a5[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a5[1];
  }
  v19 = *a5;
  v113[1] = v19;
  v113[2] = v18;
  v20 = *(int **)(v19 + 128);
  v21 = 0LL;
  v22 = 0.0;
  if ( v20 )
  {
    v23 = *v20;
    v22 = (float)v20[1];
  }
  else
  {
    v23 = 0;
  }
  *(float *)&v112 = (float)v23;
  *((float *)&v112 + 1) = v22;
  v24 = sub_18002850C(a3);
  v119 = v24;
  v25 = (_QWORD *)a1[27];
  v120 = (_QWORD *)a1[28];
  if ( v25 != v120 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      v27 = (__m128)*(unsigned __int64 *)(a1[30] + v26);
      v123 = *(_QWORD *)(a1[30] + v26);
      v28 = *(int **)(v19 + 128);
      if ( v28 )
      {
        v29 = *v28;
        v30 = 0LL;
        v30.m128_f32[0] = (float)v28[1];
      }
      else
      {
        v29 = 0;
        v30 = 0LL;
      }
      v31 = 0LL;
      v31.m128_f32[0] = (float)v29;
      v147 = *(double *)_mm_unpacklo_ps(v31, v30).m128_u64;
      v32 = 0LL;
      *(double *)v32.m128_u64 = v147;
      *(_QWORD *)&v33 = _mm_div_ps((__m128)v112, v32).m128_u64[0];
      v121 = v33;
      v34 = *(_QWORD *)(*v25 + 136LL);
      if ( !v34 )
        break;
      v35 = *(_QWORD *)(v34 + 128);
      if ( v35 )
        v36 = *(_DWORD *)(v35 + 4);
      else
        v36 = 0;
      v37 = 0LL;
      v37.m128_f32[0] = (float)v36;
      v38 = *(int **)(v34 + 128);
      if ( !v38 )
        goto LABEL_27;
      v39 = *v38;
LABEL_28:
      v40 = 0LL;
      v40.m128_f32[0] = (float)v39;
      v148 = *(double *)_mm_unpacklo_ps(v40, v37).m128_u64;
      v41 = 0LL;
      *(double *)v41.m128_u64 = v148;
      v122 = *(double *)_mm_div_ps(v41, v27).m128_u64;
      v42 = 0LL;
      *(double *)v42.m128_u64 = v33;
      v43 = 0LL;
      *(double *)v43.m128_u64 = v122;
      v114 = _mm_mul_ps(v43, v42).m128_u64[0];
      v44 = sub_180037388(v24);
      v138 = v114;
      v139 = 0LL;
      sub_180057EA4(v44);
      v45 = *(void (__fastcall **)(_QWORD *, __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 56LL);
      v124 = &v127;
      v127 = 0LL;
      v46 = v25[1];
      if ( v46 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v46 + 8));
        v46 = v25[1];
        v18 = v113[2];
      }
      *(_QWORD *)&v127 = *v25;
      *((_QWORD *)&v127 + 1) = v46;
      v125 = &v136;
      v136 = 0LL;
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v136 = *(_OWORD *)&v113[1];
      v128 = 0LL;
      v47 = *(_QWORD *)(a3 + 16);
      if ( !v47 )
LABEL_99:
        sub_1800120F4();
      v48 = *(_DWORD *)(v47 + 8);
      do
      {
        if ( !v48 )
          goto LABEL_99;
        v49 = v48;
        v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), v48 + 1, v48);
      }
      while ( v49 != v48 );
      v128 = *(_OWORD *)(a3 + 8);
      v45(a1, &v129, &v128, a4, &v136, &v127);
      sub_180010910((__int64)&v128);
      v18 = v130;
      if ( v130 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v130 + 8));
        v18 = v130;
      }
      v140 = *(_OWORD *)&v113[1];
      v19 = v129;
      v113[1] = v129;
      v113[2] = v18;
      sub_180010910((__int64)&v140);
      v112 = v123;
      v26 += 8LL;
      sub_180010910((__int64)&v129);
      v25 += 2;
      v24 = v119;
      if ( v25 == v120 )
      {
        v5 = a4;
        goto LABEL_40;
      }
    }
    v37 = 0LL;
LABEL_27:
    v39 = 0;
    goto LABEL_28;
  }
LABEL_40:
  if ( !sub_1800122C0(&v113[1]) )
  {
    v74 = v119;
    goto LABEL_96;
  }
  v50 = *(_QWORD *)(a1[23] + 136LL);
  if ( v50 && (v51 = *(_QWORD *)(v50 + 128)) != 0 )
    v52 = *(_DWORD *)(v51 + 4);
  else
    v52 = 0;
  v53 = (float)v52;
  v54 = *(int **)(v19 + 128);
  if ( v54 )
    v55 = *v54;
  else
    v55 = 0;
  sub_1800AD694((__int64)a1, (__int64)v156, (__int64)v157, (float)v55, v53);
  v56 = *sub_180092DD8(a1[36], v153);
  v154[2] = 0LL;
  v155 = 15LL;
  LOBYTE(v154[0]) = 0;
  sub_180012190((__int64 *)v154, "BlurSampleArray", 0xFuLL);
  v57 = sub_1800904AC(v56, v154);
  if ( v155 >= 0x10 )
    sub_180010884(v154[0], v155 + 1);
  sub_180010910((__int64)v153);
  sub_1800938AC(a1[36], v57, v156, 0x10u);
  v58 = *(int **)(v19 + 128);
  if ( v58 )
  {
    v59 = *v58;
    v60 = 0LL;
    v60.m128_f32[0] = (float)v58[1];
  }
  else
  {
    v59 = 0;
    v60 = 0LL;
  }
  v61 = 0LL;
  v61.m128_f32[0] = (float)v59;
  v149 = *(double *)_mm_unpacklo_ps(v61, v60).m128_u64;
  v62 = 0LL;
  *(double *)v62.m128_u64 = v149;
  *(_QWORD *)&v63 = _mm_div_ps((__m128)v112, v62).m128_u64[0];
  v64 = *(_QWORD *)(a1[23] + 136LL);
  if ( v64 )
  {
    v65 = *(_QWORD *)(v64 + 128);
    if ( v65 )
      v66 = *(_DWORD *)(v65 + 4);
    else
      v66 = 0;
    v67 = 0LL;
    v67.m128_f32[0] = (float)v66;
    v68 = *(int **)(v64 + 128);
    if ( v68 )
    {
      v69 = *v68;
      goto LABEL_61;
    }
  }
  else
  {
    v67 = 0LL;
  }
  v69 = 0;
LABEL_61:
  v70 = 0LL;
  v70.m128_f32[0] = (float)v69;
  v150 = *(double *)_mm_unpacklo_ps(v70, v67).m128_u64;
  v71 = 0LL;
  *(double *)v71.m128_u64 = v150;
  v111 = *(double *)_mm_div_ps(v71, (__m128)(unsigned __int64)a1[33]).m128_u64;
  v72 = 0LL;
  *(double *)v72.m128_u64 = v63;
  v73 = 0LL;
  *(double *)v73.m128_u64 = v111;
  v115 = _mm_mul_ps(v73, v72).m128_u64[0];
  v74 = v119;
  v75 = sub_180037388(v119);
  v141 = v115;
  v142 = 0LL;
  sub_180057EA4(v75);
  v76 = *(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48LL);
  v125 = &v131;
  v131 = 0LL;
  v77 = a1[24];
  if ( v77 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v77 + 8));
    v77 = a1[24];
    v18 = v113[2];
  }
  *(_QWORD *)&v131 = a1[23];
  *((_QWORD *)&v131 + 1) = v77;
  v124 = &v137;
  v137 = 0LL;
  if ( v18 )
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  v137 = *(_OWORD *)&v113[1];
  v132 = 0LL;
  v78 = *(_QWORD *)(a3 + 16);
  if ( !v78 )
LABEL_101:
    sub_1800120F4();
  v79 = *(_DWORD *)(v78 + 8);
  do
  {
    if ( !v79 )
      goto LABEL_101;
    v80 = v79;
    v79 = _InterlockedCompareExchange((volatile signed __int32 *)(v78 + 8), v79 + 1, v79);
  }
  while ( v80 != v79 );
  v132 = *(_OWORD *)(a3 + 8);
  v76(a1, &v132, v5, &v137, &v131);
  sub_180010910((__int64)&v132);
  sub_1800938AC(a1[36], v57, v157, 0x10u);
  v81 = *(_QWORD *)(a1[23] + 136LL);
  if ( v81 )
  {
    v82 = *(_QWORD *)(v81 + 128);
    if ( v82 )
      v83 = *(_DWORD *)(v82 + 4);
    else
      v83 = 0;
    v84 = 0LL;
    v84.m128_f32[0] = (float)v83;
    v85 = *(int **)(v81 + 128);
    if ( v85 )
    {
      v86 = *v85;
      goto LABEL_78;
    }
  }
  else
  {
    v84 = 0LL;
  }
  v86 = 0;
LABEL_78:
  v87 = 0LL;
  v87.m128_f32[0] = (float)v86;
  v88 = (__m128)(unsigned __int64)a1[33];
  v151 = *(double *)_mm_unpacklo_ps(v87, v84).m128_u64;
  v89 = 0LL;
  *(double *)v89.m128_u64 = v151;
  v116 = _mm_div_ps(v88, v89).m128_u64[0];
  v90 = *(_QWORD *)(a1[25] + 136LL);
  if ( v90
    && ((v91 = *(_QWORD *)(v90 + 128)) == 0 ? (v92 = 0) : (v92 = *(_DWORD *)(v91 + 4)),
        v21 = 0LL,
        v21.m128_f32[0] = (float)v92,
        (v93 = *(int **)(v90 + 128)) != 0LL) )
  {
    v94 = *v93;
  }
  else
  {
    v94 = 0;
  }
  v95 = 0LL;
  v95.m128_f32[0] = (float)v94;
  v152 = *(double *)_mm_unpacklo_ps(v95, v21).m128_u64;
  v96 = 0LL;
  *(double *)v96.m128_u64 = v152;
  v117 = _mm_div_ps(v96, v88).m128_u64[0];
  v97 = 0LL;
  v97.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v117, (__m128)HIDWORD(v117)).m128_u64[0];
  v118 = _mm_mul_ps(v97, (__m128)v116).m128_u64[0];
  v98 = sub_180037388(v74);
  v143 = v118;
  v144 = 0LL;
  sub_180057EA4(v98);
  v99 = *(void (__fastcall **)(_QWORD *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48LL);
  v125 = &v133;
  v133 = 0LL;
  v100 = a1[26];
  if ( v100 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v100 + 8));
    v100 = a1[26];
  }
  *(_QWORD *)&v133 = a1[25];
  *((_QWORD *)&v133 + 1) = v100;
  v124 = &v134;
  v101 = a1[23];
  v134 = 0LL;
  v102 = *(_QWORD *)(v101 + 144);
  if ( v102 )
    _InterlockedIncrement((volatile signed __int32 *)(v102 + 8));
  v134 = *(_OWORD *)(v101 + 136);
  v135 = 0LL;
  v103 = *(_QWORD *)(a3 + 16);
  if ( !v103 )
LABEL_102:
    sub_1800120F4();
  v104 = *(_DWORD *)(v103 + 8);
  do
  {
    if ( !v104 )
      goto LABEL_102;
    v105 = v104;
    v104 = _InterlockedCompareExchange((volatile signed __int32 *)(v103 + 8), v104 + 1, v104);
  }
  while ( v105 != v104 );
  v135 = *(_OWORD *)(a3 + 8);
  v99(a1, &v135, v5, &v134, &v133);
  sub_180010910((__int64)&v135);
LABEL_96:
  v106 = sub_180037388(v74);
  v145 = 0x3F8000003F800000LL;
  v146 = _mm_srli_si128((__m128i)xmmword_1801BD750, 8).m128i_u64[0];
  sub_180057EA4(v106);
  v107 = a1[25];
  *a2 = 0LL;
  a2[1] = 0LL;
  v108 = *(_QWORD *)(v107 + 144);
  if ( v108 )
    _InterlockedIncrement((volatile signed __int32 *)(v108 + 8));
  *a2 = *(_QWORD *)(v107 + 136);
  a2[1] = *(_QWORD *)(v107 + 144);
  sub_180010910((__int64)&v113[1]);
  return a2;
}
