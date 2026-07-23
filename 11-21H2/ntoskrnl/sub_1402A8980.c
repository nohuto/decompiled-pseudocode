/*
 * XREFs of sub_1402A8980 @ 0x1402A8980
 * Callers:
 *     sub_1403C6DC0 @ 0x1403C6DC0 (sub_1403C6DC0.c)
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140428D70 @ 0x140428D70 (sub_140428D70.c)
 * Callees:
 *     sub_14023E4B8 @ 0x14023E4B8 (sub_14023E4B8.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402A8670 @ 0x1402A8670 (sub_1402A8670.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 */

signed __int16 __fastcall sub_1402A8980(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  volatile signed __int16 *v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // bl
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int8 v22; // al
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // r8
  int v33; // ebx
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  bool v37; // zf
  signed __int16 result; // ax
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned __int8 v43; // al
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int8 v48; // dl
  unsigned __int64 *v49; // r10
  _QWORD *v50; // r11
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  __int64 v53; // r8
  unsigned int v54; // r14d
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  bool v57; // r10
  int v58; // r9d
  unsigned __int64 v59; // r15
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r13
  ULONG_PTR v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // ecx
  int v69; // eax
  unsigned __int64 v70; // r10
  unsigned int v71; // edx
  unsigned int v72; // ecx
  unsigned int v73; // r14d
  unsigned int v74; // ebx
  unsigned int v75; // r9d
  unsigned int v76; // esi
  int v77; // r8d
  __int64 v78; // r15
  _QWORD *v79; // rdi
  unsigned int v80; // esi
  unsigned int v81; // r10d
  __int64 v82; // rdi
  _QWORD *v83; // rbx
  __int64 v84; // r10
  unsigned int v85; // eax
  struct _KPRCB *v86; // r13
  __int64 v87; // rcx
  volatile signed __int64 *v88; // r13
  _QWORD *v89; // rax
  ULONG_PTR v90; // rdx
  unsigned __int64 v91; // rax
  struct _KPRCB *v92; // rcx
  __int64 v93; // rdx
  char v94; // al
  __int64 v95; // r11
  ULONG_PTR v96; // r9
  unsigned __int64 v97; // rax
  _QWORD *v98; // rcx
  ULONG_PTR v99; // r10
  _QWORD *v100; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v102; // rcx
  unsigned int v103; // edx
  _QWORD *v104; // rax
  ULONG_PTR v105; // r13
  unsigned __int64 v106; // rax
  struct _KPRCB *v107; // rcx
  __int64 v108; // rdx
  char v109; // al
  __int64 v110; // r10
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r12
  signed __int64 v115; // rdx
  struct _KPRCB *v116; // r11
  __int64 v117; // rcx
  volatile signed __int32 *v118; // r8
  __int64 v119; // rcx
  unsigned int v120; // r10d
  volatile signed __int32 *v121; // rcx
  struct _KPRCB *v122; // rcx
  __int64 v123; // r8
  _QWORD *i; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  struct _KPRCB *v130; // rcx
  __int64 v131; // rdx
  struct _KPRCB *v132; // r13
  __int64 v133; // rcx
  struct _KPRCB *v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rax
  unsigned int v137; // r9d
  int v138; // ecx
  unsigned int v139; // edx
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // r9
  unsigned int *v143; // r10
  __int64 v144; // r11
  __int64 v145; // r8
  unsigned __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // r12
  signed __int64 v151; // rdx
  __int64 v152; // rdi
  __int64 v153; // rax
  __int64 v154; // rdx
  unsigned __int64 v155; // r10
  signed __int64 v156; // rax
  int v157; // r9d
  __int64 v158; // r8
  __int64 v159; // rcx
  unsigned __int64 v160; // r8
  __int64 v161; // rdx
  __int64 v162; // rdx
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rdx
  unsigned __int64 v166; // r10
  signed __int64 v167; // rax
  int v168; // r9d
  __int64 v169; // r8
  __int64 v170; // rcx
  unsigned __int64 v171; // r8
  __int64 v172; // rdx
  __int64 v173; // rdx
  __int64 v174; // r8
  int v175; // eax
  int v176; // eax
  int v177; // eax
  struct _KPRCB *v178; // rcx
  __int64 v179; // rdx
  int v180; // eax
  int v181; // eax
  int v182; // eax
  int v183; // eax
  int v184; // eax
  int v185; // eax
  __int64 v186; // rcx
  int v187; // eax
  __int64 v188; // rcx
  int v189; // eax
  int v190; // eax
  int v191; // eax
  int v192; // eax
  int v193; // eax
  __int64 v194; // rcx
  int v195; // eax
  __int64 v196; // rcx
  int v197; // eax
  int v198; // eax
  __int64 v199; // rdx
  int v200; // eax
  __int64 v201; // rdx
  int v202; // eax
  int v203; // eax
  struct _KPRCB *v204; // rcx
  __int64 v205; // rdx
  int v206; // eax
  int v207; // eax
  __int64 v208; // rax
  signed __int32 v209[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v210; // [rsp+30h] [rbp-D0h]
  unsigned int v211; // [rsp+34h] [rbp-CCh]
  int v212; // [rsp+38h] [rbp-C8h]
  unsigned int v213; // [rsp+3Ch] [rbp-C4h]
  __int64 v214; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v215; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 *v216; // [rsp+50h] [rbp-B0h]
  int v217; // [rsp+58h] [rbp-A8h]
  struct _KPRCB *v218; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v219; // [rsp+68h] [rbp-98h]
  int v220; // [rsp+70h] [rbp-90h]
  int v221; // [rsp+74h] [rbp-8Ch]
  __int64 v222; // [rsp+78h] [rbp-88h]
  unsigned int v223; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h]
  volatile signed __int64 *v225; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v226; // [rsp+98h] [rbp-68h]
  ULONG_PTR v227; // [rsp+A0h] [rbp-60h]
  int v228; // [rsp+A8h] [rbp-58h]
  int v229; // [rsp+ACh] [rbp-54h] BYREF
  int v230; // [rsp+B0h] [rbp-50h] BYREF
  int v231; // [rsp+B4h] [rbp-4Ch] BYREF
  int v232; // [rsp+B8h] [rbp-48h] BYREF
  int v233; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v234; // [rsp+C0h] [rbp-40h]
  __int64 v235; // [rsp+C8h] [rbp-38h]
  __int64 v236; // [rsp+D0h] [rbp-30h]
  __int128 v237; // [rsp+D8h] [rbp-28h]
  __int64 v238; // [rsp+E8h] [rbp-18h]
  __int128 v239; // [rsp+F0h] [rbp-10h]
  __int64 v240; // [rsp+100h] [rbp+0h]
  __int128 v241; // [rsp+108h] [rbp+8h]
  __int64 v242; // [rsp+118h] [rbp+18h]
  __int128 v243; // [rsp+120h] [rbp+20h]
  __int64 v244; // [rsp+130h] [rbp+30h]
  __int128 v245; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v246[3]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v247[34]; // [rsp+160h] [rbp+60h] BYREF

  v1 = a1;
  v222 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (volatile signed __int16 *)(a1 + 13244);
  v235 = v2;
  memset(v247, 0, sizeof(v247));
  while ( 2 )
  {
    *(_BYTE *)(v1 + 32) = 1;
    v4 = __rdtsc();
    v5 = v4 - *(_QWORD *)(v1 + 33152);
    *(_QWORD *)(v2 + 72) += v5;
    v6 = *(unsigned int *)(v2 + 80);
    v7 = v5 * *(unsigned int *)(v1 + 33208);
    *(_QWORD *)(v1 + 33152) = v4;
    v8 = *(_BYTE *)(v2 + 2);
    v9 = (v7 >> 16) + v6;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    *(_DWORD *)(v2 + 80) = v9;
    if ( (v8 & 0xBE) != 0 )
    {
      if ( v8 < 0 )
      {
        v10 = *(_QWORD *)(v1 + 34480);
        v11 = (*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 4) & 0x1FFLL;
        v12 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v13, v12);
        v14 = 1 << v13;
        v15 = v13 - 2;
        v228 = v15;
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v15) + 8LL * (v12 ^ v14) + 8);
        *(_QWORD *)(v16 + 8 * v11) += v5;
        v8 &= ~0x80u;
      }
      if ( (v8 & 0x10) != 0 )
      {
        *(_QWORD *)(v1 + 8LL * *(unsigned __int8 *)(v2 + 124) + 33160) += v5;
        v8 &= ~0x10u;
      }
      if ( (v8 & 0x20) != 0 )
      {
        v17 = *(_QWORD *)(v2 + 1608);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v1 + 33968);
          v19 = *(_QWORD *)(v1 + 33976);
          if ( !v18 || !v19 )
            goto LABEL_17;
          if ( *(_BYTE *)(v19 + 100) )
          {
            v20 = *(_DWORD *)(v19 + 116);
          }
          else
          {
            v20 = *(_DWORD *)(v19 + 72);
            if ( v20 >= *(_DWORD *)(v18 + 512) )
              v20 = *(_DWORD *)(v18 + 512);
          }
          if ( v20 < 0x4B )
            v21 = v20 / 0x19;
          else
LABEL_17:
            v21 = 3;
          if ( dword_140D068FC )
            v22 = *(_BYTE *)(v1 + 34056);
          else
            v22 = *(_BYTE *)(v1 + 34059);
          v23 = v21;
          v24 = v22;
          v215 = 0LL;
          v25 = v22 + 2LL * v21;
          v26 = *(_QWORD *)(v17 + 8 * v25);
          v27 = (_QWORD *)(v17 + 8 * v25);
          v28 = dword_140C2A820;
          *v27 = v5 + v26;
          v29 = *(_DWORD *)(v17 + 192);
          if ( v28 > v29 )
          {
            LODWORD(v215) = v28;
            if ( v28 - v29 >= 0x20 )
              HIDWORD(v215) = 1;
            else
              HIDWORD(v215) = (*(_DWORD *)(v17 + 196) << (v28 - v29)) | 1;
            *(_QWORD *)(v17 + 192) = v215;
          }
          else
          {
            v30 = v29 - v28;
            if ( v30 < 0x20 )
              *(_DWORD *)(v17 + 196) |= 1 << v30;
          }
          if ( !dword_140D06C30 )
          {
            v31 = (unsigned __int8)*(_DWORD *)(v2 + 512);
            if ( v31 == 2 || v31 == 5 )
              *(_QWORD *)(v17 + 16 * v23 + 8) += v5;
          }
          if ( *(_QWORD *)(v2 + 1552) )
          {
            *(_QWORD *)(v17 + 8 * (v24 + 2 * (v23 + 8))) += v5;
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v2 + 1552) + 1608LL) + 8 * (v24 + 8 + 2 * v23)),
              v5);
          }
        }
        v8 &= ~0x20u;
      }
      if ( (v8 & 0x40) != 0 )
      {
        v136 = *(_QWORD *)(v2 + 968);
        if ( v136 )
          *(_BYTE *)(v136 + 64) = 0;
      }
      if ( byte_140D068F8 )
        sub_140575600(v1, v2, v5, 0LL);
      v32 = *(_QWORD *)(v1 + 33200);
      if ( v32 )
      {
        if ( *(_BYTE *)(v2 + 125) )
        {
          v137 = (unsigned __int8)*(_DWORD *)(v2 + 512);
          if ( v137 < 6 )
          {
            v138 = 0;
            v139 = *(_DWORD *)(v2 + 80);
            if ( v139 <= *(_DWORD *)(v2 + 84) )
              v139 = *(_DWORD *)(v2 + 84);
            LOBYTE(v138) = v139 >= dword_140D05308;
            v140 = *(unsigned __int8 *)(v2 + 516) + (unsigned int)dword_140D05350 * (v138 + 2 * v137);
            *(_QWORD *)(v32 + 8 * v140) += v5;
          }
        }
      }
      if ( (v8 & 0xBE) != 0 )
      {
        v45 = *(_QWORD *)(v2 + 104);
        if ( v45 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v45); i; i = (_QWORD *)i[51] )
            *i += v5;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0
          && (*(_QWORD *)(*(_QWORD *)(v2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL) )
        {
          *(_QWORD *)(v1 + 33192) += v5;
        }
        v46 = *(_QWORD *)(v2 + 360);
        if ( v46 )
        {
          v141 = *(_QWORD *)(v46 + 32);
          if ( v141 )
          {
            v142 = 1LL;
            if ( dword_140D01954 )
            {
              v143 = (unsigned int *)&unk_140C2AEC0;
              v144 = (unsigned int)dword_140D01954;
              v145 = v46 + 48;
              do
              {
                if ( (v141 & v142) != 0 )
                {
                  v146 = __readpmc(*v143);
                  *(_QWORD *)(v145 + 8) += (unsigned int)(v146 - *(_DWORD *)v145);
                  *(_QWORD *)v145 = v146;
                }
                v142 *= 2LL;
                ++v143;
                v145 += 24LL;
                --v144;
              }
              while ( v144 );
            }
          }
        }
      }
    }
    v33 = *(unsigned __int16 *)v3;
    *v3 = 1;
    if ( (v33 & 8) == 0 )
      goto LABEL_36;
    LOWORD(v33) = v33 & 0xFFF7;
    v221 = v33;
    v47 = sub_1402A8670(v1, 1);
    v51 = v47;
    if ( !v47 )
    {
      _enable();
      v247[1] = *v50;
      goto LABEL_114;
    }
    v52 = *v49;
    v53 = qword_140C4E940;
    v54 = *(_DWORD *)(v47 + 16912);
    v215 = *v49;
    if ( qword_140C4E940 == *(_QWORD *)(v47 + 16904) )
      v55 = 0;
    else
      v55 = v48;
    v56 = qword_140C4E948;
    v57 = qword_140C4E948 != *(_QWORD *)(v51 + 16896);
    v58 = v55;
    if ( dword_140D06A20 )
      v58 = v57;
    v210 = qword_140C4E948 != *(_QWORD *)(v51 + 16896);
    v59 = v52 >> 18;
    v217 = v58;
    if ( v57 )
    {
      *(_QWORD *)(v51 + 16896) = qword_140C4E948;
      *(_DWORD *)(v51 + 16912) = v59;
    }
    if ( (_BYTE)v58 )
    {
      v60 = *(_DWORD *)(v51 + 16916);
      *(_QWORD *)(v51 + 16904) = v53;
      if ( v54 >= v60 )
        v54 = v60;
      *(_DWORD *)(v51 + 16916) = v52 >> 18;
    }
    if ( !v57 && !(_BYTE)v58 )
    {
      _enable();
      v247[1] = *v50;
LABEL_170:
      v3 = (volatile signed __int16 *)(v1 + 13244);
      goto LABEL_111;
    }
    _enable();
    v247[1] = *v50;
    v245 = 0LL;
    if ( dword_140D05038 )
    {
      if ( !*(_BYTE *)(v1 + 33) )
        goto LABEL_170;
      v61 = qword_140D088C0[0];
    }
    else
    {
      v61 = v1;
    }
    v62 = v61 + 15360;
    v214 = v61 + 15360;
    if ( v61 == -15360 )
      goto LABEL_170;
    v63 = v1 + 16LL * *(unsigned int *)(v1 + 36672);
    *(_DWORD *)(v1 + 36672) = ((unsigned __int8)*(_DWORD *)(v1 + 36672) + 1) & 0xF;
    v64 = qword_140C4E390;
    *(_QWORD *)(v63 + 36680) = v52;
    if ( *(_DWORD *)(v64 + 228) == 5 )
    {
      v65 = 10000000LL;
      if ( Address )
      {
        if ( (*(_DWORD *)(v64 + 224) & 0x10000) != 0 )
          v66 = *(_QWORD *)(v64 + 72) + (unsigned int)(HIDWORD(KeGetPcr()[1].LockArray) * *(_DWORD *)(v64 + 80));
        else
          v66 = *(_QWORD *)(v64 + 72);
        v67 = MEMORY[0xFFFFF780000003B8]
            + (((unsigned __int64)sub_14042A5E0(v66, v56) * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64);
        goto LABEL_86;
      }
      if ( *(_DWORD *)(v64 + 220) == 64 )
      {
        v147 = sub_140303720(v64);
        v149 = sub_14042A5E0(v147, v148);
        v150 = *(_QWORD *)(v64 + 208);
        v151 = v149;
      }
      else
      {
        do
        {
          v150 = *(_QWORD *)(v64 + 208);
          do
          {
            v152 = *(_QWORD *)(v64 + 200);
            v153 = sub_140303720(v64);
            v155 = sub_14042A5E0(v153, v154);
            _InterlockedOr(v209, 0);
            v156 = *(_QWORD *)(v64 + 200);
          }
          while ( v152 != v156 );
        }
        while ( v150 != *(_QWORD *)(v64 + 208) );
        v157 = *(_DWORD *)(v64 + 220);
        if ( ((v152 ^ v155) & (1LL << ((unsigned __int8)v157 - 1))) != 0 )
        {
          if ( v157 == 64 )
            v158 = -1LL;
          else
            v158 = (1LL << v157) - 1;
          v159 = 0LL;
          if ( v157 != 64 )
            v159 = 1LL << v157;
          v160 = v152 & v158;
          v151 = v155 | v152 ^ v160;
          if ( v155 < v160 )
            v151 += v159;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v64 + 200), v151, v156);
          v62 = v214;
        }
        else
        {
          if ( v157 == 64 )
            v161 = -1LL;
          else
            v161 = (1LL << v157) - 1;
          v162 = v152 & ~v161;
          v62 = v214;
          v151 = v155 | v162;
        }
      }
      v67 = sub_1403A572C(v150 + v151, *(_QWORD *)(v64 + 192), 10000000LL);
    }
    else
    {
      v65 = *(_QWORD *)(v64 + 192);
      if ( *(_DWORD *)(v64 + 220) == 64 )
      {
        v111 = sub_140303720(v64);
        v113 = sub_14042A5E0(v111, v112);
        v114 = *(_QWORD *)(v64 + 208);
        v115 = v113;
      }
      else
      {
        do
        {
          v114 = *(_QWORD *)(v64 + 208);
          do
          {
            v163 = *(_QWORD *)(v64 + 200);
            v164 = sub_140303720(v64);
            v166 = sub_14042A5E0(v164, v165);
            _InterlockedOr(v209, 0);
            v167 = *(_QWORD *)(v64 + 200);
          }
          while ( v163 != v167 );
        }
        while ( v114 != *(_QWORD *)(v64 + 208) );
        v168 = *(_DWORD *)(v64 + 220);
        if ( ((v163 ^ v166) & (1LL << ((unsigned __int8)v168 - 1))) != 0 )
        {
          if ( v168 == 64 )
            v169 = -1LL;
          else
            v169 = (1LL << v168) - 1;
          v170 = 0LL;
          if ( v168 != 64 )
            v170 = 1LL << v168;
          v171 = v163 & v169;
          v115 = v166 | v163 ^ v171;
          if ( v166 < v171 )
            v115 += v170;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v64 + 200), v115, v167);
          v62 = v214;
        }
        else
        {
          if ( v168 == 64 )
            v172 = -1LL;
          else
            v172 = (1LL << v168) - 1;
          v173 = v163 & ~v172;
          v62 = v214;
          v115 = v166 | v173;
        }
      }
      v67 = v114 + v115;
    }
    v52 = v215;
LABEL_86:
    if ( v64 != qword_140C4E388 && qword_140C4E388 )
    {
      v174 = *(_QWORD *)(qword_140C4E388 + 192);
      if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
        v174 = 10000000LL;
      v67 = sub_1403A572C(v67, v65, v174);
    }
    *(_QWORD *)(v63 + 36688) = v67;
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
    {
      *(_QWORD *)&v245 = v52;
      v246[0] = &v245;
      BYTE8(v245) = 0;
      v246[1] = 16LL;
      sub_14035EDE4((unsigned int)v246, 1, 1073872896, 3920, 1538);
    }
    v68 = v59 - v54 + 1;
    v223 = v68;
    if ( v68 <= 0x100 )
    {
LABEL_90:
      v220 = v68;
      v69 = 256 - v68;
      v219 = v52;
      v70 = v52;
      if ( 256 - v68 > 0x18 )
        v69 = 24;
      goto LABEL_92;
    }
    v84 = (v59 - v68 + 1) << 18;
    do
    {
      if ( v68 <= 0x100 )
        goto LABEL_90;
      v70 = v84 + 0x4000000;
      v220 = 256;
      v219 = v70;
      v69 = 0;
LABEL_92:
      v225 = 0LL;
      v238 = 0LL;
      v71 = 0;
      v72 = v54 + v220;
      v211 = 0;
      v73 = v54 - 1;
      v234 = v72;
      v237 = 0LL;
      v74 = v73;
      BYTE3(v237) = -64;
      v75 = v72 - 1;
      v76 = 0;
      v77 = v72 - 1 + v69;
      v213 = v72 - 1;
      v212 = v77;
      do
      {
        v78 = v62 + 32 * ((unsigned __int8)++v74 + 16LL);
        if ( v76 <= v75 || *(_QWORD *)(v78 + 24) <= v70 )
        {
          v79 = (_QWORD *)(v78 + 8);
          if ( v79 != (_QWORD *)*v79 )
          {
LABEL_129:
            CurrentPrcb = KeGetCurrentPrcb();
            v229 = 0;
            v102 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v102 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v175 = *(_DWORD *)(v102 + 24);
                *(_DWORD *)(v102 + 24) = v175 + 1;
                if ( v175 == -1 )
LABEL_252:
                  sub_140418E4C(CurrentPrcb);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
            {
              v127 = *((_QWORD *)CurrentPrcb + 4375);
              if ( v127 )
              {
                if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
                {
                  v176 = *(_DWORD *)(v127 + 24) - 1;
                  *(_DWORD *)(v127 + 24) = v176;
                  if ( !v176 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
              do
                sub_1402F32E0(&v229);
              while ( *(_QWORD *)v78 );
              v128 = *((_QWORD *)CurrentPrcb + 4375);
              if ( v128 )
              {
                if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
                {
                  v177 = *(_DWORD *)(v128 + 24);
                  *(_DWORD *)(v128 + 24) = v177 + 1;
                  if ( v177 == -1 )
                    goto LABEL_252;
                }
              }
            }
            v103 = v211;
            v225 = (volatile signed __int64 *)v78;
            while ( 1 )
            {
              v104 = (_QWORD *)*v79;
              v70 = v219;
              if ( v79 == (_QWORD *)*v79 )
                break;
              v105 = (ULONG_PTR)(v104 - 4);
              v106 = *(v104 - 1);
              if ( v106 > v219 )
              {
                *(_QWORD *)(v78 + 24) = v106;
                break;
              }
              v242 = 0LL;
              v109 = (BYTE3(v237) ^ v103) & 0x3F ^ BYTE3(v237) ^ *(_BYTE *)(v105 + 3);
              BYTE3(v237) ^= (BYTE3(v237) ^ v103) & 0x3F;
              v241 = 0LL;
              BYTE3(v241) = v109;
              _InterlockedXor((volatile signed __int32 *)v105, v241);
              v110 = v214;
              BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v214 + 8LL * v103), v105);
              sub_1402E40E0(v110, v105, (unsigned __int8)v74, &v225);
              v103 = ++v211;
              if ( BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 8uLL, 1uLL, v105, BugCheckParameter4);
              if ( v103 == 64 )
              {
                _InterlockedAnd64(v225, 0LL);
                v178 = KeGetCurrentPrcb();
                v179 = *((_QWORD *)v178 + 4375);
                if ( v179 )
                {
                  if ( *((_BYTE *)v178 + 32) <= 1u )
                  {
                    v180 = *(_DWORD *)(v179 + 24) - 1;
                    *(_DWORD *)(v179 + 24) = v180;
                    if ( !v180 )
                      sub_140418E4C(v178);
                  }
                }
                sub_1402A7C20(v222, (int *)v247, v214, 0x40u);
                v71 = 0;
                v211 = 0;
                if ( v79 == (_QWORD *)*v79 )
                {
                  v70 = v219;
                  goto LABEL_137;
                }
                goto LABEL_129;
              }
            }
            _InterlockedAnd64(v225, 0LL);
            v107 = KeGetCurrentPrcb();
            v108 = *((_QWORD *)v107 + 4375);
            if ( v108 )
            {
              if ( *((_BYTE *)v107 + 32) <= 1u )
              {
                v181 = *(_DWORD *)(v108 + 24) - 1;
                *(_DWORD *)(v108 + 24) = v181;
                if ( !v181 )
                {
                  sub_140418E4C(v107);
                  v70 = v219;
                }
              }
            }
            v71 = v211;
LABEL_137:
            v77 = v212;
            v75 = v213;
          }
          v62 = v214;
          ++v76;
        }
      }
      while ( v74 != v77 );
      if ( v71 )
      {
        sub_1402A7C20(v222, (int *)v247, v62, v71);
        v77 = v212;
        v75 = v213;
      }
      if ( !(_BYTE)v217 )
      {
        v1 = v222;
        goto LABEL_107;
      }
      v211 = 0;
      v80 = 0;
      v239 = 0LL;
      BYTE3(v239) = -64;
      v81 = 0;
      v240 = 0LL;
      do
      {
        v82 = 32 * ((unsigned __int8)++v73 + 272LL) + v62;
        if ( v80 > v75 && *(_QWORD *)(v82 + 24) > v219 )
          goto LABEL_104;
        v83 = (_QWORD *)(v82 + 8);
        if ( v83 == (_QWORD *)*v83 )
          goto LABEL_103;
        do
        {
          v86 = KeGetCurrentPrcb();
          v230 = 0;
          v87 = *((_QWORD *)v86 + 4375);
          if ( v87 )
          {
            if ( *((_BYTE *)v86 + 32) <= 1u )
            {
              v182 = *(_DWORD *)(v87 + 24);
              *(_DWORD *)(v87 + 24) = v182 + 1;
              if ( v182 == -1 )
LABEL_272:
                sub_140418E4C(v86);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
          {
            v125 = *((_QWORD *)v86 + 4375);
            if ( v125 )
            {
              if ( *((_BYTE *)v86 + 32) <= 1u )
              {
                v183 = *(_DWORD *)(v125 + 24) - 1;
                *(_DWORD *)(v125 + 24) = v183;
                if ( !v183 )
                  sub_140418E4C(v86);
              }
            }
            do
              sub_1402F32E0(&v230);
            while ( *(_QWORD *)v82 );
            v126 = *((_QWORD *)v86 + 4375);
            if ( v126 )
            {
              if ( *((_BYTE *)v86 + 32) <= 1u )
              {
                v184 = *(_DWORD *)(v126 + 24);
                *(_DWORD *)(v126 + 24) = v184 + 1;
                if ( v184 == -1 )
                  goto LABEL_272;
              }
            }
          }
          v81 = v211;
          v88 = (volatile signed __int64 *)v82;
          do
          {
            v89 = (_QWORD *)*v83;
            if ( v83 == (_QWORD *)*v83 )
              goto LABEL_121;
            v90 = (ULONG_PTR)(v89 - 4);
            v91 = *(v89 - 1);
            v226 = v90;
            if ( v91 > v219 )
            {
              *(_QWORD *)(v82 + 24) = v91;
LABEL_121:
              _InterlockedAnd64(v88, 0LL);
              v92 = KeGetCurrentPrcb();
              v93 = *((_QWORD *)v92 + 4375);
              if ( v93 )
              {
                if ( *((_BYTE *)v92 + 32) <= 1u )
                {
                  v207 = *(_DWORD *)(v93 + 24) - 1;
                  *(_DWORD *)(v93 + 24) = v207;
                  if ( !v207 )
                  {
                    sub_140418E4C(v92);
                    v81 = v211;
                  }
                }
              }
              goto LABEL_122;
            }
            v244 = 0LL;
            v94 = (BYTE3(v239) ^ v81) & 0x3F ^ BYTE3(v239) ^ *(_BYTE *)(v90 + 3);
            BYTE3(v239) ^= (BYTE3(v239) ^ v81) & 0x3F;
            v243 = 0LL;
            BYTE3(v243) = v94;
            _InterlockedXor((volatile signed __int32 *)v90, v243);
            v95 = v214;
            v96 = _InterlockedExchange64((volatile __int64 *)(v214 + 8LL * v81), v90);
            v97 = *(unsigned __int16 *)(v90 + 58);
            v216 = (volatile signed __int32 *)v97;
            v227 = v96;
            v98 = *(_QWORD **)(v90 + 32);
            v99 = v95 + 32 * ((unsigned __int8)v73 + ((unsigned __int64)(unsigned int)v97 << 8) + 16);
            v236 = v95 + 32 * ((unsigned __int8)v73 + ((v97 ^ 1) << 8) + 16);
            v100 = *(_QWORD **)(v90 + 40);
            BugCheckParameter4 = v99;
            if ( v98[1] != v90 + 32 || *v100 != v90 + 32 )
              __fastfail(3u);
            *v100 = v98;
            v98[1] = v100;
            if ( v100 == v98 )
            {
              v37 = (_WORD)v216 == 0;
              *(_DWORD *)(v99 + 28) = -1;
              v116 = KeGetCurrentPrcb();
              v218 = v116;
              v117 = *((_QWORD *)v116 + 4375);
              if ( v37 )
              {
                v231 = 0;
                if ( v117 )
                {
                  if ( *((_BYTE *)v116 + 32) <= 1u )
                  {
                    v185 = *(_DWORD *)(v117 + 24);
                    *(_DWORD *)(v117 + 24) = v185 + 1;
                    if ( v185 == -1 )
                    {
LABEL_282:
                      sub_140418E4C(v116);
                      v116 = v218;
                    }
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
                {
                  v186 = *((_QWORD *)v116 + 4375);
                  if ( v186 )
                  {
                    if ( *((_BYTE *)v116 + 32) <= 1u )
                    {
                      v187 = *(_DWORD *)(v186 + 24) - 1;
                      *(_DWORD *)(v186 + 24) = v187;
                      if ( !v187 )
                        sub_140418E4C(v116);
                    }
                  }
                  do
                    sub_1402F32E0(&v231);
                  while ( *(_QWORD *)v82 );
                  v116 = v218;
                  v188 = *((_QWORD *)v218 + 4375);
                  if ( v188 )
                  {
                    if ( *((_BYTE *)v218 + 32) <= 1u )
                    {
                      v189 = *(_DWORD *)(v188 + 24);
                      *(_DWORD *)(v188 + 24) = v189 + 1;
                      if ( v189 == -1 )
                        goto LABEL_282;
                    }
                  }
                }
                v118 = (volatile signed __int32 *)v82;
              }
              else
              {
                v118 = (volatile signed __int32 *)(v214 + 32 * ((unsigned __int8)v73 + 16LL));
                v216 = v118;
                if ( v117 )
                {
                  if ( *((_BYTE *)v116 + 32) <= 1u )
                  {
                    v190 = *(_DWORD *)(v117 + 24);
                    *(_DWORD *)(v117 + 24) = v190 + 1;
                    if ( v190 == -1 )
                    {
                      sub_140418E4C(v116);
                      v90 = v226;
                      v96 = v227;
                      v118 = v216;
                      v99 = BugCheckParameter4;
                      v116 = v218;
                    }
                  }
                }
                if ( _interlockedbittestandset64(v118, 0LL) )
                {
                  v129 = *((_QWORD *)v116 + 4375);
                  if ( v129 )
                  {
                    if ( *((_BYTE *)v116 + 32) <= 1u )
                    {
                      v191 = *(_DWORD *)(v129 + 24) - 1;
                      *(_DWORD *)(v129 + 24) = v191;
                      if ( !v191 )
                      {
                        sub_140418E4C(v116);
                        v118 = v216;
                      }
                    }
                  }
                  _mm_pause();
                }
                else if ( v118 )
                {
                  goto LABEL_150;
                }
                _InterlockedAnd64(v88, 0LL);
                v130 = KeGetCurrentPrcb();
                v131 = *((_QWORD *)v130 + 4375);
                if ( v131 )
                {
                  if ( *((_BYTE *)v130 + 32) <= 1u )
                  {
                    v192 = *(_DWORD *)(v131 + 24) - 1;
                    *(_DWORD *)(v131 + 24) = v192;
                    if ( !v192 )
                    {
                      sub_140418E4C(v130);
                      v118 = v216;
                    }
                  }
                }
                v132 = KeGetCurrentPrcb();
                v216 = v118;
                v232 = 0;
                v133 = *((_QWORD *)v132 + 4375);
                if ( v133 )
                {
                  if ( *((_BYTE *)v132 + 32) <= 1u )
                  {
                    v193 = *(_DWORD *)(v133 + 24);
                    *(_DWORD *)(v133 + 24) = v193 + 1;
                    if ( v193 == -1 )
                    {
LABEL_305:
                      sub_140418E4C(v132);
                      v118 = v216;
                    }
                  }
                }
                while ( _interlockedbittestandset64(v118, 0LL) )
                {
                  v194 = *((_QWORD *)v132 + 4375);
                  if ( v194 )
                  {
                    if ( *((_BYTE *)v132 + 32) <= 1u )
                    {
                      v195 = *(_DWORD *)(v194 + 24) - 1;
                      *(_DWORD *)(v194 + 24) = v195;
                      if ( !v195 )
                        sub_140418E4C(v132);
                    }
                  }
                  do
                  {
                    sub_1402F32E0(&v232);
                    v118 = v216;
                  }
                  while ( *(_QWORD *)v216 );
                  v196 = *((_QWORD *)v132 + 4375);
                  if ( v196 )
                  {
                    if ( *((_BYTE *)v132 + 32) <= 1u )
                    {
                      v197 = *(_DWORD *)(v196 + 24);
                      *(_DWORD *)(v196 + 24) = v197 + 1;
                      if ( v197 == -1 )
                        goto LABEL_305;
                    }
                  }
                }
                v134 = KeGetCurrentPrcb();
                v88 = (volatile signed __int64 *)v82;
                v218 = v134;
                v233 = 0;
                v135 = *((_QWORD *)v134 + 4375);
                if ( v135 )
                {
                  if ( *((_BYTE *)v134 + 32) <= 1u )
                  {
                    v198 = *(_DWORD *)(v135 + 24);
                    *(_DWORD *)(v135 + 24) = v198 + 1;
                    if ( v198 == -1 )
                    {
LABEL_317:
                      sub_140418E4C(v134);
                      v134 = v218;
                    }
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
                {
                  v199 = *((_QWORD *)v134 + 4375);
                  if ( v199 )
                  {
                    if ( *((_BYTE *)v134 + 32) <= 1u )
                    {
                      v200 = *(_DWORD *)(v199 + 24) - 1;
                      *(_DWORD *)(v199 + 24) = v200;
                      if ( !v200 )
                        sub_140418E4C(v134);
                    }
                  }
                  do
                    sub_1402F32E0(&v233);
                  while ( *(_QWORD *)v82 );
                  v134 = v218;
                  v201 = *((_QWORD *)v218 + 4375);
                  if ( v201 )
                  {
                    if ( *((_BYTE *)v218 + 32) <= 1u )
                    {
                      v202 = *(_DWORD *)(v201 + 24);
                      *(_DWORD *)(v201 + 24) = v202 + 1;
                      if ( v202 == -1 )
                        goto LABEL_317;
                    }
                  }
                }
                v118 = v216;
              }
              v99 = BugCheckParameter4;
              v96 = v227;
              v90 = v226;
LABEL_150:
              v95 = v214;
              if ( *(_DWORD *)(v99 + 28) == -1 && *(_DWORD *)(v236 + 28) == -1 )
              {
                v119 = qword_140D07E98[2 * *(unsigned __int8 *)(v214 - 15152)];
                if ( dword_140D05038 )
                {
                  v120 = v73 & 0x3F;
                  v121 = (volatile signed __int32 *)(v119 + 8LL * ((unsigned __int8)v73 >> 6));
                }
                else
                {
                  v120 = *(unsigned __int8 *)(v214 - 15151);
                  v121 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v73 << 6) + v119);
                }
                _interlockedbittestandreset64(v121, v120);
              }
              _InterlockedAnd64((volatile signed __int64 *)v118, 0LL);
              v122 = KeGetCurrentPrcb();
              v123 = *((_QWORD *)v122 + 4375);
              if ( v123 )
              {
                if ( *((_BYTE *)v122 + 32) <= 1u )
                {
                  v203 = *(_DWORD *)(v123 + 24) - 1;
                  *(_DWORD *)(v123 + 24) = v203;
                  if ( !v203 )
                  {
                    sub_140418E4C(v122);
                    v90 = v226;
                    v96 = v227;
                    v95 = v214;
                  }
                }
              }
            }
            v81 = ++v211;
            if ( v96 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v90, v96);
          }
          while ( v81 != 64 );
          _InterlockedAnd64(v88, 0LL);
          v204 = KeGetCurrentPrcb();
          v205 = *((_QWORD *)v204 + 4375);
          if ( v205 )
          {
            if ( *((_BYTE *)v204 + 32) <= 1u )
            {
              v206 = *(_DWORD *)(v205 + 24) - 1;
              *(_DWORD *)(v205 + 24) = v206;
              if ( !v206 )
              {
                sub_140418E4C(v204);
                v95 = v214;
              }
            }
          }
          sub_1402A7C20(v222, (int *)v247, v95, 0x40u);
          v81 = 0;
          v211 = 0;
        }
        while ( v83 != (_QWORD *)*v83 );
LABEL_122:
        v77 = v212;
        v75 = v213;
LABEL_103:
        ++v80;
LABEL_104:
        v62 = v214;
      }
      while ( v73 != v77 );
      v1 = v222;
      if ( v81 )
        sub_1402A7C20(v222, (int *)v247, v214, v81);
LABEL_107:
      v37 = v223 == v220;
      v68 = v223 - v220;
      v54 = v234;
      v84 = v219;
      v52 = v215;
      v223 -= v220;
    }
    while ( !v37 );
    LOWORD(v33) = v221;
    v3 = (volatile signed __int16 *)(v1 + 13244);
    v58 = v217;
    v57 = v210;
    if ( (*(_BYTE *)(v1 + 13244) & 8) == 0 )
    {
      v85 = *(_DWORD *)(v1 + 33128);
      *(_DWORD *)(v1 + 33124) = 0;
      if ( v85 >= dword_140D06938 )
        *(_DWORD *)(v1 + 33128) = v85 - dword_140D06938;
      else
        *(_DWORD *)(v1 + 33128) = 0;
    }
LABEL_111:
    if ( *(_BYTE *)(v1 + 33) )
      sub_1402F27B0(v1, v52, v57, v58, (__int64)v247);
    v2 = v235;
LABEL_114:
    _disable();
LABEL_36:
    if ( (v33 & 0x40) != 0 )
    {
      LOWORD(v33) = v33 & 0xFFBF;
      _enable();
      sub_1402447EC(v1);
      _disable();
    }
    if ( (unsigned __int8)sub_1402A9790(v1, v2, v247, 0LL) )
    {
      if ( (v33 & 4) != 0 )
      {
        _enable();
        sub_14024B0B4((_DWORD *)(v1 + 32320), 0);
        _disable();
      }
      v35 = __rdtsc();
      v36 = v35 - *(_QWORD *)(v1 + 33152);
      *(_QWORD *)(v1 + 33400) += v36;
      if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
      {
        v39 = *(_QWORD *)(v1 + 33968);
        v40 = *(_QWORD *)(v1 + 33976);
        if ( !v39 || !v40 )
          goto LABEL_55;
        if ( *(_BYTE *)(v40 + 100) )
        {
          v41 = *(_DWORD *)(v40 + 116);
        }
        else
        {
          v41 = *(_DWORD *)(v40 + 72);
          if ( v41 >= *(_DWORD *)(v39 + 512) )
            v41 = *(_DWORD *)(v39 + 512);
        }
        if ( v41 < 0x4B )
          v42 = v41 / 0x19;
        else
LABEL_55:
          v42 = 3;
        if ( dword_140D068FC )
          v43 = *(_BYTE *)(v1 + 34056);
        else
          v43 = *(_BYTE *)(v1 + 34059);
        v44 = (_QWORD *)(v1 + 8 * (v43 + 2 * (v42 + 2088LL)));
        *v44 += v36;
      }
      if ( (*(_BYTE *)(v2 + 2) & 0x40) != 0 )
      {
        v208 = *(_QWORD *)(v2 + 968);
        if ( v208 )
          *(_BYTE *)(v208 + 64) = 1;
      }
      *(_QWORD *)(v1 + 33152) = v35;
      if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
        sub_140571770(v2, 0LL);
      v37 = *(_BYTE *)(v1 + 6) == 0;
      *(_BYTE *)(v1 + 32) = 0;
      if ( !v37 )
        *(_BYTE *)(v1 + 6) = 0;
      result = _InterlockedCompareExchange16(v3, 0, 1);
      if ( result == 1 )
      {
        *(_QWORD *)(v1 + 13152) = 0LL;
        return result;
      }
      continue;
    }
    break;
  }
  LOBYTE(v34) = 1;
  sub_140345B70(v1, v2, v34);
  return sub_14023E4B8((__int16 *)v3, v33 | 0x80, v1 + 13120);
}
