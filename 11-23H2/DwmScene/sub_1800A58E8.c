/*
 * XREFs of sub_1800A58E8 @ 0x1800A58E8
 * Callers:
 *     sub_180002FB0 @ 0x180002FB0 (sub_180002FB0.c)
 *     sub_180003140 @ 0x180003140 (sub_180003140.c)
 *     sub_1800031B0 @ 0x1800031B0 (sub_1800031B0.c)
 *     sub_180003220 @ 0x180003220 (sub_180003220.c)
 *     sub_180003290 @ 0x180003290 (sub_180003290.c)
 *     sub_180003300 @ 0x180003300 (sub_180003300.c)
 *     sub_180003370 @ 0x180003370 (sub_180003370.c)
 *     sub_1800033E0 @ 0x1800033E0 (sub_1800033E0.c)
 *     sub_180003450 @ 0x180003450 (sub_180003450.c)
 *     sub_1800034C0 @ 0x1800034C0 (sub_1800034C0.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_1800035A0 @ 0x1800035A0 (sub_1800035A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800A56BC @ 0x1800A56BC (sub_1800A56BC.c)
 *     sub_1800A56CC @ 0x1800A56CC (sub_1800A56CC.c)
 *     sub_1800A56DC @ 0x1800A56DC (sub_1800A56DC.c)
 *     sub_1800A56EC @ 0x1800A56EC (sub_1800A56EC.c)
 *     sub_1800A56FC @ 0x1800A56FC (sub_1800A56FC.c)
 *     sub_1800A570C @ 0x1800A570C (sub_1800A570C.c)
 *     sub_1800A571C @ 0x1800A571C (sub_1800A571C.c)
 *     sub_1800A572C @ 0x1800A572C (sub_1800A572C.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 *     sub_1800A574C @ 0x1800A574C (sub_1800A574C.c)
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 *     sub_1800A576C @ 0x1800A576C (sub_1800A576C.c)
 *     sub_1800A577C @ 0x1800A577C (sub_1800A577C.c)
 *     sub_1800A578C @ 0x1800A578C (sub_1800A578C.c)
 *     sub_1800A579C @ 0x1800A579C (sub_1800A579C.c)
 *     sub_1800A57AC @ 0x1800A57AC (sub_1800A57AC.c)
 *     sub_1800A57BC @ 0x1800A57BC (sub_1800A57BC.c)
 *     sub_1800A57CC @ 0x1800A57CC (sub_1800A57CC.c)
 *     sub_1800A57DC @ 0x1800A57DC (sub_1800A57DC.c)
 *     sub_1800A57EC @ 0x1800A57EC (sub_1800A57EC.c)
 *     sub_1800A57FC @ 0x1800A57FC (sub_1800A57FC.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_1800A58E8()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  void **v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v5; // xmm6
  _QWORD *v6; // rax
  void **v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int128 v10; // xmm6
  _QWORD *v11; // rax
  void **v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // xmm6
  _QWORD *v16; // rax
  void **v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int128 v20; // xmm6
  _QWORD *v21; // rax
  void **v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int128 v25; // xmm6
  _QWORD *v26; // rax
  void **v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int128 v30; // xmm6
  _QWORD *v31; // rax
  void **v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int128 v35; // xmm6
  _QWORD *v36; // rax
  void **v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int128 v40; // xmm6
  _QWORD *v41; // rax
  void **v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int128 v45; // xmm6
  _QWORD *v46; // rax
  void **v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int128 v50; // xmm6
  _QWORD *v51; // rax
  void **v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int128 v55; // xmm6
  _QWORD *v56; // rax
  void **v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int128 v60; // xmm6
  _QWORD *v61; // rax
  void **v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int128 v65; // xmm6
  _QWORD *v66; // rax
  void **v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int128 v70; // xmm6
  _QWORD *v71; // rax
  void **v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int128 v75; // xmm6
  _QWORD *v76; // rax
  void **v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int128 v80; // xmm6
  _QWORD *v81; // rax
  void **v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int128 v85; // xmm6
  _QWORD *v86; // rax
  void **v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int128 v90; // xmm6
  _QWORD *v91; // rax
  void **v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  __int128 v95; // xmm6
  _QWORD *v96; // rax
  void **v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int128 v100; // xmm6
  _QWORD *v101; // rax
  void **v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int128 v105; // xmm6
  _QWORD *v106; // rax
  void **v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  __int128 v110; // xmm6
  _QWORD *v111; // rax
  void **v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int128 v115; // xmm6
  _QWORD *v116; // rax
  void **v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  __int128 v120; // xmm6
  _QWORD *v121; // rax
  void **v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  __int128 v125; // xmm6
  _QWORD *v126; // rax
  void **v127; // rax
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  __int128 v130; // xmm6
  _QWORD *v131; // rax
  void **v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  __int128 v135; // xmm6
  _QWORD *v136; // rax
  void **v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  __int128 v140; // xmm6
  _QWORD *v141; // rax
  void **v142; // rax
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  __int128 v145; // xmm6
  _QWORD *v146; // rax
  void **v147; // rax
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  __int128 v150; // xmm6
  _QWORD *v151; // rax
  void **v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  __int128 v155; // xmm6
  _QWORD *v156; // rax
  void **v157; // rax
  _QWORD *v158; // rax
  _QWORD *v159; // rax
  __int128 v160; // xmm6
  _QWORD *v161; // rax
  void **v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  __int128 v165; // xmm6
  _QWORD *v166; // rax
  void **v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  __int128 v170; // xmm6
  _QWORD *v171; // rax
  void **v172; // rax
  _QWORD *v173; // rax
  _QWORD *v174; // rax
  __int128 v175; // xmm6
  _QWORD *v176; // rax
  void **v177; // rax
  _QWORD *v178; // rax
  _QWORD *v179; // rax
  __int128 v181; // [rsp+28h] [rbp-89h] BYREF
  __int128 v182; // [rsp+38h] [rbp-79h]
  __int128 v183; // [rsp+58h] [rbp-59h]
  void *v184[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v185[4]; // [rsp+88h] [rbp-29h] BYREF
  void *Src[4]; // [rsp+A8h] [rbp-9h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801D8B60 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B60);
    if ( dword_1801D8B60 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56BC();
      *((_QWORD *)&v181 + 1) = v181 + 1856;
      *(_QWORD *)&v183 = 0x100000005LL;
      v1 = sub_1800A57FC();
      v2 = sub_18007C338(Src, 0LL, v1, 6);
      v3 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18001C61C(v184, v3, (__int64)"/Pixel");
      v182 = v183;
      sub_18007C3DC((__int64)v4, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)Src);
      sub_18000C538(&dword_1801D8B60);
    }
  }
  if ( dword_1801D8B64 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B64);
    if ( dword_1801D8B64 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56DC();
      *((_QWORD *)&v181 + 1) = v181 + 2120;
      v5 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v6 = sub_1800A57FC();
      v7 = sub_18007C338(v184, 1LL, v6, 6);
      v8 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v7);
      v9 = sub_18001C61C(Src, v8, (__int64)"/Pixel");
      v181 = v5;
      v182 = v183;
      sub_18007C3DC((__int64)v9, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B64);
    }
  }
  if ( dword_1801D8B68 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B68);
    if ( dword_1801D8B68 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56EC();
      *((_QWORD *)&v181 + 1) = v181 + 2228;
      v10 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v11 = sub_1800A57FC();
      v12 = sub_18007C338(v184, 2LL, v11, 6);
      v13 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v12);
      v14 = sub_18001C61C(Src, v13, (__int64)"/Pixel");
      v181 = v10;
      v182 = v183;
      sub_18007C3DC((__int64)v14, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B68);
    }
  }
  if ( dword_1801D8B6C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B6C);
    if ( dword_1801D8B6C == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56FC();
      *((_QWORD *)&v181 + 1) = v181 + 2492;
      v15 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v16 = sub_1800A57FC();
      v17 = sub_18007C338(v184, 3LL, v16, 6);
      v18 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v17);
      v19 = sub_18001C61C(Src, v18, (__int64)"/Pixel");
      v181 = v15;
      v182 = v183;
      sub_18007C3DC((__int64)v19, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B6C);
    }
  }
  if ( dword_1801D8B70 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B70);
    if ( dword_1801D8B70 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A570C();
      *((_QWORD *)&v181 + 1) = v181 + 2044;
      v20 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v21 = sub_1800A57FC();
      v22 = sub_18007C338(v184, 4LL, v21, 6);
      v23 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v22);
      v24 = sub_18001C61C(Src, v23, (__int64)"/Pixel");
      v181 = v20;
      v182 = v183;
      sub_18007C3DC((__int64)v24, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B70);
    }
  }
  if ( dword_1801D8B74 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B74);
    if ( dword_1801D8B74 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A571C();
      *((_QWORD *)&v181 + 1) = v181 + 2308;
      v25 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v26 = sub_1800A57FC();
      v27 = sub_18007C338(v184, 5LL, v26, 6);
      v28 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v27);
      v29 = sub_18001C61C(Src, v28, (__int64)"/Pixel");
      v181 = v25;
      v182 = v183;
      sub_18007C3DC((__int64)v29, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B74);
    }
  }
  if ( dword_1801D8B78 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B78);
    if ( dword_1801D8B78 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A572C();
      *((_QWORD *)&v181 + 1) = v181 + 2404;
      v30 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v31 = sub_1800A57FC();
      v32 = sub_18007C338(v184, 6LL, v31, 6);
      v33 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v32);
      v34 = sub_18001C61C(Src, v33, (__int64)"/Pixel");
      v181 = v30;
      v182 = v183;
      sub_18007C3DC((__int64)v34, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B78);
    }
  }
  if ( dword_1801D8B7C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B7C);
    if ( dword_1801D8B7C == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A573C();
      *((_QWORD *)&v181 + 1) = v181 + 2668;
      v35 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v36 = sub_1800A57FC();
      v37 = sub_18007C338(v184, 7LL, v36, 6);
      v38 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v37);
      v39 = sub_18001C61C(Src, v38, (__int64)"/Pixel");
      v181 = v35;
      v182 = v183;
      sub_18007C3DC((__int64)v39, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B7C);
    }
  }
  if ( dword_1801D8B80 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B80);
    if ( dword_1801D8B80 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A574C();
      *((_QWORD *)&v181 + 1) = v181 + 2376;
      v40 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v41 = sub_1800A57FC();
      v42 = sub_18007C338(v184, 8LL, v41, 6);
      v43 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v42);
      v44 = sub_18001C61C(Src, v43, (__int64)"/Pixel");
      v181 = v40;
      v182 = v183;
      sub_18007C3DC((__int64)v44, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B80);
    }
  }
  if ( dword_1801D8B84 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B84);
    if ( dword_1801D8B84 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A575C();
      *((_QWORD *)&v181 + 1) = v181 + 2640;
      v45 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v46 = sub_1800A57FC();
      v47 = sub_18007C338(v184, 9LL, v46, 6);
      v48 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v47);
      v49 = sub_18001C61C(Src, v48, (__int64)"/Pixel");
      v181 = v45;
      v182 = v183;
      sub_18007C3DC((__int64)v49, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B84);
    }
  }
  if ( dword_1801D8B88 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B88);
    if ( dword_1801D8B88 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A576C();
      *((_QWORD *)&v181 + 1) = v181 + 2736;
      v50 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v51 = sub_1800A57FC();
      v52 = sub_18007C338(v184, 10LL, v51, 6);
      v53 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v52);
      v54 = sub_18001C61C(Src, v53, (__int64)"/Pixel");
      v181 = v50;
      v182 = v183;
      sub_18007C3DC((__int64)v54, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B88);
    }
  }
  if ( dword_1801D8B8C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B8C);
    if ( dword_1801D8B8C == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A577C();
      *((_QWORD *)&v181 + 1) = v181 + 3000;
      v55 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v56 = sub_1800A57FC();
      v57 = sub_18007C338(v184, 11LL, v56, 6);
      v58 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v57);
      v59 = sub_18001C61C(Src, v58, (__int64)"/Pixel");
      v181 = v55;
      v182 = v183;
      sub_18007C3DC((__int64)v59, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B8C);
    }
  }
  if ( dword_1801D8B90 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B90);
    if ( dword_1801D8B90 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A578C();
      *((_QWORD *)&v181 + 1) = v181 + 2552;
      v60 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v61 = sub_1800A57FC();
      v62 = sub_18007C338(v184, 12LL, v61, 6);
      v63 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18001C61C(Src, v63, (__int64)"/Pixel");
      v181 = v60;
      v182 = v183;
      sub_18007C3DC((__int64)v64, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B90);
    }
  }
  if ( dword_1801D8B94 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B94);
    if ( dword_1801D8B94 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A579C();
      *((_QWORD *)&v181 + 1) = v181 + 2816;
      v65 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v66 = sub_1800A57FC();
      v67 = sub_18007C338(v184, 13LL, v66, 6);
      v68 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v67);
      v69 = sub_18001C61C(Src, v68, (__int64)"/Pixel");
      v181 = v65;
      v182 = v183;
      sub_18007C3DC((__int64)v69, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B94);
    }
  }
  if ( dword_1801D8B98 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B98);
    if ( dword_1801D8B98 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A57AC();
      *((_QWORD *)&v181 + 1) = v181 + 2912;
      v70 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v71 = sub_1800A57FC();
      v72 = sub_18007C338(v184, 14LL, v71, 6);
      v73 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v72);
      v74 = sub_18001C61C(Src, v73, (__int64)"/Pixel");
      v181 = v70;
      v182 = v183;
      sub_18007C3DC((__int64)v74, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B98);
    }
  }
  if ( dword_1801D8B9C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8B9C);
    if ( dword_1801D8B9C == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A57BC();
      *((_QWORD *)&v181 + 1) = v181 + 3176;
      v75 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v76 = sub_1800A57FC();
      v77 = sub_18007C338(v184, 15LL, v76, 6);
      v78 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v77);
      v79 = sub_18001C61C(Src, v78, (__int64)"/Pixel");
      v181 = v75;
      v182 = v183;
      sub_18007C3DC((__int64)v79, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8B9C);
    }
  }
  if ( dword_1801D8BA0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BA0);
    if ( dword_1801D8BA0 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A57CC();
      *((_QWORD *)&v181 + 1) = v181 + 492;
      v80 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v81 = sub_1800A57FC();
      v82 = sub_18007C338(v184, 16LL, v81, 6);
      v83 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v82);
      v84 = sub_18001C61C(Src, v83, (__int64)"/Pixel");
      v181 = v80;
      v182 = v183;
      sub_18007C3DC((__int64)v84, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BA0);
    }
  }
  if ( dword_1801D8BA4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BA4);
    if ( dword_1801D8BA4 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A57EC();
      *((_QWORD *)&v181 + 1) = v181 + 7056;
      v85 = v181;
      *(_QWORD *)&v183 = 0x100000005LL;
      v86 = sub_1800A57FC();
      v87 = sub_18007C338(v184, 32LL, v86, 6);
      v88 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v87);
      v89 = sub_18001C61C(Src, v88, (__int64)"/Pixel");
      v181 = v85;
      v182 = v183;
      sub_18007C3DC((__int64)v89, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BA4);
    }
  }
  if ( dword_1801D8BA8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BA8);
    if ( dword_1801D8BA8 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v90 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v91 = sub_1800A57FC();
      v92 = sub_18007C338(v184, 0LL, v91, 6);
      v93 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v92);
      v94 = sub_18001C61C(Src, v93, (__int64)"/Vertex");
      v181 = v90;
      v182 = v183;
      sub_18007C3DC((__int64)v94, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BA8);
    }
  }
  if ( dword_1801D8BAC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BAC);
    if ( dword_1801D8BAC == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v95 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v96 = sub_1800A57FC();
      v97 = sub_18007C338(v184, 1LL, v96, 6);
      v98 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v97);
      v99 = sub_18001C61C(Src, v98, (__int64)"/Vertex");
      v181 = v95;
      v182 = v183;
      sub_18007C3DC((__int64)v99, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BAC);
    }
  }
  if ( dword_1801D8BB0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BB0);
    if ( dword_1801D8BB0 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v100 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v101 = sub_1800A57FC();
      v102 = sub_18007C338(v184, 2LL, v101, 6);
      v103 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v102);
      v104 = sub_18001C61C(Src, v103, (__int64)"/Vertex");
      v181 = v100;
      v182 = v183;
      sub_18007C3DC((__int64)v104, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BB0);
    }
  }
  if ( dword_1801D8BB4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BB4);
    if ( dword_1801D8BB4 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v105 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v106 = sub_1800A57FC();
      v107 = sub_18007C338(v184, 3LL, v106, 6);
      v108 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v107);
      v109 = sub_18001C61C(Src, v108, (__int64)"/Vertex");
      v181 = v105;
      v182 = v183;
      sub_18007C3DC((__int64)v109, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BB4);
    }
  }
  if ( dword_1801D8BB8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BB8);
    if ( dword_1801D8BB8 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v110 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v111 = sub_1800A57FC();
      v112 = sub_18007C338(v184, 4LL, v111, 6);
      v113 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v112);
      v114 = sub_18001C61C(Src, v113, (__int64)"/Vertex");
      v181 = v110;
      v182 = v183;
      sub_18007C3DC((__int64)v114, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BB8);
    }
  }
  if ( dword_1801D8BBC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BBC);
    if ( dword_1801D8BBC == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v115 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v116 = sub_1800A57FC();
      v117 = sub_18007C338(v184, 5LL, v116, 6);
      v118 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v117);
      v119 = sub_18001C61C(Src, v118, (__int64)"/Vertex");
      v181 = v115;
      v182 = v183;
      sub_18007C3DC((__int64)v119, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BBC);
    }
  }
  if ( dword_1801D8BC0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BC0);
    if ( dword_1801D8BC0 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v120 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v121 = sub_1800A57FC();
      v122 = sub_18007C338(v184, 6LL, v121, 6);
      v123 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v122);
      v124 = sub_18001C61C(Src, v123, (__int64)"/Vertex");
      v181 = v120;
      v182 = v183;
      sub_18007C3DC((__int64)v124, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BC0);
    }
  }
  if ( dword_1801D8BC4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BC4);
    if ( dword_1801D8BC4 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v125 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v126 = sub_1800A57FC();
      v127 = sub_18007C338(v184, 7LL, v126, 6);
      v128 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v127);
      v129 = sub_18001C61C(Src, v128, (__int64)"/Vertex");
      v181 = v125;
      v182 = v183;
      sub_18007C3DC((__int64)v129, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BC4);
    }
  }
  if ( dword_1801D8BC8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BC8);
    if ( dword_1801D8BC8 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v130 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v131 = sub_1800A57FC();
      v132 = sub_18007C338(v184, 8LL, v131, 6);
      v133 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v132);
      v134 = sub_18001C61C(Src, v133, (__int64)"/Vertex");
      v181 = v130;
      v182 = v183;
      sub_18007C3DC((__int64)v134, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BC8);
    }
  }
  if ( dword_1801D8BCC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BCC);
    if ( dword_1801D8BCC == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v135 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v136 = sub_1800A57FC();
      v137 = sub_18007C338(v184, 9LL, v136, 6);
      v138 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v137);
      v139 = sub_18001C61C(Src, v138, (__int64)"/Vertex");
      v181 = v135;
      v182 = v183;
      sub_18007C3DC((__int64)v139, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BCC);
    }
  }
  if ( dword_1801D8BD0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BD0);
    if ( dword_1801D8BD0 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v140 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v141 = sub_1800A57FC();
      v142 = sub_18007C338(v184, 10LL, v141, 6);
      v143 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v142);
      v144 = sub_18001C61C(Src, v143, (__int64)"/Vertex");
      v181 = v140;
      v182 = v183;
      sub_18007C3DC((__int64)v144, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BD0);
    }
  }
  if ( dword_1801D8BD4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BD4);
    if ( dword_1801D8BD4 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v145 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v146 = sub_1800A57FC();
      v147 = sub_18007C338(v184, 11LL, v146, 6);
      v148 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v147);
      v149 = sub_18001C61C(Src, v148, (__int64)"/Vertex");
      v181 = v145;
      v182 = v183;
      sub_18007C3DC((__int64)v149, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BD4);
    }
  }
  if ( dword_1801D8BD8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BD8);
    if ( dword_1801D8BD8 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v150 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v151 = sub_1800A57FC();
      v152 = sub_18007C338(v184, 12LL, v151, 6);
      v153 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v152);
      v154 = sub_18001C61C(Src, v153, (__int64)"/Vertex");
      v181 = v150;
      v182 = v183;
      sub_18007C3DC((__int64)v154, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BD8);
    }
  }
  if ( dword_1801D8BDC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BDC);
    if ( dword_1801D8BDC == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v155 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v156 = sub_1800A57FC();
      v157 = sub_18007C338(v184, 13LL, v156, 6);
      v158 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v157);
      v159 = sub_18001C61C(Src, v158, (__int64)"/Vertex");
      v181 = v155;
      v182 = v183;
      sub_18007C3DC((__int64)v159, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BDC);
    }
  }
  if ( dword_1801D8BE0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BE0);
    if ( dword_1801D8BE0 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v160 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v161 = sub_1800A57FC();
      v162 = sub_18007C338(v184, 14LL, v161, 6);
      v163 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v162);
      v164 = sub_18001C61C(Src, v163, (__int64)"/Vertex");
      v181 = v160;
      v182 = v183;
      sub_18007C3DC((__int64)v164, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BE0);
    }
  }
  if ( dword_1801D8BE4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BE4);
    if ( dword_1801D8BE4 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v165 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v166 = sub_1800A57FC();
      v167 = sub_18007C338(v184, 15LL, v166, 6);
      v168 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v167);
      v169 = sub_18001C61C(Src, v168, (__int64)"/Vertex");
      v181 = v165;
      v182 = v183;
      sub_18007C3DC((__int64)v169, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BE4);
    }
  }
  if ( dword_1801D8BE8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BE8);
    if ( dword_1801D8BE8 == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A57DC();
      *((_QWORD *)&v181 + 1) = v181 + 1048;
      v170 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v171 = sub_1800A57FC();
      v172 = sub_18007C338(v184, 16LL, v171, 6);
      v173 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v172);
      v174 = sub_18001C61C(Src, v173, (__int64)"/Vertex");
      v181 = v170;
      v182 = v183;
      sub_18007C3DC((__int64)v174, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BE8);
    }
  }
  if ( dword_1801D8BEC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8BEC);
    if ( dword_1801D8BEC == -1 )
    {
      *(_QWORD *)&v181 = sub_1800A56CC();
      *((_QWORD *)&v181 + 1) = v181 + 1840;
      v175 = v181;
      *(_QWORD *)&v183 = 0x100000001LL;
      v176 = sub_1800A57FC();
      v177 = sub_18007C338(v184, 32LL, v176, 6);
      v178 = sub_18001C6E8(v185, (__int64)"BackgroundUnlit/ShaderModel40/", v177);
      v179 = sub_18001C61C(Src, v178, (__int64)"/Vertex");
      v181 = v175;
      v182 = v183;
      sub_18007C3DC((__int64)v179, (__int64)&v181);
      sub_180011B24((__int64)v185);
      sub_180011B24((__int64)v184);
      sub_18000C538(&dword_1801D8BEC);
    }
  }
  return 0LL;
}
