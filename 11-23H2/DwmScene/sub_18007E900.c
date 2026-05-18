/*
 * XREFs of sub_18007E900 @ 0x18007E900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180044EAC @ 0x180044EAC (sub_180044EAC.c)
 *     sub_180044F5C @ 0x180044F5C (sub_180044F5C.c)
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_18004FB30 @ 0x18004FB30 (sub_18004FB30.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180060138 @ 0x180060138 (sub_180060138.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060458 @ 0x180060458 (sub_180060458.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_180060980 @ 0x180060980 (sub_180060980.c)
 *     sub_180060CD0 @ 0x180060CD0 (sub_180060CD0.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_18008319C @ 0x18008319C (sub_18008319C.c)
 *     sub_1800838B0 @ 0x1800838B0 (sub_1800838B0.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_18008784C @ 0x18008784C (sub_18008784C.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 *     sub_18008C480 @ 0x18008C480 (sub_18008C480.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall sub_18007E900(__int64 a1, __int64 a2, int **a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int *v18; // r14
  int *v19; // r13
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // r15
  char v24; // al
  __int64 *v25; // rax
  _QWORD *v26; // rax
  char v27; // al
  __int64 *v28; // rax
  _QWORD *v29; // rax
  char v30; // al
  __int64 *v31; // rax
  _QWORD *v32; // rax
  char v33; // al
  __int64 *v34; // rax
  _QWORD *v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // r9
  __int64 v38; // rbx
  __int64 *v39; // rax
  _QWORD *v40; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // r9
  __int64 v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r8
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // r8
  _QWORD *v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r8
  __int64 v69; // rbx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r9
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // r8
  __int64 result; // rax
  int v78; // [rsp+20h] [rbp-E0h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  __int64 v81; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+58h] [rbp-A8h]
  __int128 v83; // [rsp+60h] [rbp-A0h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h]
  __int64 v86[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-50h]
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-30h]
  _QWORD v92[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v94; // [rsp+100h] [rbp+0h]
  __int64 v95; // [rsp+108h] [rbp+8h] BYREF
  __int64 v96; // [rsp+110h] [rbp+10h]
  __int64 v97; // [rsp+118h] [rbp+18h] BYREF
  __int64 v98; // [rsp+120h] [rbp+20h]
  __int64 v99; // [rsp+128h] [rbp+28h] BYREF
  __int64 v100; // [rsp+130h] [rbp+30h]
  __m128i si128; // [rsp+138h] [rbp+38h] BYREF
  int v102; // [rsp+148h] [rbp+48h]
  int v103; // [rsp+14Ch] [rbp+4Ch]
  _QWORD v104[8]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v105[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v106[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v107[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v108[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v109[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v110[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v111[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v112[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v113[64]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v114[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v115[64]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v116[64]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v117[64]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v118[64]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v119[64]; // [rsp+510h] [rbp+410h] BYREF
  _BYTE v120[64]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v121[64]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v122[64]; // [rsp+5D0h] [rbp+4D0h] BYREF

  v4 = a2;
  v90 = a2;
  v5 = a1;
  v87 = v86;
  v6 = sub_18004347C(a1 + 8, v86);
  v7 = sub_180017648(v92, (__int64)&unk_1801D7EC8);
  v8 = sub_18004F760(v4, &v88, v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011020((_QWORD *)(v5 + 56), v8);
  if ( v89 )
    sub_180010530(v89);
  v10 = *v9;
  v11 = sub_180010DD0(v92, (__int64)"ImageProcessing");
  sub_18007F33C(v10, v11);
  sub_180017C9C((_QWORD *)(*v9 + 528), (__int64)a3);
  v12 = sub_18008C460();
  v15 = sub_18008C480(v14, v13) | v12;
  LODWORD(v88) = sub_18005FECC(*v9, (void **)&unk_1801D81C8);
  v86[0] = (__int64)&v88;
  v86[1] = (__int64)&v88 + 4;
  v80 = sub_18004FB30(v16, (_DWORD **)v86);
  si128.m128i_i32[0] = sub_18005FECC(*v9, (void **)qword_1801D81E8);
  si128.m128i_i32[1] = sub_18005FECC(*v9, (void **)qword_1801D8208);
  si128.m128i_i32[2] = sub_18005FECC(*v9, (void **)qword_1801D8228);
  si128.m128i_i32[3] = sub_18005FECC(*v9, (void **)qword_1801D8248);
  v102 = sub_18005FECC(*v9, (void **)qword_1801D8268);
  v103 = sub_18005FECC(*v9, (void **)qword_1801D8288);
  v86[0] = (__int64)&si128;
  v86[1] = (__int64)v104;
  v87 = (__int64 *)sub_18004FB30(v17, (_DWORD **)v86);
  v18 = *a3;
  if ( *a3 != a3[1] )
  {
    v19 = a3[1];
    do
    {
      sub_180060138(*v9, *v18);
      v20 = *v9;
      v21 = sub_180010DD0(v86, (__int64)"ImageProcessingCameraEffects");
      sub_180060458(v20, (__int64)v92, (__int64)v21, v80, v78, (__int64)v87);
      v22 = (_QWORD *)v92[0];
      v23 = (_QWORD *)v92[1];
      while ( v22 != v23 )
      {
        LODWORD(v81) = 0;
        v82 = v15;
        v83 = 0LL;
        v84 = 0LL;
        v85 = 0LL;
        sub_180087C3C(*v22, &v81);
        v22 += 2;
      }
      *(_OWORD *)v86 = 0LL;
      v24 = sub_18005FECC(*v9, (void **)&unk_1801D81A8);
      v25 = sub_180060378(*v9, &v93, 1LL << v24, 0LL, 0);
      sub_180011020(v86, v25);
      if ( v94 )
        sub_180010530(v94);
      v26 = sub_180010DD0(&v88, (__int64)"ImageProcessingBlur");
      sub_18008784C(v86[0], v26);
      LODWORD(v81) = 0;
      v82 = v15;
      v83 = 0LL;
      v84 = 0LL;
      v85 = 0LL;
      sub_180087C3C(v86[0], &v81);
      v27 = sub_18005FECC(*v9, (void **)&unk_1801D8188);
      v28 = sub_180060378(*v9, &v95, 1LL << v27, 0LL, 0);
      sub_180011020(v86, v28);
      if ( v96 )
        sub_180010530(v96);
      v29 = sub_180010DD0(&v88, (__int64)"ImageProcessingBlur");
      sub_18008784C(v86[0], v29);
      LODWORD(v81) = 0;
      v82 = v15;
      v83 = 0LL;
      v84 = 0LL;
      v85 = 0LL;
      sub_180087C3C(v86[0], &v81);
      v30 = sub_18005FECC(*v9, (void **)&unk_1801D8168);
      v31 = sub_180060378(*v9, &v97, 1LL << v30, 0LL, 0);
      sub_180011020(v86, v31);
      if ( v98 )
        sub_180010530(v98);
      v32 = sub_180010DD0(&v88, (__int64)"ImageProcessingBlur");
      sub_18008784C(v86[0], v32);
      LODWORD(v81) = 0;
      v82 = v15;
      v83 = 0LL;
      v84 = 0LL;
      v85 = 0LL;
      sub_180087C3C(v86[0], &v81);
      v33 = sub_18005FECC(*v9, (void **)&unk_1801D8148);
      v34 = sub_180060378(*v9, &v99, 1LL << v33, 0LL, 0);
      sub_180011020(v86, v34);
      if ( v100 )
        sub_180010530(v100);
      v35 = sub_180010DD0(v104, (__int64)byte_180106082);
      v36 = sub_180010DD0(&v81, (__int64)"ImageProcessingFullscreen");
      v37 = v35;
      v38 = v86[0];
      sub_1800878E8(v86[0], v36, 0LL, v37);
      sub_180087698(v38, 14, 2, 3, 1);
      LODWORD(v81) = 0;
      v82 = v15;
      v83 = 0LL;
      v84 = 0LL;
      v85 = 0LL;
      sub_180087C3C(v38, &v81);
      v39 = sub_180060378(*v9, &si128, 0LL, 0LL, 0);
      sub_180011020(v86, v39);
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
      v40 = sub_180010DD0(&v81, (__int64)byte_180106082);
      v41 = sub_180010DD0(v104, (__int64)"ImageProcessingFullscreen");
      v42 = v40;
      v43 = v86[0];
      sub_1800878E8(v86[0], v41, 0LL, v42);
      sub_180087698(v43, 0, 2, 0, 1);
      LODWORD(v81) = 0;
      v82 = v15;
      v83 = 0LL;
      v84 = 0LL;
      v85 = 0LL;
      sub_180087C3C(v43, &v81);
      sub_180060980(*v9);
      if ( v86[1] )
        sub_180010530(v86[1]);
      sub_1800385C8((__int64)v92);
      ++v18;
    }
    while ( v18 != v19 );
    v4 = v90;
    v5 = a1;
  }
  sub_18004F718(v4, v86, 6u);
  v44 = sub_180017648(&v81, (__int64)&unk_1801D7EE8);
  sub_180044E50((__int64)v105, (__int64)v44, 8);
  v45 = sub_180017648(v104, (__int64)&unk_1801D7F08);
  sub_180044E50((__int64)v106, (__int64)v45, 8);
  v46 = sub_180017648(&v81, (__int64)&unk_1801D7F28);
  sub_180045120((__int64)v107, (__int64)v46, v47, 1.0);
  sub_1800824CC(v86[0], v105, 3LL, 0LL);
  sub_1800838B0(v86[0], &unk_1801D7F08, 9LL);
  v48 = sub_180017648(&v81, (__int64)&unk_1801D7F88);
  sub_180044E50((__int64)v108, (__int64)v48, 2);
  v49 = sub_180017648(v104, (__int64)&unk_1801D7FA8);
  sub_180045120((__int64)v109, (__int64)v49, v50, 1.0);
  v51 = sub_180017648(&v81, (__int64)&unk_1801D7FC8);
  sub_180044E50((__int64)v110, (__int64)v51, 2);
  v52 = sub_180017648(v104, (__int64)&unk_1801D7FE8);
  sub_180044E50((__int64)v111, (__int64)v52, 5);
  v53 = sub_180017648(&v81, (__int64)&unk_1801D8008);
  sub_180044E50((__int64)v112, (__int64)v53, 5);
  v54 = sub_180017648(v104, (__int64)&unk_1801D8028);
  sub_180044E50((__int64)v113, (__int64)v54, 5);
  v55 = sub_180017648(&v81, (__int64)&unk_1801D8048);
  sub_180044E50((__int64)v114, (__int64)v55, 5);
  si128 = 0LL;
  v56 = sub_180017648(v104, (__int64)&unk_1801D8088);
  sub_180044F5C((__int64)v115, (__int64)v56, v57, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019BA40);
  v58 = sub_180017648(&v81, (__int64)&unk_1801D80A8);
  sub_180044EAC((__int64)v116, (__int64)v58, v59, (__int128 *)si128.m128i_i8);
  si128 = 0LL;
  v60 = sub_180017648(v104, (__int64)&unk_1801D80C8);
  sub_180044EAC((__int64)v117, (__int64)v60, v61, (__int128 *)si128.m128i_i8);
  si128 = 0LL;
  v62 = sub_180017648(&v81, (__int64)&unk_1801D80E8);
  sub_180044EAC((__int64)v118, (__int64)v62, v63, (__int128 *)si128.m128i_i8);
  v64 = sub_180017648(v104, (__int64)&unk_1801D8108);
  sub_180044E50((__int64)v119, (__int64)v64, 5);
  v65 = sub_180017648(&v81, (__int64)&unk_1801D8128);
  sub_180044E50((__int64)v120, (__int64)v65, 5);
  v66 = sub_180017648(v104, (__int64)&unk_1801D7248);
  sub_180044E50((__int64)v121, (__int64)v66, 5);
  si128 = (__m128i)xmmword_18019B790;
  v67 = sub_180017648(&v81, (__int64)&unk_1801D7F68);
  sub_180044F5C((__int64)v122, (__int64)v67, v68, (__int128 *)si128.m128i_i8);
  sub_1800824CC(v86[0], v108, 15LL, 1LL);
  sub_18008319C(v86[0], 16LL);
  sub_18008214C(v86[0], &unk_1801D7F48, 5LL, *(unsigned int *)(v5 + 112));
  v69 = v86[0];
  v70 = sub_180017648(&v81, (__int64)&unk_1801D8068);
  sub_180044E50((__int64)v104, (__int64)v70, 8);
  LOWORD(v69) = sub_180082598(v69, v104, 1LL);
  sub_180045270((__int64)v104);
  sub_1800838E4(v86[0], (unsigned __int16)v69, 12LL);
  sub_180082B30(v86[0]);
  v71 = sub_18001246C(&si128, v86);
  sub_1800613A4(v72, v71);
  sub_18000B4B0((__int64)v108, 64LL, 15LL);
  sub_18000B4B0((__int64)v105, 64LL, 3LL);
  if ( v86[1] )
    sub_180010530(v86[1]);
  v73 = sub_180017648(&v81, (__int64)&unk_1801D7E88);
  sub_1800502A4(v4, &v90, v73);
  v74 = (_QWORD *)sub_180060CD0(v90, 4u);
  sub_18001246C(v86, v74);
  v75 = sub_18001246C(&si128, v86);
  sub_1800613A4(v76, v75);
  result = sub_180060800(*v9);
  if ( v86[1] )
    result = sub_180010530(v86[1]);
  if ( v91 )
    return sub_180010530(v91);
  return result;
}
