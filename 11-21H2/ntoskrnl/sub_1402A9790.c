/*
 * XREFs of sub_1402A9790 @ 0x1402A9790
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1403CB9F0 @ 0x1403CB9F0 (sub_1403CB9F0.c)
 * Callees:
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_140248C84 @ 0x140248C84 (sub_140248C84.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F4380 @ 0x1402F4380 (sub_1402F4380.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_14062DC50 @ 0x14062DC50 (sub_14062DC50.c)
 *     sub_14062DCD0 @ 0x14062DCD0 (sub_14062DCD0.c)
 */

char __fastcall sub_1402A9790(__int64 a1, unsigned __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  bool v9; // bl
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // r13
  _BYTE *v16; // rcx
  char v17; // bl
  char v18; // al
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  struct _KPRCB *v24; // rcx
  __int64 v25; // rdx
  struct _KPRCB *v26; // r15
  __int64 v27; // rcx
  __int64 *v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  ULONG_PTR v31; // r10
  _QWORD *v32; // r13
  __int64 v33; // rcx
  struct _KPRCB *v34; // rcx
  unsigned __int64 v35; // rdx
  _DWORD *v36; // rdx
  __int64 v37; // rbx
  _DWORD *v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rax
  __int64 v43; // r10
  __int64 v44; // r11
  unsigned int v45; // r8d
  __int64 v46; // r12
  ULONG_PTR v47; // r9
  unsigned int v48; // r8d
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  struct _KPRCB *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rsi
  char *v55; // r12
  char v56; // bl
  unsigned __int64 v57; // r13
  char v58; // al
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // r8
  char v62; // r12
  int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rsi
  int v69; // ebx
  bool v70; // zf
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  int v74; // r12d
  __int16 v75; // r13
  unsigned int v76; // ebx
  unsigned int v77; // ecx
  __int64 v78; // r8
  __int64 v79; // rcx
  __int16 v80; // ax
  __int64 v81; // rdx
  __int64 v82; // rbx
  int v83; // esi
  char v84; // r12
  __int64 v85; // r15
  __int64 v86; // rax
  int v87; // esi
  struct _KPRCB *v88; // r13
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // r13
  struct _KPRCB *v93; // rdx
  __int64 v94; // rcx
  ULONG_PTR v95; // rcx
  ULONG_PTR v96; // rcx
  struct _KPRCB *v97; // rcx
  __int64 v98; // rdx
  struct _KPRCB *v99; // rcx
  __int64 v100; // rdx
  _QWORD *v101; // r13
  char v102; // r12
  __int64 v103; // r15
  __int64 v104; // rax
  char *v105; // r15
  char v106; // bl
  char v107; // al
  char v108; // al
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rcx
  __int64 v112; // rcx
  int v113; // r8d
  __int64 v114; // rdx
  __int64 v115; // rdx
  int v116; // ecx
  __int64 v117; // rdx
  char v118; // r9
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  int v123; // ecx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  int v127; // eax
  int v128; // eax
  int v129; // eax
  __int64 v130; // rdx
  char v131; // al
  char v132; // al
  unsigned int v133; // edx
  char v134; // cl
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  __int64 v145; // rdx
  char v146; // al
  char v147; // al
  unsigned int v148; // ecx
  char v149; // cl
  __int64 v150; // rdx
  char v151; // al
  char v152; // al
  unsigned int v153; // edx
  char v154; // [rsp+30h] [rbp-1C8h]
  char v155; // [rsp+31h] [rbp-1C7h]
  unsigned __int8 v156; // [rsp+32h] [rbp-1C6h]
  _BYTE *v157; // [rsp+38h] [rbp-1C0h]
  ULONG_PTR v158; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v159; // [rsp+38h] [rbp-1C0h]
  struct _KPRCB *v160; // [rsp+38h] [rbp-1C0h]
  unsigned int BugCheckParameter3; // [rsp+40h] [rbp-1B8h]
  char BugCheckParameter3a; // [rsp+40h] [rbp-1B8h]
  int v163; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned __int64 v166; // [rsp+60h] [rbp-198h]
  unsigned int v167; // [rsp+6Ch] [rbp-18Ch]
  int v168; // [rsp+70h] [rbp-188h]
  ULONG_PTR v169; // [rsp+78h] [rbp-180h]
  __int64 v170; // [rsp+80h] [rbp-178h] BYREF
  ULONG_PTR v171; // [rsp+88h] [rbp-170h]
  int v172; // [rsp+90h] [rbp-168h] BYREF
  _DWORD v173[3]; // [rsp+94h] [rbp-164h] BYREF
  int v174; // [rsp+A0h] [rbp-158h] BYREF
  int v175; // [rsp+A4h] [rbp-154h] BYREF
  _QWORD *v176; // [rsp+A8h] [rbp-150h] BYREF
  __int64 *v177; // [rsp+B0h] [rbp-148h]
  _DWORD *v178; // [rsp+B8h] [rbp-140h]
  __int64 v179; // [rsp+C0h] [rbp-138h]
  __int64 v180; // [rsp+C8h] [rbp-130h]
  __int64 v181; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v182; // [rsp+E0h] [rbp-118h]
  __int64 v183; // [rsp+E8h] [rbp-110h]
  __int64 v184; // [rsp+F0h] [rbp-108h]
  unsigned __int64 v185; // [rsp+F8h] [rbp-100h]
  _DWORD *v186; // [rsp+100h] [rbp-F8h]
  ULONG_PTR v187; // [rsp+118h] [rbp-E0h]
  ULONG_PTR v188; // [rsp+120h] [rbp-D8h]
  ULONG_PTR v189; // [rsp+128h] [rbp-D0h]
  __int64 v190; // [rsp+130h] [rbp-C8h]
  unsigned __int64 v191; // [rsp+138h] [rbp-C0h]
  __int128 v192; // [rsp+140h] [rbp-B8h] BYREF
  ULONG_PTR v193; // [rsp+158h] [rbp-A0h] BYREF
  __int128 v194; // [rsp+160h] [rbp-98h]
  __int128 v195; // [rsp+170h] [rbp-88h]
  _QWORD v196[2]; // [rsp+180h] [rbp-78h] BYREF
  _QWORD v197[4]; // [rsp+190h] [rbp-68h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+0h]

  v4 = a4;
  v178 = a3;
  v5 = a2;
  v166 = a2;
  v179 = a1;
  v184 = a1;
  v182 = a1;
  v185 = a2;
  v191 = a2;
  v186 = a3;
  v173[1] = a4;
  BugCheckParameter2 = 0LL;
  v192 = 0LL;
  v170 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v7 = 48LL * a4 + a1 + 13120;
  v183 = v7;
  if ( !*(_DWORD *)(v7 + 24) )
    return 1;
  if ( SBYTE4(xmmword_140D06900) < 0 )
  {
    if ( a4 )
    {
      v80 = 3906;
      HIDWORD(v170) = 4200450;
    }
    else
    {
      v80 = 3908;
      HIDWORD(v170) = 4196866;
    }
    LOWORD(v170) = v80;
    v177 = &v170;
  }
  else
  {
    v177 = 0LL;
  }
  v190 = *(_QWORD *)(a1 + 11664);
  v8 = 48LL * a4 + a1 + 13120;
  v180 = v8;
  while ( 1 )
  {
    v9 = !v4 && (*(_DWORD *)(v7 + 40) || *(_DWORD *)(v7 + 24) >= (unsigned int)dword_140D05178);
    if ( (DWORD1(xmmword_140D06900) & 0x40000) != 0 )
    {
      if ( !v9 )
        goto LABEL_35;
      LOBYTE(a2) = *(_DWORD *)(v7 + 40) != 0;
      sub_14062DC50(*(unsigned int *)(v7 + 24), a2);
    }
    if ( v9 )
    {
      v156 = 0;
      v155 = 0;
      v154 = 0;
      if ( v5 != *(_QWORD *)(a1 + 13112) )
      {
        _enable();
        CurrentPrcb = KeGetCurrentPrcb();
        v172 = 0;
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v11 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v127 = *(_DWORD *)(v11 + 24);
            *(_DWORD *)(v11 + 24) = v127 + 1;
            if ( v127 == -1 )
LABEL_212:
              sub_140418E4C(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v119 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v119 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v128 = *(_DWORD *)(v119 + 24) - 1;
              *(_DWORD *)(v119 + 24) = v128;
              if ( !v128 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          do
            sub_1402F32E0(&v172);
          while ( *(_QWORD *)(a1 + 48) );
          v120 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v120 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v129 = *(_DWORD *)(v120 + 24);
              *(_DWORD *)(v120 + 24) = v129 + 1;
              if ( v129 == -1 )
                goto LABEL_212;
            }
          }
        }
        v12 = *(_DWORD *)(a1 + 236);
        if ( (v12 & 0x1000) == 0 )
          *(_DWORD *)(a1 + 236) = v12 | 0x1000;
        if ( v5 != *(_QWORD *)(a1 + 24) )
        {
          v13 = *(_QWORD *)(a1 + 13112);
          if ( v13 )
          {
            if ( v5 != v13 && *(char *)(v5 + 195) >= 16 && (unsigned int)sub_1402F4380(a1, *(_QWORD *)(v5 + 576)) )
              v154 = 1;
          }
        }
        v14 = *(_QWORD *)(a1 + 16);
        v171 = v14;
        v15 = *(_QWORD *)(a1 + 13112);
        if ( !v15 || v14 == v15 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
          v24 = KeGetCurrentPrcb();
          v81 = *((_QWORD *)v24 + 4375);
          if ( !v81 )
            goto LABEL_32;
          if ( *((_BYTE *)v24 + 32) > 1u )
            goto LABEL_32;
          v141 = *(_DWORD *)(v81 + 24) - 1;
          *(_DWORD *)(v81 + 24) = v141;
          if ( v141 )
            goto LABEL_32;
        }
        else
        {
          v155 = 1;
          v16 = *(_BYTE **)(a1 + 56);
          v157 = v16;
          v17 = *v16;
          if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
          {
            if ( *(char *)(v15 + 195) >= 16 || !*(_QWORD *)(v15 + 104) )
              goto LABEL_163;
            v113 = 0;
            v114 = *(_QWORD *)(v15 + 104);
            if ( v114 )
            {
              v115 = *(unsigned int *)(a1 + 216) + v114;
              if ( v115 )
              {
                v113 = sub_1402103E0(v15, v115, 0LL, 0, 0LL);
                v16 = v157;
              }
            }
            if ( v113 )
              v18 = v17 ^ 1;
            else
LABEL_163:
              v18 = *(_BYTE *)(v15 + 195) ^ v17;
          }
          else
          {
            v18 = v17 ^ *(_BYTE *)(v15 + 195);
          }
          v19 = (v18 & 0x7F ^ v17) & 0x7F | (*(_BYTE *)(v15 + 119) << 7);
          *v16 = v19;
          v20 = *(_QWORD *)(a1 + 35000);
          if ( v20 )
          {
            if ( v15 == *(_QWORD *)(a1 + 24) )
              v130 = (unsigned int)dword_140D0504C;
            else
              v130 = v19 & 0x7F;
            sub_14045B7FC(v20, v130, 0LL);
          }
          v21 = *(_QWORD *)(a1 + 56);
          if ( dword_140D068FC )
          {
            v131 = (*(_BYTE *)(v21 + 64) ^ *(_BYTE *)(v15 + 512)) & 7 ^ *(_BYTE *)(v21 + 64);
            v132 = (v131 ^ (8 * *(_BYTE *)(v15 + 516))) & 0x38 ^ v131;
            v133 = *(_DWORD *)(v15 + 80);
            if ( v133 <= *(_DWORD *)(v15 + 84) )
              v133 = *(_DWORD *)(v15 + 84);
            v134 = 64;
            if ( v133 < dword_140D05308 )
              v134 = 0;
            *(_BYTE *)(v21 + 64) = v134 | v132 & 0xBF;
          }
          *(_QWORD *)(a1 + 16) = v15;
          v22 = *(_QWORD *)(a1 + 35000);
          if ( v22 )
            *(_BYTE *)(v22 + 16) = v15 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v15 + 388) == 1 )
            *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v15 + 388) = 3;
          v23 = *(unsigned __int8 *)(a1 + 35);
          if ( (v23 & 1) == 0 )
          {
            v91 = *(_QWORD *)(a1 + 192);
            BugCheckParameter3a = *(_BYTE *)(a1 + 209);
            v92 = 1LL << BugCheckParameter3a;
            v169 = *(_QWORD *)(a1 + 34912);
            *(_BYTE *)(a1 + 13243) = 0;
            v163 = v23 + 1;
            *(_BYTE *)(a1 + 35) = v23 + 1;
            v93 = KeGetCurrentPrcb();
            v160 = v93;
            v173[0] = 0;
            v94 = *((_QWORD *)v93 + 4375);
            if ( v94 )
            {
              if ( *((_BYTE *)v93 + 32) <= 1u )
              {
                v135 = *(_DWORD *)(v94 + 24);
                *(_DWORD *)(v94 + 24) = v135 + 1;
                if ( v135 == -1 )
                  sub_140418E4C(v93);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)v91, 0LL) )
            {
              v121 = *((_QWORD *)v160 + 4375);
              if ( v121 )
              {
                if ( *((_BYTE *)v160 + 32) <= 1u )
                {
                  v136 = *(_DWORD *)(v121 + 24) - 1;
                  *(_DWORD *)(v121 + 24) = v136;
                  if ( !v136 )
                    sub_140418E4C(v160);
                }
              }
              do
                sub_1402F32E0(v173);
              while ( *(_QWORD *)v91 );
              v122 = *((_QWORD *)v160 + 4375);
              if ( v122 )
              {
                if ( *((_BYTE *)v160 + 32) <= 1u )
                {
                  v137 = *(_DWORD *)(v122 + 24);
                  *(_DWORD *)(v122 + 24) = v137 + 1;
                  if ( v137 == -1 )
                    sub_140418E4C(v160);
                }
              }
            }
            v5 = v166;
            if ( v163 == 1 )
              *(_QWORD *)(v91 + 8) &= ~(1LL << BugCheckParameter3a);
            *(_QWORD *)(v91 + 40) &= ~(1LL << BugCheckParameter3a);
            v95 = ~v169;
            *(_QWORD *)(v91 + 16) &= ~v169;
            v96 = *(_QWORD *)(v91 + 24) & v95;
            if ( (v169 & ~*(_QWORD *)(v91 + 40)) == v92 )
              v96 |= v92;
            *(_QWORD *)(v91 + 24) = v96;
            *(_QWORD *)(v91 + 32) &= ~*(_QWORD *)(a1 + 34936);
            _InterlockedAnd64((volatile signed __int64 *)v91, 0LL);
            v97 = KeGetCurrentPrcb();
            v98 = *((_QWORD *)v97 + 4375);
            if ( v98 )
            {
              if ( *((_BYTE *)v97 + 32) <= 1u )
              {
                v138 = *(_DWORD *)(v98 + 24) - 1;
                *(_DWORD *)(v98 + 24) = v138;
                if ( !v138 )
                  sub_140418E4C(v97);
              }
            }
          }
          v14 = v171;
          if ( v171 && v171 != *(_QWORD *)(a1 + 24) )
          {
            v156 = *(_BYTE *)(v171 + 195);
            sub_1402F69A0(v171);
            *(_BYTE *)(v14 + 565) = 1;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
            v99 = KeGetCurrentPrcb();
            v100 = *((_QWORD *)v99 + 4375);
            if ( v100 )
            {
              if ( *((_BYTE *)v99 + 32) <= 1u )
              {
                v139 = *(_DWORD *)(v100 + 24) - 1;
                *(_DWORD *)(v100 + 24) = v139;
                if ( !v139 )
                  sub_140418E4C(v99);
              }
            }
            v101 = (_QWORD *)(v14 + 216);
            *(_QWORD *)(v14 + 216) = 0LL;
            v102 = 0;
            v176 = 0LL;
            v103 = v182;
            do
            {
              sub_1403405E0(a1, v101 - 27, &v176);
              ++v102;
              v101 = v176;
              if ( v176 )
                v176 = (_QWORD *)*v176;
              if ( (v102 & 0xF) != 0 )
              {
                v104 = v103 + 12760;
              }
              else
              {
                sub_140340300(a1 + 12760);
                v104 = a1 + 12760;
              }
            }
            while ( v101 );
            v5 = v166;
            v4 = a4;
            sub_140340300(v104);
LABEL_32:
            _disable();
            if ( (DWORD1(xmmword_140D06900) & 0x40000) != 0 )
            {
              if ( !v155 && !v154 )
              {
LABEL_34:
                v8 = v180;
                goto LABEL_35;
              }
              sub_14062DCD0(v5, v14, *(unsigned __int8 *)(v5 + 195), v156, v155, v154);
            }
            if ( v154 )
              return 0;
            goto LABEL_34;
          }
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          if ( !v25 )
            goto LABEL_32;
          if ( *((_BYTE *)v24 + 32) > 1u )
            goto LABEL_32;
          v140 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v140;
          if ( v140 )
            goto LABEL_32;
        }
        sub_140418E4C(v24);
        goto LABEL_32;
      }
    }
LABEL_35:
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A310(v7 + 16);
    }
    else
    {
      v26 = KeGetCurrentPrcb();
      v27 = *((_QWORD *)v26 + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v142 = *(_DWORD *)(v27 + 24);
          *(_DWORD *)(v27 + 24) = v142 + 1;
          if ( v142 == -1 )
            sub_140418E4C(v26);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
      {
        v126 = *((_QWORD *)v26 + 4375);
        if ( v126 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v143 = *(_DWORD *)(v126 + 24) - 1;
            *(_DWORD *)(v126 + 24) = v143;
            if ( !v143 )
              sub_140418E4C(v26);
          }
        }
        sub_140211E70((volatile signed __int32 *)(v7 + 16));
      }
      v5 = v166;
    }
    if ( *(int *)(v7 + 24) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v179 + 2LL * v4 + 13244), 0xFFEDu);
      *(_DWORD *)(v7 + 40) = 0;
      if ( !*(_DWORD *)(v7 + 24) )
        break;
    }
    v28 = *(__int64 **)v8;
    v29 = **(_QWORD **)v8;
    *(_QWORD *)v8 = v29;
    if ( !v29 )
      *(_QWORD *)(v8 + 8) = v8;
    v30 = (unsigned __int64)(v28 - 1);
    BugCheckParameter2 = *(_QWORD *)(v30 + 24);
    v31 = *(_QWORD *)(v30 + 32);
    v158 = v31;
    v32 = *(_QWORD **)(v30 + 56);
    v169 = (ULONG_PTR)v32;
    *(_QWORD *)(v30 + 56) = 0LL;
    --*(_DWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 32) = v30;
    v33 = *(_QWORD *)(a1 + 35000);
    if ( v33 && !v4 )
      --*(_DWORD *)(v33 + 28);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E8CC(v7 + 16, retaddr);
      v31 = v158;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 16), 0LL);
    }
    v34 = KeGetCurrentPrcb();
    v35 = *((_QWORD *)v34 + 4375);
    if ( v35 )
    {
      if ( *((_BYTE *)v34 + 32) <= 1u )
      {
        v144 = *(_DWORD *)(v35 + 24) - 1;
        *(_DWORD *)(v35 + 24) = v144;
        if ( !v144 )
        {
          sub_140418E4C(v34);
          v31 = v158;
        }
      }
    }
    _enable();
    if ( (DWORD1(xmmword_140D06900) & 0x40000) != 0 )
    {
      *(_QWORD *)&v192 = BugCheckParameter2;
      *((_QWORD *)&v192 + 1) = 0x7E35C6C7F3DD7277LL
                             * (qword_140D06CC8 ^ __ROR8__(
                                                    BugCheckParameter2 ^ _byteswap_uint64(v30 ^ qword_140D06E28),
                                                    qword_140D06CC8));
      v196[0] = &v192;
      v196[1] = 16LL;
      sub_14035EDE4((unsigned int)v196, 1, 537133056, 3941, 4196866);
      v31 = v158;
    }
    if ( v177 )
    {
      v168 = 0;
      v69 = 0;
      if ( qword_140D328E0 )
      {
        v35 = *(unsigned int *)(qword_140D328E0 + 4248);
        v70 = !_BitScanForward((unsigned int *)&v71, v35);
        v168 = v71;
        if ( !v70 )
        {
          do
          {
            v35 = ((_DWORD)v35 - 1) & (unsigned int)v35;
            v72 = 32LL * (unsigned int)v71 + qword_140D328E0 + 4284;
            if ( v72 && (*(_DWORD *)(v72 + 4) & 0x80u) != 0 )
              v69 |= 1 << *(_BYTE *)(qword_140D328E0 + 2 * v71 + 4233);
            v70 = !_BitScanForward((unsigned int *)&v71, v35);
          }
          while ( !v70 );
          v168 = v71;
        }
      }
      else
      {
        LOBYTE(v69) = 30;
      }
      if ( (v69 & 2) != 0 )
        *(LARGE_INTEGER *)&v194 = KeQueryPerformanceCounter(0LL);
      else
        *(_QWORD *)&v194 = 0LL;
      if ( (v69 & 4) != 0 )
        *((_QWORD *)&v194 + 1) = sub_14022DB00();
      else
        *((_QWORD *)&v194 + 1) = 0LL;
      if ( (v69 & 8) != 0 )
      {
        v73 = __rdtsc();
        v35 = (unsigned __int64)HIDWORD(v73) << 32;
        *(_QWORD *)&v195 = v73;
      }
      else
      {
        *(_QWORD *)&v195 = 0LL;
      }
      if ( (v69 & 0x10) != 0 )
      {
        v181 = 0LL;
        sub_14042A5E0(&v181, v35);
        *((_QWORD *)&v195 + 1) = v181;
      }
      else
      {
        *((_QWORD *)&v195 + 1) = 0LL;
      }
      v31 = v158;
    }
    v36 = v178;
    v37 = (*v178)++ & 0xF;
    v38 = &v36[4 * v37 + 4];
    *(_QWORD *)v38 = BugCheckParameter2;
    v38[2] = MEMORY[0xFFFFF78000000320];
    BugCheckParameter3 = *(_DWORD *)(v166 + 484);
    *(_DWORD *)(a1 + 33116) = 0;
    v39 = *(_QWORD *)(a1 + 34984);
    if ( v39 && *(_QWORD *)(a1 + 34992) != v39 && *(_DWORD *)(a1 + 32428) < *(_DWORD *)(a1 + 32436) )
      *(_QWORD *)(a1 + 34992) = v39;
    v40 = __rdtsc();
    v41 = v40;
    v171 = v40;
    *(_QWORD *)(a1 + 11664) = v32;
    if ( v32 != (_QWORD *)1 )
      v32[4] = v40;
    if ( !a4 )
    {
      *(_QWORD *)(a1 + 13088) = BugCheckParameter2;
      *(_QWORD *)(a1 + 13104) = v40;
      *(_BYTE *)(a1 + 13242) = 1;
    }
    sub_14042A5E0(v30, v31);
    v5 = v166;
    v42 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v42) << 32;
    v159 = v42;
    if ( !a4 )
    {
      *(_BYTE *)(a1 + 13242) = 0;
      v43 = v42 - v41;
      v44 = *(_QWORD *)(a1 + 13072);
      if ( v44 )
      {
        v45 = *(_DWORD *)(v44 + 4);
        v46 = -1LL << (*(_BYTE *)(v44 + 4) & 0x1F);
        v47 = BugCheckParameter2 & v46;
        v189 = (BugCheckParameter2 & v46) >> 56;
        v188 = (BugCheckParameter2 & v46) >> 48;
        v187 = (BugCheckParameter2 & v46) >> 40;
        v169 = (BugCheckParameter2 & v46) >> 24;
        v171 = (BugCheckParameter2 & v46) >> 16;
        v48 = v45 >> 5;
        if ( v48 )
        {
          v193 = BugCheckParameter2 & v46;
          a2 = ((_DWORD)v189
              + 37
              * ((unsigned __int8)v188
               + 37
               * ((unsigned __int8)v187
                + 37
                * ((unsigned __int8)((BugCheckParameter2 & v46) >> 32)
                 + 37
                 * ((unsigned __int8)v169
                  + 37
                  * ((unsigned __int8)v171
                   + 37
                   * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v46) >> 8)
                    + 37 * ((unsigned __int8)v47 + 11623883)))))))) & (v48 - 1);
          v49 = *(_QWORD *)(v44 + 8) + 8 * a2;
          while ( 1 )
          {
            v49 = *(_QWORD *)v49;
            if ( (v49 & 1) != 0 )
              break;
            if ( v47 == (v46 & *(_QWORD *)(v49 + 8)) )
            {
              *(_QWORD *)(v49 + 16) = (*(_QWORD *)(v49 + 16) >> 2) + ((unsigned __int64)(3 * v43) >> 2);
              *(_BYTE *)(v49 + 24) = 1;
              goto LABEL_62;
            }
          }
        }
        sub_140248C84(v44, BugCheckParameter2, v43);
LABEL_62:
        v42 = v159;
      }
      *(_QWORD *)(a1 + 13088) = 0LL;
      *(_QWORD *)(a1 + 13096) = 1LL;
      *(_QWORD *)(a1 + 13104) = 0LL;
    }
    if ( v32 != (_QWORD *)1 )
    {
      v50 = v42 - v32[4];
      v32[3] += v50;
      ++v32[5];
      v32[10] += v50;
      ++v32[11];
    }
    v38[3] = MEMORY[0xFFFFF78000000320];
    if ( BugCheckParameter3 != *(_DWORD *)(v5 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(unsigned int *)(v5 + 484));
    if ( v177 )
    {
      v74 = *((_DWORD *)v177 + 1);
      v75 = *(_WORD *)v177;
      v197[2] = &BugCheckParameter2;
      v197[3] = 8LL;
      v76 = *(_DWORD *)(qword_140D05008 + 4248);
      v70 = !_BitScanForward(&v77, v76);
      v167 = v77;
      if ( !v70 )
      {
        do
        {
          v76 &= v76 - 1;
          v78 = v77;
          a2 = qword_140D05008;
          v79 = 32LL * v77 + qword_140D05008 + 4284;
          if ( v79 && (*(_DWORD *)(v79 + 4) & 0x80u) != 0 )
          {
            v197[0] = &v193 + *(unsigned __int8 *)(qword_140D05008 + 2 * v78 + 4233);
            v197[1] = 8LL;
            sub_1402AB170(
              (unsigned int)v197,
              qword_140D05008,
              *(unsigned __int8 *)(qword_140D05008 + 2 * v78 + 4232),
              2,
              v75,
              v74);
          }
          v70 = !_BitScanForward(&v77, v76);
        }
        while ( !v70 );
        v167 = v77;
      }
    }
    _disable();
    v4 = a4;
    v8 = v180;
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_69;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 16));
LABEL_69:
  *(_QWORD *)(a1 + 11664) = v190;
  if ( (*(_DWORD *)(a1 + 236) & 0x1000) != 0 && v5 != *(_QWORD *)(a1 + 13112) )
  {
    _enable();
    v51 = KeGetCurrentPrcb();
    v174 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      sub_1402B1050(v51, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      sub_1402B1050(v51, 0LL);
      do
        sub_1402F32E0(&v174);
      while ( *(_QWORD *)(a1 + 48) );
    }
    *(_DWORD *)(a1 + 236) &= ~0x1000u;
    v54 = *(_QWORD *)(a1 + 13112);
    if ( v54 && *(_QWORD *)(a1 + 16) == v54 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v55 = *(char **)(a1 + 56);
      v56 = *v55;
      v57 = v191;
      if ( (*(_BYTE *)(v5 + 2) & 4) != 0 )
      {
        if ( *(char *)(v191 + 195) >= 16 || !*(_QWORD *)(v5 + 104) )
          goto LABEL_170;
        v116 = 0;
        v52 = *(_QWORD *)(v5 + 104);
        if ( v52 )
        {
          v52 += *(unsigned int *)(a1 + 216);
          if ( v52 )
            v116 = sub_1402103E0(v5, v52, v53, 0, 0LL);
        }
        if ( v116 )
          v58 = v56 ^ 1;
        else
LABEL_170:
          v58 = *(_BYTE *)(v57 + 195) ^ v56;
      }
      else
      {
        v58 = *(_BYTE *)(v191 + 195) ^ v56;
      }
      v59 = (v58 & 0x7F ^ v56) & 0x7F | (*(_BYTE *)(v5 + 119) << 7);
      *v55 = v59;
      v60 = *(_QWORD *)(a1 + 35000);
      if ( v60 )
      {
        if ( v5 == *(_QWORD *)(a1 + 24) )
          v145 = (unsigned int)dword_140D0504C;
        else
          v145 = v59 & 0x7F;
        sub_14045B7FC(v60, v145, 0LL);
      }
      v61 = *(_QWORD *)(a1 + 56);
      v62 = 64;
      if ( dword_140D068FC )
      {
        v146 = (*(_BYTE *)(v61 + 64) ^ *(_BYTE *)(v5 + 512)) & 7 ^ *(_BYTE *)(v61 + 64);
        v147 = (v146 ^ (8 * *(_BYTE *)(v5 + 516))) & 0x38 ^ v146;
        v52 = *(unsigned int *)(v5 + 80);
        v148 = *(_DWORD *)(v5 + 84);
        if ( (unsigned int)v52 <= v148 )
          v52 = v148;
        v149 = 64;
        if ( (unsigned int)v52 < dword_140D05308 )
          v149 = 0;
        *(_BYTE *)(v61 + 64) = v149 | v147 & 0xBF;
      }
      *(_BYTE *)(v54 + 388) = 2;
      if ( v5 == *(_QWORD *)(a1 + 24) )
      {
        v82 = *(_QWORD *)(a1 + 192);
        v83 = *(unsigned __int8 *)(a1 + 35);
        v84 = *(_BYTE *)(a1 + 209);
        v85 = *(_QWORD *)(a1 + 34912);
        v86 = *(_QWORD *)(a1 + 35000);
        if ( v86 )
          *(_BYTE *)(v86 + 16) = 1;
        *(_BYTE *)(a1 + 13243) = 1;
        if ( (v83 & 1) != 0 )
        {
          v87 = v83 - 1;
          *(_BYTE *)(a1 + 35) = v87;
          v88 = KeGetCurrentPrcb();
          v175 = 0;
          while ( 1 )
          {
            LOBYTE(v52) = 1;
            sub_1402B1050(v88, v52);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
              break;
            sub_1402B1050(v88, 0LL);
            do
              sub_1402F32E0(&v175);
            while ( *(_QWORD *)v82 );
          }
          if ( !v87 )
            *(_QWORD *)(v82 + 8) |= 1LL << v84;
          v89 = *(_QWORD *)(v82 + 40) | (1LL << v84);
          *(_QWORD *)(v82 + 40) = v89;
          if ( (v85 & v89) == v85 )
          {
            *(_QWORD *)(v82 + 16) |= v85;
          }
          else
          {
            v112 = v85 & ~v89;
            if ( ((v112 - 1) & v112) == 0 )
              *(_QWORD *)(v82 + 24) |= v112;
          }
          *(_QWORD *)(v82 + 24) &= ~(1LL << v84);
          v90 = *(_QWORD *)(a1 + 34936);
          if ( (*(_QWORD *)(v82 + 40) & v90) == v90 )
            *(_QWORD *)(v82 + 32) |= v90;
          _InterlockedAnd64((volatile signed __int64 *)v82, 0LL);
          sub_1402B1050(KeGetCurrentPrcb(), 0LL);
        }
      }
      else if ( *(_BYTE *)(v57 + 195) != 31 )
      {
        if ( (v63 = *(char *)(v57 + 195), (v64 = *(_QWORD *)(v5 + 104)) != 0)
          && (v117 = *(unsigned int *)(a1 + 216) + v64) != 0
          && ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || v5 != *(_QWORD *)(a1 + 8) ? (v118 = 1) : (v118 = 0),
              (unsigned int)sub_1402103E0(v5, v117, v61, v118, 0LL)) )
        {
          v65 = sub_140210224(a1, v5, v63 + 1);
        }
        else
        {
          v65 = sub_1402B4AE0((unsigned int)(v63 + 1), a1);
        }
        v67 = v65;
        if ( v65 )
        {
          v105 = *(char **)(a1 + 56);
          v106 = *v105;
          if ( (*(_BYTE *)(v65 + 2) & 4) != 0 )
          {
            if ( *(char *)(v65 + 195) >= 16 || !*(_QWORD *)(v65 + 104) )
              goto LABEL_201;
            v123 = 0;
            v124 = *(_QWORD *)(v65 + 104);
            if ( v124 )
            {
              v125 = *(unsigned int *)(a1 + 216) + v124;
              if ( v125 )
                v123 = sub_1402103E0(v65, v125, v66, 0, 0LL);
            }
            if ( v123 )
              v107 = v106 ^ 1;
            else
LABEL_201:
              v107 = *(_BYTE *)(v67 + 195) ^ v106;
          }
          else
          {
            v107 = v106 ^ *(_BYTE *)(v65 + 195);
          }
          v108 = (v107 & 0x7F ^ v106) & 0x7F | (*(_BYTE *)(v67 + 119) << 7);
          *v105 = v108;
          v109 = *(_QWORD *)(a1 + 35000);
          if ( v109 )
          {
            if ( v67 == *(_QWORD *)(a1 + 24) )
              v150 = (unsigned int)dword_140D0504C;
            else
              v150 = v108 & 0x7F;
            sub_14045B7FC(v109, v150, 0LL);
          }
          v110 = *(_QWORD *)(a1 + 56);
          if ( dword_140D068FC )
          {
            v151 = (*(_BYTE *)(v110 + 64) ^ *(_BYTE *)(v67 + 512)) & 7 ^ *(_BYTE *)(v110 + 64);
            v152 = (v151 ^ (8 * *(_BYTE *)(v67 + 516))) & 0x38 ^ v151;
            v153 = *(_DWORD *)(v67 + 80);
            if ( v153 <= *(_DWORD *)(v67 + 84) )
              v153 = *(_DWORD *)(v67 + 84);
            if ( v153 < dword_140D05308 )
              v62 = 0;
            *(_BYTE *)(v110 + 64) = v62 | v152 & 0xBF;
          }
          *(_QWORD *)(a1 + 16) = v67;
          v111 = *(_QWORD *)(a1 + 35000);
          if ( v111 )
            *(_BYTE *)(v111 + 16) = v67 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v67 + 388) == 1 )
            *(_DWORD *)(v67 + 132) = *(_DWORD *)(v67 + 132) - *(_DWORD *)(v67 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v67 + 388) = 3;
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    sub_1402B1050(KeGetCurrentPrcb(), 0LL);
    _disable();
  }
  return 1;
}
