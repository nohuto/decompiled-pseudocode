/*
 * XREFs of sub_180098B8C @ 0x180098B8C
 * Callers:
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FAF8 @ 0x18004FAF8 (sub_18004FAF8.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_180087658 @ 0x180087658 (sub_180087658.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_180087BD0 @ 0x180087BD0 (sub_180087BD0.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 */

// Hidden C++ exception states: #wind=57
__int64 __fastcall sub_180098B8C(__int64 a1, __int64 a2, __int64 **a3)
{
  char v6; // r8
  char v7; // r8
  char v8; // r8
  char v9; // r8
  char v10; // r8
  char v11; // r8
  char v12; // r8
  char v13; // r8
  char v14; // r8
  char v15; // r8
  char v16; // r8
  char v17; // r8
  char v18; // r8
  char v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  int v22; // r13d
  __int64 *v23; // r12
  __int64 v24; // r14
  __int64 *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rax
  __m128i v63; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v64; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h]
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  __int64 *i; // [rsp+D0h] [rbp-30h]
  void *v81[2]; // [rsp+D8h] [rbp-28h] BYREF
  void *v82[2]; // [rsp+E8h] [rbp-18h] BYREF
  void *v83[2]; // [rsp+F8h] [rbp-8h] BYREF
  void *v84[2]; // [rsp+108h] [rbp+8h] BYREF
  void *v85[2]; // [rsp+118h] [rbp+18h] BYREF
  void *v86[2]; // [rsp+128h] [rbp+28h] BYREF
  void *v87[2]; // [rsp+138h] [rbp+38h] BYREF
  void *v88[2]; // [rsp+148h] [rbp+48h] BYREF
  void *v89[2]; // [rsp+158h] [rbp+58h] BYREF
  void *v90[2]; // [rsp+168h] [rbp+68h] BYREF
  void *v91[2]; // [rsp+178h] [rbp+78h] BYREF
  void *v92[2]; // [rsp+188h] [rbp+88h] BYREF
  void *v93[2]; // [rsp+198h] [rbp+98h] BYREF
  void *v94[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v95; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v98; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h] BYREF
  __int64 v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h] BYREF
  __int64 v107; // [rsp+220h] [rbp+120h]
  __int64 v108; // [rsp+228h] [rbp+128h] BYREF
  __int64 v109; // [rsp+230h] [rbp+130h]
  __int64 v110; // [rsp+238h] [rbp+138h] BYREF
  __int64 v111; // [rsp+240h] [rbp+140h]
  __int64 v112; // [rsp+248h] [rbp+148h] BYREF
  __int64 v113; // [rsp+250h] [rbp+150h]
  __int64 v114; // [rsp+258h] [rbp+158h] BYREF
  __int64 v115; // [rsp+260h] [rbp+160h]
  __int64 v116; // [rsp+268h] [rbp+168h] BYREF
  __int64 v117; // [rsp+270h] [rbp+170h]
  __int64 v118; // [rsp+278h] [rbp+178h] BYREF
  __int64 v119; // [rsp+280h] [rbp+180h]
  __int64 v120; // [rsp+288h] [rbp+188h] BYREF
  __int64 v121; // [rsp+290h] [rbp+190h]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v123; // [rsp+2A8h] [rbp+1A8h]
  __int128 v124; // [rsp+2B0h] [rbp+1B0h]
  __int64 v125; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v126; // [rsp+2C8h] [rbp+1C8h]
  _QWORD v127[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v128; // [rsp+300h] [rbp+200h] BYREF
  __int64 v129; // [rsp+308h] [rbp+208h]
  _QWORD v130[4]; // [rsp+320h] [rbp+220h] BYREF
  int v131; // [rsp+340h] [rbp+240h] BYREF
  __int64 v132; // [rsp+344h] [rbp+244h]
  int v133; // [rsp+34Ch] [rbp+24Ch]
  int v134; // [rsp+350h] [rbp+250h]
  int v135; // [rsp+354h] [rbp+254h]
  char v136; // [rsp+358h] [rbp+258h]
  _OWORD v137[2]; // [rsp+35Ch] [rbp+25Ch] BYREF
  int v138; // [rsp+37Ch] [rbp+27Ch]
  _QWORD v139[4]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v140[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v141; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v142; // [rsp+3C8h] [rbp+2C8h]
  __int64 v143; // [rsp+3E0h] [rbp+2E0h] BYREF

  sub_180017648(&v128, (__int64)qword_1801D7D88);
  v63.m128i_i64[0] = (__int64)&v128;
  v63.m128i_i64[1] = (__int64)v130;
  sub_180063D24((__int64 *)v94, &v63);
  sub_18000B4B0((__int64)&v128, 32LL, 1LL);
  sub_18005EA14(v63.m128i_i64, v94, v6);
  v66 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v141, (__int64)&unk_1801D7E48);
  v63.m128i_i64[0] = (__int64)&v141;
  v63.m128i_i64[1] = (__int64)&v143;
  sub_180063D24((__int64 *)v93, &v63);
  sub_18000B4B0((__int64)&v141, 32LL, 1LL);
  sub_18005EA14(v63.m128i_i64, v93, v7);
  v79 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)&unk_1801D7E48);
  sub_180017648(&v125, (__int64)qword_1801D7D88);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)v127;
  sub_180063D24((__int64 *)v92, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v92, v8);
  v72 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v128, (__int64)&unk_1801D7E48);
  sub_180017648(v130, (__int64)&unk_1801D7D08);
  v63.m128i_i64[0] = (__int64)&v128;
  v63.m128i_i64[1] = (__int64)&v131;
  sub_180063D24((__int64 *)v91, &v63);
  sub_18000B4B0((__int64)&v128, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v91, v9);
  v75 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)&unk_1801D7E48);
  sub_180017648(&v125, (__int64)&unk_1801D7D28);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)v127;
  sub_180063D24((__int64 *)v90, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v90, v10);
  v76 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v128, (__int64)&unk_1801D7D08);
  v63.m128i_i64[0] = (__int64)&v128;
  v63.m128i_i64[1] = (__int64)v130;
  sub_180063D24((__int64 *)v89, &v63);
  sub_18000B4B0((__int64)&v128, 32LL, 1LL);
  sub_18005EA14(v63.m128i_i64, v89, v11);
  v77 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)&unk_1801D7D08);
  sub_180017648(&v125, (__int64)qword_1801D7D88);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)v127;
  sub_180063D24((__int64 *)v88, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v88, v12);
  v70 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v128, (__int64)&unk_1801D7D28);
  v63.m128i_i64[0] = (__int64)&v128;
  v63.m128i_i64[1] = (__int64)v130;
  sub_180063D24((__int64 *)v87, &v63);
  sub_18000B4B0((__int64)&v128, 32LL, 1LL);
  sub_18005EA14(v63.m128i_i64, v87, v13);
  v78 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)&unk_1801D7D28);
  sub_180017648(&v125, (__int64)&unk_1801D7D08);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)v127;
  sub_180063D24((__int64 *)v86, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v86, v14);
  v74 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v131, (__int64)&unk_1801D7D28);
  sub_180017648((_OWORD *)((char *)v137 + 4), (__int64)&unk_1801D7D08);
  sub_180017648(v139, (__int64)&unk_1801D7DA8);
  v63.m128i_i64[0] = (__int64)&v131;
  v63.m128i_i64[1] = (__int64)v140;
  sub_180063D24((__int64 *)v85, &v63);
  sub_18000B4B0((__int64)&v131, 32LL, 3LL);
  sub_18005EA14(v63.m128i_i64, v85, v15);
  v73 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)qword_1801D7D88);
  sub_180017648(&v125, (__int64)&unk_1801D7D28);
  sub_180017648(v127, (__int64)&unk_1801D7D08);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)&v128;
  sub_180063D24((__int64 *)v84, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 3LL);
  sub_18005EA14(v63.m128i_i64, v84, v16);
  v69 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v131, (__int64)qword_1801D7D88);
  sub_180017648((_OWORD *)((char *)v137 + 4), (__int64)&unk_1801D7D28);
  sub_180017648(v139, (__int64)&unk_1801D7D08);
  sub_180017648(v140, (__int64)&unk_1801D7DA8);
  v63.m128i_i64[0] = (__int64)&v131;
  v63.m128i_i64[1] = (__int64)&v141;
  sub_180063D24((__int64 *)v83, &v63);
  sub_18000B4B0((__int64)&v131, 32LL, 4LL);
  sub_18005EA14(v63.m128i_i64, v83, v17);
  v68 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v122, (__int64)&unk_1801D7D28);
  sub_180017648(&v125, (__int64)qword_1801D7D88);
  v63.m128i_i64[0] = (__int64)&v122;
  v63.m128i_i64[1] = (__int64)v127;
  sub_180063D24((__int64 *)v82, &v63);
  sub_18000B4B0((__int64)&v122, 32LL, 2LL);
  sub_18005EA14(v63.m128i_i64, v82, v18);
  v71 = sub_18004FBD8(a2, (void **)&v63);
  sub_180017648(&v128, (__int64)&unk_1801D7E08);
  v63.m128i_i64[0] = (__int64)&v128;
  v63.m128i_i64[1] = (__int64)v130;
  sub_180063D24((__int64 *)v81, &v63);
  sub_18000B4B0((__int64)&v128, 32LL, 1LL);
  sub_18005EA14(v63.m128i_i64, v81, v19);
  v65 = sub_18004FBD8(a2, (void **)&v63);
  v67 = sub_18004FAF8(a2);
  v21 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v21 = 0;
  v22 = 0;
  if ( (*(_DWORD *)(v67 + 560) & 2) == 0 )
    v22 = v21;
  v64 = 0LL;
  v23 = *a3;
  for ( i = a3[1]; v23 != i; v20 = v65 )
  {
    v24 = *v23;
    v25 = sub_180060378(*(_QWORD *)(a1 + 56), &v95, v20 | *v23, 0LL, 0);
    sub_180011020(&v64, v25);
    if ( v96 )
      sub_180010530(v96);
    v26 = v66 | v24;
    v27 = v64;
    sub_180087BD0((_QWORD *)v64, v66 | v24);
    v28 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v28;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v27, (__int64)&v122);
    v132 = 2LL;
    v133 = 0;
    v134 = 0;
    v135 = 0;
    v136 = 0;
    memset(v137, 0, sizeof(v137));
    v138 = 65793;
    LOBYTE(v139[0]) = 1;
    HIDWORD(v139[0]) = 3;
    v131 = 1;
    sub_1800435A8(v67, v63.m128i_i64);
    sub_1800883E0(v63.m128i_i64[0], (__int64)&v131, 0LL);
    v29 = sub_18001246C(&v97, &v63);
    sub_180087658(v27, v29);
    if ( v63.m128i_i64[1] )
      sub_180010530(v63.m128i_i64[1]);
    v30 = sub_180060378(*(_QWORD *)(a1 + 56), &v98, v68 | v24, 0LL, 0);
    sub_180011020(&v64, v30);
    if ( v99 )
      sub_180010530(v99);
    v31 = v69 | v24;
    v32 = v64;
    sub_180087BD0((_QWORD *)v64, v69 | v24);
    v33 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v33;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v32, (__int64)&v122);
    sub_180087698(v32, 1, 2, 1, 1);
    v34 = sub_180060378(*(_QWORD *)(a1 + 56), &v100, v31, 0LL, 1);
    sub_180011020(&v64, v34);
    if ( v101 )
      sub_180010530(v101);
    v35 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v35;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 23, 2, 3, 1);
    v36 = sub_180060378(*(_QWORD *)(a1 + 56), &v102, v70 | v24, 0LL, 1);
    sub_180011020(&v64, v36);
    if ( v103 )
      sub_180010530(v103);
    v37 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v37;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, v22, 2, 3, 1);
    v38 = sub_180060378(*(_QWORD *)(a1 + 56), &v104, v71 | v24, 0LL, 1);
    sub_180011020(&v64, v38);
    if ( v105 )
      sub_180010530(v105);
    v39 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v39;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 1, 2, 1, 1);
    v40 = sub_180060378(*(_QWORD *)(a1 + 56), &v106, v72 | v24, 0LL, 1);
    sub_180011020(&v64, v40);
    if ( v107 )
      sub_180010530(v107);
    v41 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v41;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 0, 2, 3, 15);
    v42 = sub_180060378(*(_QWORD *)(a1 + 56), &v108, v26, 0LL, 1);
    sub_180011020(&v64, v42);
    if ( v109 )
      sub_180010530(v109);
    v43 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v43;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 0, 2, 3, 1);
    v44 = sub_180060378(*(_QWORD *)(a1 + 56), &v110, v73 | v24, 0LL, 0);
    sub_180011020(&v64, v44);
    if ( v111 )
      sub_180010530(v111);
    v45 = v74 | v24;
    v46 = v64;
    sub_180087BD0((_QWORD *)v64, v74 | v24);
    v47 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v47;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v46, (__int64)&v122);
    sub_180087698(v46, 1, 2, 1, 15);
    v48 = sub_180060378(*(_QWORD *)(a1 + 56), &v112, v45, 0LL, 1);
    sub_180011020(&v64, v48);
    if ( v113 )
      sub_180010530(v113);
    v49 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v49;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 23, 2, 3, 15);
    v50 = sub_180060378(*(_QWORD *)(a1 + 56), &v114, v75 | v24, 0LL, 1);
    sub_180011020(&v64, v50);
    if ( v115 )
      sub_180010530(v115);
    v51 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v51;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 23, 2, 3, 15);
    v52 = sub_180060378(*(_QWORD *)(a1 + 56), &v116, v76 | v24, 0LL, 1);
    sub_180011020(&v64, v52);
    if ( v117 )
      sub_180010530(v117);
    v53 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v53;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 1, 2, 1, 15);
    v54 = sub_180060378(*(_QWORD *)(a1 + 56), &v118, v77 | v24, 0LL, 1);
    sub_180011020(&v64, v54);
    if ( v119 )
      sub_180010530(v119);
    v55 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v55;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, v22, 2, 3, 15);
    v56 = sub_180060378(*(_QWORD *)(a1 + 56), &v120, v78 | v24, 0LL, 1);
    sub_180011020(&v64, v56);
    if ( v121 )
      sub_180010530(v121);
    v57 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v57;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 1, 2, 1, 15);
    v58 = sub_180060378(*(_QWORD *)(a1 + 56), &v141, v79 | v24, 0LL, 1);
    sub_180011020(&v64, v58);
    if ( v142 )
      sub_180010530(v142);
    v59 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v59;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 0, 2, 3, 15);
    v60 = sub_180060378(*(_QWORD *)(a1 + 56), &v128, v24, 0LL, 1);
    sub_180011020(&v64, v60);
    if ( v129 )
      sub_180010530(v129);
    v61 = *(_QWORD *)(a1 + 112);
    LODWORD(v122) = 0;
    v123 = v61;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    sub_180087C3C(v64, (__int64)&v122);
    sub_180087698(v64, 0, 2, 3, 15);
    ++v23;
  }
  if ( *((_QWORD *)&v64 + 1) )
    sub_180010530(*((__int64 *)&v64 + 1));
  sub_18004D8C4(v81, (__int64)v81);
  sub_18004D8C4(v82, (__int64)v82);
  sub_18004D8C4(v83, (__int64)v83);
  sub_18004D8C4(v84, (__int64)v84);
  sub_18004D8C4(v85, (__int64)v85);
  sub_18004D8C4(v86, (__int64)v86);
  sub_18004D8C4(v87, (__int64)v87);
  sub_18004D8C4(v88, (__int64)v88);
  sub_18004D8C4(v89, (__int64)v89);
  sub_18004D8C4(v90, (__int64)v90);
  sub_18004D8C4(v91, (__int64)v91);
  sub_18004D8C4(v92, (__int64)v92);
  sub_18004D8C4(v93, (__int64)v93);
  return sub_18004D8C4(v94, (__int64)v94);
}
