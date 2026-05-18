/*
 * XREFs of sub_180019608 @ 0x180019608
 * Callers:
 *     sub_18000FFF0 @ 0x18000FFF0 (sub_18000FFF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010280 @ 0x180010280 (sub_180010280.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_1800159F4 @ 0x1800159F4 (sub_1800159F4.c)
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_1800160D8 @ 0x1800160D8 (sub_1800160D8.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_180016BCC @ 0x180016BCC (sub_180016BCC.c)
 *     sub_180016C00 @ 0x180016C00 (sub_180016C00.c)
 *     sub_180016C34 @ 0x180016C34 (sub_180016C34.c)
 *     sub_1800179B4 @ 0x1800179B4 (sub_1800179B4.c)
 *     sub_180021124 @ 0x180021124 (sub_180021124.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033188 @ 0x180033188 (sub_180033188.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180057760 @ 0x180057760 (sub_180057760.c)
 *     sub_180058354 @ 0x180058354 (sub_180058354.c)
 *     sub_180058394 @ 0x180058394 (sub_180058394.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180019608(_QWORD *a1, _DWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int128 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v14)(_QWORD, void *, __int64 *); // rdi
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // r14
  void (__fastcall *v20)(__int64, _QWORD *); // rsi
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *); // rdi
  int v25; // ecx
  _QWORD *v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 v126; // r8
  __int64 v127; // r8
  __int64 v128; // rbx
  __int64 *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // rax
  _QWORD *v135; // rbx
  __int64 v136; // r8
  __int64 *v137; // rax
  __int128 v138; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v139; // [rsp+68h] [rbp-A0h] BYREF
  int v140; // [rsp+78h] [rbp-90h] BYREF
  __int64 v141; // [rsp+80h] [rbp-88h] BYREF
  __int64 v142; // [rsp+88h] [rbp-80h]
  __int64 v143; // [rsp+90h] [rbp-78h] BYREF
  __int64 v144; // [rsp+98h] [rbp-70h]
  __int128 v145; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v146)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-50h]
  __int64 v147; // [rsp+C0h] [rbp-48h]
  int v148; // [rsp+C8h] [rbp-40h]
  int v149; // [rsp+CCh] [rbp-3Ch]
  int v150; // [rsp+D0h] [rbp-38h]
  __int16 v151; // [rsp+D4h] [rbp-34h]
  __int64 v152; // [rsp+D8h] [rbp-30h]
  __int64 v153; // [rsp+E0h] [rbp-28h]
  int v154; // [rsp+E8h] [rbp-20h]
  int v155; // [rsp+ECh] [rbp-1Ch]
  int v156; // [rsp+F0h] [rbp-18h]
  int v157; // [rsp+F4h] [rbp-14h]
  __int64 v158; // [rsp+F8h] [rbp-10h]
  int v159; // [rsp+100h] [rbp-8h]
  char v160; // [rsp+104h] [rbp-4h]
  unsigned __int64 v161; // [rsp+108h] [rbp+0h]
  __int64 v162; // [rsp+110h] [rbp+8h]
  __int128 v163; // [rsp+118h] [rbp+10h]
  _BYTE v164[16]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v165[2]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v166[296]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v167; // [rsp+280h] [rbp+178h]
  __int64 retaddr; // [rsp+300h] [rbp+1F8h]

  *(_QWORD *)&v139 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2;
  v6 = sub_1800163D0((__int64 *)&v139);
  v7 = v5(v4, &unk_1801068E0, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18000F024(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
LABEL_12:
    sub_18000E72C((__int64 *)&v139);
    return v8;
  }
  *(_QWORD *)&v138 = 0LL;
  v9 = v139;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v139 + 56LL);
  sub_18000E72C((__int64 *)&v138);
  v11 = v10(v9, &v138);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 49LL;
LABEL_11:
    sub_18000F024(
      retaddr,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v11);
    sub_18000E72C((__int64 *)&v138);
    goto LABEL_12;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v138 + 64LL))(v138, v166);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 52LL;
    goto LABEL_11;
  }
  a1[3] = v167;
  v13 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v14 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2;
  v15 = a1 + 4;
  v16 = sub_1800163D0(a1 + 4);
  v17 = v14(v13, &unk_180106898, v16);
  v18 = v17;
  if ( v17 < 0 )
  {
    sub_18000F024(
      retaddr,
      56LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v17);
    sub_18000E72C((__int64 *)&v138);
    v8 = v18;
    goto LABEL_12;
  }
  v19 = *v15;
  v20 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*v15 + 344LL);
  sub_18000E72C(a1 + 5);
  v20(v19, a1 + 5);
  v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 304LL))(*v15) & 1;
  v140 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 296LL))(*v15);
  v22 = *v15;
  v23 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *))(*(_QWORD *)*v15
                                                                                                 + 376LL);
  sub_18000E72C(a1 + 6);
  v11 = v23(v22, (unsigned int)v21, &v140, 1LL, 7, &unk_180106898, 0LL, a1 + 6);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 69LL;
    goto LABEL_11;
  }
  sub_18000E72C((__int64 *)&v138);
  sub_18000E72C((__int64 *)&v139);
  if ( a2[6] >= 4u )
    v25 = 1;
  else
    v25 = *((_DWORD *)&xmmword_1801068B0 + (unsigned int)a2[6]);
  v152 = 0LL;
  v153 = 0LL;
  v156 = 0;
  v157 = 1;
  v158 = 1LL;
  v159 = 0;
  v160 = 1;
  v145 = 0x100000004uLL;
  v146 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v147 = 0LL;
  v148 = 1;
  v149 = v25;
  v150 = 0;
  v151 = 0;
  v154 = 37120;
  v155 = 49408;
  v26 = (_QWORD *)sub_180021124(&v141);
  v138 = 0LL;
  v27 = sub_1800159F4((__int64 *)&v139, &v145, &v138, v26);
  v28 = *v27;
  *v27 = 0LL;
  v29 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[7];
  a1[7] = v28;
  if ( v29 )
    sub_180010280(v28, v29);
  sub_1800179B4((__int64 (__fastcall ****)(_QWORD, __int64))&v139);
  sub_18002A0C4(a1[7] + 8LL, v164);
  v30 = sub_180034094(a1[7], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4888, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, &unk_1801D42E8, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5A08, 0LL, 1LL);
  LOBYTE(v31) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5988, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5AE8, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 152LL))(v30, &unk_1801D6668, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6648, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D66C8, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6708, v35, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6688, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D66A8, v37, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D66E8, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D65E8, v39, 1LL);
  LOBYTE(v40) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D6608, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D64E8, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 152LL))(v30, &unk_1801D67C8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D68E8, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D67E8, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6908, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D68C8, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6728, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6768, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6748, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D67A8, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6788, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6508, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6528, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6548, v53, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D65C8, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6568, v55, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D6588, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D65A8, v57, 1LL);
  LOBYTE(v58) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D6628, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D6808, 0LL, 1LL);
  LOBYTE(v59) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D56A8, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D56C8, v60, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D56E8, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5788, v62, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5768, v63, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5748, v64, 1LL);
  LOBYTE(v65) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5708, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 152LL))(v30, &unk_1801D57C8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5728, v66, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D57A8, v67, 1LL);
  sub_180016C00(v30, (__int64)&unk_1801D4D68);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4C68, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4BA8, v68, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4B88, v69, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4B68, v70, 1LL);
  LOBYTE(v71) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4A88, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4D48, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4BC8, v73, 1LL);
  sub_180016BCC(v30, (__int64)&unk_1801D4BE8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4AA8, v74, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4AC8, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4AE8, v76, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4C28, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4CA8, v78, 1LL);
  LOBYTE(v79) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4C88, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4D28, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4CE8, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4CC8, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4D08, v83, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4C48, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4B08, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4B28, v86, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4B48, v87, 1LL);
  sub_180016C34(v30, (__int64)&unk_1801D4C08);
  sub_180016C00(v30, (__int64)&unk_1801D5128);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5028, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4F68, v88, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4F48, v89, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4F28, v90, 1LL);
  LOBYTE(v91) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4E48, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5108, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4F88, v93, 1LL);
  sub_180016BCC(v30, (__int64)&unk_1801D4FA8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4E68, v94, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4E88, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4EA8, v96, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4FE8, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5068, v98, 1LL);
  LOBYTE(v99) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5048, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D50E8, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D50A8, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5088, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D50C8, v103, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5008, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4EC8, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4EE8, v106, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D4F08, v107, 1LL);
  sub_180016C34(v30, (__int64)&unk_1801D4FC8);
  sub_180016C00(v30, (__int64)&unk_1801D54E8);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D53E8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5328, v108, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5308, v109, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D52E8, v110, 1LL);
  LOBYTE(v111) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5208, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D54C8, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5348, v113, 1LL);
  sub_180016BCC(v30, (__int64)&unk_1801D5368);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5228, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5248, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5268, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D53A8, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5428, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5408, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D54A8, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5468, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5448, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5488, v122, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D53C8, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D5288, v124, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D52A8, v125, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 168LL))(v30, &unk_1801D52C8, v126, 1LL);
  sub_180016C34(v30, (__int64)&unk_1801D5388);
  LOBYTE(v127) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D5688, v127, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v30 + 144LL))(v30, &unk_1801D4968, 0LL, 1LL);
  sub_1800341C8(a1[7], &v138, 1LL);
  v128 = v138;
  sub_18002A0C4(v138 + 24, &v143);
  v162 = 0LL;
  *(_QWORD *)&v163 = 0LL;
  DWORD2(v163) = 0;
  LODWORD(v161) = 3;
  v139 = 0LL;
  v165[0] = v161;
  v165[1] = v163;
  v129 = sub_180015D28(
           v128,
           &v141,
           (__int64)v165,
           (int)&v138,
           (__int64)&v139,
           (__int64)(a2 + 2),
           (__int64)(a2 + 3),
           (__int64)(a2 + 4),
           (__int64)(a2 + 5));
  v130 = *v129;
  v131 = v129[1];
  *v129 = 0LL;
  v129[1] = 0LL;
  a1[10] = v130;
  v132 = a1[11];
  a1[11] = v131;
  if ( v132 )
    sub_180010530(v132);
  if ( v142 )
    sub_180010530(v142);
  if ( *((_QWORD *)&v139 + 1) )
    sub_180010530(*((__int64 *)&v139 + 1));
  LOBYTE(v131) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[10] + 272LL))(a1[10], v131);
  v134 = (__int64 *)sub_180033188(a1[7], &v141, v133, 1LL);
  v135 = a1 + 8;
  sub_180011020(a1 + 8, v134);
  if ( v142 )
    sub_180010530(v142);
  sub_180011DA0(&v139, a1 + 10);
  sub_180057760(v136, &v139);
  if ( *((_QWORD *)&v139 + 1) )
    sub_180010530(*((__int64 *)&v139 + 1));
  sub_180058354(*v135);
  sub_180058394(*v135);
  sub_180010F54((__int64)&v143);
  if ( *((_QWORD *)&v138 + 1) )
    sub_180010530(*((__int64 *)&v138 + 1));
  v137 = sub_1800160D8(a1[7], &v143);
  sub_180011020(a1 + 12, v137);
  if ( v144 )
    sub_180010530(v144);
  qword_1801D3390 = (__int64)a1;
  sub_180010F54((__int64)v164);
  return 0LL;
}
