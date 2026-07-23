/*
 * XREFs of sub_14028FFD0 @ 0x14028FFD0
 * Callers:
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210484 @ 0x140210484 (sub_140210484.c)
 *     sub_1402104E4 @ 0x1402104E4 (sub_1402104E4.c)
 *     sub_14021050C @ 0x14021050C (sub_14021050C.c)
 *     sub_140210C6C @ 0x140210C6C (sub_140210C6C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140290B74 @ 0x140290B74 (sub_140290B74.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140290FCC @ 0x140290FCC (sub_140290FCC.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140291158 @ 0x140291158 (sub_140291158.c)
 *     sub_14029135C @ 0x14029135C (sub_14029135C.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14045AB80 @ 0x14045AB80 (sub_14045AB80.c)
 *     sub_14045AE34 @ 0x14045AE34 (sub_14045AE34.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062D3AC @ 0x14062D3AC (sub_14062D3AC.c)
 */

__int64 __fastcall sub_14028FFD0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB **v4; // r9
  unsigned __int8 v5; // r14
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // r15d
  char v9; // si
  unsigned int v10; // r13d
  int v11; // r12d
  bool v12; // sf
  struct _KPRCB *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  char v17; // r13
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // r8
  _BYTE *v21; // r14
  char v22; // cl
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // bl
  __int64 v30; // r8
  struct _KPRCB *v31; // r15
  __int64 v32; // rcx
  char v33; // al
  struct _KPRCB *v34; // r14
  unsigned int v35; // r12d
  __int64 v36; // rcx
  __int64 v37; // r9
  struct _KPRCB *v38; // rcx
  __int64 v39; // rdx
  int v40; // r12d
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  _WORD *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  int v48; // eax
  struct _KPRCB *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r13
  int v52; // edx
  char v53; // r10
  int v54; // r8d
  unsigned int v55; // edx
  int v56; // r9d
  unsigned int v57; // eax
  unsigned __int8 v58; // r14
  _QWORD **v59; // r15
  _QWORD *v60; // rdi
  __int64 v61; // r11
  bool v62; // cl
  bool v63; // zf
  struct _KPRCB *v64; // rcx
  struct _KPRCB **v65; // rax
  char v66; // al
  int v67; // esi
  int v68; // esi
  int v69; // r14d
  char *v70; // rdx
  unsigned int v71; // esi
  unsigned int v72; // ecx
  unsigned __int8 v73; // si
  struct _KPRCB *v74; // r11
  struct _KPRCB *v75; // r13
  _QWORD *v76; // r10
  __int64 v77; // rdx
  bool v78; // cl
  _QWORD *v79; // r13
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r10
  int v85; // r14d
  unsigned int v86; // r12d
  __int64 v87; // rdi
  unsigned __int64 v88; // rdx
  struct _KPRCB *v89; // r13
  __int64 v90; // rcx
  int v91; // r13d
  _QWORD *v92; // rdi
  char v93; // r13
  __int64 v94; // rcx
  __int64 v95; // rcx
  int v96; // r15d
  unsigned int v97; // r14d
  __int64 v98; // rsi
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  struct _KPRCB *v101; // rdi
  int v102; // edi
  _QWORD *v103; // rsi
  char v104; // di
  struct _KPRCB *v105; // rsi
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  struct _KPRCB *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  struct _KPRCB *v118; // rsi
  __int64 v119; // rcx
  int v120; // eax
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rcx
  int v124; // eax
  unsigned int v125; // eax
  __int64 v126; // r8
  unsigned int v127; // edx
  char v128; // al
  char v129; // al
  char v130; // cl
  struct _KPRCB *v131; // rcx
  __int64 v132; // rdx
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  __int64 v139; // rdx
  int v140; // eax
  int v141; // eax
  __int64 v142; // rcx
  int v143; // eax
  __int64 v144; // rcx
  int v145; // eax
  int v146; // eax
  __int64 v147; // r10
  __int64 v148; // rdx
  _BYTE *v149; // r12
  __int64 v150; // rdx
  __int64 v151; // rdx
  int v152; // eax
  char v153; // cl
  char v154; // al
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // r8
  unsigned int v158; // edx
  char v159; // al
  char v160; // al
  char v161; // cl
  _BYTE *v162; // r12
  __int64 v163; // rdx
  __int64 v164; // rdx
  int v165; // eax
  char v166; // cl
  char v167; // al
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // r8
  unsigned int v171; // edx
  char v172; // al
  char v173; // al
  char v174; // cl
  __int64 v175; // rcx
  __int64 v176; // rax
  _QWORD *v177; // rsi
  __int64 v178; // rdx
  struct _KPRCB *v179; // rsi
  __int64 v180; // rdx
  unsigned int v181; // edx
  char v182; // al
  char v183; // al
  __int64 v184; // [rsp+20h] [rbp-89h]
  _QWORD *v185; // [rsp+30h] [rbp-79h] BYREF
  __int64 v186; // [rsp+38h] [rbp-71h]
  unsigned int v187; // [rsp+40h] [rbp-69h]
  int v188; // [rsp+44h] [rbp-65h]
  unsigned int v189; // [rsp+48h] [rbp-61h]
  int v190; // [rsp+4Ch] [rbp-5Dh]
  ULONG_PTR v191; // [rsp+50h] [rbp-59h]
  struct _KPRCB *v192; // [rsp+58h] [rbp-51h]
  __int64 v193; // [rsp+60h] [rbp-49h]
  int v194; // [rsp+68h] [rbp-41h] BYREF
  int v195; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v196; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v197[2]; // [rsp+74h] [rbp-35h] BYREF
  int v198; // [rsp+7Ch] [rbp-2Dh]
  int v199; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v200[2]; // [rsp+84h] [rbp-25h] BYREF
  int v201; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v202; // [rsp+90h] [rbp-19h] BYREF
  int v203; // [rsp+94h] [rbp-15h] BYREF
  struct _KPRCB **v204; // [rsp+98h] [rbp-11h] BYREF
  _QWORD *v205; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD *v206; // [rsp+A8h] [rbp-1h] BYREF
  _QWORD *v207; // [rsp+B0h] [rbp+7h] BYREF
  char v208; // [rsp+110h] [rbp+67h]
  int v209; // [rsp+118h] [rbp+6Fh]
  unsigned __int64 v210; // [rsp+118h] [rbp+6Fh]
  struct _KPRCB *v211; // [rsp+120h] [rbp+77h]
  int v212; // [rsp+120h] [rbp+77h]
  _QWORD *v213; // [rsp+120h] [rbp+77h]
  int v214; // [rsp+120h] [rbp+77h]
  int v215; // [rsp+128h] [rbp+7Fh]
  int v216; // [rsp+128h] [rbp+7Fh]
  unsigned __int64 v217; // [rsp+128h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v4) = 0;
  v5 = 0;
  v185 = 0LL;
  v208 = 0;
  v192 = CurrentPrcb;
  v6 = *((_QWORD *)CurrentPrcb + 1);
  v191 = v6;
  if ( v6 != *((_QWORD *)CurrentPrcb + 3) )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 >= *(_QWORD *)(v6 + 32) || dword_140D068FC || *(_BYTE *)(v6 + 125) )
    {
      v31 = KeGetCurrentPrcb();
      v194 = 0;
      v32 = *((_QWORD *)v31 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v31 + 32) <= 1u )
        {
          v111 = *(_DWORD *)(v32 + 24);
          *(_DWORD *)(v32 + 24) = v111 + 1;
          if ( v111 == -1 )
LABEL_173:
            sub_140418E4C(v31);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
      {
        v108 = *((_QWORD *)v31 + 4375);
        if ( v108 )
        {
          if ( *((_BYTE *)v31 + 32) <= 1u )
          {
            v112 = *(_DWORD *)(v108 + 24) - 1;
            *(_DWORD *)(v108 + 24) = v112;
            if ( !v112 )
              sub_140418E4C(v31);
          }
        }
        do
          sub_1402F32E0(&v194);
        while ( *(_QWORD *)(v6 + 64) );
        v109 = *((_QWORD *)v31 + 4375);
        if ( v109 )
        {
          if ( *((_BYTE *)v31 + 32) <= 1u )
          {
            v113 = *(_DWORD *)(v109 + 24);
            *(_DWORD *)(v109 + 24) = v113 + 1;
            if ( v113 == -1 )
              goto LABEL_173;
          }
        }
      }
      if ( v7 < *(_QWORD *)(v6 + 32) )
        goto LABEL_63;
      if ( (*(_DWORD *)(v6 + 120) & 0x100) != 0 && *(char *)(v6 + 195) >= 16 )
      {
        v40 = 127;
      }
      else
      {
        LOBYTE(a3) = 1;
        v33 = sub_1402BA000(v6, 1LL, a3);
        v34 = KeGetCurrentPrcb();
        v35 = v33;
        v195 = 0;
        v36 = *((_QWORD *)v34 + 4375);
        if ( v36 )
        {
          if ( *((_BYTE *)v34 + 32) <= 1u )
          {
            v114 = *(_DWORD *)(v36 + 24);
            *(_DWORD *)(v36 + 24) = v114 + 1;
            if ( v114 == -1 )
LABEL_184:
              sub_140418E4C(v34);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        {
          v94 = *((_QWORD *)v34 + 4375);
          if ( v94 )
          {
            if ( *((_BYTE *)v34 + 32) <= 1u )
            {
              v115 = *(_DWORD *)(v94 + 24) - 1;
              *(_DWORD *)(v94 + 24) = v115;
              if ( !v115 )
                sub_140418E4C(v34);
            }
          }
          do
            sub_1402F32E0(&v195);
          while ( *((_QWORD *)CurrentPrcb + 6) );
          v95 = *((_QWORD *)v34 + 4375);
          if ( v95 )
          {
            if ( *((_BYTE *)v34 + 32) <= 1u )
            {
              v116 = *(_DWORD *)(v95 + 24);
              *(_DWORD *)(v95 + 24) = v116 + 1;
              if ( v116 == -1 )
                goto LABEL_184;
            }
          }
        }
        if ( !(unsigned __int8)sub_1402B9FC0(v6) )
        {
          LOBYTE(v37) = *((_QWORD *)CurrentPrcb + 2) == 0LL;
          sub_140291010(CurrentPrcb, v6, v35, v37);
        }
        _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
        v38 = KeGetCurrentPrcb();
        v39 = *((_QWORD *)v38 + 4375);
        if ( v39 )
        {
          if ( *((_BYTE *)v38 + 32) <= 1u )
          {
            v117 = *(_DWORD *)(v39 + 24) - 1;
            *(_DWORD *)(v39 + 24) = v117;
            if ( !v117 )
              sub_140418E4C(v38);
          }
        }
        v40 = *(unsigned __int8 *)(v6 + 651);
        v5 = 1;
        v208 = 1;
        sub_140290FCC(v6);
      }
      a2 = v7 + (unsigned int)(v40 * dword_140D050CC);
      if ( (*(_DWORD *)(v6 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 5u);
      *(_QWORD *)(v6 + 32) = a2;
      if ( *((_QWORD *)CurrentPrcb + 25) == *((_QWORD *)CurrentPrcb + 4364)
        || _bittestandreset((signed __int32 *)(v6 + 116), 7u)
        || (v41 = *((_QWORD *)CurrentPrcb + 4364),
            a2 = v41 & (*((_QWORD *)CurrentPrcb + 25) | *(_QWORD *)(*((_QWORD *)CurrentPrcb + 24) + 40LL)),
            a2 == v41) )
      {
LABEL_63:
        v42 = 0LL;
      }
      else
      {
        v42 = 0LL;
        v43 = *(_QWORD *)(qword_140D088C0[*(unsigned int *)(v6 + 588)] + 192);
        a2 = *(_QWORD *)(v43 + 16) & *(_QWORD *)(v43 + 80);
        v44 = *(unsigned __int16 *)(v43 + 136);
        v45 = *(_WORD **)(v6 + 576);
        if ( (unsigned __int16)v44 >= *v45 )
          v46 = 0LL;
        else
          v46 = *(_QWORD *)&v45[4 * v44 + 4];
        if ( (v46 & a2) != 0 )
        {
          *(_DWORD *)(v6 + 116) |= 0x80u;
          _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0xCu);
        }
      }
      if ( dword_140D068FC )
      {
        v118 = KeGetCurrentPrcb();
        v196 = 0;
        v119 = *((_QWORD *)v118 + 4375);
        if ( v119 )
        {
          if ( *((_BYTE *)v118 + 32) <= 1u )
          {
            v120 = *(_DWORD *)(v119 + 24);
            *(_DWORD *)(v119 + 24) = v120 + 1;
            if ( v120 == -1 )
LABEL_198:
              sub_140418E4C(v118);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        {
          v121 = *((_QWORD *)v118 + 4375);
          if ( v121 )
          {
            if ( *((_BYTE *)v118 + 32) <= 1u )
            {
              v122 = *(_DWORD *)(v121 + 24) - 1;
              *(_DWORD *)(v121 + 24) = v122;
              if ( !v122 )
                sub_140418E4C(v118);
            }
          }
          do
            sub_1402F32E0(&v196);
          while ( *((_QWORD *)CurrentPrcb + 6) );
          v123 = *((_QWORD *)v118 + 4375);
          if ( v123 )
          {
            if ( *((_BYTE *)v118 + 32) <= 1u )
            {
              v124 = *(_DWORD *)(v123 + 24);
              *(_DWORD *)(v123 + 24) = v124 + 1;
              if ( v124 == -1 )
                goto LABEL_198;
            }
          }
        }
        v125 = sub_14045AE34(v6, a2, 0LL, v42);
        if ( v125 != (unsigned __int8)*(_DWORD *)(v6 + 512) )
          sub_14045AB80(v6, v125);
        if ( !*((_QWORD *)CurrentPrcb + 2) )
        {
          v126 = *((_QWORD *)CurrentPrcb + 7);
          if ( dword_140D068FC )
          {
            v127 = *(_DWORD *)(v6 + 80);
            v128 = (*(_BYTE *)(v6 + 512) ^ *(_BYTE *)(v126 + 64)) & 7 ^ *(_BYTE *)(v126 + 64);
            v129 = (v128 ^ (8 * *(_BYTE *)(v6 + 516))) & 0x38 ^ v128;
            if ( v127 <= *(_DWORD *)(v6 + 84) )
              v127 = *(_DWORD *)(v6 + 84);
            v130 = 64;
            if ( v127 < dword_140D05308 )
              v130 = 0;
            *(_BYTE *)(v126 + 64) = v130 | v129 & 0xBF;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
        v131 = KeGetCurrentPrcb();
        v132 = *((_QWORD *)v131 + 4375);
        if ( v132 )
        {
          if ( *((_BYTE *)v131 + 32) <= 1u )
          {
            v133 = *(_DWORD *)(v132 + 24) - 1;
            *(_DWORD *)(v132 + 24) = v133;
            if ( !v133 )
              sub_140418E4C(v131);
          }
        }
      }
      if ( (unsigned int)sub_140308640(v6, CurrentPrcb, 1LL, v42) )
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0xCu);
      sub_140224100(v6);
      LODWORD(v4) = 0;
    }
  }
  v8 = 10;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  v11 = 16;
  v12 = *((_DWORD *)CurrentPrcb + 3314) - MEMORY[0xFFFFF78000000320] < 0;
  v189 = MEMORY[0xFFFFF78000000320];
  if ( !v12 )
    goto LABEL_6;
  v9 = 1;
  if ( !(unsigned int)sub_14029135C(CurrentPrcb) )
    goto LABEL_6;
  v47 = *((_QWORD *)CurrentPrcb + 4361);
  v193 = v47;
  if ( (*(_DWORD *)(v47 + 8) & 0x7FFE) == 0 )
    goto LABEL_6;
  v48 = *(unsigned __int8 *)(v47 + 658);
  v49 = KeGetCurrentPrcb();
  v204 = v4;
  v190 = v48;
  v211 = v49;
  v50 = *((_QWORD *)v49 + 4375);
  v197[0] = (_DWORD)v4;
  if ( v50 )
  {
    if ( *((_BYTE *)v49 + 32) <= 1u )
    {
      v134 = *(_DWORD *)(v50 + 24);
      *(_DWORD *)(v50 + 24) = v134 + 1;
      if ( v134 == -1 )
        sub_140418E4C(v49);
    }
  }
  v51 = v193;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v51, 0LL) )
  {
    v106 = *((_QWORD *)v211 + 4375);
    if ( v106 )
    {
      if ( *((_BYTE *)v211 + 32) <= 1u )
      {
        v135 = *(_DWORD *)(v106 + 24) - 1;
        *(_DWORD *)(v106 + 24) = v135;
        if ( !v135 )
          sub_140418E4C(v211);
      }
    }
    do
      sub_1402F32E0(v197);
    while ( *(_QWORD *)v51 );
    v107 = *((_QWORD *)v211 + 4375);
    if ( v107 )
    {
      if ( *((_BYTE *)v211 + 32) <= 1u )
      {
        v136 = *(_DWORD *)(v107 + 24);
        *(_DWORD *)(v107 + 24) = v136 + 1;
        if ( v136 == -1 )
          sub_140418E4C(v211);
      }
    }
  }
  v6 = v191;
  v52 = *(_DWORD *)(v51 + 8) & 0x7FFE;
  if ( !v52 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v51, 0LL);
    v110 = KeGetCurrentPrcb();
    a2 = *((_QWORD *)v110 + 4375);
    if ( a2 )
    {
      if ( *((_BYTE *)v110 + 32) <= 1u )
      {
        v137 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v137;
        if ( !v137 )
          sub_140418E4C(v110);
      }
    }
    goto LABEL_84;
  }
  v53 = v190;
  v54 = 10;
  v187 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
  v55 = __ROR4__(v52, v190);
  v212 = 10;
  v56 = MEMORY[0xFFFFF78000000320];
  v215 = MEMORY[0xFFFFF78000000320];
  do
  {
    _BitScanForward(&v57, v55);
    v197[1] = v57;
    v198 = v55 ^ (1 << v57);
    v58 = (v57 + v53) & 0x1F;
    v188 = v58;
    v59 = (_QWORD **)(v51 + 16 + 16LL * v58);
    v60 = *v59;
    do
    {
      v61 = (__int64)(v60 - 27);
      v62 = 0;
      v63 = (*(_DWORD *)(v60 - 12) & 0x400000) == 0;
      v60 = (_QWORD *)*v60;
      v186 = v61;
      if ( !v63 )
      {
        v138 = sub_140577654(v61, 0LL);
        v61 = v186;
        v54 = v212;
        v56 = v215;
        v62 = v138 != *(_DWORD *)(v186 + 1024);
      }
      if ( v56 - *(_DWORD *)(v61 + 436) - 300 > 0 )
      {
        sub_140210C6C(v51, v61, v58);
        sub_1402F6970(&v204, v83);
        v54 = --v212;
LABEL_116:
        v56 = v215;
        goto LABEL_76;
      }
      if ( v62 )
      {
        sub_140210C6C(v51, v61, v58);
        sub_1402F6970(&v204, v139);
        v54 = v212;
        goto LABEL_116;
      }
LABEL_76:
      --v11;
    }
    while ( v60 != v59 && v54 && v11 );
    v55 = v198;
    LODWORD(v186) = v11;
    if ( !v198 )
      break;
    if ( !v54 )
      break;
    v53 = v190;
  }
  while ( v11 );
  _InterlockedAnd64((volatile signed __int64 *)v51, 0LL);
  v64 = KeGetCurrentPrcb();
  v8 = 10;
  CurrentPrcb = v192;
  a2 = *((_QWORD *)v64 + 4375);
  if ( a2 )
  {
    if ( *((_BYTE *)v64 + 32) <= 1u )
    {
      v140 = *(_DWORD *)(a2 + 24) - 1;
      *(_DWORD *)(a2 + 24) = v140;
      if ( !v140 )
        sub_140418E4C(v64);
    }
  }
  v65 = v204;
  if ( v204 )
  {
    v85 = v215;
    v86 = v187;
    do
    {
      v87 = (__int64)(v65 - 27);
      v88 = (unsigned __int64)*(v65 - 18);
      v89 = KeGetCurrentPrcb();
      v192 = *v65;
      v217 = v88;
      v199 = 0;
      v90 = *((_QWORD *)v89 + 4375);
      if ( v90 )
      {
        if ( *((_BYTE *)v89 + 32) <= 1u )
        {
          v141 = *(_DWORD *)(v90 + 24);
          *(_DWORD *)(v90 + 24) = v141 + 1;
          if ( v141 == -1 )
LABEL_240:
            sub_140418E4C(v89);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 64), 0LL) )
      {
        v142 = *((_QWORD *)v89 + 4375);
        if ( v142 )
        {
          if ( *((_BYTE *)v89 + 32) <= 1u )
          {
            v143 = *(_DWORD *)(v142 + 24) - 1;
            *(_DWORD *)(v142 + 24) = v143;
            if ( !v143 )
              sub_140418E4C(v89);
          }
        }
        do
          sub_1402F32E0(&v199);
        while ( *(_QWORD *)(v87 + 64) );
        v144 = *((_QWORD *)v89 + 4375);
        if ( v144 )
        {
          if ( *((_BYTE *)v89 + 32) <= 1u )
          {
            v145 = *(_DWORD *)(v144 + 24);
            *(_DWORD *)(v144 + 24) = v145 + 1;
            if ( v145 == -1 )
              goto LABEL_240;
          }
        }
      }
      v91 = *(char *)(v87 + 195);
      if ( v85 - *(_DWORD *)(v87 + 436) - 300 <= 0 || v91 >= 15 )
      {
        sub_140224100(v87);
      }
      else
      {
        sub_14021050C(0LL, v87, 15, v217, v86);
        sub_140224100(v87);
        if ( (BYTE8(xmmword_140D06900) & 1) != 0 )
          sub_14062D3AC(v87, (unsigned int)v91);
      }
      v92 = (_QWORD *)(v87 + 216);
      v205 = 0LL;
      v93 = 0;
      *v92 = 0LL;
      do
      {
        sub_1403405E0(CurrentPrcb, v92 - 27, &v205);
        v92 = v205;
        ++v93;
        if ( v205 )
          v205 = (_QWORD *)*v205;
        if ( (v93 & 0xF) == 0 )
          sub_140340300((char *)CurrentPrcb + 12760);
      }
      while ( v92 );
      sub_140340300((char *)CurrentPrcb + 12760);
      v65 = (struct _KPRCB **)v192;
    }
    while ( v192 );
  }
  v11 = 16;
  v6 = v191;
  v5 = v208;
  v9 = 1;
  v51 = v193;
  if ( (_DWORD)v186 && v212 || (v66 = v188 + 1, (unsigned int)(v188 + 1) > 0xE) )
LABEL_84:
    v66 = 1;
  *(_BYTE *)(v51 + 658) = v66;
  LODWORD(v4) = 0;
  v10 = v189;
LABEL_6:
  if ( byte_140D068BE )
  {
    sub_140290B9C(CurrentPrcb, v6, v5, &v185);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    v200[0] = (_DWORD)v4;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      sub_1402B1050(v13, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        break;
      sub_1402B1050(v13, 0LL);
      do
        sub_1402F32E0(v200);
      while ( *((_QWORD *)CurrentPrcb + 6) );
    }
    v8 = 10;
  }
  if ( v9 )
  {
    v67 = *((_DWORD *)CurrentPrcb + 8118);
    *((_DWORD *)CurrentPrcb + 3314) = v10 + 75;
    v68 = v67 & 0x7FFE;
    if ( v68 )
    {
      v69 = *((_DWORD *)CurrentPrcb + 8120);
      v206 = 0LL;
      v189 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
      v209 = sub_1402104E4(0);
      v71 = __ROR4__(v68, v69);
      do
      {
        _BitScanForward(&v72, v71);
        v200[1] = v72;
        v216 = v71 ^ (1 << v72);
        v73 = (v72 + v69) & 0x1F;
        v74 = (struct _KPRCB *)&v70[16 * v73];
        v187 = v73;
        v192 = v74;
        v75 = *(struct _KPRCB **)v74;
        do
        {
          v76 = (_QWORD *)((char *)v75 - 216);
          v77 = (__int64)v75;
          v75 = *(struct _KPRCB **)v75;
          v78 = 0;
          v63 = (v76[15] & 0x400000) == 0;
          v193 = v77;
          v213 = v76;
          if ( !v63 )
          {
            v146 = sub_140577654(v76, 0LL);
            v76 = v213;
            v74 = v192;
            v77 = v193;
            v78 = v146 != *((_DWORD *)v213 + 256);
          }
          if ( v209 - *((_DWORD *)v76 + 109) > 0 )
          {
            sub_140210484((__int64)CurrentPrcb, v77, v73);
            sub_1402F6970(&v206, v84);
            --v8;
          }
          else if ( v78 )
          {
            sub_140210484((__int64)CurrentPrcb, v77, v73);
            sub_1402F6970(&v206, v147);
          }
          --v11;
        }
        while ( v75 != v74 && v8 && v11 );
        v71 = v216;
        v214 = v8;
        if ( !v216 )
          break;
        if ( !v8 )
          break;
        v70 = (char *)CurrentPrcb + 32576;
      }
      while ( v11 );
      v79 = v206;
      v6 = v191;
      v5 = v208;
      if ( v206 )
      {
        _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
        sub_1402B1050(KeGetCurrentPrcb(), 0LL);
        v96 = v209;
        v97 = v189;
        do
        {
          v98 = (__int64)(v79 - 27);
          v99 = 0LL;
          v100 = *(v79 - 18);
          v101 = KeGetCurrentPrcb();
          v79 = (_QWORD *)*v79;
          v210 = v100;
          v201 = 0;
          while ( 1 )
          {
            LOBYTE(v99) = 1;
            sub_1402B1050(v101, v99);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v98 + 64), 0LL) )
              break;
            sub_1402B1050(v101, 0LL);
            do
              sub_1402F32E0(&v201);
            while ( *(_QWORD *)(v98 + 64) );
          }
          v102 = *(char *)(v98 + 195);
          if ( v96 - *(_DWORD *)(v98 + 436) <= 0 || v102 >= 15 )
          {
            sub_140224100(v98);
          }
          else
          {
            sub_14021050C(0LL, v98, 15, v210, v97);
            sub_140224100(v98);
            if ( (BYTE8(xmmword_140D06900) & 1) != 0 )
              sub_14062D3AC(v98, (unsigned int)v102);
          }
          v103 = (_QWORD *)(v98 + 216);
          v104 = 0;
          v207 = 0LL;
          *v103 = 0LL;
          do
          {
            sub_1403405E0(CurrentPrcb, v103 - 27, &v207);
            v103 = v207;
            ++v104;
            if ( v207 )
              v207 = (_QWORD *)*v207;
            if ( (v104 & 0xF) == 0 )
              sub_140340300((char *)CurrentPrcb + 12760);
          }
          while ( v103 );
          sub_140340300((char *)CurrentPrcb + 12760);
        }
        while ( v79 );
        v105 = KeGetCurrentPrcb();
        v202 = 0;
        sub_1402B1050(v105, 1LL);
        v6 = v191;
        v5 = v208;
        v8 = v214;
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        {
          sub_1402B1050(v105, 0LL);
          do
            sub_1402F32E0(&v202);
          while ( *((_QWORD *)CurrentPrcb + 6) );
          LOBYTE(v148) = 1;
          sub_1402B1050(v105, v148);
        }
      }
      if ( v11 && v8 || (v80 = v187 + 1, v187 + 1 > 0xE) )
        v80 = 1;
      *((_DWORD *)CurrentPrcb + 8120) = v80;
    }
  }
  v16 = 64;
  v17 = 0;
  while ( 2 )
  {
    v18 = *((_QWORD *)CurrentPrcb + 2);
    if ( v18 )
    {
      if ( v5 )
        *(_BYTE *)(v6 + 565) = 0;
LABEL_34:
      if ( v18 != *((_QWORD *)CurrentPrcb + 3) && !(unsigned int)sub_140290B74(v18) )
      {
        v149 = (_BYTE *)*((_QWORD *)CurrentPrcb + 7);
        if ( (*(_BYTE *)(v6 + 2) & 4) == 0
          || *(char *)(v6 + 195) >= 16
          || !*(_QWORD *)(v6 + 104)
          || (v150 = *(_QWORD *)(v6 + 104)) == 0
          || (v151 = *((unsigned int *)CurrentPrcb + 54) + v150) == 0
          || (v152 = sub_1402103E0(v6, v151, v14, 0, 0LL), v153 = 1, !v152) )
        {
          v153 = *(_BYTE *)(v6 + 195);
        }
        v154 = v153 & 0x7F | (*(_BYTE *)(v6 + 119) << 7);
        *v149 = v154;
        v155 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v155 )
        {
          if ( v6 == *((_QWORD *)CurrentPrcb + 3) )
            v156 = (unsigned int)dword_140D0504C;
          else
            v156 = v154 & 0x7F;
          sub_14045B7FC(v155, v156, 0LL);
        }
        v157 = *((_QWORD *)CurrentPrcb + 7);
        if ( dword_140D068FC )
        {
          v158 = *(_DWORD *)(v6 + 80);
          v159 = (*(_BYTE *)(v157 + 64) ^ *(_BYTE *)(v6 + 512)) & 7 ^ *(_BYTE *)(v157 + 64);
          v160 = (v159 ^ (8 * *(_BYTE *)(v6 + 516))) & 0x38 ^ v159;
          if ( v158 <= *(_DWORD *)(v6 + 84) )
            v158 = *(_DWORD *)(v6 + 84);
          v161 = 64;
          if ( v158 < dword_140D05308 )
            v161 = 0;
          *(_BYTE *)(v157 + 64) = v161 | v160 & 0xBF;
        }
        if ( *((_QWORD *)CurrentPrcb + 2) == v18 )
          sub_14035C3FC(CurrentPrcb, &v185, v157);
        sub_1402F6970(&v185, v18);
        v18 = 0LL;
      }
      goto LABEL_15;
    }
    if ( v5 )
    {
      v18 = sub_1402B4AE0((unsigned int)*(char *)(v6 + 195), CurrentPrcb);
      if ( v18 )
        goto LABEL_34;
    }
    if ( (*(_DWORD *)(v6 + 120) & 0x1000) != 0 )
    {
      if ( v6 == *((_QWORD *)CurrentPrcb + 3) )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0xCu);
        goto LABEL_15;
      }
      sub_14035C3FC(CurrentPrcb, &v185, v14);
      v18 = *((_QWORD *)CurrentPrcb + 2);
      if ( !v18 )
        goto LABEL_15;
      goto LABEL_34;
    }
LABEL_15:
    if ( v185 )
    {
      if ( v18 && v18 != *((_QWORD *)CurrentPrcb + 3) && *((_QWORD *)CurrentPrcb + 2) != v18 )
      {
        v162 = (_BYTE *)*((_QWORD *)CurrentPrcb + 7);
        if ( (*(_BYTE *)(v18 + 2) & 4) == 0
          || *(char *)(v18 + 195) >= 16
          || !*(_QWORD *)(v18 + 104)
          || (v163 = *(_QWORD *)(v18 + 104)) == 0
          || (v164 = *((unsigned int *)CurrentPrcb + 54) + v163) == 0
          || (v165 = sub_1402103E0(v18, v164, v14, 0, 0LL), v166 = 1, !v165) )
        {
          v166 = *(_BYTE *)(v18 + 195);
        }
        v167 = v166 & 0x7F | (*(_BYTE *)(v18 + 119) << 7);
        *v162 = v167;
        v168 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v168 )
        {
          if ( v18 == *((_QWORD *)CurrentPrcb + 3) )
            v169 = (unsigned int)dword_140D0504C;
          else
            v169 = v167 & 0x7F;
          sub_14045B7FC(v168, v169, 0LL);
        }
        v170 = *((_QWORD *)CurrentPrcb + 7);
        if ( dword_140D068FC )
        {
          v171 = *(_DWORD *)(v18 + 80);
          v172 = (*(_BYTE *)(v170 + 64) ^ *(_BYTE *)(v18 + 512)) & 7 ^ *(_BYTE *)(v170 + 64);
          v173 = (v172 ^ (8 * *(_BYTE *)(v18 + 516))) & 0x38 ^ v172;
          if ( v171 <= *(_DWORD *)(v18 + 84) )
            v171 = *(_DWORD *)(v18 + 84);
          v174 = 64;
          if ( v171 < dword_140D05308 )
            v174 = 0;
          *(_BYTE *)(v170 + 64) = v174 | v173 & 0xBF;
        }
        v175 = *((_QWORD *)CurrentPrcb + 4375);
        v176 = *((_QWORD *)CurrentPrcb + 3);
        *((_QWORD *)CurrentPrcb + 2) = v18;
        if ( v175 )
          *(_BYTE *)(v175 + 16) = v18 == v176;
        if ( *(_BYTE *)(v18 + 388) == 1 )
          *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v18 + 388) = 3;
      }
      _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
      sub_1402B1050(KeGetCurrentPrcb(), 0LL);
      v177 = v185;
      v185 = (_QWORD *)*v185;
      do
      {
        sub_1403405E0(CurrentPrcb, v177 - 27, &v185);
        v177 = v185;
        ++v17;
        if ( v185 )
          v185 = (_QWORD *)*v185;
        if ( (v17 & 0xF) == 0 )
          sub_140340300((char *)CurrentPrcb + 12760);
      }
      while ( v177 );
      sub_140340300((char *)CurrentPrcb + 12760);
      v179 = KeGetCurrentPrcb();
      v17 = 0;
      v185 = 0LL;
      v203 = 0;
      while ( 1 )
      {
        LOBYTE(v178) = 1;
        sub_1402B1050(v179, v178);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        sub_1402B1050(v179, 0LL);
        do
          sub_1402F32E0(&v203);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      continue;
    }
    break;
  }
  if ( !v18 || v6 == *((_QWORD *)CurrentPrcb + 3) )
  {
    _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
    return sub_1402B1050(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    *((_QWORD *)CurrentPrcb + 2) = 0LL;
    _disable();
    LOBYTE(v15) = 1;
    sub_140345C80(CurrentPrcb, v6, 0LL, v15);
    _enable();
    v21 = (_BYTE *)*((_QWORD *)CurrentPrcb + 7);
    if ( (*(_BYTE *)(v18 + 2) & 4) != 0
      && *(char *)(v18 + 195) < 16
      && *(_QWORD *)(v18 + 104)
      && (v81 = *(_QWORD *)(v18 + 104)) != 0
      && (v82 = *((unsigned int *)CurrentPrcb + 54) + v81) != 0
      && (unsigned int)sub_1402103E0(v18, v82, v20, 0, 0LL) )
    {
      v22 = 1;
    }
    else
    {
      v22 = *(_BYTE *)(v18 + 195);
    }
    v23 = v22 & 0x7F | (*(_BYTE *)(v18 + 119) << 7);
    *v21 = v23;
    v24 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v24 )
    {
      if ( v18 == *((_QWORD *)CurrentPrcb + 3) )
        v180 = (unsigned int)dword_140D0504C;
      else
        v180 = v23 & 0x7F;
      sub_14045B7FC(v24, v180, 0LL);
    }
    v25 = *((_QWORD *)CurrentPrcb + 7);
    if ( dword_140D068FC )
    {
      v181 = *(_DWORD *)(v18 + 80);
      v182 = (*(_BYTE *)(v25 + 64) ^ *(_BYTE *)(v18 + 512)) & 7 ^ *(_BYTE *)(v25 + 64);
      v183 = (v182 ^ (8 * *(_BYTE *)(v18 + 516))) & 0x38 ^ v182;
      if ( v181 <= *(_DWORD *)(v18 + 84) )
        v181 = *(_DWORD *)(v18 + 84);
      if ( v181 < dword_140D05308 )
        v16 = 0;
      *(_BYTE *)(v25 + 64) = v16 | v183 & 0xBF;
    }
    *((_QWORD *)CurrentPrcb + 1) = v18;
    if ( *(_BYTE *)(v18 + 388) == 1 )
      *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v18 + 388) = 2;
    *(_BYTE *)(v6 + 643) = 30;
    sub_1402B9970(CurrentPrcb, v6);
    sub_1402B4EC0(v6, 1LL);
    v29 = sub_140291158(0LL, v26, v27, v28, v184);
    if ( dword_140D069F0 )
      __asm { stac }
    LOBYTE(v30) = 1;
    result = sub_140428A30(v6, v18, v30);
    if ( !v29 )
    {
      if ( dword_140D069F0 )
        __asm { clac }
    }
  }
  return result;
}
