/*
 * XREFs of sub_180067EB0 @ 0x180067EB0
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_1800443C4 @ 0x1800443C4 (sub_1800443C4.c)
 *     sub_1800446B0 @ 0x1800446B0 (sub_1800446B0.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_1800448F8 @ 0x1800448F8 (sub_1800448F8.c)
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 *     sub_180044B1C @ 0x180044B1C (sub_180044B1C.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_180066B40 @ 0x180066B40 (sub_180066B40.c)
 *     sub_18006AC60 @ 0x18006AC60 (sub_18006AC60.c)
 *     sub_18006AD94 @ 0x18006AD94 (sub_18006AD94.c)
 *     sub_18006ADDC @ 0x18006ADDC (sub_18006ADDC.c)
 *     sub_18007FECC @ 0x18007FECC (sub_18007FECC.c)
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180067EB0(__int64 a1, __int64 *a2, char a3, float a4)
{
  _QWORD *v7; // r15
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 result; // rax
  double v12; // xmm0_8
  unsigned int v13; // xmm8_4
  double v14; // xmm0_8
  unsigned int v15; // xmm7_4
  double v16; // xmm0_8
  unsigned int v17; // xmm6_4
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned int v20; // xmm8_4
  double v21; // xmm0_8
  unsigned int v22; // xmm7_4
  double v23; // xmm0_8
  unsigned int v24; // xmm6_4
  double v25; // xmm0_8
  double v26; // xmm0_8
  unsigned int v27; // xmm8_4
  double v28; // xmm0_8
  unsigned int v29; // xmm7_4
  double v30; // xmm0_8
  unsigned int v31; // xmm6_4
  double v32; // xmm0_8
  double v33; // xmm0_8
  unsigned int v34; // xmm8_4
  double v35; // xmm0_8
  unsigned int v36; // xmm7_4
  double v37; // xmm0_8
  unsigned int v38; // xmm6_4
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rbx
  _QWORD *v44; // rax
  char v45; // al
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  _QWORD *v49; // rsi
  int v50; // edi
  _QWORD *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rbx
  int v54; // xmm15_4
  _QWORD *v55; // rax
  __int64 v56; // r8
  int v57; // xmm14_4
  double v58; // xmm0_8
  int v59; // xmm13_4
  double v60; // xmm0_8
  int v61; // xmm12_4
  double v62; // xmm0_8
  int v63; // xmm11_4
  double v64; // xmm0_8
  int v65; // xmm10_4
  double v66; // xmm0_8
  int v67; // xmm9_4
  double v68; // xmm0_8
  int v69; // xmm8_4
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  double v74; // xmm0_8
  float v75; // xmm8_4
  double v76; // xmm0_8
  float v77; // xmm7_4
  double v78; // xmm0_8
  float v79; // xmm6_4
  double v80; // xmm0_8
  __m128 v81; // xmm10
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128 v89; // xmm9
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128 v97; // xmm8
  double v98; // xmm0_8
  float v99; // xmm7_4
  double v100; // xmm0_8
  float v101; // xmm6_4
  double v102; // xmm0_8
  int v103; // ecx
  __int64 v104; // r8
  char v105; // bl
  unsigned __int64 v106; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-78h]
  __m128 v108; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v109; // [rsp+C8h] [rbp-60h] BYREF
  __m128 v110; // [rsp+D8h] [rbp-50h] BYREF
  __m128 v111; // [rsp+E8h] [rbp-40h] BYREF
  __int128 v112; // [rsp+F8h] [rbp-30h] BYREF
  __m128 v113; // [rsp+108h] [rbp-20h] BYREF
  __m128 v114; // [rsp+118h] [rbp-10h] BYREF
  __m128 v115[2]; // [rsp+128h] [rbp+0h] BYREF
  __m128 v116[11]; // [rsp+148h] [rbp+20h] BYREF

  v7 = (_QWORD *)sub_1800628C8(*a2);
  if ( sub_180011DE0(v7 + 25) )
    sub_18003D3C8(*v8, 1, a3);
  v9 = v7[27];
  if ( v9 )
  {
    v106 = 0x3F8000003F800000LL;
    LODWORD(v107) = 1065353216;
    *((float *)&v107 + 1) = a4;
    sub_1800446B0(v9);
  }
  v10 = sub_180034094(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D60C8, 0LL);
  if ( (_BYTE)result )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5E48);
      sub_1800448F8(v7[39]);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5EE8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5F88);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6028);
      v12 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5E68);
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5E88);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5EA8);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5EC8);
      v106 = __PAIR64__(v15, v13);
      v107 = __PAIR64__(LODWORD(v18), v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5F08);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5F28);
      v22 = LODWORD(v21);
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5F48);
      v24 = LODWORD(v23);
      v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5F68);
      v109.m128_u64[0] = __PAIR64__(v22, v20);
      v109.m128_u64[1] = __PAIR64__(LODWORD(v25), v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5FA8);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5FC8);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D5FE8);
      v31 = LODWORD(v30);
      v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6008);
      v110.m128_u64[0] = __PAIR64__(v29, v27);
      v110.m128_u64[1] = __PAIR64__(LODWORD(v32), v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6048);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6068);
      v36 = LODWORD(v35);
      v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6088);
      v38 = LODWORD(v37);
      *(float *)&v37 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D60A8);
      v108.m128_u64[0] = __PAIR64__(v36, v34);
      v108.m128_u64[1] = __PAIR64__(LODWORD(v37), v38);
      v111 = 0LL;
      v112 = 0LL;
      sub_18007FECC(v40, v39, v41, (unsigned int)&v111, (__int64)&v112);
      sub_180044B1C(v7[39]);
      sub_180044B1C(v7[39]);
      sub_1800446B0(v7[39]);
      sub_1800446B0(v7[39]);
      sub_1800446B0(v7[39]);
      result = sub_1800446B0(v7[39]);
    }
    v42 = v7[37];
    if ( v42 )
    {
      sub_18004493C(v42, (__int64)&unk_1801D8548, v7 + 33);
      v43 = sub_180034870(a1);
      v44 = sub_180017648(v115, (__int64)&unk_1801D8448);
      sub_1800502A4(v43, &v112, v44);
      sub_1800443C4(v7[37], &v106);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D6128, 0LL);
      LOBYTE(v43) = v45;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6108);
      LOBYTE(v46) = v43;
      sub_18006AD94(v48, v47, v46, (unsigned int)&v106, (__int64)&unk_1801D8568);
      v49 = sub_18001246C(&v111, &v112);
      v50 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, &unk_1801D6288, 0LL);
      v51 = sub_18001246C(&v108, a2);
      v53 = *sub_180033EB4(a1, &v114, v52, v51);
      sub_18005D90C(v53);
      v54 = *(_DWORD *)(v53 + 332);
      v55 = sub_18001246C(&v110, a2);
      v57 = *(_DWORD *)(*sub_180033EB4(a1, &v113, v56, v55) + 328LL);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6248);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6228);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6208);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D61E8);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D61C8);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D61A8);
      v69 = LODWORD(v68);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6188);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D47C8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D47A8);
      sub_18006ADDC(
        v71,
        v70,
        v72,
        v73,
        v69,
        v67,
        v65,
        v63,
        v61,
        v59,
        v57,
        v54,
        v50,
        (__int64)v49,
        (__int64)&v106,
        (__int64)&unk_1801D86A8,
        (__int64)&unk_1801D86C8,
        (__int64)&unk_1801D86E8,
        (__int64)&unk_1801D8708);
      if ( v113.m128_u64[1] )
        sub_180010530(v113.m128_i64[1]);
      if ( v114.m128_u64[1] )
        sub_180010530(v114.m128_i64[1]);
      v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6488);
      v75 = *(float *)&v74;
      v76 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6428);
      v77 = *(float *)&v76;
      v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D63A8);
      v79 = *(float *)&v78;
      v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6328);
      v81 = *sub_180066B40(&v110, *(float *)&v80, v79, v77, v75);
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D64A8);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6448);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D63C8);
      v87 = *(float *)&v86;
      v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6348);
      v89 = *sub_180066B40(&v109, *(float *)&v88, v87, v85, v83);
      v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D64C8);
      v91 = *(float *)&v90;
      v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6468);
      v93 = *(float *)&v92;
      v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D63E8);
      v95 = *(float *)&v94;
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6368);
      v97 = *sub_180066B40(v116, *(float *)&v96, v95, v93, v91);
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6408);
      v99 = *(float *)&v98;
      v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6388);
      v101 = *(float *)&v100;
      v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6308);
      v114 = v81;
      v113 = v89;
      v111 = v97;
      v108 = *sub_180066B40(v115, *(float *)&v102, v101, v99, 0.0);
      sub_18006AC60(
        v103,
        (unsigned int)&v108,
        (unsigned int)&v111,
        (unsigned int)&v113,
        (__int64)&v114,
        (__int64)&v106,
        (__int64)&unk_1801D8768,
        (__int64)&unk_1801D8788,
        (__int64)&unk_1801D87A8);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D6148, 0LL);
      sub_180085608(v106);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801D6168);
      sub_180085608(v106);
      LOBYTE(v104) = 1;
      v105 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801D60E8, v104);
      sub_1800446D8(v7[37], (__int64)&unk_1801D8468, v105);
      sub_1800446D8(v7[37], (__int64)&unk_1801D8488, v105);
      sub_1800446D8(v7[37], (__int64)&unk_1801D84A8, v105);
      result = sub_1800446D8(v7[37], (__int64)&unk_1801D84C8, v105);
      if ( v107 )
        result = sub_180010530(v107);
      if ( *((_QWORD *)&v112 + 1) )
        return sub_180010530(*((__int64 *)&v112 + 1));
    }
  }
  return result;
}
