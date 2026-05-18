/*
 * XREFs of sub_1800AFAA8 @ 0x1800AFAA8
 * Callers:
 *     sub_180003010 @ 0x180003010 (sub_180003010.c)
 *     sub_1800031A0 @ 0x1800031A0 (sub_1800031A0.c)
 *     sub_180003210 @ 0x180003210 (sub_180003210.c)
 *     sub_180003280 @ 0x180003280 (sub_180003280.c)
 *     sub_1800032F0 @ 0x1800032F0 (sub_1800032F0.c)
 *     sub_180003360 @ 0x180003360 (sub_180003360.c)
 *     sub_1800033D0 @ 0x1800033D0 (sub_1800033D0.c)
 *     sub_180003440 @ 0x180003440 (sub_180003440.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003520 @ 0x180003520 (sub_180003520.c)
 *     sub_180003590 @ 0x180003590 (sub_180003590.c)
 *     sub_180003600 @ 0x180003600 (sub_180003600.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800AF914 @ 0x1800AF914 (sub_1800AF914.c)
 *     sub_1800AF924 @ 0x1800AF924 (sub_1800AF924.c)
 *     sub_1800AF934 @ 0x1800AF934 (sub_1800AF934.c)
 *     sub_1800AF944 @ 0x1800AF944 (sub_1800AF944.c)
 *     sub_1800AF954 @ 0x1800AF954 (sub_1800AF954.c)
 *     sub_1800AF964 @ 0x1800AF964 (sub_1800AF964.c)
 *     sub_1800AF974 @ 0x1800AF974 (sub_1800AF974.c)
 *     sub_1800AF984 @ 0x1800AF984 (sub_1800AF984.c)
 *     sub_1800AF994 @ 0x1800AF994 (sub_1800AF994.c)
 *     sub_1800AF9A4 @ 0x1800AF9A4 (sub_1800AF9A4.c)
 *     sub_1800AF9B4 @ 0x1800AF9B4 (sub_1800AF9B4.c)
 *     sub_1800AF9C4 @ 0x1800AF9C4 (sub_1800AF9C4.c)
 *     sub_1800AF9D4 @ 0x1800AF9D4 (sub_1800AF9D4.c)
 */

// Hidden C++ exception states: #wind=120
__int64 sub_1800AFAA8()
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
  __int128 v180; // xmm6
  _QWORD *v181; // rax
  void **v182; // rax
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  __int128 v185; // xmm6
  _QWORD *v186; // rax
  void **v187; // rax
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  __int128 v190; // xmm6
  _QWORD *v191; // rax
  void **v192; // rax
  _QWORD *v193; // rax
  _QWORD *v194; // rax
  __int128 v195; // xmm6
  _QWORD *v196; // rax
  void **v197; // rax
  _QWORD *v198; // rax
  _QWORD *v199; // rax
  __int128 v201; // [rsp+28h] [rbp-89h] BYREF
  __int128 v202; // [rsp+38h] [rbp-79h]
  __int128 v203; // [rsp+58h] [rbp-59h]
  void *v204[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v205[4]; // [rsp+88h] [rbp-29h] BYREF
  void *Src[4]; // [rsp+A8h] [rbp-9h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801D9050 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9050);
    if ( dword_1801D9050 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF914();
      *((_QWORD *)&v201 + 1) = v201 + 2164;
      *(_QWORD *)&v203 = 0x100000005LL;
      v1 = sub_1800AF9D4();
      v2 = sub_18007C338(Src, 0LL, v1, 5);
      v3 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v2);
      v4 = sub_18001C61C(v204, v3, (__int64)"/Pixel");
      v202 = v203;
      sub_18007C3DC((__int64)v4, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)Src);
      sub_18000C538(&dword_1801D9050);
    }
  }
  if ( dword_1801D9054 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9054);
    if ( dword_1801D9054 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF934();
      *((_QWORD *)&v201 + 1) = v201 + 516;
      v5 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v6 = sub_1800AF9D4();
      v7 = sub_18007C338(v204, 1LL, v6, 5);
      v8 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v7);
      v9 = sub_18001C61C(Src, v8, (__int64)"/Pixel");
      v201 = v5;
      v202 = v203;
      sub_18007C3DC((__int64)v9, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9054);
    }
  }
  if ( dword_1801D9058 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9058);
    if ( dword_1801D9058 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF914();
      *((_QWORD *)&v201 + 1) = v201 + 2164;
      v10 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v11 = sub_1800AF9D4();
      v12 = sub_18007C338(v204, 2LL, v11, 5);
      v13 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v12);
      v14 = sub_18001C61C(Src, v13, (__int64)"/Pixel");
      v201 = v10;
      v202 = v203;
      sub_18007C3DC((__int64)v14, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9058);
    }
  }
  if ( dword_1801D905C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D905C);
    if ( dword_1801D905C == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF954();
      *((_QWORD *)&v201 + 1) = v201 + 3336;
      v15 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v16 = sub_1800AF9D4();
      v17 = sub_18007C338(v204, 4LL, v16, 5);
      v18 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v17);
      v19 = sub_18001C61C(Src, v18, (__int64)"/Pixel");
      v201 = v15;
      v202 = v203;
      sub_18007C3DC((__int64)v19, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D905C);
    }
  }
  if ( dword_1801D9060 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9060);
    if ( dword_1801D9060 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF964();
      *((_QWORD *)&v201 + 1) = v201 + 1776;
      v20 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v21 = sub_1800AF9D4();
      v22 = sub_18007C338(v204, 5LL, v21, 5);
      v23 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v22);
      v24 = sub_18001C61C(Src, v23, (__int64)"/Pixel");
      v201 = v20;
      v202 = v203;
      sub_18007C3DC((__int64)v24, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9060);
    }
  }
  if ( dword_1801D9064 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9064);
    if ( dword_1801D9064 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF954();
      *((_QWORD *)&v201 + 1) = v201 + 3336;
      v25 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v26 = sub_1800AF9D4();
      v27 = sub_18007C338(v204, 6LL, v26, 5);
      v28 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v27);
      v29 = sub_18001C61C(Src, v28, (__int64)"/Pixel");
      v201 = v25;
      v202 = v203;
      sub_18007C3DC((__int64)v29, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9064);
    }
  }
  if ( dword_1801D9068 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9068);
    if ( dword_1801D9068 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF984();
      *((_QWORD *)&v201 + 1) = v201 + 3100;
      v30 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v31 = sub_1800AF9D4();
      v32 = sub_18007C338(v204, 8LL, v31, 5);
      v33 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v32);
      v34 = sub_18001C61C(Src, v33, (__int64)"/Pixel");
      v201 = v30;
      v202 = v203;
      sub_18007C3DC((__int64)v34, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9068);
    }
  }
  if ( dword_1801D906C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D906C);
    if ( dword_1801D906C == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF984();
      *((_QWORD *)&v201 + 1) = v201 + 3100;
      v35 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v36 = sub_1800AF9D4();
      v37 = sub_18007C338(v204, 10LL, v36, 5);
      v38 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v37);
      v39 = sub_18001C61C(Src, v38, (__int64)"/Pixel");
      v201 = v35;
      v202 = v203;
      sub_18007C3DC((__int64)v39, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D906C);
    }
  }
  if ( dword_1801D9070 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9070);
    if ( dword_1801D9070 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF994();
      *((_QWORD *)&v201 + 1) = v201 + 5040;
      v40 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v41 = sub_1800AF9D4();
      v42 = sub_18007C338(v204, 12LL, v41, 5);
      v43 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v42);
      v44 = sub_18001C61C(Src, v43, (__int64)"/Pixel");
      v201 = v40;
      v202 = v203;
      sub_18007C3DC((__int64)v44, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9070);
    }
  }
  if ( dword_1801D9074 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9074);
    if ( dword_1801D9074 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF994();
      *((_QWORD *)&v201 + 1) = v201 + 5040;
      v45 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v46 = sub_1800AF9D4();
      v47 = sub_18007C338(v204, 14LL, v46, 5);
      v48 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v47);
      v49 = sub_18001C61C(Src, v48, (__int64)"/Pixel");
      v201 = v45;
      v202 = v203;
      sub_18007C3DC((__int64)v49, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9074);
    }
  }
  if ( dword_1801D9078 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9078);
    if ( dword_1801D9078 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF914();
      *((_QWORD *)&v201 + 1) = v201 + 2164;
      v50 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v51 = sub_1800AF9D4();
      v52 = sub_18007C338(v204, 16LL, v51, 5);
      v53 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v52);
      v54 = sub_18001C61C(Src, v53, (__int64)"/Pixel");
      v201 = v50;
      v202 = v203;
      sub_18007C3DC((__int64)v54, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9078);
    }
  }
  if ( dword_1801D907C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D907C);
    if ( dword_1801D907C == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF934();
      *((_QWORD *)&v201 + 1) = v201 + 516;
      v55 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v56 = sub_1800AF9D4();
      v57 = sub_18007C338(v204, 17LL, v56, 5);
      v58 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v57);
      v59 = sub_18001C61C(Src, v58, (__int64)"/Pixel");
      v201 = v55;
      v202 = v203;
      sub_18007C3DC((__int64)v59, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D907C);
    }
  }
  if ( dword_1801D9080 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9080);
    if ( dword_1801D9080 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF914();
      *((_QWORD *)&v201 + 1) = v201 + 2164;
      v60 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v61 = sub_1800AF9D4();
      v62 = sub_18007C338(v204, 18LL, v61, 5);
      v63 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v62);
      v64 = sub_18001C61C(Src, v63, (__int64)"/Pixel");
      v201 = v60;
      v202 = v203;
      sub_18007C3DC((__int64)v64, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9080);
    }
  }
  if ( dword_1801D9084 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9084);
    if ( dword_1801D9084 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF954();
      *((_QWORD *)&v201 + 1) = v201 + 3336;
      v65 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v66 = sub_1800AF9D4();
      v67 = sub_18007C338(v204, 20LL, v66, 5);
      v68 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v67);
      v69 = sub_18001C61C(Src, v68, (__int64)"/Pixel");
      v201 = v65;
      v202 = v203;
      sub_18007C3DC((__int64)v69, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9084);
    }
  }
  if ( dword_1801D9088 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9088);
    if ( dword_1801D9088 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF964();
      *((_QWORD *)&v201 + 1) = v201 + 1776;
      v70 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v71 = sub_1800AF9D4();
      v72 = sub_18007C338(v204, 21LL, v71, 5);
      v73 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v72);
      v74 = sub_18001C61C(Src, v73, (__int64)"/Pixel");
      v201 = v70;
      v202 = v203;
      sub_18007C3DC((__int64)v74, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9088);
    }
  }
  if ( dword_1801D908C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D908C);
    if ( dword_1801D908C == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF954();
      *((_QWORD *)&v201 + 1) = v201 + 3336;
      v75 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v76 = sub_1800AF9D4();
      v77 = sub_18007C338(v204, 22LL, v76, 5);
      v78 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v77);
      v79 = sub_18001C61C(Src, v78, (__int64)"/Pixel");
      v201 = v75;
      v202 = v203;
      sub_18007C3DC((__int64)v79, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D908C);
    }
  }
  if ( dword_1801D9090 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9090);
    if ( dword_1801D9090 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF984();
      *((_QWORD *)&v201 + 1) = v201 + 3100;
      v80 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v81 = sub_1800AF9D4();
      v82 = sub_18007C338(v204, 24LL, v81, 5);
      v83 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v82);
      v84 = sub_18001C61C(Src, v83, (__int64)"/Pixel");
      v201 = v80;
      v202 = v203;
      sub_18007C3DC((__int64)v84, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9090);
    }
  }
  if ( dword_1801D9094 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9094);
    if ( dword_1801D9094 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF984();
      *((_QWORD *)&v201 + 1) = v201 + 3100;
      v85 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v86 = sub_1800AF9D4();
      v87 = sub_18007C338(v204, 26LL, v86, 5);
      v88 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v87);
      v89 = sub_18001C61C(Src, v88, (__int64)"/Pixel");
      v201 = v85;
      v202 = v203;
      sub_18007C3DC((__int64)v89, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9094);
    }
  }
  if ( dword_1801D9098 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D9098);
    if ( dword_1801D9098 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF994();
      *((_QWORD *)&v201 + 1) = v201 + 5040;
      v90 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v91 = sub_1800AF9D4();
      v92 = sub_18007C338(v204, 28LL, v91, 5);
      v93 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v92);
      v94 = sub_18001C61C(Src, v93, (__int64)"/Pixel");
      v201 = v90;
      v202 = v203;
      sub_18007C3DC((__int64)v94, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D9098);
    }
  }
  if ( dword_1801D909C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D909C);
    if ( dword_1801D909C == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF994();
      *((_QWORD *)&v201 + 1) = v201 + 5040;
      v95 = v201;
      *(_QWORD *)&v203 = 0x100000005LL;
      v96 = sub_1800AF9D4();
      v97 = sub_18007C338(v204, 30LL, v96, 5);
      v98 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v97);
      v99 = sub_18001C61C(Src, v98, (__int64)"/Pixel");
      v201 = v95;
      v202 = v203;
      sub_18007C3DC((__int64)v99, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D909C);
    }
  }
  if ( dword_1801D90A0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90A0);
    if ( dword_1801D90A0 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v100 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v101 = sub_1800AF9D4();
      v102 = sub_18007C338(v204, 0LL, v101, 5);
      v103 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v102);
      v104 = sub_18001C61C(Src, v103, (__int64)"/Vertex");
      v201 = v100;
      v202 = v203;
      sub_18007C3DC((__int64)v104, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90A0);
    }
  }
  if ( dword_1801D90A4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90A4);
    if ( dword_1801D90A4 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF944();
      *((_QWORD *)&v201 + 1) = v201 + 1412;
      v105 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v106 = sub_1800AF9D4();
      v107 = sub_18007C338(v204, 1LL, v106, 5);
      v108 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v107);
      v109 = sub_18001C61C(Src, v108, (__int64)"/Vertex");
      v201 = v105;
      v202 = v203;
      sub_18007C3DC((__int64)v109, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90A4);
    }
  }
  if ( dword_1801D90A8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90A8);
    if ( dword_1801D90A8 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v110 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v111 = sub_1800AF9D4();
      v112 = sub_18007C338(v204, 2LL, v111, 5);
      v113 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v112);
      v114 = sub_18001C61C(Src, v113, (__int64)"/Vertex");
      v201 = v110;
      v202 = v203;
      sub_18007C3DC((__int64)v114, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90A8);
    }
  }
  if ( dword_1801D90AC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90AC);
    if ( dword_1801D90AC == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v115 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v116 = sub_1800AF9D4();
      v117 = sub_18007C338(v204, 4LL, v116, 5);
      v118 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v117);
      v119 = sub_18001C61C(Src, v118, (__int64)"/Vertex");
      v201 = v115;
      v202 = v203;
      sub_18007C3DC((__int64)v119, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90AC);
    }
  }
  if ( dword_1801D90B0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90B0);
    if ( dword_1801D90B0 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF974();
      *((_QWORD *)&v201 + 1) = v201 + 1704;
      v120 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v121 = sub_1800AF9D4();
      v122 = sub_18007C338(v204, 5LL, v121, 5);
      v123 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v122);
      v124 = sub_18001C61C(Src, v123, (__int64)"/Vertex");
      v201 = v120;
      v202 = v203;
      sub_18007C3DC((__int64)v124, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90B0);
    }
  }
  if ( dword_1801D90B4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90B4);
    if ( dword_1801D90B4 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v125 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v126 = sub_1800AF9D4();
      v127 = sub_18007C338(v204, 6LL, v126, 5);
      v128 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v127);
      v129 = sub_18001C61C(Src, v128, (__int64)"/Vertex");
      v201 = v125;
      v202 = v203;
      sub_18007C3DC((__int64)v129, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90B4);
    }
  }
  if ( dword_1801D90B8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90B8);
    if ( dword_1801D90B8 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v130 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v131 = sub_1800AF9D4();
      v132 = sub_18007C338(v204, 8LL, v131, 5);
      v133 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v132);
      v134 = sub_18001C61C(Src, v133, (__int64)"/Vertex");
      v201 = v130;
      v202 = v203;
      sub_18007C3DC((__int64)v134, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90B8);
    }
  }
  if ( dword_1801D90BC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90BC);
    if ( dword_1801D90BC == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v135 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v136 = sub_1800AF9D4();
      v137 = sub_18007C338(v204, 10LL, v136, 5);
      v138 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v137);
      v139 = sub_18001C61C(Src, v138, (__int64)"/Vertex");
      v201 = v135;
      v202 = v203;
      sub_18007C3DC((__int64)v139, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90BC);
    }
  }
  if ( dword_1801D90C0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90C0);
    if ( dword_1801D90C0 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v140 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v141 = sub_1800AF9D4();
      v142 = sub_18007C338(v204, 12LL, v141, 5);
      v143 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v142);
      v144 = sub_18001C61C(Src, v143, (__int64)"/Vertex");
      v201 = v140;
      v202 = v203;
      sub_18007C3DC((__int64)v144, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90C0);
    }
  }
  if ( dword_1801D90C4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90C4);
    if ( dword_1801D90C4 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF924();
      *((_QWORD *)&v201 + 1) = v201 + 1848;
      v145 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v146 = sub_1800AF9D4();
      v147 = sub_18007C338(v204, 14LL, v146, 5);
      v148 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v147);
      v149 = sub_18001C61C(Src, v148, (__int64)"/Vertex");
      v201 = v145;
      v202 = v203;
      sub_18007C3DC((__int64)v149, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90C4);
    }
  }
  if ( dword_1801D90C8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90C8);
    if ( dword_1801D90C8 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v150 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v151 = sub_1800AF9D4();
      v152 = sub_18007C338(v204, 16LL, v151, 5);
      v153 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v152);
      v154 = sub_18001C61C(Src, v153, (__int64)"/Vertex");
      v201 = v150;
      v202 = v203;
      sub_18007C3DC((__int64)v154, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90C8);
    }
  }
  if ( dword_1801D90CC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90CC);
    if ( dword_1801D90CC == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9B4();
      *((_QWORD *)&v201 + 1) = v201 + 2472;
      v155 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v156 = sub_1800AF9D4();
      v157 = sub_18007C338(v204, 17LL, v156, 5);
      v158 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v157);
      v159 = sub_18001C61C(Src, v158, (__int64)"/Vertex");
      v201 = v155;
      v202 = v203;
      sub_18007C3DC((__int64)v159, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90CC);
    }
  }
  if ( dword_1801D90D0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90D0);
    if ( dword_1801D90D0 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v160 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v161 = sub_1800AF9D4();
      v162 = sub_18007C338(v204, 18LL, v161, 5);
      v163 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v162);
      v164 = sub_18001C61C(Src, v163, (__int64)"/Vertex");
      v201 = v160;
      v202 = v203;
      sub_18007C3DC((__int64)v164, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90D0);
    }
  }
  if ( dword_1801D90D4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90D4);
    if ( dword_1801D90D4 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v165 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v166 = sub_1800AF9D4();
      v167 = sub_18007C338(v204, 20LL, v166, 5);
      v168 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v167);
      v169 = sub_18001C61C(Src, v168, (__int64)"/Vertex");
      v201 = v165;
      v202 = v203;
      sub_18007C3DC((__int64)v169, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90D4);
    }
  }
  if ( dword_1801D90D8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90D8);
    if ( dword_1801D90D8 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9C4();
      *((_QWORD *)&v201 + 1) = v201 + 2776;
      v170 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v171 = sub_1800AF9D4();
      v172 = sub_18007C338(v204, 21LL, v171, 5);
      v173 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v172);
      v174 = sub_18001C61C(Src, v173, (__int64)"/Vertex");
      v201 = v170;
      v202 = v203;
      sub_18007C3DC((__int64)v174, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90D8);
    }
  }
  if ( dword_1801D90DC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90DC);
    if ( dword_1801D90DC == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v175 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v176 = sub_1800AF9D4();
      v177 = sub_18007C338(v204, 22LL, v176, 5);
      v178 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v177);
      v179 = sub_18001C61C(Src, v178, (__int64)"/Vertex");
      v201 = v175;
      v202 = v203;
      sub_18007C3DC((__int64)v179, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90DC);
    }
  }
  if ( dword_1801D90E0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90E0);
    if ( dword_1801D90E0 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v180 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v181 = sub_1800AF9D4();
      v182 = sub_18007C338(v204, 24LL, v181, 5);
      v183 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v182);
      v184 = sub_18001C61C(Src, v183, (__int64)"/Vertex");
      v201 = v180;
      v202 = v203;
      sub_18007C3DC((__int64)v184, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90E0);
    }
  }
  if ( dword_1801D90E4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90E4);
    if ( dword_1801D90E4 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v185 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v186 = sub_1800AF9D4();
      v187 = sub_18007C338(v204, 26LL, v186, 5);
      v188 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v187);
      v189 = sub_18001C61C(Src, v188, (__int64)"/Vertex");
      v201 = v185;
      v202 = v203;
      sub_18007C3DC((__int64)v189, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90E4);
    }
  }
  if ( dword_1801D90E8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90E8);
    if ( dword_1801D90E8 == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v190 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v191 = sub_1800AF9D4();
      v192 = sub_18007C338(v204, 28LL, v191, 5);
      v193 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v192);
      v194 = sub_18001C61C(Src, v193, (__int64)"/Vertex");
      v201 = v190;
      v202 = v203;
      sub_18007C3DC((__int64)v194, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90E8);
    }
  }
  if ( dword_1801D90EC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D90EC);
    if ( dword_1801D90EC == -1 )
    {
      *(_QWORD *)&v201 = sub_1800AF9A4();
      *((_QWORD *)&v201 + 1) = v201 + 2920;
      v195 = v201;
      *(_QWORD *)&v203 = 0x100000001LL;
      v196 = sub_1800AF9D4();
      v197 = sub_18007C338(v204, 30LL, v196, 5);
      v198 = sub_18001C6E8(v205, (__int64)"UnlitShader/ShaderModel40/", v197);
      v199 = sub_18001C61C(Src, v198, (__int64)"/Vertex");
      v201 = v195;
      v202 = v203;
      sub_18007C3DC((__int64)v199, (__int64)&v201);
      sub_180011B24((__int64)v205);
      sub_180011B24((__int64)v204);
      sub_18000C538(&dword_1801D90EC);
    }
  }
  return 0LL;
}
