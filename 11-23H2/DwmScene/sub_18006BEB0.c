/*
 * XREFs of sub_18006BEB0 @ 0x18006BEB0
 * Callers:
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18003BDE0 @ 0x18003BDE0 (sub_18003BDE0.c)
 *     sub_1800448E0 @ 0x1800448E0 (sub_1800448E0.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180050788 @ 0x180050788 (sub_180050788.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_18005081C @ 0x18005081C (sub_18005081C.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_180051BD8 @ 0x180051BD8 (sub_180051BD8.c)
 *     sub_180051C84 @ 0x180051C84 (sub_180051C84.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_180062B54 @ 0x180062B54 (sub_180062B54.c)
 *     sub_180066B40 @ 0x180066B40 (sub_180066B40.c)
 *     sub_180067DC0 @ 0x180067DC0 (sub_180067DC0.c)
 *     sub_180068C20 @ 0x180068C20 (sub_180068C20.c)
 *     sub_18006AC60 @ 0x18006AC60 (sub_18006AC60.c)
 *     sub_18006AD94 @ 0x18006AD94 (sub_18006AD94.c)
 *     sub_18006ADDC @ 0x18006ADDC (sub_18006ADDC.c)
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 *     sub_180085A64 @ 0x180085A64 (sub_180085A64.c)
 *     sub_18008FFEC @ 0x18008FFEC (sub_18008FFEC.c)
 *     sub_180090010 @ 0x180090010 (sub_180090010.c)
 *     sub_1800911A4 @ 0x1800911A4 (sub_1800911A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18006BEB0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __m128 v9; // xmm13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // rbx
  int v14; // r8d
  __int64 **v15; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v18; // rdi
  __m128 *v19; // rax
  char v20; // bl
  __int64 v21; // r13
  int v22; // xmm12_4
  int v23; // ebx
  int *v24; // rax
  __int64 v25; // rdi
  double v26; // xmm0_8
  unsigned int v27; // xmm9_4
  double v28; // xmm0_8
  __int32 v29; // xmm8_4
  double v30; // xmm0_8
  unsigned int v31; // xmm7_4
  double v32; // xmm0_8
  unsigned int v33; // xmm6_4
  double v34; // xmm0_8
  __int64 v35; // rcx
  double v36; // xmm0_8
  double v37; // xmm0_8
  double v38; // xmm0_8
  double v39; // xmm0_8
  double v40; // xmm0_8
  double v41; // xmm0_8
  double v42; // xmm0_8
  double v43; // xmm0_8
  double v44; // xmm0_8
  float v45; // xmm6_4
  __int64 v46; // rax
  char v47; // al
  char v48; // bl
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // bl
  _QWORD *v53; // rax
  _QWORD *v54; // rsi
  int v55; // edi
  _QWORD *v56; // rax
  __int64 v57; // r8
  __int64 v58; // rbx
  int v59; // xmm14_4
  _QWORD *v60; // rax
  __int64 v61; // r8
  int v62; // xmm13_4
  double v63; // xmm0_8
  int v64; // xmm12_4
  double v65; // xmm0_8
  int v66; // xmm11_4
  double v67; // xmm0_8
  int v68; // xmm10_4
  double v69; // xmm0_8
  int v70; // xmm9_4
  double v71; // xmm0_8
  int v72; // xmm8_4
  double v73; // xmm0_8
  int v74; // xmm7_4
  float v75; // xmm7_4
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rbx
  unsigned __int64 v81; // rdi
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128 v89; // xmm10
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128 v97; // xmm9
  double v98; // xmm0_8
  float v99; // xmm8_4
  double v100; // xmm0_8
  float v101; // xmm7_4
  double v102; // xmm0_8
  float v103; // xmm6_4
  double v104; // xmm0_8
  __m128 v105; // xmm8
  double v106; // xmm0_8
  float v107; // xmm7_4
  double v108; // xmm0_8
  float v109; // xmm6_4
  double v110; // xmm0_8
  __int64 v111; // rcx
  __int64 v112; // rsi
  __int64 v113; // rbx
  int v114; // esi
  unsigned int v115; // eax
  unsigned int v116; // eax
  unsigned int v117; // eax
  unsigned int v118; // eax
  __int64 result; // rax
  int v120; // [rsp+28h] [rbp-100h]
  __m128 v121; // [rsp+A8h] [rbp-80h] BYREF
  __m128 v122; // [rsp+B8h] [rbp-70h] BYREF
  float v123; // [rsp+C8h] [rbp-60h]
  int v124; // [rsp+CCh] [rbp-5Ch]
  __m128 v125; // [rsp+D0h] [rbp-58h] BYREF
  int v126; // [rsp+E0h] [rbp-48h]
  int v127; // [rsp+E4h] [rbp-44h]
  int v128; // [rsp+E8h] [rbp-40h]
  float v129; // [rsp+ECh] [rbp-3Ch]
  int v130; // [rsp+F0h] [rbp-38h]
  int v131; // [rsp+F4h] [rbp-34h]
  int v132; // [rsp+F8h] [rbp-30h]
  int v133; // [rsp+FCh] [rbp-2Ch]
  int v134; // [rsp+100h] [rbp-28h]
  int v135; // [rsp+104h] [rbp-24h]
  float v136; // [rsp+108h] [rbp-20h]
  __m128 v137; // [rsp+118h] [rbp-10h] BYREF
  __int64 v138; // [rsp+128h] [rbp+0h]
  __int64 v139; // [rsp+130h] [rbp+8h]
  __m128 v140; // [rsp+138h] [rbp+10h] BYREF
  __m128 v141; // [rsp+148h] [rbp+20h] BYREF
  __int128 v142; // [rsp+158h] [rbp+30h] BYREF
  __m128 v143; // [rsp+168h] [rbp+40h] BYREF
  __m128 v144; // [rsp+178h] [rbp+50h] BYREF
  __m128 v145; // [rsp+188h] [rbp+60h] BYREF
  _QWORD v146[2]; // [rsp+198h] [rbp+70h] BYREF
  __m128 v147; // [rsp+1A8h] [rbp+80h] BYREF
  _QWORD v148[24]; // [rsp+1B8h] [rbp+90h] BYREF

  v7 = 0LL;
  v8 = sub_180034094(a1, *(_DWORD *)(*a4 + 112));
  v123 = 0.0;
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D56A8, v11) )
    v123 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D56C8);
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D5708, v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5728);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D57C8, 0LL) )
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D57C8, 0LL);
  v142 = 0LL;
  v138 = sub_1800628C8(*a4);
  v13 = **(__int64 ***)(v138 + 104);
  while ( !*((_BYTE *)v13 + 25) )
  {
    sub_180051C84(v13[5], *((_DWORD *)v13 + 8) == v10);
    if ( v14 == v10 )
      sub_1800124F8((__int64 *)&v142, v13 + 5);
    v15 = (__int64 **)v13[2];
    if ( *((_BYTE *)v15 + 25) )
    {
      for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v13 = i;
      v13 = i;
    }
    else
    {
      v13 = (__int64 *)v13[2];
      for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v13 = j;
    }
  }
  v139 = sub_180034870(a1);
  v18 = v142;
  if ( (_QWORD)v142 )
  {
    v19 = (__m128 *)sub_180051BD8(v142, &v125);
    v20 = 1;
    v7 = v19->m128_u64[0];
  }
  else
  {
    v122.m128_u64[1] = 0LL;
    v19 = &v122;
    v20 = 2;
  }
  v146[0] = v7;
  v21 = v19->m128_i64[1];
  v146[1] = v21;
  v19->m128_u64[0] = 0LL;
  v19->m128_u64[1] = 0LL;
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~2u;
    if ( v122.m128_u64[1] )
      sub_180010530(v122.m128_i64[1]);
  }
  if ( (v20 & 1) != 0 && v125.m128_u64[1] )
    sub_180010530(v125.m128_i64[1]);
  if ( v18 )
    v22 = *(_DWORD *)(v18 + 528);
  else
    v22 = 1065353216;
  v23 = 0;
  if ( v7 )
  {
    v24 = *(int **)(v7 + 128);
    if ( v24 )
      v23 = *v24;
  }
  v25 = v139;
  sub_1800507E4(v139, (__int64)&unk_1801D78A8, v146);
  sub_18005081C(v25, (__int64)&unk_1801D78A8, (_QWORD *)(v138 + 248));
  v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5828);
  v27 = LODWORD(v26);
  v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5848);
  v29 = LODWORD(v28);
  v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5748);
  v31 = LODWORD(v30);
  v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5768);
  v33 = LODWORD(v32);
  *(float *)&v32 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5788);
  v121.m128_u64[0] = __PAIR64__(v33, v31);
  v121.m128_u64[1] = LODWORD(v32) | 0x3F80000000000000LL;
  v122 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v121);
  sub_180050788(v25);
  v121.m128_f32[0] = (float)v23;
  *(unsigned __int64 *)((char *)v121.m128_u64 + 4) = __PAIR64__(v27, v22);
  v121.m128_i32[3] = v29;
  v122 = v121;
  sub_180050854(v25);
  v34 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D56E8);
  v126 = LODWORD(v34);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D57A8);
  sub_18003BDE0((__int64)&v122, (unsigned __int64 *)&qword_180106AB0);
  sub_180067DC0(v35, &v122, a4);
  v36 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5868);
  v128 = LODWORD(v36);
  v129 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5888);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D6628, 0LL);
  v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D6648);
  v124 = LODWORD(v37);
  v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D6928);
  v127 = LODWORD(v38);
  v39 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D58A8);
  v130 = LODWORD(v39);
  v40 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D58C8);
  v131 = LODWORD(v40);
  v41 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D58E8);
  v132 = LODWORD(v41);
  v42 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5908);
  v133 = LODWORD(v42);
  v43 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5928);
  v134 = LODWORD(v43);
  v44 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D57E8);
  v45 = *(float *)&v44;
  v135 = LODWORD(v44);
  v136 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5808);
  if ( v45 > 0.0 )
    *(_BYTE *)(a1 + 1457) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D55E8, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D6968, 0LL);
  v46 = sub_180034870(a1);
  sub_18004FB08(v46, &v121);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D6608, 0LL);
  v48 = v47;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D65E8);
  LOBYTE(v49) = v48;
  sub_18006AD94(v51, v50, v49, &v121, (__int64)&unk_1801D73A8);
  v52 = 0;
  if ( (unsigned int)sub_180062B54(v8) )
  {
    v52 = 1;
    v124 = 1065353216;
  }
  v53 = sub_180017648(v148, (__int64)&unk_1801D7EC8);
  sub_1800502A4(v25, &v122, v53);
  if ( v52 )
    v140.m128_i32[0] = 0;
  else
    v140.m128_i32[0] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5AE8);
  v141.m128_u64[0] = (unsigned __int64)&v147;
  v54 = sub_18001246C(&v147, &v122);
  v55 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D5BE8, 0LL);
  v56 = sub_18001246C(&v143, a4);
  v58 = *sub_180033EB4(a1, &v137, v57, v56);
  sub_18005D90C(v58);
  v59 = *(_DWORD *)(v58 + 332);
  v60 = sub_18001246C(&v144, a4);
  v62 = *(_DWORD *)(*sub_180033EB4(a1, &v145, v61, v60) + 328LL);
  v63 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5BA8);
  v64 = LODWORD(v63);
  v65 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5B88);
  v66 = LODWORD(v65);
  v67 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5B68);
  v68 = LODWORD(v67);
  v69 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5B48);
  v70 = LODWORD(v69);
  v71 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5B28);
  v72 = LODWORD(v71);
  v73 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5B08);
  v74 = LODWORD(v73);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D47C8);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D47A8);
  v120 = v74;
  v75 = v140.m128_f32[0];
  sub_18006ADDC(v77, v76, v78, v79, v120, v72, v70, v68, v66, v64, v62, v59, v55, (__int64)v54, &v121);
  if ( v145.m128_u64[1] )
    sub_180010530(v145.m128_i64[1]);
  if ( v137.m128_u64[1] )
    sub_180010530(v137.m128_i64[1]);
  v80 = v122.m128_u64[0];
  sub_180061204(v122.m128_i64[0], qword_1801D8288, v75 > 0.0);
  sub_180061204(v80, qword_1801D81E8, 1);
  sub_180061204(v80, qword_1801D8208, 1);
  sub_180061204(v80, qword_1801D8248, 1);
  sub_180061204(v80, qword_1801D8268, 1);
  v81 = v121.m128_u64[0];
  sub_180085608(v121.m128_u64[0]);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  sub_180085608(v81);
  v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5DE8);
  v83 = *(float *)&v82;
  v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5D88);
  v85 = *(float *)&v84;
  v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5D08);
  v87 = *(float *)&v86;
  v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5C88);
  v89 = *sub_180066B40(&v147, *(float *)&v88, v87, v85, v83);
  v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5E08);
  v91 = *(float *)&v90;
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5DA8);
  v93 = *(float *)&v92;
  v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5D28);
  v95 = *(float *)&v94;
  v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5CA8);
  v97 = *sub_180066B40(&v125, *(float *)&v96, v95, v93, v91);
  v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5E28);
  v99 = *(float *)&v98;
  v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5DC8);
  v101 = *(float *)&v100;
  v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5D48);
  v103 = *(float *)&v102;
  v104 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5CC8);
  v105 = *sub_180066B40(&v141, *(float *)&v104, v103, v101, v99);
  v106 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5D68);
  v107 = *(float *)&v106;
  v108 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5CE8);
  v109 = *(float *)&v108;
  v110 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5C68);
  v137 = v89;
  v145 = v97;
  v144 = v105;
  v143 = *sub_180066B40(&v140, *(float *)&v110, v109, v107, 0.0);
  sub_18006AC60(v111, &v143, &v144, &v145, &v137, &v121);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D5C48);
  v112 = v138;
  sub_1800911A4(*(_QWORD *)(v138 + 120));
  sub_18008FFEC(*(_QWORD *)(v112 + 120), &v141);
  sub_180090010(*(_QWORD *)(v112 + 120), &v137);
  v113 = v139;
  sub_1800507E4(v139, (__int64)&unk_1801D8068, &v141);
  sub_18005081C(v113, (__int64)&unk_1801D8068, (_QWORD *)(v112 + 232));
  sub_180050854(v113);
  LODWORD(v113) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D48E8, 0LL);
  v114 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D4908, 0LL);
  v115 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D4808, 0LL);
  sub_1800448E0(0, v115);
  v116 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D4828, 1LL);
  sub_1800448E0(1, v116);
  v117 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D4868, 2LL);
  sub_1800448E0(2, v117);
  v118 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801D4848, 3LL);
  sub_1800448E0(3, v118);
  v125.m128_f32[0] = (float)(int)v113;
  v125.m128_f32[1] = (float)v114;
  v125.m128_u64[1] = 0LL;
  sub_180085A64(v81);
  if ( (_DWORD)v113 || v114 )
    *(_BYTE *)(a1 + 1457) = 1;
  result = sub_180068C20(a1, (__int64)a4);
  if ( v141.m128_u64[1] )
    result = sub_180010530(v141.m128_i64[1]);
  if ( v122.m128_u64[1] )
    result = sub_180010530(v122.m128_i64[1]);
  if ( v121.m128_u64[1] )
    result = sub_180010530(v121.m128_i64[1]);
  if ( v21 )
    result = sub_180010530(v21);
  if ( *((_QWORD *)&v142 + 1) )
    return sub_180010530(*((__int64 *)&v142 + 1));
  return result;
}
