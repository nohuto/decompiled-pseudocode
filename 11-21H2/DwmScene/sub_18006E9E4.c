/*
 * XREFs of sub_18006E9E4 @ 0x18006E9E4
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_180040B04 @ 0x180040B04 (sub_180040B04.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 *     sub_180048858 @ 0x180048858 (sub_180048858.c)
 *     sub_180059610 @ 0x180059610 (sub_180059610.c)
 *     sub_18006180C @ 0x18006180C (sub_18006180C.c)
 *     sub_180065724 @ 0x180065724 (sub_180065724.c)
 *     sub_18006A16C @ 0x18006A16C (sub_18006A16C.c)
 *     sub_18006AE34 @ 0x18006AE34 (sub_18006AE34.c)
 *     sub_18006AF04 @ 0x18006AF04 (sub_18006AF04.c)
 *     sub_18006AFD4 @ 0x18006AFD4 (sub_18006AFD4.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18006B758 @ 0x18006B758 (sub_18006B758.c)
 *     sub_18006B78C @ 0x18006B78C (sub_18006B78C.c)
 *     sub_18006B7CC @ 0x18006B7CC (sub_18006B7CC.c)
 *     sub_18006B990 @ 0x18006B990 (sub_18006B990.c)
 *     sub_18006BA28 @ 0x18006BA28 (sub_18006BA28.c)
 *     sub_18006BAC0 @ 0x18006BAC0 (sub_18006BAC0.c)
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 *     sub_18009E658 @ 0x18009E658 (sub_18009E658.c)
 *     sub_18009E6BC @ 0x18009E6BC (sub_18009E6BC.c)
 *     sub_1800A0CC4 @ 0x1800A0CC4 (sub_1800A0CC4.c)
 */

// Hidden C++ exception states: #wind=73
__int64 __fastcall sub_18006E9E4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r12d
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // r14
  __int64 *v18; // rax
  char *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  __int64 v28; // rbx
  __m128i v29; // xmm6
  __m128i v30; // kr00_16
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // rax
  __int64 v37; // rbx
  __m128i v38; // xmm6
  __m128i v39; // kr10_16
  __int64 v40; // rbx
  _QWORD *v41; // rax
  size_t v42; // r8
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rcx
  void **v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  __m128 v52; // xmm3
  __m128 v53; // xmm0
  __int64 v54; // rdx
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  __int64 v57; // rbx
  void **v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rdx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  __m128 v63; // xmm3
  __m128 v64; // xmm0
  __int64 v65; // rdx
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  __int64 v68; // rbx
  void **v69; // rdx
  __int64 v70; // rbx
  __int64 v71; // rdx
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  __m128 v74; // xmm3
  __m128 v75; // xmm0
  __int64 v76; // rdx
  signed __int32 v77; // eax
  signed __int32 v78; // ett
  __int64 v79; // rbx
  __int64 *v80; // r14
  __int64 v81; // rdi
  __int64 *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rbx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // r8
  _QWORD *v95; // rax
  __int64 v96; // r8
  __int64 v97; // rdi
  __int64 *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rbx
  __int64 v102; // rdx
  signed __int32 v103; // eax
  signed __int32 v104; // ett
  __int64 v105; // rax
  __int64 v106; // rbx
  __m128i v107; // xmm6
  __m128i v108; // kr20_16
  __int64 result; // rax
  __int64 *v110; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v111; // [rsp+30h] [rbp-D8h]
  __int64 *v112; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v113[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int32 v114; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v115; // [rsp+54h] [rbp-B4h]
  unsigned __int32 v116; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v117; // [rsp+60h] [rbp-A8h]
  unsigned __int32 v118; // [rsp+68h] [rbp-A0h]
  __m128i v119; // [rsp+78h] [rbp-90h] BYREF
  __m128i v120; // [rsp+88h] [rbp-80h] BYREF
  __m128i v121; // [rsp+98h] [rbp-70h] BYREF
  __m128i v122; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v123[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v124[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v125; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v126; // [rsp+E0h] [rbp-28h]
  __int64 v127; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v128; // [rsp+F0h] [rbp-18h]
  __int64 v129; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v130; // [rsp+100h] [rbp-8h]
  __m128i v131; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v132[2]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v133; // [rsp+128h] [rbp+20h] BYREF
  __int128 v134; // [rsp+138h] [rbp+30h] BYREF
  __int128 v135; // [rsp+148h] [rbp+40h] BYREF
  __int128 v136; // [rsp+158h] [rbp+50h] BYREF
  __int128 v137; // [rsp+168h] [rbp+60h] BYREF
  __int128 v138; // [rsp+178h] [rbp+70h] BYREF
  __int128 v139; // [rsp+188h] [rbp+80h] BYREF
  __int128 v140; // [rsp+198h] [rbp+90h] BYREF
  __int128 v141; // [rsp+1A8h] [rbp+A0h] BYREF
  double v142; // [rsp+1B8h] [rbp+B0h]
  int v143; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v144; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int32 v145; // [rsp+1D0h] [rbp+C8h]
  double v146; // [rsp+1D8h] [rbp+D0h]
  int v147; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 v148; // [rsp+1E8h] [rbp+E0h] BYREF
  int v149; // [rsp+1F0h] [rbp+E8h]
  unsigned __int64 v150; // [rsp+1F8h] [rbp+F0h] BYREF
  int v151; // [rsp+200h] [rbp+F8h]
  unsigned __int64 v152; // [rsp+208h] [rbp+100h] BYREF
  int v153; // [rsp+210h] [rbp+108h]
  unsigned __int64 v154; // [rsp+218h] [rbp+110h] BYREF
  unsigned __int32 v155; // [rsp+220h] [rbp+118h]
  double v156; // [rsp+228h] [rbp+120h]
  int v157; // [rsp+230h] [rbp+128h]
  __int64 v158[2]; // [rsp+238h] [rbp+130h] BYREF
  unsigned __int64 v159; // [rsp+248h] [rbp+140h] BYREF
  int v160; // [rsp+250h] [rbp+148h]
  unsigned __int64 v161; // [rsp+258h] [rbp+150h] BYREF
  int v162; // [rsp+260h] [rbp+158h]
  unsigned __int64 v163; // [rsp+268h] [rbp+160h] BYREF
  unsigned __int32 v164; // [rsp+270h] [rbp+168h]
  unsigned __int64 v165; // [rsp+278h] [rbp+170h] BYREF
  int v166; // [rsp+280h] [rbp+178h]
  __int64 v167[2]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v168[2]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v169[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __m128i v170; // [rsp+2B8h] [rbp+1B0h] BYREF
  _QWORD v171[2]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __m128i v172; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v173[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _QWORD v174[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _QWORD v175[2]; // [rsp+308h] [rbp+200h] BYREF
  _QWORD v176[2]; // [rsp+318h] [rbp+210h] BYREF
  __int64 v177[3]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v178[2]; // [rsp+340h] [rbp+238h] BYREF
  _QWORD v179[2]; // [rsp+350h] [rbp+248h] BYREF
  _QWORD v180[3]; // [rsp+360h] [rbp+258h] BYREF
  __int128 v181; // [rsp+378h] [rbp+270h] BYREF
  __int128 v182; // [rsp+388h] [rbp+280h] BYREF
  __int128 v183; // [rsp+398h] [rbp+290h] BYREF
  _QWORD v184[2]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v185[4]; // [rsp+3B8h] [rbp+2B0h] BYREF
  __int64 v186[4]; // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 v187[4]; // [rsp+3F8h] [rbp+2F0h] BYREF
  __int64 v188[4]; // [rsp+418h] [rbp+310h] BYREF
  __int64 v189[4]; // [rsp+438h] [rbp+330h] BYREF
  __int64 v190[4]; // [rsp+458h] [rbp+350h] BYREF
  __int64 v191[4]; // [rsp+478h] [rbp+370h] BYREF
  __m128i v192; // [rsp+498h] [rbp+390h] BYREF
  __int64 v193; // [rsp+4A8h] [rbp+3A0h]
  unsigned __int64 v194; // [rsp+4B0h] [rbp+3A8h]
  void *Src[2]; // [rsp+4B8h] [rbp+3B0h] BYREF
  size_t Size; // [rsp+4C8h] [rbp+3C0h]
  unsigned __int64 v197; // [rsp+4D0h] [rbp+3C8h]
  void *v198[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  size_t v199; // [rsp+4E8h] [rbp+3E0h]
  unsigned __int64 v200; // [rsp+4F0h] [rbp+3E8h]
  void *v201[2]; // [rsp+4F8h] [rbp+3F0h] BYREF
  size_t v202; // [rsp+508h] [rbp+400h]
  unsigned __int64 v203; // [rsp+510h] [rbp+408h]
  char *v204[3]; // [rsp+518h] [rbp+410h] BYREF
  unsigned __int64 v205; // [rsp+530h] [rbp+428h]
  char *v206[3]; // [rsp+538h] [rbp+430h] BYREF
  unsigned __int64 v207; // [rsp+550h] [rbp+448h]
  char *v208[3]; // [rsp+558h] [rbp+450h] BYREF
  unsigned __int64 v209; // [rsp+570h] [rbp+468h]
  char *v210[3]; // [rsp+578h] [rbp+470h] BYREF
  unsigned __int64 v211; // [rsp+590h] [rbp+488h]
  char *v212[3]; // [rsp+598h] [rbp+490h] BYREF
  unsigned __int64 v213; // [rsp+5B0h] [rbp+4A8h]
  char *v214[3]; // [rsp+5B8h] [rbp+4B0h] BYREF
  unsigned __int64 v215; // [rsp+5D0h] [rbp+4C8h]
  char *v216[3]; // [rsp+5D8h] [rbp+4D0h] BYREF
  unsigned __int64 v217; // [rsp+5F0h] [rbp+4E8h]
  char *v218[3]; // [rsp+5F8h] [rbp+4F0h] BYREF
  unsigned __int64 v219; // [rsp+610h] [rbp+508h]
  char *v220[3]; // [rsp+618h] [rbp+510h] BYREF
  unsigned __int64 v221; // [rsp+630h] [rbp+528h]
  char *v222[3]; // [rsp+638h] [rbp+530h] BYREF
  unsigned __int64 v223; // [rsp+650h] [rbp+548h]
  char *v224[3]; // [rsp+658h] [rbp+550h] BYREF
  unsigned __int64 v225; // [rsp+670h] [rbp+568h]
  char *v226[3]; // [rsp+678h] [rbp+570h] BYREF
  unsigned __int64 v227; // [rsp+690h] [rbp+588h]
  char *v228[3]; // [rsp+698h] [rbp+590h] BYREF
  unsigned __int64 v229; // [rsp+6B0h] [rbp+5A8h]
  _BYTE v230[16]; // [rsp+6B8h] [rbp+5B0h] BYREF
  char v231[16]; // [rsp+6C8h] [rbp+5C0h] BYREF
  char v232[16]; // [rsp+6D8h] [rbp+5D0h] BYREF

  v112 = a2;
  sub_1800129F4((__int64 *)v222, (__int64)&qword_1801F8058);
  v3 = *a2;
  v110 = v185;
  v4 = sub_1800129F4(v185, (__int64)v222);
  v204[2] = 0LL;
  v205 = 15LL;
  LOBYTE(v204[0]) = 0;
  v5 = 3;
  sub_180012190((__int64 *)v204, "Key", 3uLL);
  v6 = sub_180040B04(v204);
  sub_180045304(v3, (__int64)v230, v6, (__int64)v4);
  if ( v205 >= 0x10 )
    sub_180010884(v204[0], v205 + 1);
  v7 = *a2;
  v110 = v186;
  v8 = sub_1800129F4(v186, (__int64)v222);
  v193 = 0LL;
  v194 = 15LL;
  v192.m128i_i8[0] = 0;
  sub_180012190(v192.m128i_i64, "Fill", 4uLL);
  v9 = sub_180040B04(&v192);
  sub_180045304(v7, (__int64)v231, v9, (__int64)v8);
  if ( v194 >= 0x10 )
    sub_180010884((char *)v192.m128i_i64[0], v194 + 1);
  v10 = *a2;
  v110 = v187;
  v11 = sub_1800129F4(v187, (__int64)v222);
  v206[2] = 0LL;
  v207 = 15LL;
  LOBYTE(v206[0]) = 0;
  sub_180012190((__int64 *)v206, "Back", 4uLL);
  v12 = sub_180040B04(v206);
  sub_180045304(v10, (__int64)v232, v12, (__int64)v11);
  if ( v207 >= 0x10 )
    sub_180010884(v206[0], v207 + 1);
  v13 = sub_18006B2C0(*a2);
  v14 = 0;
  v15 = (__int64 *)(v13 + 136);
  v16 = (__int64 *)&v230[-v13];
  v110 = (__int64 *)&v230[-v13];
  v17 = -136 - v13;
  v113[0] = -136 - v13;
  do
  {
    v18 = sub_1800122E4(*(__int64 *)((char *)v15 + (_QWORD)v16 - 136), v178);
    v19 = (char *)v15 + v17;
    v20 = *v18;
    v21 = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v169[0] = *(__int64 *)((char *)v15 + v17 + v13 + 8);
    *(_QWORD *)&v19[v13 + 8] = v20;
    v169[1] = *(__int64 *)((char *)v15 + v17 + v13 + 16);
    *(_QWORD *)&v19[v13 + 16] = v21;
    sub_180010910((__int64)v169);
    sub_180010910((__int64)v178);
    v22 = *(__int64 *)((char *)v15 + (_QWORD)v16 - 136);
    sub_1800436D4(v22);
    v23 = *sub_18006AE34(v22, v179);
    sub_180010910((__int64)v179);
    if ( v23 )
    {
      v121 = 0LL;
    }
    else
    {
      v136 = 0LL;
      v24 = *(_QWORD *)(v22 + 16);
      if ( !v24 )
LABEL_141:
        sub_1800120F4();
      v25 = *(_DWORD *)(v24 + 8);
      do
      {
        if ( !v25 )
          goto LABEL_141;
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 8), v25 + 1, v25);
      }
      while ( v26 != v25 );
      v136 = *(_OWORD *)(v22 + 8);
      v27 = sub_18001D684();
      v28 = v27;
      v177[2] = v27;
      if ( v27 )
      {
        *(_OWORD *)v27 = 0LL;
        *(_DWORD *)(v27 + 8) = 1;
        *(_DWORD *)(v27 + 12) = 1;
        *(_QWORD *)v27 = &std::_Ref_count_obj2<Spectre::Engine::Aimer>::`vftable';
        sub_18006B758(v27 + 16, (__int64 *)&v136);
      }
      else
      {
        v28 = 0LL;
      }
      v122 = 0LL;
      sub_18006B990(&v122, v28 + 16, v28);
      sub_180010910((__int64)&v136);
      if ( v122.m128i_i64[1] )
        _InterlockedIncrement((volatile signed __int32 *)(v122.m128i_i64[1] + 8));
      v29 = _mm_load_si128(&v122);
      v170 = v29;
      sub_18003FE40(v22, (__int64 **)&v170);
      sub_180010910((__int64)&v170);
      v121 = v29;
      v122 = 0LL;
      sub_180010910((__int64)&v122);
    }
    v30 = v121;
    v121 = 0LL;
    v171[0] = *(_QWORD *)&v19[v13 + 56];
    *(_QWORD *)&v19[v13 + 56] = v30.m128i_i64[0];
    v171[1] = *(_QWORD *)&v19[v13 + 64];
    *(_QWORD *)&v19[v13 + 64] = v30.m128i_i64[1];
    sub_180010910((__int64)v171);
    sub_180010910((__int64)&v121);
    v31 = *(__int64 *)((char *)v15 + (_QWORD)v110 - 136);
    sub_1800436D4(v31);
    v32 = *sub_18006AFD4(v31, v180);
    sub_180010910((__int64)v180);
    if ( v32 )
    {
      v119 = 0LL;
    }
    else
    {
      v137 = 0LL;
      v33 = *(_QWORD *)(v31 + 16);
      if ( !v33 )
LABEL_139:
        sub_1800120F4();
      v34 = *(_DWORD *)(v33 + 8);
      do
      {
        if ( !v34 )
          goto LABEL_139;
        v35 = v34;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 8), v34 + 1, v34);
      }
      while ( v35 != v34 );
      v137 = *(_OWORD *)(v31 + 8);
      v36 = sub_18001D684();
      v37 = v36;
      v111 = (__int64 *)v36;
      if ( v36 )
      {
        *(_OWORD *)v36 = 0LL;
        *(_DWORD *)(v36 + 8) = 1;
        *(_DWORD *)(v36 + 12) = 1;
        *(_QWORD *)v36 = &std::_Ref_count_obj2<Spectre::Engine::ShadowMapCamera>::`vftable';
        sub_18006B7CC();
      }
      else
      {
        v37 = 0LL;
      }
      v120 = 0LL;
      sub_18006BAC0(&v120, v37 + 16, v37);
      sub_180010910((__int64)&v137);
      if ( v120.m128i_i64[1] )
        _InterlockedIncrement((volatile signed __int32 *)(v120.m128i_i64[1] + 8));
      v38 = _mm_load_si128(&v120);
      v172 = v38;
      sub_18003FE40(v31, (__int64 **)&v172);
      sub_180010910((__int64)&v172);
      v119 = v38;
      v120 = 0LL;
      sub_180010910((__int64)&v120);
    }
    v39 = v119;
    v119 = 0LL;
    v173[0] = *v15;
    *v15 = v39.m128i_i64[0];
    v173[1] = v15[1];
    v15[1] = v39.m128i_i64[1];
    sub_180010910((__int64)v173);
    sub_180010910((__int64)&v119);
    sub_18009E6BC(*v15, 1LL);
    v40 = *v15;
    sub_180029A18((__int64 *)v224, v14);
    v41 = (_QWORD *)sub_18001DD3C((__int64)v220, (__int64)"ShadowMap", v224);
    if ( (_QWORD *)(v40 + 24) != v41 )
    {
      v42 = v41[2];
      if ( v41[3] >= 0x10uLL )
        v41 = (_QWORD *)*v41;
      sub_180012190((__int64 *)(v40 + 24), v41, v42);
    }
    if ( v221 >= 0x10 )
      sub_180010884(v220[0], v221 + 1);
    v220[2] = 0LL;
    v221 = 15LL;
    LOBYTE(v220[0]) = 0;
    if ( v225 >= 0x10 )
      sub_180010884(v224[0], v225 + 1);
    sub_18006180C(*v15, &qword_1801F7FD8);
    sub_180065724(*v15, v5);
    sub_180029A18((__int64 *)v208, v14);
    sub_18001DD3C((__int64)v228, (__int64)"Global/ShadowBuffer", v208);
    if ( v209 >= 0x10 )
      sub_180010884(v208[0], v209 + 1);
    v208[2] = 0LL;
    v209 = 15LL;
    LOBYTE(v208[0]) = 0;
    sub_180029A18((__int64 *)v210, v14);
    sub_18001DD3C((__int64)v226, (__int64)"Global/ColoredShadowBuffer", v210);
    if ( v211 >= 0x10 )
      sub_180010884(v210[0], v211 + 1);
    v210[2] = 0LL;
    v211 = 15LL;
    LOBYTE(v210[0]) = 0;
    sub_18009E658(*v15, v228, v226);
    if ( v227 >= 0x10 )
      sub_180010884(v226[0], v227 + 1);
    if ( v229 >= 0x10 )
      sub_180010884(v228[0], v229 + 1);
    ++v14;
    --v5;
    v15 += 2;
    v16 = v110;
    v17 = v113[0];
  }
  while ( v5 > 0 );
  v43 = *(_QWORD *)(v13 + 16);
  if ( v43 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    v43 = *(_QWORD *)(v13 + 16);
  }
  v44 = *(_QWORD *)(v13 + 8);
  v132[0] = v44;
  v132[1] = v43;
  v45 = *(_QWORD *)(v13 + 32);
  if ( v45 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
    v45 = *(_QWORD *)(v13 + 32);
  }
  v123[0] = *(_QWORD *)(v13 + 24);
  v123[1] = v45;
  v46 = *(_QWORD *)(v13 + 48);
  if ( v46 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v46 + 8), 1u);
    v46 = *(_QWORD *)(v13 + 48);
  }
  v124[0] = *(_QWORD *)(v13 + 40);
  v124[1] = v46;
  Size = 0LL;
  v197 = 15LL;
  LOBYTE(Src[0]) = 0;
  sub_180012190((__int64 *)Src, "Key", 3uLL);
  if ( (void **)(v44 + 24) != Src )
  {
    v47 = Src;
    if ( v197 >= 0x10 )
      v47 = (void **)Src[0];
    sub_180012190((__int64 *)(v44 + 24), v47, Size);
  }
  if ( v197 >= 0x10 )
    sub_180010884((char *)Src[0], v197 + 1);
  v48 = v132[0];
  *(_BYTE *)(v132[0] + 72LL) = 1;
  sub_180048858(v48, 1);
  v138 = 0LL;
  v49 = *(_QWORD *)(v48 + 64);
  if ( v49 )
  {
    v50 = *(_DWORD *)(v49 + 8);
    while ( v50 )
    {
      v51 = v50;
      v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 8), v50 + 1, v50);
      if ( v51 == v50 )
      {
        v138 = *(_OWORD *)(v48 + 56);
        break;
      }
    }
  }
  v143 = -1074818325;
  v142 = *(double *)_mm_unpacklo_ps((__m128)0xBFDE17FA, (__m128)0x40153B12u).m128_u64;
  v52 = 0LL;
  *(double *)v52.m128_u64 = v142;
  v53 = _mm_mul_ps(_mm_movelh_ps(v52, (__m128)0xBFEF92EB), (__m128)xmmword_1801BD920);
  v113[1] = v53.m128_u64[0];
  v114 = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
  v144 = v53.m128_u64[0];
  v145 = v114;
  sub_18001380C(v138, &v144);
  sub_180010910((__int64)&v138);
  v139 = 0LL;
  v54 = *(_QWORD *)(v48 + 64);
  if ( v54 )
  {
    v55 = *(_DWORD *)(v54 + 8);
    while ( v55 )
    {
      v56 = v55;
      v55 = _InterlockedCompareExchange((volatile signed __int32 *)(v54 + 8), v55 + 1, v55);
      if ( v56 == v55 )
      {
        v139 = *(_OWORD *)(v48 + 56);
        break;
      }
    }
  }
  v165 = 0x3F80000000000000LL;
  v166 = 0;
  v148 = 0LL;
  v149 = 0;
  sub_1800417D8(v139, &v148, &v165);
  sub_180010910((__int64)&v139);
  v57 = v132[0];
  *(_DWORD *)(v132[0] + 104LL) = 1092370432;
  *(_DWORD *)(v57 + 116) = 1028443341;
  v199 = 0LL;
  v200 = 15LL;
  LOBYTE(v198[0]) = 0;
  sub_180012190((__int64 *)v198, "Fill", 4uLL);
  if ( (void **)(v123[0] + 24LL) != v198 )
  {
    v58 = v198;
    if ( v200 >= 0x10 )
      v58 = (void **)v198[0];
    sub_180012190((__int64 *)(v123[0] + 24LL), v58, v199);
  }
  if ( v200 >= 0x10 )
    sub_180010884((char *)v198[0], v200 + 1);
  v59 = v123[0];
  *(_BYTE *)(v123[0] + 72LL) = 1;
  sub_180048858(v59, 1);
  *(_DWORD *)(v59 + 88) = 1060487823;
  *(_DWORD *)(v59 + 92) = 1061997773;
  *(_DWORD *)(v59 + 96) = 1065151889;
  *(_DWORD *)(v59 + 100) = 1065353216;
  v140 = 0LL;
  v60 = *(_QWORD *)(v59 + 64);
  if ( v60 )
  {
    v61 = *(_DWORD *)(v60 + 8);
    while ( v61 )
    {
      v62 = v61;
      v61 = _InterlockedCompareExchange((volatile signed __int32 *)(v60 + 8), v61 + 1, v61);
      if ( v62 == v61 )
      {
        v140 = *(_OWORD *)(v59 + 56);
        break;
      }
    }
  }
  v147 = -1071387053;
  v146 = *(double *)_mm_unpacklo_ps((__m128)0x3FE02A60u, (__m128)0x4011700Cu).m128_u64;
  v63 = 0LL;
  *(double *)v63.m128_u64 = v146;
  v64 = _mm_mul_ps(_mm_movelh_ps(v63, (__m128)0xC023EE53), (__m128)xmmword_1801BD920);
  v115 = v64.m128_u64[0];
  v116 = _mm_shuffle_ps(v64, v64, 170).m128_u32[0];
  v163 = v64.m128_u64[0];
  v164 = v116;
  sub_18001380C(v140, &v163);
  sub_180010910((__int64)&v140);
  v141 = 0LL;
  v65 = *(_QWORD *)(v59 + 64);
  if ( v65 )
  {
    v66 = *(_DWORD *)(v65 + 8);
    while ( v66 )
    {
      v67 = v66;
      v66 = _InterlockedCompareExchange((volatile signed __int32 *)(v65 + 8), v66 + 1, v66);
      if ( v67 == v66 )
      {
        v141 = *(_OWORD *)(v59 + 56);
        break;
      }
    }
  }
  v161 = 0x3F80000000000000LL;
  v162 = 0;
  v159 = 0LL;
  v160 = 0;
  sub_1800417D8(v141, &v159, &v161);
  sub_180010910((__int64)&v141);
  v68 = v123[0];
  *(_DWORD *)(v123[0] + 104LL) = 1086849024;
  *(_DWORD *)(v68 + 116) = 1036831949;
  v202 = 0LL;
  v203 = 15LL;
  LOBYTE(v201[0]) = 0;
  sub_180012190((__int64 *)v201, "Back", 4uLL);
  if ( (void **)(v124[0] + 24LL) != v201 )
  {
    v69 = v201;
    if ( v203 >= 0x10 )
      v69 = (void **)v201[0];
    sub_180012190((__int64 *)(v124[0] + 24LL), v69, v202);
  }
  if ( v203 >= 0x10 )
    sub_180010884((char *)v201[0], v203 + 1);
  v70 = v124[0];
  *(_BYTE *)(v124[0] + 72LL) = 1;
  sub_180048858(v70, 1);
  *(_DWORD *)(v70 + 88) = 1063144775;
  *(_DWORD *)(v70 + 92) = 1060773036;
  *(_DWORD *)(v70 + 96) = 1065353216;
  *(_DWORD *)(v70 + 100) = 1065353216;
  v133 = 0LL;
  v71 = *(_QWORD *)(v70 + 64);
  if ( v71 )
  {
    v72 = *(_DWORD *)(v71 + 8);
    while ( v72 )
    {
      v73 = v72;
      v72 = _InterlockedCompareExchange((volatile signed __int32 *)(v71 + 8), v72 + 1, v72);
      if ( v73 == v72 )
      {
        v133 = *(_OWORD *)(v70 + 56);
        break;
      }
    }
  }
  v157 = 1069927670;
  v156 = *(double *)_mm_unpacklo_ps((__m128)0x3FD6B197u, (__m128)0x4025238Bu).m128_u64;
  v74 = 0LL;
  *(double *)v74.m128_u64 = v156;
  v75 = _mm_mul_ps(_mm_movelh_ps(v74, (__m128)0x3FC5CCF6u), (__m128)xmmword_1801BD920);
  v117 = v75.m128_u64[0];
  v118 = _mm_shuffle_ps(v75, v75, 170).m128_u32[0];
  v154 = v75.m128_u64[0];
  v155 = v118;
  sub_18001380C(v133, &v154);
  sub_180010910((__int64)&v133);
  v134 = 0LL;
  v76 = *(_QWORD *)(v70 + 64);
  if ( v76 )
  {
    v77 = *(_DWORD *)(v76 + 8);
    while ( v77 )
    {
      v78 = v77;
      v77 = _InterlockedCompareExchange((volatile signed __int32 *)(v76 + 8), v77 + 1, v77);
      if ( v78 == v77 )
      {
        v134 = *(_OWORD *)(v70 + 56);
        break;
      }
    }
  }
  v152 = 0x3F80000000000000LL;
  v153 = 0;
  v150 = 0LL;
  v151 = 0;
  sub_1800417D8(v134, &v150, &v152);
  sub_180010910((__int64)&v134);
  v79 = v124[0];
  *(_DWORD *)(v124[0] + 104LL) = 1078460416;
  *(_DWORD *)(v79 + 116) = 1045220557;
  v80 = v112;
  v81 = *v112;
  v111 = v188;
  v82 = sub_1800129F4(v188, (__int64)&qword_1801F8058);
  v212[2] = 0LL;
  v213 = 15LL;
  LOBYTE(v212[0]) = 0;
  sub_180012190((__int64 *)v212, "LightProbe0", 0xBuLL);
  v83 = sub_180040B04(v212);
  sub_180045304(v81, (__int64)v168, v83, (__int64)v82);
  if ( v213 >= 0x10 )
    sub_180010884(v212[0], v213 + 1);
  v84 = *v112;
  v111 = v189;
  v85 = sub_1800129F4(v189, (__int64)&qword_1801F8058);
  v214[2] = 0LL;
  v215 = 15LL;
  LOBYTE(v214[0]) = 0;
  sub_180012190((__int64 *)v214, "LightProbe1", 0xBuLL);
  v86 = sub_180040B04(v214);
  sub_180045304(v84, (__int64)v167, v86, (__int64)v85);
  if ( v215 >= 0x10 )
    sub_180010884(v214[0], v215 + 1);
  v87 = *v112;
  v111 = v190;
  v88 = sub_1800129F4(v190, (__int64)&qword_1801F8058);
  v216[2] = 0LL;
  v217 = 15LL;
  LOBYTE(v216[0]) = 0;
  sub_180012190((__int64 *)v216, "LightProbe2", 0xBuLL);
  v89 = sub_180040B04(v216);
  sub_180045304(v87, (__int64)v177, v89, (__int64)v88);
  if ( v217 >= 0x10 )
    sub_180010884(v216[0], v217 + 1);
  sub_18006A16C(v168[0], &v125);
  sub_18006A16C(v167[0], &v127);
  sub_18006A16C(v177[0], &v129);
  v181 = xmmword_1801BD940;
  v90 = v125;
  sub_180059610(v125, (__int64)&v181);
  v182 = xmmword_1801BD940;
  sub_180059610(v127, (__int64)&v182);
  v183 = xmmword_1801BD940;
  sub_180059610(v129, (__int64)&v183);
  LODWORD(v112) = 0;
  v91 = (_QWORD *)sub_18006C9B0((__int64 *)(v13 + 104), (int *)&v112);
  v92 = v126;
  if ( v126 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v126 + 8), 1u);
    v92 = v126;
    v90 = v125;
  }
  v174[0] = *v91;
  *v91 = v90;
  v174[1] = v91[1];
  v91[1] = v92;
  sub_180010910((__int64)v174);
  LODWORD(v113[0]) = 1;
  v93 = (_QWORD *)sub_18006C9B0((__int64 *)(v13 + 104), (int *)v113);
  v94 = v128;
  if ( v128 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v128 + 8), 1u);
    v94 = v128;
  }
  v175[0] = *v93;
  *v93 = v127;
  v175[1] = v93[1];
  v93[1] = v94;
  sub_180010910((__int64)v175);
  LODWORD(v110) = 2;
  v95 = (_QWORD *)sub_18006C9B0((__int64 *)(v13 + 104), (int *)&v110);
  v96 = v130;
  if ( v130 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v130 + 8), 1u);
    v96 = v130;
  }
  v176[0] = *v95;
  *v95 = v129;
  v176[1] = v95[1];
  v95[1] = v96;
  sub_180010910((__int64)v176);
  v97 = *v80;
  v111 = v191;
  v98 = sub_1800129F4(v191, (__int64)&qword_1801F8058);
  v218[2] = 0LL;
  v219 = 15LL;
  LOBYTE(v218[0]) = 0;
  sub_180012190((__int64 *)v218, "ColorTransform", 0xEuLL);
  v99 = sub_180040B04(v218);
  sub_180045304(v97, (__int64)v158, v99, (__int64)v98);
  if ( v219 >= 0x10 )
    sub_180010884(v218[0], v219 + 1);
  v100 = v158[0];
  sub_1800436D4(v158[0]);
  v101 = *sub_18006AF04(v100, v184);
  sub_180010910((__int64)v184);
  if ( v101 )
  {
    v192 = 0LL;
  }
  else
  {
    v135 = 0LL;
    v102 = *(_QWORD *)(v100 + 16);
    if ( !v102 )
LABEL_140:
      sub_1800120F4();
    v103 = *(_DWORD *)(v102 + 8);
    do
    {
      if ( !v103 )
        goto LABEL_140;
      v104 = v103;
      v103 = _InterlockedCompareExchange((volatile signed __int32 *)(v102 + 8), v103 + 1, v103);
    }
    while ( v104 != v103 );
    v135 = *(_OWORD *)(v100 + 8);
    v105 = sub_18001D684();
    v106 = v105;
    v111 = (__int64 *)v105;
    if ( v105 )
    {
      *(_OWORD *)v105 = 0LL;
      *(_DWORD *)(v105 + 8) = 1;
      *(_DWORD *)(v105 + 12) = 1;
      *(_QWORD *)v105 = &std::_Ref_count_obj2<Spectre::Engine::ColorTransform>::`vftable';
      sub_18006B78C();
    }
    else
    {
      v106 = 0LL;
    }
    v131 = 0LL;
    sub_18006BA28(&v131, v106 + 16, v106);
    sub_180010910((__int64)&v135);
    if ( v131.m128i_i64[1] )
      _InterlockedAdd((volatile signed __int32 *)(v131.m128i_i64[1] + 8), 1u);
    v107 = _mm_load_si128(&v131);
    v192 = v107;
    sub_18003FE40(v158[0], (__int64 **)&v192);
    sub_180010910((__int64)&v192);
    v192 = v107;
    v131 = 0LL;
    sub_180010910((__int64)&v131);
  }
  v108 = v192;
  v192 = 0LL;
  v204[0] = *(char **)(v13 + 120);
  *(_QWORD *)(v13 + 120) = v108.m128i_i64[0];
  v204[1] = *(char **)(v13 + 128);
  *(_QWORD *)(v13 + 128) = v108.m128i_i64[1];
  sub_180010910((__int64)v204);
  sub_180010910((__int64)&v192);
  sub_1800A0CC4(*(_QWORD *)(v13 + 120));
  sub_180010910((__int64)v158);
  sub_180010910((__int64)&v129);
  sub_180010910((__int64)&v127);
  sub_180010910((__int64)&v125);
  sub_180010910((__int64)v177);
  sub_180010910((__int64)v167);
  sub_180010910((__int64)v168);
  sub_180010910((__int64)v124);
  sub_180010910((__int64)v123);
  sub_180010910((__int64)v132);
  result = sub_18000B4C0((__int64)v230, 16LL, 3LL);
  if ( v223 >= 8 )
    return sub_180010884(v222[0], 2 * v223 + 2);
  return result;
}
