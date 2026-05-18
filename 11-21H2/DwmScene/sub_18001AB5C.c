/*
 * XREFs of sub_18001AB5C @ 0x18001AB5C
 * Callers:
 *     sub_1800106A8 @ 0x1800106A8 (sub_1800106A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016640 @ 0x180016640 (sub_180016640.c)
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 *     sub_180017240 @ 0x180017240 (sub_180017240.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_1800221D4 @ 0x1800221D4 (sub_1800221D4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_18005F020 @ 0x18005F020 (sub_18005F020.c)
 *     sub_18005FFB8 @ 0x18005FFB8 (sub_18005FFB8.c)
 *     sub_180060014 @ 0x180060014 (sub_180060014.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18001AB5C(__int64 a1, _DWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v18)(_QWORD, void *, __int64 *); // rdi
  _QWORD *v19; // rbx
  __int64 *v20; // rax
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  void (__fastcall *v26)(__int64, __int64); // r12
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64 *, __int64, int, void *, _QWORD, __int64); // r12
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rdx
  void (__fastcall ***v41)(_QWORD, __int64); // rcx
  __int64 v42; // rbx
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
  __int64 v128; // r8
  __int64 v129; // r8
  __int64 v130; // r8
  __int64 v131; // r8
  __int64 v132; // r8
  __int64 v133; // r8
  __int64 v134; // r8
  __int64 v135; // r8
  __int64 v136; // r8
  __int64 v137; // r8
  __int64 v138; // r8
  __int64 v139; // r8
  _QWORD *v140; // rbx
  __int64 *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 *v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v161; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v162; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v163; // [rsp+78h] [rbp-90h] BYREF
  void (__fastcall ***v164)(_QWORD, __int64); // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v165; // [rsp+88h] [rbp-80h] BYREF
  __int64 v166; // [rsp+90h] [rbp-78h]
  __int128 v167; // [rsp+98h] [rbp-70h]
  _QWORD v168[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v169[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v170; // [rsp+C8h] [rbp-40h] BYREF
  __int64 (__fastcall ***v171)(_QWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp-30h]
  __int64 v172; // [rsp+E0h] [rbp-28h]
  int v173; // [rsp+E8h] [rbp-20h]
  int v174; // [rsp+ECh] [rbp-1Ch]
  int v175; // [rsp+F0h] [rbp-18h]
  __int16 v176; // [rsp+F4h] [rbp-14h]
  __int64 v177; // [rsp+F8h] [rbp-10h]
  __int64 v178; // [rsp+100h] [rbp-8h]
  int v179; // [rsp+108h] [rbp+0h]
  int v180; // [rsp+10Ch] [rbp+4h]
  int v181; // [rsp+110h] [rbp+8h]
  int v182; // [rsp+114h] [rbp+Ch]
  __int64 v183; // [rsp+118h] [rbp+10h]
  int v184; // [rsp+120h] [rbp+18h]
  char v185; // [rsp+124h] [rbp+1Ch]
  __int128 v186; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v187[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v188; // [rsp+148h] [rbp+40h] BYREF
  char v189; // [rsp+150h] [rbp+48h]
  __int64 v190; // [rsp+158h] [rbp+50h] BYREF
  char v191; // [rsp+160h] [rbp+58h]
  _BYTE v192[16]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v193[2]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v194[2]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v195[296]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v196; // [rsp+2D0h] [rbp+1C8h]
  __int64 retaddr; // [rsp+350h] [rbp+248h]

  v160 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2;
  v6 = sub_180017748(&v160);
  v7 = v5(v4, &unk_180128880, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18000F364(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
    v9 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v8;
  }
  v161 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v160 + 56LL))(v160, &v161);
  v8 = v11;
  if ( v11 < 0 )
  {
    sub_18000F364(
      retaddr,
      49LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v11);
    v12 = v161;
    if ( v161 )
    {
      v161 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v8;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v161 + 64LL))(v161, v195);
  v8 = v14;
  if ( v14 < 0 )
  {
    sub_18000F364(
      retaddr,
      52LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v14);
    v15 = v161;
    if ( v161 )
    {
      v161 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v8;
  }
  *(_QWORD *)(a1 + 24) = v196;
  v17 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v18 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2;
  v19 = (_QWORD *)(a1 + 32);
  v20 = sub_180017748((__int64 *)(a1 + 32));
  v21 = v18(v17, &unk_180128838, v20);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v25 = *v19;
    v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v19 + 344LL);
    v27 = *(_QWORD *)(a1 + 40);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v26(v25, a1 + 40);
    v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 304LL))(*v19) & 1;
    LODWORD(v163) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 296LL))(*v19);
    v29 = *v19;
    v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, int, void *, _QWORD, __int64))(*(_QWORD *)*v19 + 376LL);
    v31 = *(_QWORD *)(a1 + 48);
    if ( v31 )
    {
      *(_QWORD *)(a1 + 48) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v30(v29, (unsigned int)v28, &v163, 1LL, 7, &unk_180128838, 0LL, a1 + 48);
    v8 = v32;
    if ( v32 < 0 )
    {
      sub_18000F364(
        retaddr,
        69LL,
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
        (unsigned int)v32);
      v33 = v161;
      if ( v161 )
      {
        v161 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = v160;
      if ( v160 )
      {
        v160 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      return v8;
    }
    v35 = v161;
    if ( v161 )
    {
      v161 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    if ( a2[6] >= 4u )
      v37 = 1;
    else
      v37 = *((_DWORD *)&xmmword_180128850 + (unsigned int)a2[6]);
    v177 = 0LL;
    v178 = 0LL;
    v181 = 0;
    v182 = 1;
    v183 = 1LL;
    v184 = 0;
    v185 = 1;
    v170 = 0x100000004uLL;
    v171 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
    v172 = 0LL;
    v173 = 1;
    v174 = v37;
    v175 = 0;
    v176 = 0;
    v179 = 37120;
    v180 = 49408;
    v38 = sub_1800221D4(v192);
    v186 = 0LL;
    v39 = sub_180016640((__int64 *)&v164, &v170, &v186, v38);
    v40 = *v39;
    *v39 = 0LL;
    v41 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 56);
    *(_QWORD *)(a1 + 56) = v40;
    if ( v41 )
      (**v41)(v41, 1LL);
    if ( v164 )
      (**v164)(v164, 1LL);
    sub_18002C460(*(_QWORD *)(a1 + 56) + 8LL, &v190);
    v42 = sub_180036808(*(_QWORD *)(a1 + 56), 1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F88F8,
      0LL,
      1LL);
    if ( *((_BYTE *)a2 + 30) )
      (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 152LL))(
        v42,
        &qword_1801F8358,
        1LL,
        1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9A78,
      0LL,
      1LL);
    LOBYTE(v43) = *((_BYTE *)a2 + 28);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F99F8,
      v43,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9B58,
      v44,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801FA6D8,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA6B8,
      v45,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA738,
      v46,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA778,
      v47,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA6F8,
      v48,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA718,
      v49,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA758,
      v50,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA658,
      v51,
      1LL);
    LOBYTE(v52) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801FA678,
      v52,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA558,
      v53,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801FA838,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA958,
      v54,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA858,
      v55,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA978,
      v56,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA938,
      v57,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA798,
      v58,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA7D8,
      v59,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA7B8,
      v60,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA818,
      v61,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA7F8,
      v62,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA578,
      v63,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA598,
      v64,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA5B8,
      v65,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA638,
      v66,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA5D8,
      v67,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA5F8,
      v68,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801FA618,
      v69,
      1LL);
    LOBYTE(v70) = *((_BYTE *)a2 + 28);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801FA698,
      v70,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801FA878,
      0LL,
      1LL);
    LOBYTE(v71) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9718,
      v71,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9738,
      v72,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9758,
      v73,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F97F8,
      v74,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F97D8,
      v75,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F97B8,
      v76,
      1LL);
    LOBYTE(v77) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9778,
      v77,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F9838,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9798,
      v78,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9818,
      v79,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F8DD8,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F8CD8,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8C18,
      v80,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8BF8,
      v81,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8BD8,
      v82,
      1LL);
    LOBYTE(v83) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F8AF8,
      v83,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8DB8,
      v84,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8C38,
      v85,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F8C58,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8B18,
      v86,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8B38,
      v87,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8B58,
      v88,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8C98,
      v89,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8D18,
      v90,
      1LL);
    LOBYTE(v91) = *((_BYTE *)a2 + 31);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F8CF8,
      v91,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8D98,
      v92,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8D58,
      v93,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8D38,
      v94,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8D78,
      v95,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8CB8,
      v96,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8B78,
      v97,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8B98,
      v98,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8BB8,
      v99,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F8C78,
      2LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F9198,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9098,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8FD8,
      v100,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8FB8,
      v101,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8F98,
      v102,
      1LL);
    LOBYTE(v103) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F8EB8,
      v103,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9178,
      v104,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8FF8,
      v105,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F9018,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8ED8,
      v106,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8EF8,
      v107,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8F18,
      v108,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9058,
      v109,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F90D8,
      v110,
      1LL);
    LOBYTE(v111) = *((_BYTE *)a2 + 31);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F90B8,
      v111,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9158,
      v112,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9118,
      v113,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F90F8,
      v114,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9138,
      v115,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9078,
      v116,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8F38,
      v117,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8F58,
      v118,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F8F78,
      v119,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F9038,
      2LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F9558,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9458,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9398,
      v120,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9378,
      v121,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9358,
      v122,
      1LL);
    LOBYTE(v123) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9278,
      v123,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9538,
      v124,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F93B8,
      v125,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F93D8,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9298,
      v126,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F92B8,
      v127,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F92D8,
      v128,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9418,
      v129,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9498,
      v130,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F9478,
      0LL,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9518,
      v131,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F94D8,
      v132,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F94B8,
      v133,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F94F8,
      v134,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9438,
      v135,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F92F8,
      v136,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9318,
      v137,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 168LL))(
      v42,
      &qword_1801F9338,
      v138,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 152LL))(
      v42,
      &qword_1801F93F8,
      2LL,
      1LL);
    LOBYTE(v139) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F96F8,
      v139,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v42 + 144LL))(
      v42,
      &qword_1801F89D8,
      0LL,
      1LL);
    sub_180036948(*(_QWORD *)(a1 + 56), v168, 1LL);
    v140 = (_QWORD *)v168[0];
    sub_18002C460(v168[0] + 24LL, &v188);
    v166 = 0LL;
    *(_QWORD *)&v167 = 0LL;
    DWORD2(v167) = 0;
    LODWORD(v165) = 3;
    v162 = 0LL;
    v194[0] = v165;
    v194[1] = v167;
    v141 = sub_180016BE4(
             v140,
             v193,
             (__int64)v194,
             (__int64)v168,
             (__int64)&v162,
             (__int64)(a2 + 2),
             (__int64)(a2 + 3),
             (__int64)(a2 + 4),
             (__int64)(a2 + 5));
    v142 = *v141;
    v143 = v141[1];
    *v141 = 0LL;
    v141[1] = 0LL;
    v187[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v142;
    v187[1] = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v143;
    sub_180010910((__int64)v187);
    sub_180010910((__int64)v193);
    sub_180010910((__int64)&v162);
    LOBYTE(v144) = *((_BYTE *)a2 + 29);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 272LL))(*(_QWORD *)(a1 + 80), v144);
    v146 = (__int64 *)sub_180035438(*(_QWORD *)(a1 + 56), v169, v145, 1LL);
    v147 = *v146;
    v148 = v146[1];
    *v146 = 0LL;
    v146[1] = 0LL;
    v165 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v147;
    v166 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v148;
    sub_180010910((__int64)&v165);
    sub_180010910((__int64)v169);
    v149 = *(_QWORD *)(a1 + 64);
    v150 = *(_QWORD *)(a1 + 88);
    if ( v150 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v150 + 8), 1u);
      v150 = *(_QWORD *)(a1 + 88);
    }
    *(_QWORD *)&v162 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)&v162 + 1) = v150;
    sub_18005F020(v149, &v162);
    sub_180010910((__int64)&v162);
    sub_18005FFB8(*(_QWORD *)(a1 + 64));
    sub_180060014(*(_QWORD *)(a1 + 64));
    if ( v189 )
      j_LanguageEnumProc(v188, v151, v152, v153);
    sub_180010910((__int64)v168);
    v154 = sub_180017240(*(__int64 **)(a1 + 56), v169);
    v155 = *v154;
    v156 = v154[1];
    *v154 = 0LL;
    v154[1] = 0LL;
    v165 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v155;
    v166 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = v156;
    sub_180010910((__int64)&v165);
    sub_180010910((__int64)v169);
    qword_1801F7498 = a1;
    if ( v191 )
      j_LanguageEnumProc(v190, v157, v158, v159);
    return 0LL;
  }
  else
  {
    sub_18000F364(
      retaddr,
      56LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v21);
    v23 = v161;
    if ( v161 )
    {
      v161 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v22;
  }
}
