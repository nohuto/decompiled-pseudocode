/*
 * XREFs of sub_180076154 @ 0x180076154
 * Callers:
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_1800406D4 @ 0x1800406D4 (sub_1800406D4.c)
 *     sub_180049D3C @ 0x180049D3C (sub_180049D3C.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180057DB0 @ 0x180057DB0 (sub_180057DB0.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_180057E58 @ 0x180057E58 (sub_180057E58.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_1800595C8 @ 0x1800595C8 (sub_1800595C8.c)
 *     sub_180059688 @ 0x180059688 (sub_180059688.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18007043C @ 0x18007043C (sub_18007043C.c)
 *     sub_180071988 @ 0x180071988 (sub_180071988.c)
 *     sub_1800727B4 @ 0x1800727B4 (sub_1800727B4.c)
 *     sub_180074E38 @ 0x180074E38 (sub_180074E38.c)
 *     sub_180074F6C @ 0x180074F6C (sub_180074F6C.c)
 *     sub_180074FB4 @ 0x180074FB4 (sub_180074FB4.c)
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_18009FA64 @ 0x18009FA64 (sub_18009FA64.c)
 *     sub_18009FA98 @ 0x18009FA98 (sub_18009FA98.c)
 *     sub_1800A0F48 @ 0x1800A0F48 (sub_1800A0F48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180076154(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  __int64 v7; // r13
  __int64 v8; // rsi
  __m128 v9; // xmm12
  int v10; // r12d
  __int64 v11; // r8
  __int64 v12; // r8
  __m128 v13; // xmm0
  __int64 *v14; // rbx
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // rcx
  __int64 **v18; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v21; // r12
  __int64 *v22; // rcx
  char v23; // bl
  int v24; // xmm11_4
  int v25; // ebx
  int *v26; // rax
  __int32 v27; // xmm9_4
  __int32 v28; // xmm8_4
  __m128 v29; // xmm7
  __m128 v30; // xmm6
  __int64 v31; // rcx
  double v32; // xmm0_8
  __int64 v33; // rax
  char v34; // al
  char v35; // bl
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // bl
  __int64 *v40; // rax
  int v41; // edi
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // xmm13_4
  double v48; // xmm0_8
  int v49; // xmm12_4
  double v50; // xmm0_8
  int v51; // xmm11_4
  double v52; // xmm0_8
  int v53; // xmm10_4
  double v54; // xmm0_8
  int v55; // xmm9_4
  double v56; // xmm0_8
  int v57; // xmm8_4
  double v58; // xmm0_8
  int v59; // xmm7_4
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // rdi
  double v71; // xmm0_8
  float X; // xmm8_4
  double v73; // xmm0_8
  float v74; // xmm7_4
  double v75; // xmm0_8
  float v76; // xmm6_4
  double v77; // xmm0_8
  __m128 v78; // xmm10
  double v79; // xmm0_8
  float v80; // xmm8_4
  double v81; // xmm0_8
  float v82; // xmm7_4
  double v83; // xmm0_8
  float v84; // xmm6_4
  double v85; // xmm0_8
  __m128 v86; // xmm9
  double v87; // xmm0_8
  float v88; // xmm8_4
  double v89; // xmm0_8
  float v90; // xmm7_4
  double v91; // xmm0_8
  float v92; // xmm6_4
  double v93; // xmm0_8
  __m128 v94; // xmm8
  double v95; // xmm0_8
  float v96; // xmm7_4
  double v97; // xmm0_8
  float v98; // xmm6_4
  double v99; // xmm0_8
  __int64 v100; // rcx
  int v101; // r12d
  unsigned int v102; // eax
  unsigned int v103; // eax
  unsigned int v104; // eax
  unsigned int v105; // eax
  float v107; // [rsp+A8h] [rbp-80h]
  int v108; // [rsp+B8h] [rbp-70h]
  __int128 v109; // [rsp+F0h] [rbp-38h] BYREF
  _QWORD v110[2]; // [rsp+100h] [rbp-28h] BYREF
  float v111[6]; // [rsp+110h] [rbp-18h]
  __int128 v112; // [rsp+128h] [rbp+0h] BYREF
  __int128 v113; // [rsp+138h] [rbp+10h] BYREF
  __int128 v114; // [rsp+148h] [rbp+20h] BYREF
  float v115; // [rsp+158h] [rbp+30h]
  float v116; // [rsp+15Ch] [rbp+34h]
  int v117; // [rsp+160h] [rbp+38h]
  int v118; // [rsp+164h] [rbp+3Ch]
  __int128 v119; // [rsp+168h] [rbp+40h] BYREF
  _QWORD v120[2]; // [rsp+178h] [rbp+50h] BYREF
  __int128 v121; // [rsp+188h] [rbp+60h] BYREF
  _QWORD v122[2]; // [rsp+198h] [rbp+70h] BYREF
  _BYTE v123[8]; // [rsp+1A8h] [rbp+80h] BYREF
  __int64 v124; // [rsp+1B0h] [rbp+88h]
  _QWORD v125[3]; // [rsp+1B8h] [rbp+90h] BYREF
  _QWORD v126[3]; // [rsp+1D0h] [rbp+A8h] BYREF
  __m128 v127; // [rsp+1E8h] [rbp+C0h]
  __int128 v128; // [rsp+1F8h] [rbp+D0h]
  _DWORD v129[4]; // [rsp+208h] [rbp+E0h] BYREF
  _QWORD v130[2]; // [rsp+218h] [rbp+F0h] BYREF
  __m128 v131; // [rsp+228h] [rbp+100h] BYREF
  __m128 v132; // [rsp+238h] [rbp+110h] BYREF
  __m128 v133; // [rsp+248h] [rbp+120h] BYREF
  __m128 v134; // [rsp+258h] [rbp+130h] BYREF
  _QWORD v135[2]; // [rsp+268h] [rbp+140h] BYREF
  __m128 v136; // [rsp+278h] [rbp+150h] BYREF
  __m128 v137; // [rsp+288h] [rbp+160h] BYREF
  __m128 v138; // [rsp+298h] [rbp+170h] BYREF
  __m128 v139; // [rsp+2A8h] [rbp+180h] BYREF
  __int64 v140[24]; // [rsp+2B8h] [rbp+190h] BYREF
  __int64 v141; // [rsp+3C8h] [rbp+2A0h]

  v7 = 0LL;
  v8 = sub_180036808(a1, *(_DWORD *)(*a4 + 112));
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 64LL))(
         v8,
         &qword_1801F9718,
         v11) )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9738);
  }
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 64LL))(
         v8,
         &qword_1801F9778,
         v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9798);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F9838, 0LL) )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F9838, 0LL);
  v13 = 0LL;
  v109 = 0LL;
  v141 = sub_18006B2C0(*a4);
  v14 = **(__int64 ***)(v141 + 104);
  v15 = 0LL;
  while ( !*((_BYTE *)v14 + 25) )
  {
    sub_180059688(v14[5], *((_DWORD *)v14 + 8) == v10);
    if ( v16 == v10 )
    {
      v17 = v14[6];
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v17 = v14[6];
        v15 = v109;
      }
      v122[0] = v15;
      v15 = v14[5];
      *(_QWORD *)&v109 = v15;
      v122[1] = *((_QWORD *)&v109 + 1);
      *((_QWORD *)&v109 + 1) = v17;
      sub_180010910((__int64)v122);
    }
    v18 = (__int64 **)v14[2];
    if ( *((_BYTE *)v18 + 25) )
    {
      for ( i = (__int64 *)v14[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v14 = i;
      v14 = i;
    }
    else
    {
      v14 = (__int64 *)v14[2];
      for ( j = *v18; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v14 = j;
    }
  }
  v21 = sub_180037388(a1);
  if ( v15 )
  {
    v22 = sub_1800595C8(v15, v126);
    v23 = 1;
    v7 = *v22;
  }
  else
  {
    v124 = 0LL;
    v22 = (__int64 *)v123;
    v23 = 2;
  }
  v120[0] = v7;
  v120[1] = v22[1];
  *v22 = 0LL;
  v22[1] = 0LL;
  if ( (v23 & 2) != 0 )
  {
    v23 &= ~2u;
    sub_180010910((__int64)v123);
  }
  if ( (v23 & 1) != 0 )
    sub_180010910((__int64)v126);
  if ( v15 )
    v24 = *(_DWORD *)(v15 + 528);
  else
    v24 = 1065353216;
  v25 = 0;
  if ( v7 )
  {
    v26 = *(int **)(v7 + 128);
    if ( v26 )
      v25 = *v26;
  }
  sub_180057E0C(v21, (__int64)&qword_1801F56B8, v120);
  sub_180057E58(v21, (__int64)&qword_1801F56B8, (_QWORD *)(v141 + 248));
  *(double *)v13.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9898);
  v27 = v13.m128_i32[0];
  *(double *)v13.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F98B8);
  v28 = v13.m128_i32[0];
  *(double *)v13.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F97B8);
  v29 = v13;
  *(double *)v13.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F97D8);
  v30 = v13;
  *(double *)v13.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F97F8);
  v127 = _mm_mul_ps(
           _mm_movelh_ps(_mm_unpacklo_ps(v29, v30), _mm_unpacklo_ps(v13, (__m128)0x3F800000u)),
           _mm_shuffle_ps(v9, v9, 0));
  sub_180057DB0(v21);
  v111[0] = (float)v25;
  *(_QWORD *)&v111[1] = __PAIR64__(v27, v24);
  LODWORD(v111[3]) = v28;
  v128 = *(_OWORD *)v111;
  sub_180057EA4(v21);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9758);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9818);
  sub_1800406D4((__int64)v129, (unsigned __int64 *)&qword_180128A50);
  sub_180071988(v31, v129, a4);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F98D8);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F98F8);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &qword_1801FA698, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801FA6B8);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801FA998);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9918);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9938);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9958);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9978);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9998);
  v32 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9858);
  v30.m128_i32[0] = LODWORD(v32);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9878);
  if ( v30.m128_f32[0] > 0.0 )
    *(_BYTE *)(a1 + 1457) = 1;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &qword_1801F9658, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &qword_1801FA9D8, 0LL);
  v33 = sub_180037388(a1);
  sub_180056B94(v33, v110);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &qword_1801FA678, 0LL);
  v35 = v34;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801FA658);
  LOBYTE(v36) = v35;
  sub_180074F6C(v38, v37, v36, v110, (__int64)&qword_1801F51B8);
  v39 = (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F8318, 0LL) != 0;
  v40 = sub_18001875C(v140, (__int64)&qword_1801F5FF8);
  sub_180057684(v21, &v112, (char **)v40);
  if ( v39 )
    v107 = 0.0;
  else
    v107 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9B58);
  v125[2] = &v119;
  v119 = 0LL;
  if ( *((_QWORD *)&v112 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v112 + 1) + 8LL));
  v119 = v112;
  v41 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F9C58, 0LL);
  v113 = 0LL;
  v43 = a4[1];
  if ( v43 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
    v43 = a4[1];
  }
  *(_QWORD *)&v113 = *a4;
  *((_QWORD *)&v113 + 1) = v43;
  v44 = *sub_180036540(a1, v135, v42, &v113);
  sub_180065C7C(v44);
  v108 = *(_DWORD *)(v44 + 332);
  v114 = 0LL;
  v46 = a4[1];
  if ( v46 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v46 + 8));
    v46 = a4[1];
  }
  *(_QWORD *)&v114 = *a4;
  *((_QWORD *)&v114 + 1) = v46;
  v47 = *(_DWORD *)(*sub_180036540(a1, v130, v45, &v114) + 328LL);
  v48 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9C18);
  v49 = LODWORD(v48);
  v50 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9BF8);
  v51 = LODWORD(v50);
  v52 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9BD8);
  v53 = LODWORD(v52);
  v54 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9BB8);
  v55 = LODWORD(v54);
  v56 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9B98);
  v57 = LODWORD(v56);
  v58 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9B78);
  v59 = LODWORD(v58);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F8838);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F8818);
  sub_180074FB4(v61, v60, v62, v63, v59, v57, v55, v53, v51, v49, v47, v108, v41, (__int64)&v119, v110);
  sub_180010910((__int64)v130);
  sub_180010910((__int64)v135);
  LOBYTE(v64) = v107 > 0.0;
  v65 = v112;
  sub_180069B6C(v112, &qword_1801F6098, v64);
  LOBYTE(v66) = 1;
  sub_180069B6C(v65, &qword_1801F60B8, v66);
  LOBYTE(v67) = 1;
  sub_180069B6C(v65, &qword_1801F60D8, v67);
  LOBYTE(v68) = 1;
  sub_180069B6C(v65, &qword_1801F60F8, v68);
  LOBYTE(v69) = 1;
  sub_180069B6C(v65, &qword_1801F6118, v69);
  v70 = v110[0];
  sub_180093340(v110[0]);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  sub_180093340(v70);
  v71 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9E58);
  X = *(float *)&v71;
  v73 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9DF8);
  v74 = *(float *)&v73;
  v75 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9D78);
  v76 = *(float *)&v75;
  v77 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9CF8);
  v78 = *sub_18007043C(&v136, *(float *)&v77, v76, v74, X);
  v79 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9E78);
  v80 = *(float *)&v79;
  v81 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9E18);
  v82 = *(float *)&v81;
  v83 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9D98);
  v84 = *(float *)&v83;
  v85 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9D18);
  v86 = *sub_18007043C(&v137, *(float *)&v85, v84, v82, v80);
  v87 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9E98);
  v88 = *(float *)&v87;
  v89 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9E38);
  v90 = *(float *)&v89;
  v91 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9DB8);
  v92 = *(float *)&v91;
  v93 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9D38);
  v94 = *sub_18007043C(&v138, *(float *)&v93, v92, v90, v88);
  v95 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9DD8);
  v96 = *(float *)&v95;
  v97 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9D58);
  v98 = *(float *)&v97;
  v99 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9CD8);
  v131 = v78;
  v132 = v86;
  v133 = v94;
  v134 = *sub_18007043C(&v139, *(float *)&v99, v98, v96, 0.0);
  sub_180074E38(v100, &v134, &v133, &v132, &v131, v110);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &qword_1801F9CB8);
  sub_1800A0F48(*(_QWORD *)(v141 + 120));
  sub_18009FA64(*(_QWORD *)(v141 + 120), v125);
  sub_18009FA98(*(_QWORD *)(v141 + 120), &v121);
  sub_180057E0C(v21, (__int64)&qword_1801F61B8, v125);
  sub_180057E58(v21, (__int64)&qword_1801F61B8, (_QWORD *)(v141 + 232));
  sub_180057EA4(v21);
  LODWORD(v65) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(
                   v8,
                   &qword_1801F8958,
                   0LL);
  v101 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F8978, 0LL);
  v102 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F8878, 0LL);
  sub_180049D3C(0, v102);
  v103 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F8898, 1LL);
  sub_180049D3C(1, v103);
  v104 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F88D8, 2LL);
  sub_180049D3C(2, v104);
  v105 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &qword_1801F88B8, 3LL);
  sub_180049D3C(3, v105);
  v115 = (float)(int)v65;
  v116 = (float)v101;
  v117 = 0;
  v118 = 0;
  sub_180093800(v70);
  if ( (_DWORD)v65 || v101 )
    *(_BYTE *)(a1 + 1457) = 1;
  sub_1800727B4(a1, (__int64)a4);
  sub_180010910((__int64)v125);
  sub_180010910((__int64)&v112);
  sub_180010910((__int64)v110);
  sub_180010910((__int64)v120);
  return sub_180010910((__int64)&v109);
}
