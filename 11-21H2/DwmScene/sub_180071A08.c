/*
 * XREFs of sub_180071A08 @ 0x180071A08
 * Callers:
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180049D54 @ 0x180049D54 (sub_180049D54.c)
 *     sub_180049D98 @ 0x180049D98 (sub_180049D98.c)
 *     sub_18004A0C8 @ 0x18004A0C8 (sub_18004A0C8.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18007043C @ 0x18007043C (sub_18007043C.c)
 *     sub_180074E38 @ 0x180074E38 (sub_180074E38.c)
 *     sub_180074F6C @ 0x180074F6C (sub_180074F6C.c)
 *     sub_180074FB4 @ 0x180074FB4 (sub_180074FB4.c)
 *     sub_18008CC5C @ 0x18008CC5C (sub_18008CC5C.c)
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180071A08(__int64 a1, __int64 *a2, char a3, float a4)
{
  _QWORD *v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  double v15; // xmm0_8
  unsigned int v16; // xmm8_4
  double v17; // xmm0_8
  unsigned int v18; // xmm7_4
  double v19; // xmm0_8
  unsigned int v20; // xmm6_4
  double v21; // xmm0_8
  double v22; // xmm0_8
  unsigned int v23; // xmm8_4
  double v24; // xmm0_8
  unsigned int v25; // xmm7_4
  double v26; // xmm0_8
  unsigned int v27; // xmm6_4
  double v28; // xmm0_8
  double v29; // xmm0_8
  unsigned int v30; // xmm8_4
  double v31; // xmm0_8
  unsigned int v32; // xmm7_4
  double v33; // xmm0_8
  unsigned int v34; // xmm6_4
  double v35; // xmm0_8
  double v36; // xmm0_8
  unsigned int v37; // xmm8_4
  double v38; // xmm0_8
  unsigned int v39; // xmm7_4
  double v40; // xmm0_8
  unsigned int v41; // xmm6_4
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 *v47; // rax
  char v48; // al
  int v49; // r8d
  int v50; // edx
  int v51; // ecx
  __int64 v52; // r8
  int v53; // r12d
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // xmm14_4
  double v59; // xmm0_8
  int v60; // xmm13_4
  double v61; // xmm0_8
  int v62; // xmm12_4
  double v63; // xmm0_8
  int v64; // xmm11_4
  double v65; // xmm0_8
  int v66; // xmm10_4
  double v67; // xmm0_8
  int v68; // xmm9_4
  double v69; // xmm0_8
  int v70; // xmm8_4
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  double v75; // xmm0_8
  float X; // xmm8_4
  double v77; // xmm0_8
  float v78; // xmm7_4
  double v79; // xmm0_8
  float v80; // xmm6_4
  double v81; // xmm0_8
  __m128 v82; // xmm10
  double v83; // xmm0_8
  float v84; // xmm8_4
  double v85; // xmm0_8
  float v86; // xmm7_4
  double v87; // xmm0_8
  float v88; // xmm6_4
  double v89; // xmm0_8
  __m128 v90; // xmm9
  double v91; // xmm0_8
  float v92; // xmm8_4
  double v93; // xmm0_8
  float v94; // xmm7_4
  double v95; // xmm0_8
  float v96; // xmm6_4
  double v97; // xmm0_8
  __m128 v98; // xmm8
  double v99; // xmm0_8
  float v100; // xmm7_4
  double v101; // xmm0_8
  float v102; // xmm6_4
  double v103; // xmm0_8
  int v104; // ecx
  __int64 v105; // r8
  char v106; // bl
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  _QWORD v111[2]; // [rsp+A8h] [rbp-80h] BYREF
  __m128 v112; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v113; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v114; // [rsp+D8h] [rbp-50h] BYREF
  __m128 v115; // [rsp+E8h] [rbp-40h] BYREF
  __m128 v116; // [rsp+F8h] [rbp-30h] BYREF
  __m128 v117; // [rsp+108h] [rbp-20h] BYREF
  __int128 v118; // [rsp+118h] [rbp-10h] BYREF
  __m128 v119; // [rsp+128h] [rbp+0h] BYREF
  __m128 v120; // [rsp+138h] [rbp+10h] BYREF
  __int128 v121; // [rsp+148h] [rbp+20h] BYREF
  __int128 v122; // [rsp+158h] [rbp+30h] BYREF
  __m128 v123; // [rsp+168h] [rbp+40h] BYREF
  _QWORD v124[2]; // [rsp+178h] [rbp+50h] BYREF
  _QWORD v125[2]; // [rsp+188h] [rbp+60h] BYREF
  __int64 v126[24]; // [rsp+198h] [rbp+70h] BYREF
  int v127; // [rsp+290h] [rbp+168h]

  v7 = (_QWORD *)sub_18006B2C0(*a2);
  if ( sub_1800122C0(v7 + 25) )
  {
    v9 = *v8;
    sub_1800436D4(*v8);
    v10 = *(_QWORD *)(v9 + 448);
    if ( a3 )
      v11 = v10 | 2;
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_QWORD *)(v9 + 448) = v11;
  }
  v12 = v7[27];
  if ( v12 )
  {
    v115.m128_u64[0] = 0x3F8000003F800000LL;
    v115.m128_i32[2] = 1065353216;
    v115.m128_f32[3] = a4;
    sub_180049AC8(v12);
  }
  v13 = sub_180036808(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &qword_1801FA138, 0LL);
  if ( (_BYTE)result )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9EB8);
      sub_180049D54(v7[39]);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9F58);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9FF8);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA098);
      v15 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9ED8);
      v16 = LODWORD(v15);
      v17 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9EF8);
      v18 = LODWORD(v17);
      v19 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9F18);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9F38);
      v116.m128_u64[0] = __PAIR64__(v18, v16);
      v116.m128_u64[1] = __PAIR64__(LODWORD(v21), v20);
      v22 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9F78);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9F98);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9FB8);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F9FD8);
      v117.m128_u64[0] = __PAIR64__(v25, v23);
      v117.m128_u64[1] = __PAIR64__(LODWORD(v28), v27);
      v29 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA018);
      v30 = LODWORD(v29);
      v31 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA038);
      v32 = LODWORD(v31);
      v33 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA058);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA078);
      v112.m128_u64[0] = __PAIR64__(v32, v30);
      v112.m128_u64[1] = __PAIR64__(LODWORD(v35), v34);
      v36 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA0B8);
      v37 = LODWORD(v36);
      v38 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA0D8);
      v39 = LODWORD(v38);
      v40 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA0F8);
      v41 = LODWORD(v40);
      *(float *)&v40 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA118);
      v113.m128_u64[0] = __PAIR64__(v39, v37);
      v113.m128_u64[1] = __PAIR64__(LODWORD(v40), v41);
      v119 = 0LL;
      v120 = 0LL;
      sub_18008CC5C(v43, v42, v44, (unsigned int)&v119, (__int64)&v120);
      sub_18004A0C8(v7[39]);
      sub_18004A0C8(v7[39]);
      sub_180049AC8(v7[39]);
      sub_180049AC8(v7[39]);
      sub_180049AC8(v7[39]);
      result = sub_180049AC8(v7[39]);
    }
    v45 = v7[37];
    if ( v45 )
    {
      sub_180049D98(v45, (__int64)&qword_1801F6598, v7 + 33);
      v46 = sub_180037388(a1);
      v47 = sub_18001875C(v126, (__int64)&qword_1801F6478);
      sub_180057684(v46, &v122, (char **)v47);
      sub_18004978C(v7[37], v111);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &qword_1801FA198, 0LL);
      LOBYTE(v46) = v48;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA178);
      LOBYTE(v49) = v46;
      sub_180074F6C(v51, v50, v49, (unsigned int)v111, (__int64)&qword_1801F65B8);
      v123.m128_u64[0] = (unsigned __int64)&v121;
      v121 = 0LL;
      if ( *((_QWORD *)&v122 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v122 + 1) + 8LL));
      v121 = v122;
      v53 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, &qword_1801FA2F8, 0LL);
      v118 = 0LL;
      v54 = a2[1];
      if ( v54 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
        v54 = a2[1];
      }
      *(_QWORD *)&v118 = *a2;
      *((_QWORD *)&v118 + 1) = v54;
      v55 = *sub_180036540(a1, v125, v52, &v118);
      sub_180065C7C(v55);
      v127 = *(_DWORD *)(v55 + 332);
      v114 = 0LL;
      v57 = a2[1];
      if ( v57 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
        v57 = a2[1];
      }
      *(_QWORD *)&v114 = *a2;
      *((_QWORD *)&v114 + 1) = v57;
      v58 = *(_DWORD *)(*sub_180036540(a1, v124, v56, &v114) + 328LL);
      v59 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA2B8);
      v60 = LODWORD(v59);
      v61 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA298);
      v62 = LODWORD(v61);
      v63 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA278);
      v64 = LODWORD(v63);
      v65 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA258);
      v66 = LODWORD(v65);
      v67 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA238);
      v68 = LODWORD(v67);
      v69 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA218);
      v70 = LODWORD(v69);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA1F8);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F8838);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801F8818);
      sub_180074FB4(
        v72,
        v71,
        v73,
        v74,
        v70,
        v68,
        v66,
        v64,
        v62,
        v60,
        v58,
        v127,
        v53,
        (__int64)&v121,
        (__int64)v111,
        (__int64)&qword_1801F6638,
        (__int64)&qword_1801F6618,
        (__int64)&qword_1801F65F8,
        (__int64)&qword_1801F65D8);
      sub_180010910((__int64)v124);
      sub_180010910((__int64)v125);
      v75 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA4F8);
      X = *(float *)&v75;
      v77 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA498);
      v78 = *(float *)&v77;
      v79 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA418);
      v80 = *(float *)&v79;
      v81 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA398);
      v82 = *sub_18007043C(&v117, *(float *)&v81, v80, v78, X);
      v83 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA518);
      v84 = *(float *)&v83;
      v85 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA4B8);
      v86 = *(float *)&v85;
      v87 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA438);
      v88 = *(float *)&v87;
      v89 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA3B8);
      v90 = *sub_18007043C(&v116, *(float *)&v89, v88, v86, v84);
      v91 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA538);
      v92 = *(float *)&v91;
      v93 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA4D8);
      v94 = *(float *)&v93;
      v95 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA458);
      v96 = *(float *)&v95;
      v97 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA3D8);
      v98 = *sub_18007043C(&v115, *(float *)&v97, v96, v94, v92);
      v99 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA478);
      v100 = *(float *)&v99;
      v101 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA3F8);
      v102 = *(float *)&v101;
      v103 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA378);
      v120 = v82;
      v119 = v90;
      v113 = v98;
      v112 = *sub_18007043C(&v123, *(float *)&v103, v102, v100, 0.0);
      sub_180074E38(
        v104,
        (unsigned int)&v112,
        (unsigned int)&v113,
        (unsigned int)&v119,
        (__int64)&v120,
        (__int64)v111,
        (__int64)&qword_1801F6698,
        (__int64)&qword_1801F6678,
        (__int64)&qword_1801F6658);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &qword_1801FA1B8, 0LL);
      sub_180093340(v111[0]);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &qword_1801FA1D8);
      sub_180093340(v111[0]);
      LOBYTE(v105) = 1;
      v106 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v13 + 64LL))(
               v13,
               &qword_1801FA158,
               v105);
      LOBYTE(v107) = v106;
      sub_180049AF0(v7[37], (__int64)&qword_1801F66F8, v107);
      LOBYTE(v108) = v106;
      sub_180049AF0(v7[37], (__int64)&qword_1801F6718, v108);
      LOBYTE(v109) = v106;
      sub_180049AF0(v7[37], (__int64)&qword_1801F6738, v109);
      LOBYTE(v110) = v106;
      sub_180049AF0(v7[37], (__int64)&qword_1801F6758, v110);
      sub_180010910((__int64)v111);
      return sub_180010910((__int64)&v122);
    }
  }
  return result;
}
