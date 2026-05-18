/*
 * XREFs of sub_1800C2990 @ 0x1800C2990
 * Callers:
 *     sub_180002170 @ 0x180002170 (sub_180002170.c)
 *     sub_1800022F0 @ 0x1800022F0 (sub_1800022F0.c)
 *     sub_180002360 @ 0x180002360 (sub_180002360.c)
 *     sub_1800023D0 @ 0x1800023D0 (sub_1800023D0.c)
 *     sub_180002440 @ 0x180002440 (sub_180002440.c)
 *     sub_1800024B0 @ 0x1800024B0 (sub_1800024B0.c)
 *     sub_180002520 @ 0x180002520 (sub_180002520.c)
 *     sub_180002590 @ 0x180002590 (sub_180002590.c)
 *     sub_180002600 @ 0x180002600 (sub_180002600.c)
 *     sub_180002670 @ 0x180002670 (sub_180002670.c)
 *     sub_1800026E0 @ 0x1800026E0 (sub_1800026E0.c)
 *     sub_180002750 @ 0x180002750 (sub_180002750.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800C2788 @ 0x1800C2788 (sub_1800C2788.c)
 *     sub_1800C2798 @ 0x1800C2798 (sub_1800C2798.c)
 *     sub_1800C27A8 @ 0x1800C27A8 (sub_1800C27A8.c)
 *     sub_1800C27B8 @ 0x1800C27B8 (sub_1800C27B8.c)
 *     sub_1800C27C8 @ 0x1800C27C8 (sub_1800C27C8.c)
 *     sub_1800C27D8 @ 0x1800C27D8 (sub_1800C27D8.c)
 *     sub_1800C27E8 @ 0x1800C27E8 (sub_1800C27E8.c)
 *     sub_1800C27F8 @ 0x1800C27F8 (sub_1800C27F8.c)
 *     sub_1800C2808 @ 0x1800C2808 (sub_1800C2808.c)
 *     sub_1800C2818 @ 0x1800C2818 (sub_1800C2818.c)
 *     sub_1800C2828 @ 0x1800C2828 (sub_1800C2828.c)
 *     sub_1800C2838 @ 0x1800C2838 (sub_1800C2838.c)
 *     sub_1800C2848 @ 0x1800C2848 (sub_1800C2848.c)
 */

// Hidden C++ exception states: #wind=120
__int64 sub_1800C2990()
{
  __int64 v0; // rbx
  __int128 v2; // xmm6
  __int64 *v3; // rax
  __int64 *v4; // rax
  void *v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 *v8; // rax
  __int64 *v9; // rax
  void *v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm6
  __int64 *v13; // rax
  __int64 *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 *v18; // rax
  __int64 *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 *v23; // rax
  __int64 *v24; // rax
  void *v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm6
  __int64 *v28; // rax
  __int64 *v29; // rax
  void *v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm6
  __int64 *v33; // rax
  __int64 *v34; // rax
  void *v35; // rax
  __int64 v36; // rax
  __int128 v37; // xmm6
  __int64 *v38; // rax
  __int64 *v39; // rax
  void *v40; // rax
  __int64 v41; // rax
  __int128 v42; // xmm6
  __int64 *v43; // rax
  __int64 *v44; // rax
  void *v45; // rax
  __int64 v46; // rax
  __int128 v47; // xmm6
  __int64 *v48; // rax
  __int64 *v49; // rax
  void *v50; // rax
  __int64 v51; // rax
  __int128 v52; // xmm6
  __int64 *v53; // rax
  __int64 *v54; // rax
  void *v55; // rax
  __int64 v56; // rax
  __int128 v57; // xmm6
  __int64 *v58; // rax
  __int64 *v59; // rax
  void *v60; // rax
  __int64 v61; // rax
  __int128 v62; // xmm6
  __int64 *v63; // rax
  __int64 *v64; // rax
  void *v65; // rax
  __int64 v66; // rax
  __int128 v67; // xmm6
  __int64 *v68; // rax
  __int64 *v69; // rax
  void *v70; // rax
  __int64 v71; // rax
  __int128 v72; // xmm6
  __int64 *v73; // rax
  __int64 *v74; // rax
  void *v75; // rax
  __int64 v76; // rax
  __int128 v77; // xmm6
  __int64 *v78; // rax
  __int64 *v79; // rax
  void *v80; // rax
  __int64 v81; // rax
  __int128 v82; // xmm6
  __int64 *v83; // rax
  __int64 *v84; // rax
  void *v85; // rax
  __int64 v86; // rax
  __int128 v87; // xmm6
  __int64 *v88; // rax
  __int64 *v89; // rax
  void *v90; // rax
  __int64 v91; // rax
  __int128 v92; // xmm6
  __int64 *v93; // rax
  __int64 *v94; // rax
  void *v95; // rax
  __int64 v96; // rax
  __int128 v97; // xmm6
  __int64 *v98; // rax
  __int64 *v99; // rax
  void *v100; // rax
  __int64 v101; // rax
  __int128 v102; // xmm6
  __int64 *v103; // rax
  __int64 *v104; // rax
  void *v105; // rax
  __int64 v106; // rax
  __int128 v107; // xmm6
  __int64 *v108; // rax
  __int64 *v109; // rax
  void *v110; // rax
  __int64 v111; // rax
  __int128 v112; // xmm6
  __int64 *v113; // rax
  __int64 *v114; // rax
  void *v115; // rax
  __int64 v116; // rax
  __int128 v117; // xmm6
  __int64 *v118; // rax
  __int64 *v119; // rax
  void *v120; // rax
  __int64 v121; // rax
  __int128 v122; // xmm6
  __int64 *v123; // rax
  __int64 *v124; // rax
  void *v125; // rax
  __int64 v126; // rax
  __int128 v127; // xmm6
  __int64 *v128; // rax
  __int64 *v129; // rax
  void *v130; // rax
  __int64 v131; // rax
  __int128 v132; // xmm6
  __int64 *v133; // rax
  __int64 *v134; // rax
  void *v135; // rax
  __int64 v136; // rax
  __int128 v137; // xmm6
  __int64 *v138; // rax
  __int64 *v139; // rax
  void *v140; // rax
  __int64 v141; // rax
  __int128 v142; // xmm6
  __int64 *v143; // rax
  __int64 *v144; // rax
  void *v145; // rax
  __int64 v146; // rax
  __int128 v147; // xmm6
  __int64 *v148; // rax
  __int64 *v149; // rax
  void *v150; // rax
  __int64 v151; // rax
  __int128 v152; // xmm6
  __int64 *v153; // rax
  __int64 *v154; // rax
  void *v155; // rax
  __int64 v156; // rax
  __int128 v157; // xmm6
  __int64 *v158; // rax
  __int64 *v159; // rax
  void *v160; // rax
  __int64 v161; // rax
  __int128 v162; // xmm6
  __int64 *v163; // rax
  __int64 *v164; // rax
  void *v165; // rax
  __int64 v166; // rax
  __int128 v167; // xmm6
  __int64 *v168; // rax
  __int64 *v169; // rax
  void *v170; // rax
  __int64 v171; // rax
  __int128 v172; // xmm6
  __int64 *v173; // rax
  __int64 *v174; // rax
  void *v175; // rax
  __int64 v176; // rax
  __int128 v177; // xmm6
  __int64 *v178; // rax
  __int64 *v179; // rax
  void *v180; // rax
  __int64 v181; // rax
  __int128 v182; // xmm6
  __int64 *v183; // rax
  __int64 *v184; // rax
  void *v185; // rax
  __int64 v186; // rax
  __int128 v187; // xmm6
  __int64 *v188; // rax
  __int64 *v189; // rax
  void *v190; // rax
  __int64 v191; // rax
  __int128 v192; // xmm6
  __int64 *v193; // rax
  __int64 *v194; // rax
  void *v195; // rax
  __int64 v196; // rax
  __int128 v197; // xmm6
  __int64 *v198; // rax
  __int64 *v199; // rax
  void *v200; // rax
  __int64 v201; // rax
  _QWORD v202[3]; // [rsp+20h] [rbp-91h] BYREF
  __int128 v203; // [rsp+38h] [rbp-79h]
  _BYTE v204[32]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v205; // [rsp+68h] [rbp-49h] BYREF
  __int64 v206; // [rsp+78h] [rbp-39h]
  unsigned __int64 v207; // [rsp+80h] [rbp-31h]
  char *v208[2]; // [rsp+88h] [rbp-29h] BYREF
  __int128 v209; // [rsp+98h] [rbp-19h]
  char *Src; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v211; // [rsp+B8h] [rbp+7h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801FB110 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB110);
    if ( dword_1801FB110 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2788();
      *((_QWORD *)&v205 + 1) = v205 + 2164;
      v2 = v205;
      *(_QWORD *)&v209 = 0x100000005LL;
      v3 = sub_1800C2848();
      v4 = sub_180088448((__int64 *)&Src, 0LL, v3, 5);
      v5 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v4);
      v6 = sub_18001DC84((__int64)v204, v5);
      *(_OWORD *)&v202[1] = v2;
      v203 = v209;
      sub_180088528(v6, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v211 + 1) >= 0x10uLL )
        sub_180010884(Src, *((_QWORD *)&v211 + 1) + 1LL);
      sub_18000C548(&dword_1801FB110);
    }
  }
  if ( dword_1801FB114 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB114);
    if ( dword_1801FB114 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27A8();
      *((_QWORD *)&v205 + 1) = v205 + 516;
      v7 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v8 = sub_1800C2848();
      v9 = sub_180088448((__int64 *)v208, 1LL, v8, 5);
      v10 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v9);
      v11 = sub_18001DC84((__int64)v204, v10);
      *(_OWORD *)&v202[1] = v7;
      v203 = v211;
      sub_180088528(v11, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB114);
    }
  }
  if ( dword_1801FB118 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB118);
    if ( dword_1801FB118 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2788();
      *((_QWORD *)&v205 + 1) = v205 + 2164;
      v12 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v13 = sub_1800C2848();
      v14 = sub_180088448((__int64 *)v208, 2LL, v13, 5);
      v15 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v14);
      v16 = sub_18001DC84((__int64)v204, v15);
      *(_OWORD *)&v202[1] = v12;
      v203 = v211;
      sub_180088528(v16, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB118);
    }
  }
  if ( dword_1801FB11C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB11C);
    if ( dword_1801FB11C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27C8();
      *((_QWORD *)&v205 + 1) = v205 + 3336;
      v17 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v18 = sub_1800C2848();
      v19 = sub_180088448((__int64 *)v208, 4LL, v18, 5);
      v20 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v19);
      v21 = sub_18001DC84((__int64)v204, v20);
      *(_OWORD *)&v202[1] = v17;
      v203 = v211;
      sub_180088528(v21, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB11C);
    }
  }
  if ( dword_1801FB120 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB120);
    if ( dword_1801FB120 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27D8();
      *((_QWORD *)&v205 + 1) = v205 + 1776;
      v22 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v23 = sub_1800C2848();
      v24 = sub_180088448((__int64 *)v208, 5LL, v23, 5);
      v25 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v24);
      v26 = sub_18001DC84((__int64)v204, v25);
      *(_OWORD *)&v202[1] = v22;
      v203 = v211;
      sub_180088528(v26, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB120);
    }
  }
  if ( dword_1801FB124 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB124);
    if ( dword_1801FB124 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27C8();
      *((_QWORD *)&v205 + 1) = v205 + 3336;
      v27 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v28 = sub_1800C2848();
      v29 = sub_180088448((__int64 *)v208, 6LL, v28, 5);
      v30 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v29);
      v31 = sub_18001DC84((__int64)v204, v30);
      *(_OWORD *)&v202[1] = v27;
      v203 = v211;
      sub_180088528(v31, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB124);
    }
  }
  if ( dword_1801FB128 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB128);
    if ( dword_1801FB128 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27F8();
      *((_QWORD *)&v205 + 1) = v205 + 3100;
      v32 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v33 = sub_1800C2848();
      v34 = sub_180088448((__int64 *)v208, 8LL, v33, 5);
      v35 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v34);
      v36 = sub_18001DC84((__int64)v204, v35);
      *(_OWORD *)&v202[1] = v32;
      v203 = v211;
      sub_180088528(v36, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB128);
    }
  }
  if ( dword_1801FB12C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB12C);
    if ( dword_1801FB12C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27F8();
      *((_QWORD *)&v205 + 1) = v205 + 3100;
      v37 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v38 = sub_1800C2848();
      v39 = sub_180088448((__int64 *)v208, 10LL, v38, 5);
      v40 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v39);
      v41 = sub_18001DC84((__int64)v204, v40);
      *(_OWORD *)&v202[1] = v37;
      v203 = v211;
      sub_180088528(v41, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB12C);
    }
  }
  if ( dword_1801FB130 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB130);
    if ( dword_1801FB130 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2808();
      *((_QWORD *)&v205 + 1) = v205 + 5040;
      v42 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v43 = sub_1800C2848();
      v44 = sub_180088448((__int64 *)v208, 12LL, v43, 5);
      v45 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v44);
      v46 = sub_18001DC84((__int64)v204, v45);
      *(_OWORD *)&v202[1] = v42;
      v203 = v211;
      sub_180088528(v46, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB130);
    }
  }
  if ( dword_1801FB134 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB134);
    if ( dword_1801FB134 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2808();
      *((_QWORD *)&v205 + 1) = v205 + 5040;
      v47 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v48 = sub_1800C2848();
      v49 = sub_180088448((__int64 *)v208, 14LL, v48, 5);
      v50 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v49);
      v51 = sub_18001DC84((__int64)v204, v50);
      *(_OWORD *)&v202[1] = v47;
      v203 = v211;
      sub_180088528(v51, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB134);
    }
  }
  if ( dword_1801FB138 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB138);
    if ( dword_1801FB138 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2788();
      *((_QWORD *)&v205 + 1) = v205 + 2164;
      v52 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v53 = sub_1800C2848();
      v54 = sub_180088448((__int64 *)v208, 16LL, v53, 5);
      v55 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v54);
      v56 = sub_18001DC84((__int64)v204, v55);
      *(_OWORD *)&v202[1] = v52;
      v203 = v211;
      sub_180088528(v56, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB138);
    }
  }
  if ( dword_1801FB13C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB13C);
    if ( dword_1801FB13C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27A8();
      *((_QWORD *)&v205 + 1) = v205 + 516;
      v57 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v58 = sub_1800C2848();
      v59 = sub_180088448((__int64 *)v208, 17LL, v58, 5);
      v60 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v59);
      v61 = sub_18001DC84((__int64)v204, v60);
      *(_OWORD *)&v202[1] = v57;
      v203 = v211;
      sub_180088528(v61, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB13C);
    }
  }
  if ( dword_1801FB140 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB140);
    if ( dword_1801FB140 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2788();
      *((_QWORD *)&v205 + 1) = v205 + 2164;
      v62 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v63 = sub_1800C2848();
      v64 = sub_180088448((__int64 *)v208, 18LL, v63, 5);
      v65 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v64);
      v66 = sub_18001DC84((__int64)v204, v65);
      *(_OWORD *)&v202[1] = v62;
      v203 = v211;
      sub_180088528(v66, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB140);
    }
  }
  if ( dword_1801FB144 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB144);
    if ( dword_1801FB144 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27C8();
      *((_QWORD *)&v205 + 1) = v205 + 3336;
      v67 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v68 = sub_1800C2848();
      v69 = sub_180088448((__int64 *)v208, 20LL, v68, 5);
      v70 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v69);
      v71 = sub_18001DC84((__int64)v204, v70);
      *(_OWORD *)&v202[1] = v67;
      v203 = v211;
      sub_180088528(v71, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB144);
    }
  }
  if ( dword_1801FB148 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB148);
    if ( dword_1801FB148 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27D8();
      *((_QWORD *)&v205 + 1) = v205 + 1776;
      v72 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v73 = sub_1800C2848();
      v74 = sub_180088448((__int64 *)v208, 21LL, v73, 5);
      v75 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v74);
      v76 = sub_18001DC84((__int64)v204, v75);
      *(_OWORD *)&v202[1] = v72;
      v203 = v211;
      sub_180088528(v76, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB148);
    }
  }
  if ( dword_1801FB14C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB14C);
    if ( dword_1801FB14C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27C8();
      *((_QWORD *)&v205 + 1) = v205 + 3336;
      v77 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v78 = sub_1800C2848();
      v79 = sub_180088448((__int64 *)v208, 22LL, v78, 5);
      v80 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v79);
      v81 = sub_18001DC84((__int64)v204, v80);
      *(_OWORD *)&v202[1] = v77;
      v203 = v211;
      sub_180088528(v81, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB14C);
    }
  }
  if ( dword_1801FB150 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB150);
    if ( dword_1801FB150 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27F8();
      *((_QWORD *)&v205 + 1) = v205 + 3100;
      v82 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v83 = sub_1800C2848();
      v84 = sub_180088448((__int64 *)v208, 24LL, v83, 5);
      v85 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v84);
      v86 = sub_18001DC84((__int64)v204, v85);
      *(_OWORD *)&v202[1] = v82;
      v203 = v211;
      sub_180088528(v86, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB150);
    }
  }
  if ( dword_1801FB154 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB154);
    if ( dword_1801FB154 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27F8();
      *((_QWORD *)&v205 + 1) = v205 + 3100;
      v87 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v88 = sub_1800C2848();
      v89 = sub_180088448((__int64 *)v208, 26LL, v88, 5);
      v90 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v89);
      v91 = sub_18001DC84((__int64)v204, v90);
      *(_OWORD *)&v202[1] = v87;
      v203 = v211;
      sub_180088528(v91, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB154);
    }
  }
  if ( dword_1801FB158 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB158);
    if ( dword_1801FB158 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2808();
      *((_QWORD *)&v205 + 1) = v205 + 5040;
      v92 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v93 = sub_1800C2848();
      v94 = sub_180088448((__int64 *)v208, 28LL, v93, 5);
      v95 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v94);
      v96 = sub_18001DC84((__int64)v204, v95);
      *(_OWORD *)&v202[1] = v92;
      v203 = v211;
      sub_180088528(v96, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB158);
    }
  }
  if ( dword_1801FB15C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB15C);
    if ( dword_1801FB15C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2808();
      *((_QWORD *)&v205 + 1) = v205 + 5040;
      v97 = v205;
      *(_QWORD *)&v211 = 0x100000005LL;
      v98 = sub_1800C2848();
      v99 = sub_180088448((__int64 *)v208, 30LL, v98, 5);
      v100 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v99);
      v101 = sub_18001DC84((__int64)v204, v100);
      *(_OWORD *)&v202[1] = v97;
      v203 = v211;
      sub_180088528(v101, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB15C);
    }
  }
  if ( dword_1801FB160 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB160);
    if ( dword_1801FB160 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v102 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v103 = sub_1800C2848();
      v104 = sub_180088448((__int64 *)v208, 0LL, v103, 5);
      v105 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v104);
      v106 = sub_18001DC84((__int64)v204, v105);
      *(_OWORD *)&v202[1] = v102;
      v203 = v211;
      sub_180088528(v106, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB160);
    }
  }
  if ( dword_1801FB164 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB164);
    if ( dword_1801FB164 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27B8();
      *((_QWORD *)&v205 + 1) = v205 + 1412;
      v107 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v108 = sub_1800C2848();
      v109 = sub_180088448((__int64 *)v208, 1LL, v108, 5);
      v110 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v109);
      v111 = sub_18001DC84((__int64)v204, v110);
      *(_OWORD *)&v202[1] = v107;
      v203 = v211;
      sub_180088528(v111, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB164);
    }
  }
  if ( dword_1801FB168 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB168);
    if ( dword_1801FB168 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v112 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v113 = sub_1800C2848();
      v114 = sub_180088448((__int64 *)v208, 2LL, v113, 5);
      v115 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v114);
      v116 = sub_18001DC84((__int64)v204, v115);
      *(_OWORD *)&v202[1] = v112;
      v203 = v211;
      sub_180088528(v116, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB168);
    }
  }
  if ( dword_1801FB16C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB16C);
    if ( dword_1801FB16C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v117 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v118 = sub_1800C2848();
      v119 = sub_180088448((__int64 *)v208, 4LL, v118, 5);
      v120 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v119);
      v121 = sub_18001DC84((__int64)v204, v120);
      *(_OWORD *)&v202[1] = v117;
      v203 = v211;
      sub_180088528(v121, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB16C);
    }
  }
  if ( dword_1801FB170 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB170);
    if ( dword_1801FB170 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C27E8();
      *((_QWORD *)&v205 + 1) = v205 + 1704;
      v122 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v123 = sub_1800C2848();
      v124 = sub_180088448((__int64 *)v208, 5LL, v123, 5);
      v125 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v124);
      v126 = sub_18001DC84((__int64)v204, v125);
      *(_OWORD *)&v202[1] = v122;
      v203 = v211;
      sub_180088528(v126, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB170);
    }
  }
  if ( dword_1801FB174 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB174);
    if ( dword_1801FB174 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v127 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v128 = sub_1800C2848();
      v129 = sub_180088448((__int64 *)v208, 6LL, v128, 5);
      v130 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v129);
      v131 = sub_18001DC84((__int64)v204, v130);
      *(_OWORD *)&v202[1] = v127;
      v203 = v211;
      sub_180088528(v131, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB174);
    }
  }
  if ( dword_1801FB178 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB178);
    if ( dword_1801FB178 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v132 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v133 = sub_1800C2848();
      v134 = sub_180088448((__int64 *)v208, 8LL, v133, 5);
      v135 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v134);
      v136 = sub_18001DC84((__int64)v204, v135);
      *(_OWORD *)&v202[1] = v132;
      v203 = v211;
      sub_180088528(v136, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB178);
    }
  }
  if ( dword_1801FB17C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB17C);
    if ( dword_1801FB17C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v137 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v138 = sub_1800C2848();
      v139 = sub_180088448((__int64 *)v208, 10LL, v138, 5);
      v140 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v139);
      v141 = sub_18001DC84((__int64)v204, v140);
      *(_OWORD *)&v202[1] = v137;
      v203 = v211;
      sub_180088528(v141, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB17C);
    }
  }
  if ( dword_1801FB180 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB180);
    if ( dword_1801FB180 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v142 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v143 = sub_1800C2848();
      v144 = sub_180088448((__int64 *)v208, 12LL, v143, 5);
      v145 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v144);
      v146 = sub_18001DC84((__int64)v204, v145);
      *(_OWORD *)&v202[1] = v142;
      v203 = v211;
      sub_180088528(v146, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB180);
    }
  }
  if ( dword_1801FB184 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB184);
    if ( dword_1801FB184 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2798();
      *((_QWORD *)&v205 + 1) = v205 + 1848;
      v147 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v148 = sub_1800C2848();
      v149 = sub_180088448((__int64 *)v208, 14LL, v148, 5);
      v150 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v149);
      v151 = sub_18001DC84((__int64)v204, v150);
      *(_OWORD *)&v202[1] = v147;
      v203 = v211;
      sub_180088528(v151, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB184);
    }
  }
  if ( dword_1801FB188 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB188);
    if ( dword_1801FB188 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v152 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v153 = sub_1800C2848();
      v154 = sub_180088448((__int64 *)v208, 16LL, v153, 5);
      v155 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v154);
      v156 = sub_18001DC84((__int64)v204, v155);
      *(_OWORD *)&v202[1] = v152;
      v203 = v211;
      sub_180088528(v156, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB188);
    }
  }
  if ( dword_1801FB18C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB18C);
    if ( dword_1801FB18C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2828();
      *((_QWORD *)&v205 + 1) = v205 + 2472;
      v157 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v158 = sub_1800C2848();
      v159 = sub_180088448((__int64 *)v208, 17LL, v158, 5);
      v160 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v159);
      v161 = sub_18001DC84((__int64)v204, v160);
      *(_OWORD *)&v202[1] = v157;
      v203 = v211;
      sub_180088528(v161, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB18C);
    }
  }
  if ( dword_1801FB190 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB190);
    if ( dword_1801FB190 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v162 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v163 = sub_1800C2848();
      v164 = sub_180088448((__int64 *)v208, 18LL, v163, 5);
      v165 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v164);
      v166 = sub_18001DC84((__int64)v204, v165);
      *(_OWORD *)&v202[1] = v162;
      v203 = v211;
      sub_180088528(v166, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB190);
    }
  }
  if ( dword_1801FB194 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB194);
    if ( dword_1801FB194 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v167 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v168 = sub_1800C2848();
      v169 = sub_180088448((__int64 *)v208, 20LL, v168, 5);
      v170 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v169);
      v171 = sub_18001DC84((__int64)v204, v170);
      *(_OWORD *)&v202[1] = v167;
      v203 = v211;
      sub_180088528(v171, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB194);
    }
  }
  if ( dword_1801FB198 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB198);
    if ( dword_1801FB198 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2838();
      *((_QWORD *)&v205 + 1) = v205 + 2776;
      v172 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v173 = sub_1800C2848();
      v174 = sub_180088448((__int64 *)v208, 21LL, v173, 5);
      v175 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v174);
      v176 = sub_18001DC84((__int64)v204, v175);
      *(_OWORD *)&v202[1] = v172;
      v203 = v211;
      sub_180088528(v176, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB198);
    }
  }
  if ( dword_1801FB19C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB19C);
    if ( dword_1801FB19C == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v177 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v178 = sub_1800C2848();
      v179 = sub_180088448((__int64 *)v208, 22LL, v178, 5);
      v180 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v179);
      v181 = sub_18001DC84((__int64)v204, v180);
      *(_OWORD *)&v202[1] = v177;
      v203 = v211;
      sub_180088528(v181, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB19C);
    }
  }
  if ( dword_1801FB1A0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB1A0);
    if ( dword_1801FB1A0 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v182 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v183 = sub_1800C2848();
      v184 = sub_180088448((__int64 *)v208, 24LL, v183, 5);
      v185 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v184);
      v186 = sub_18001DC84((__int64)v204, v185);
      *(_OWORD *)&v202[1] = v182;
      v203 = v211;
      sub_180088528(v186, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB1A0);
    }
  }
  if ( dword_1801FB1A4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB1A4);
    if ( dword_1801FB1A4 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v187 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v188 = sub_1800C2848();
      v189 = sub_180088448((__int64 *)v208, 26LL, v188, 5);
      v190 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v189);
      v191 = sub_18001DC84((__int64)v204, v190);
      *(_OWORD *)&v202[1] = v187;
      v203 = v211;
      sub_180088528(v191, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB1A4);
    }
  }
  if ( dword_1801FB1A8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB1A8);
    if ( dword_1801FB1A8 == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v192 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v193 = sub_1800C2848();
      v194 = sub_180088448((__int64 *)v208, 28LL, v193, 5);
      v195 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v194);
      v196 = sub_18001DC84((__int64)v204, v195);
      *(_OWORD *)&v202[1] = v192;
      v203 = v211;
      sub_180088528(v196, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB1A8);
    }
  }
  if ( dword_1801FB1AC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB1AC);
    if ( dword_1801FB1AC == -1 )
    {
      *(_QWORD *)&v205 = sub_1800C2818();
      *((_QWORD *)&v205 + 1) = v205 + 2920;
      v197 = v205;
      *(_QWORD *)&v211 = 0x100000001LL;
      v198 = sub_1800C2848();
      v199 = sub_180088448((__int64 *)v208, 30LL, v198, 5);
      v200 = (void *)sub_18001DD3C((__int64)&v205, (__int64)"UnlitShader/ShaderModel40/", v199);
      v201 = sub_18001DC84((__int64)v204, v200);
      *(_OWORD *)&v202[1] = v197;
      v203 = v211;
      sub_180088528(v201, (__int64)&v202[1]);
      if ( v207 >= 0x10 )
        sub_180010884((char *)v205, v207 + 1);
      v206 = 0LL;
      v207 = 15LL;
      LOBYTE(v205) = 0;
      if ( *((_QWORD *)&v209 + 1) >= 0x10uLL )
        sub_180010884(v208[0], *((_QWORD *)&v209 + 1) + 1LL);
      sub_18000C548(&dword_1801FB1AC);
    }
  }
  return 0LL;
}
