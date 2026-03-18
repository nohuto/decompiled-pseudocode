/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C015FAA8 (GreGetTextExtentExW.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0018B2C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0018F90 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C001A108 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C001AA60 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00379E0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00EAC98 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C013BCC4 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02A6554 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02BCBAC (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02BCE14 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02BD198 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02BD6B8 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        float **a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        unsigned int a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  RFONTOBJ *v18; // r15
  struct XDCOBJ *v21; // r13
  __int64 v22; // rbp
  __m128i v23; // xmm6
  float v24; // xmm7_4
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // r11d
  int v33; // r9d
  unsigned int v34; // r12d
  int v35; // ebx
  __int64 v36; // rcx
  float *v37; // rdx
  struct _GLYPHPOS *v38; // rbp
  unsigned __int16 *v39; // r8
  struct _GLYPHPOS *v40; // rsi
  const unsigned __int16 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  int v44; // ecx
  int v45; // ebx
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  unsigned __int16 *v48; // r12
  struct GPRUN *v49; // rbp
  _DWORD *v50; // r13
  int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r15
  struct _GLYPHDATA **v55; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  unsigned int v57; // esi
  int v58; // edx
  __int64 v59; // rax
  GLYPHDEF *pgdf; // rcx
  int v61; // ecx
  __int64 v62; // r8
  int v63; // ecx
  char v64; // r13
  char v65; // r8
  int v66; // r9d
  int v67; // eax
  int v68; // r8d
  int *v69; // rdx
  int v70; // ecx
  float v71; // xmm1_4
  __int64 v72; // r8
  float v73; // r9d
  int v74; // ecx
  __int64 v75; // r8
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r8
  float v80; // r9d
  int v81; // ecx
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // rcx
  unsigned int v85; // r9d
  struct EXFORMOBJ *v86; // rsi
  int v87; // edx
  unsigned int v88; // edx
  unsigned int v89; // edi
  _DWORD *v90; // r9
  unsigned int v91; // eax
  __int64 v92; // rbx
  __int64 v93; // r8
  float v94; // r11d
  unsigned int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r8
  float v98; // r11d
  unsigned int v99; // eax
  __int64 v100; // r8
  __int64 v101; // r8
  float v102; // r11d
  unsigned int v103; // eax
  __int64 v104; // r8
  __int64 v105; // r8
  float v106; // r11d
  unsigned int v107; // eax
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // rdi
  _DWORD *v111; // rbx
  __int64 v112; // r8
  float v113; // r9d
  unsigned int v114; // r11d
  __int64 v115; // r8
  __int64 v116; // r8
  int v117; // ecx
  int v118; // eax
  int v119; // r9d
  int v120; // r8d
  __int64 v121; // rax
  int v122; // r8d
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rax
  struct GPRUN *Run; // rax
  __int64 v127; // rbx
  __int64 v128; // rdx
  int v129; // r11d
  int v130; // r9d
  ERECTL *v131; // r8
  int v132; // r10d
  int v133; // r11d
  int v134; // ecx
  int v135; // edx
  __int64 v136; // r8
  int v137; // eax
  __m128i *v138; // rdx
  unsigned __int64 v139; // r8
  __int64 v140; // rax
  int *v141; // rcx
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rax
  int *v144; // rax
  __int64 v145; // r8
  char v146; // r10
  int v147; // r10d
  int v148; // r11d
  int v149; // ebx
  int v150; // eax
  int v151; // ecx
  int v152; // r8d
  _DWORD *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rdx
  int v158; // eax
  int v159; // ecx
  int v160; // edx
  __int64 v161; // r8
  int v162; // [rsp+50h] [rbp-88h]
  int v163; // [rsp+54h] [rbp-84h] BYREF
  unsigned int v164; // [rsp+58h] [rbp-80h]
  int v165; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v166; // [rsp+60h] [rbp-78h]
  int v167; // [rsp+64h] [rbp-74h]
  unsigned __int16 *v168; // [rsp+68h] [rbp-70h]
  struct _GLYPHPOS *v169; // [rsp+70h] [rbp-68h]
  unsigned int v170; // [rsp+E0h] [rbp+8h]

  v18 = a5;
  v21 = a4;
  v22 = a3;
  v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v24 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  v25 = a8 != 0 ? 0x400 : 0;
  v169 = 0LL;
  *((_DWORD *)this + 1) = v25;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 120LL) + 16LL);
  if ( !v26 )
    return;
  if ( (*(_DWORD *)(v26 + 4) & 0x10) != 0 )
  {
    v25 |= 0x80u;
    *((_DWORD *)this + 1) = v25;
  }
  *((_DWORD *)this + 31) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 116) = 0LL;
  v27 = *(_QWORD *)a5;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 84LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) = v25 | 0x100;
    RFONTOBJ::vFixUpGlyphIndices(a5, a2, a3);
    v27 = *(_QWORD *)a5;
  }
  v28 = *(_QWORD *)(v27 + 104);
  if ( (*(_DWORD *)(v28 + 1792) & 0x40000) != 0 )
    *((_DWORD *)this + 58) |= 0x100u;
  v29 = (__int64)a17;
  if ( !a17 )
  {
    v29 = AllocFreeTmpBuffer((30 * (_DWORD)v22 + 7) & 0xFFFFFFF8);
    if ( !v29 )
      return;
    *((_DWORD *)this + 58) |= 1u;
  }
  *((_QWORD *)this + 8) = v29;
  v30 = *(_DWORD **)a5;
  v31 = *(_DWORD *)(*(_QWORD *)a5 + 208LL);
  if ( v31 != 1 || (v30[179] & 4) != 0 )
    v32 = a9;
  else
    v32 = v30[98];
  v33 = a14;
  v34 = a13;
  v165 = v32;
  v164 = a15;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v34 = a13 - v30[84];
      v33 = a14 - v30[85];
    }
  }
  else
  {
    v34 = a13 - v30[82];
    v33 = a14 - v30[83];
  }
  v162 = v34;
  v170 = v33;
  if ( a10 && a7 && v31 == 1 && (v30[179] & 4) == 0 )
  {
    v137 = *(_DWORD *)(v28 + 40);
    v35 = a8;
    if ( (v137 & 1) != 0 )
    {
      v138 = a7;
      if ( a8 )
      {
        v144 = &a7->m128i_i32[2 * (_DWORD)v22];
        if ( a7 < (__m128i *)v144 )
        {
          do
          {
            v138->m128i_i32[0] += a10;
            v138 = (__m128i *)((char *)v138 + 8);
          }
          while ( v138 < (__m128i *)v144 );
        }
      }
      else
      {
        v139 = 0LL;
        v140 = (int)v22;
        v141 = &a7->m128i_i32[v140];
        v142 = (unsigned __int64)(v140 * 4) >> 2;
        if ( a7 > (__m128i *)v141 )
          v142 = (unsigned __int64)v169;
        if ( v142 >= 0x10 )
        {
          v143 = v142 & 0xFFFFFFFFFFFFFFF0uLL;
          do
          {
            v139 += 16LL;
            *v138 = _mm_add_epi32(v23, _mm_loadu_si128(v138));
            v138[1] = _mm_add_epi32(v23, _mm_loadu_si128(v138 + 1));
            v138[2] = _mm_add_epi32(v23, _mm_loadu_si128(v138 + 2));
            v138[3] = _mm_add_epi32(v23, _mm_loadu_si128(v138 + 3));
            v138 += 4;
          }
          while ( v139 < v143 );
        }
        for ( ; v138 < (__m128i *)v141; v138 = (__m128i *)((char *)v138 + 4) )
          v138->m128i_i32[0] += a10;
      }
    }
  }
  else
  {
    v35 = a8;
  }
  v36 = *(_QWORD *)a5;
  if ( v32 | *(_DWORD *)(*(_QWORD *)a5 + 392LL) || (v37 = *a6, ((_DWORD)(*a6)[8] & 1) == 0) || v37[3] < 0.0 || v24 < 0.0 )
  {
    if ( v35 )
    {
      v86 = (struct EXFORMOBJ *)a6;
      if ( v32 != *(_DWORD *)(v36 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v32) )
          return;
        v33 = v170;
      }
      *((_DWORD *)this + 58) |= 8u;
      ESTROBJ::vCharPos_G4(this, v21, a5, v34, v33, a7->m128i_i32);
    }
    else if ( v32 == *(_DWORD *)(*(_QWORD *)a5 + 392LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, v21, a5, v34, v33, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, v21, a5, v34, v33, a10, a11, a12, a16);
      v86 = (struct EXFORMOBJ *)a6;
    }
    else
    {
      if ( v32 != *(_DWORD *)(v36 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v32) )
          return;
        v33 = v170;
      }
      *((_DWORD *)this + 58) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, v21, a5, v34, v33, a10, a11, a12, a7->m128i_i32, a16);
      v86 = (struct EXFORMOBJ *)a6;
    }
    v145 = *((_QWORD *)this + 10);
    v64 = v164;
    v146 = v164;
    *((_QWORD *)this + 11) = v145;
    v147 = v146 & 6;
    if ( v147 )
    {
      v148 = v145;
      v149 = HIDWORD(v145);
      if ( v147 == 6 )
      {
        v148 = (int)v145 / 2;
        v149 = SHIDWORD(v145) / 2;
      }
      v150 = 0;
      v151 = 0;
      if ( v147 != 6 )
        v151 = -HIDWORD(v145);
      v152 = -(int)v145;
      if ( v147 != 6 )
        v150 = v152;
      *((_DWORD *)this + 20) = v150;
      *((_DWORD *)this + 21) = v151;
      if ( (_DWORD)v22 )
      {
        v153 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
        v154 = v22;
        do
        {
          *(v153 - 1) -= v148;
          *v153 -= v149;
          v153 += 6;
          --v154;
        }
        while ( v154 );
      }
      v34 -= v148;
      v85 = v170 - v149;
      v35 = a8;
    }
    else
    {
      v85 = v170;
    }
    v155 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 18) = v34;
    *((_DWORD *)this + 19) = v85;
    if ( (_DWORD)v22 )
    {
      v156 = v155 + 20;
      v157 = v22;
      do
      {
        v158 = *(_DWORD *)(v156 - 4);
        v156 += 24LL;
        *(_DWORD *)(v156 - 28) = (v158 + 8) >> 4;
        *(_DWORD *)(v156 - 24) = (*(_DWORD *)(v156 - 24) + 8) >> 4;
        --v157;
      }
      while ( v157 );
    }
    goto LABEL_70;
  }
  if ( a7 )
  {
    if ( !v35 )
    {
      ESTROBJ::vCharPos_H1(this, v21, a5, v34, v33, a7, LODWORD(v24));
      goto LABEL_49;
    }
    if ( (a15 & 0xA0) != 0 )
    {
      if ( v32 != *(_DWORD *)(v36 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v32) )
          return;
        v33 = v170;
      }
      *((_DWORD *)this + 58) |= 8u;
      v37 = *a6;
    }
    ESTROBJ::vCharPos_H4(this, v21, a5, v34, v33, a7, LODWORD(v24), *((_DWORD *)v37 + 3));
    goto LABEL_49;
  }
  if ( !*(_DWORD *)(v36 + 312) || a11 | a10 )
  {
    ESTROBJ::vCharPos_H3((__int64)this, v21, a5, v34, v33, a10, a11, a12, LODWORD(v24), 0LL);
    goto LABEL_49;
  }
  v38 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v39 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v40 = v38;
  v41 = v39;
  v169 = v38;
  v38->ptl.x = (int)(v34 + 8) >> 4;
  v38->ptl.y = (v33 + 8) >> 4;
  v42 = *(_QWORD *)a5;
  v43 = *(unsigned int *)this;
  v168 = v39;
  v166 = v43;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v42 + 276) & 0x71 | 2;
  v44 = *(_DWORD *)(*(_QWORD *)a5 + 312LL);
  *((_DWORD *)this + 2) = v44;
  v45 = 16 * v44 * v43;
  *((_DWORD *)this + 28) = v45;
  v46 = *(_QWORD *)a5;
  v167 = v45;
  if ( !*(_QWORD *)(v46 + 480) )
  {
    if ( !(unsigned int)RFONTOBJ::bAllocateCache(a5, (struct RFONTOBJ *)v46) )
      goto LABEL_174;
    v46 = *(_QWORD *)a5;
    v39 = (unsigned __int16 *)v41;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v46 + 104) + 1792LL) & 0x40000000) != 0 && *(_DWORD *)(v46 + 88) == 1 )
  {
    v57 = 0;
    v163 = 0;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, (struct RFONTOBJ *)(unsigned int)v43, v38, v39, v21, this) )
      goto LABEL_46;
    goto LABEL_38;
  }
  v47 = *(_DWORD **)(v46 + 480);
  v163 = 1;
  if ( !*v47 )
  {
    for ( ; (_DWORD)v43; LODWORD(v43) = v43 - 1 )
    {
      v40->hg = *(_DWORD *)(*(_QWORD *)a5 + 460LL);
      v40->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
      ++v40;
    }
    goto LABEL_37;
  }
  v48 = &v39[v43];
  v49 = (struct GPRUN *)(v47 + 4);
  if ( v39 >= v48 )
  {
    v38 = v40;
LABEL_37:
    v57 = 0;
LABEL_38:
    v58 = *((_DWORD *)this + 58);
    if ( (v58 & 0x1400) != 0 )
    {
      v34 = v162;
      ESTROBJ::vCharPos_H3(
        (__int64)this,
        v21,
        v18,
        v162,
        v170,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 976LL) + 288LL),
        LODWORD(v24),
        (unsigned __int16 *)&v163);
      LODWORD(v22) = a3;
      goto LABEL_50;
    }
    if ( v163 )
    {
      v59 = *((_QWORD *)this + 8);
      v58 |= 2u;
      *((_DWORD *)this + 58) = v58;
      *((_QWORD *)this + 4) = v59;
    }
    pgdf = v38->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 24) = 0;
      v61 = v45;
    }
    else
    {
      *((_DWORD *)this + 24) = pgdf[2].pgb;
      v61 = v45 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    *((_DWORD *)this + 26) = v61;
    v62 = *(_QWORD *)v18;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 976LL) + 340LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 25) = -*(_DWORD *)(v62 + 320);
      v63 = -*(_DWORD *)(*(_QWORD *)v18 + 316LL);
    }
    else
    {
      *((_DWORD *)this + 25) = *(_DWORD *)(v62 + 316);
      v63 = *(_DWORD *)(*(_QWORD *)v18 + 320LL);
    }
    *((_DWORD *)this + 27) = v63;
    *((_DWORD *)this + 58) = v58 | 4;
    *((_DWORD *)this + 20) = v45;
    *((_DWORD *)this + 21) = 0;
LABEL_46:
    LODWORD(v22) = a3;
    v34 = v162;
    goto LABEL_50;
  }
  v50 = v47 + 5;
  while ( 1 )
  {
    v51 = *v41;
    v52 = (unsigned int)(v51 - *(_DWORD *)v49);
    if ( (unsigned int)v52 >= *v50 )
    {
      Run = RFONTOBJ::gprunFindRun(v18, v51);
      v49 = Run;
      v127 = (unsigned int)(v51 - *(_DWORD *)Run);
      v50 = (_DWORD *)((char *)Run + 4);
      if ( (unsigned int)v127 >= *((_DWORD *)Run + 1) )
      {
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v18, a4, this, v41, v168, v166, &v163, 1);
        if ( !LinkMetricsPlus )
          goto LABEL_174;
        goto LABEL_34;
      }
      _mm_lfence();
      v53 = *((_QWORD *)Run + 1);
      v54 = 8 * v127;
    }
    else
    {
      _mm_lfence();
      v53 = *((_QWORD *)v49 + 1);
      v54 = 8 * v52;
    }
    v55 = (struct _GLYPHDATA **)(v54 + v53);
    LinkMetricsPlus = *v55;
    if ( !*v55 )
      break;
LABEL_33:
    v18 = a5;
LABEL_34:
    if ( !LinkMetricsPlus->gdf.pgb
      && v163
      && *(_DWORD *)(*(_QWORD *)v18 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v18, LinkMetricsPlus) )
    {
      v163 = 0;
    }
    ++v41;
    v40->hg = LinkMetricsPlus->hg;
    v40->pgdf = &LinkMetricsPlus->gdf;
    ++v40;
    if ( v41 >= v48 )
    {
      v45 = v167;
      v38 = v169;
      v21 = a4;
      goto LABEL_37;
    }
  }
  if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v55) )
  {
    LinkMetricsPlus = *(struct _GLYPHDATA **)(v54 + *((_QWORD *)v49 + 1));
    goto LABEL_33;
  }
  v18 = a5;
LABEL_174:
  LODWORD(v22) = a3;
  v34 = v162;
LABEL_49:
  v57 = 0;
LABEL_50:
  v64 = v164;
  v65 = v164;
  v66 = *((_DWORD *)this + 20);
  v67 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 22) = v66;
  *((_DWORD *)this + 23) = v67;
  v68 = v65 & 6;
  if ( v68 )
  {
    v117 = 0;
    v118 = v66 / 2;
    if ( v68 != 6 )
      v118 = v66;
    v119 = -v66;
    if ( v68 != 6 )
      v117 = v119;
    *((_DWORD *)this + 20) = v117;
    v120 = v118 + 8;
    v121 = *((_QWORD *)this + 8);
    v122 = v120 >> 4;
    v123 = v121 + 24;
    *(_DWORD *)(v121 + 16) -= v122;
    v34 = 16 * *(_DWORD *)(v121 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v22 != 1 )
    {
      v124 = (unsigned int)(v22 - 1);
      do
      {
        v125 = v123;
        v123 += 24LL;
        *(_DWORD *)(v125 + 16) -= v122;
        --v124;
      }
      while ( v124 );
    }
  }
  v69 = a16;
  if ( a16 )
  {
    v70 = *((_DWORD *)this + 2);
    v71 = *(float *)(*(_QWORD *)v18 + 408LL);
    if ( !v70 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
    {
      v89 = v22 - 1;
      v90 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
      if ( (unsigned int)(v22 - 1) >= 4 )
      {
        v91 = ((unsigned int)(v22 - 5) >> 2) + 1;
        v92 = v91;
        v57 = 4 * v91;
        do
        {
          LODWORD(v93) = 0;
          v94 = (float)(int)(16 * v90[4] - v34) * v71;
          v95 = (unsigned __int8)(SLODWORD(v94) >> 23);
          if ( v95 <= 0x9E )
          {
            v96 = LODWORD(v94) & 0x7FFFFF | 0x800000LL;
            v97 = v95 < 0x76 ? v96 >> (118 - (unsigned __int8)v95) : v96 << ((unsigned __int8)v95 - 118);
            v93 = (v97 + 0x80000000LL) >> 32;
            if ( v94 < 0.0 )
              LODWORD(v93) = -(int)v93;
          }
          *v69 = v93;
          LODWORD(v93) = 0;
          v98 = (float)(int)(16 * v90[10] - v34) * v71;
          v99 = (unsigned __int8)(SLODWORD(v98) >> 23);
          if ( v99 <= 0x9E )
          {
            v100 = LODWORD(v98) & 0x7FFFFF | 0x800000LL;
            v101 = v99 < 0x76 ? v100 >> (118 - (unsigned __int8)v99) : v100 << ((unsigned __int8)v99 - 118);
            v93 = (v101 + 0x80000000LL) >> 32;
            if ( v98 < 0.0 )
              LODWORD(v93) = -(int)v93;
          }
          v69[1] = v93;
          LODWORD(v93) = 0;
          v102 = (float)(int)(16 * v90[16] - v34) * v71;
          v103 = (unsigned __int8)(SLODWORD(v102) >> 23);
          if ( v103 <= 0x9E )
          {
            v104 = LODWORD(v102) & 0x7FFFFF | 0x800000LL;
            v105 = v103 < 0x76 ? v104 >> (118 - (unsigned __int8)v103) : v104 << ((unsigned __int8)v103 - 118);
            v93 = (v105 + 0x80000000LL) >> 32;
            if ( v102 < 0.0 )
              LODWORD(v93) = -(int)v93;
          }
          v69[2] = v93;
          LODWORD(v93) = 0;
          v106 = (float)(int)(16 * v90[22] - v34) * v71;
          v107 = (unsigned __int8)(SLODWORD(v106) >> 23);
          if ( v107 <= 0x9E )
          {
            v108 = LODWORD(v106) & 0x7FFFFF | 0x800000LL;
            v109 = v107 < 0x76 ? v108 >> (118 - (unsigned __int8)v107) : v108 << ((unsigned __int8)v107 - 118);
            v93 = (v109 + 0x80000000LL) >> 32;
            if ( v106 < 0.0 )
              LODWORD(v93) = -(int)v93;
          }
          v69[3] = v93;
          v90 += 24;
          v69 += 4;
          --v92;
        }
        while ( v92 );
      }
      if ( v57 < v89 )
      {
        v110 = v89 - v57;
        v111 = v90 + 4;
        do
        {
          LODWORD(v112) = 0;
          v113 = (float)(int)(16 * *v111 - v34) * v71;
          v114 = (unsigned __int8)(SLODWORD(v113) >> 23);
          if ( v114 <= 0x9E )
          {
            v115 = LODWORD(v113) & 0x7FFFFF | 0x800000LL;
            v116 = v114 < 0x76 ? v115 >> (118 - (unsigned __int8)v114) : v115 << ((unsigned __int8)v114 - 118);
            v112 = (v116 + 0x80000000LL) >> 32;
            if ( v113 < 0.0 )
              LODWORD(v112) = -(int)v112;
          }
          *v69 = v112;
          v111 += 6;
          ++v69;
          --v110;
        }
        while ( v110 );
      }
      LODWORD(v79) = 0;
      v80 = (float)(int)(((v34 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v34) * v71;
      v81 = (unsigned __int8)(SLODWORD(v80) >> 23) - 118;
      if ( v81 <= 40 )
      {
        v82 = LODWORD(v80) & 0x7FFFFF | 0x800000LL;
        v83 = v81 < 0 ? v82 >> (118 - (unsigned __int8)(SLODWORD(v80) >> 23)) : v82 << v81;
        v79 = (v83 + 0x80000000LL) >> 32;
        if ( v80 < 0.0 )
          LODWORD(v79) = -(int)v79;
      }
      *v69 = v79;
    }
    else
    {
      LODWORD(v72) = 0;
      v73 = (float)(16 * v70) * v71;
      v74 = (unsigned __int8)(SLODWORD(v73) >> 23) - 118;
      if ( v74 <= 40 )
      {
        v75 = LODWORD(v73) & 0x7FFFFF | 0x800000LL;
        v76 = v74 < 0 ? v75 >> (118 - (unsigned __int8)(SLODWORD(v73) >> 23)) : v75 << v74;
        v72 = (v76 + 0x80000000LL) >> 32;
        if ( v73 < 0.0 )
          LODWORD(v72) = -(int)v72;
      }
      v77 = 0;
      if ( (_DWORD)v22 )
      {
        v78 = (unsigned int)v22;
        do
        {
          v77 += v72;
          *v69++ = v77;
          --v78;
        }
        while ( v78 );
      }
    }
  }
  v84 = *((_QWORD *)this + 8);
  v85 = v170;
  v35 = a8;
  v86 = (struct EXFORMOBJ *)a6;
  *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v84 + 16);
  *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v84 + 20);
LABEL_70:
  if ( (v64 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 58) |= v64 & 0xA0;
    v128 = *(_QWORD *)v18;
    if ( !(v165 | v35 | *(_DWORD *)(*(_QWORD *)v18 + 392LL)) && (*(_DWORD *)(*(_QWORD *)v86 + 32LL) & 1) != 0 )
    {
      v129 = v85 + 8;
      v130 = (*((_DWORD *)this + 22) + 8) >> 4;
      v131 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
      v132 = (int)(v34 + 8) >> 4;
      v133 = v129 >> 4;
      if ( (v64 & 0x20) != 0 )
      {
        v134 = v132 + *(_DWORD *)(v128 + 280);
        *(_DWORD *)v131 = v134;
        *((_DWORD *)v131 + 2) = v134 + v130;
        v135 = v133 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
        *((_DWORD *)v131 + 1) = v135;
        *((_DWORD *)v131 + 3) = v135 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
        ERECTL::vOrder(v131);
        ++*((_DWORD *)this + 32);
        v128 = *(_QWORD *)v18;
        v131 = (ERECTL *)(v136 + 16);
      }
      if ( v64 < 0 )
      {
        v159 = v132 + *(_DWORD *)(v128 + 288);
        *(_DWORD *)v131 = v159;
        *((_DWORD *)v131 + 2) = v159 + v130;
        v160 = v133 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
        *((_DWORD *)v131 + 1) = v160;
        *((_DWORD *)v131 + 3) = v160 + *(_DWORD *)(*(_QWORD *)v18 + 308LL);
        ERECTL::vOrder(v131);
        ++*((_DWORD *)this + 32);
        v131 = (ERECTL *)(v161 + 16);
      }
      *(_QWORD *)v131 = 0LL;
      *((_QWORD *)v131 + 1) = 0LL;
    }
  }
  v87 = *((_DWORD *)this + 58);
  if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
    v88 = v87 | 0x200;
  else
    v88 = v87 & 0xFFFFFDFF;
  *((_DWORD *)this + 58) = v88;
}
