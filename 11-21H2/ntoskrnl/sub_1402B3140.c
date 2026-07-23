/*
 * XREFs of sub_1402B3140 @ 0x1402B3140
 * Callers:
 *     sub_14021158C @ 0x14021158C (sub_14021158C.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1403C6DC0 @ 0x1403C6DC0 (sub_1403C6DC0.c)
 * Callees:
 *     sub_140210178 @ 0x140210178 (sub_140210178.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_14021087C @ 0x14021087C (sub_14021087C.c)
 *     sub_140210CCC @ 0x140210CCC (sub_140210CCC.c)
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022A040 @ 0x14022A040 (sub_14022A040.c)
 *     sub_140242E70 @ 0x140242E70 (sub_140242E70.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_1403441B0 @ 0x1403441B0 (sub_1403441B0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 *     sub_1403ABA40 @ 0x1403ABA40 (sub_1403ABA40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_140571910 @ 0x140571910 (sub_140571910.c)
 *     sub_140574A7C @ 0x140574A7C (sub_140574A7C.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 */

__int64 __fastcall sub_1402B3140(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r15d
  char v10; // si
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned __int8 v20; // al
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r8
  _BYTE *v37; // r14
  char v38; // cl
  char v39; // al
  __int64 v40; // rcx
  unsigned __int64 v41; // r14
  char v42; // bl
  __int64 v43; // rdx
  char v44; // r15
  __int64 v45; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rsi
  char v50; // r12
  __int64 v51; // r15
  BOOL v52; // r13d
  int v53; // r14d
  __int64 v54; // rax
  int v55; // r14d
  struct _KPRCB *v56; // r13
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rsi
  _BYTE *v60; // r14
  char v61; // cl
  char v62; // al
  __int64 v63; // rcx
  __int64 v64; // r8
  char v65; // al
  struct _KPRCB *v66; // rcx
  __int64 v67; // r13
  char v68; // r10
  __int64 v69; // r12
  __int64 v70; // r9
  __int64 v71; // r15
  int v72; // edx
  __int64 v73; // r15
  unsigned __int64 v74; // r14
  int v75; // edx
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned __int64 v80; // r14
  int v81; // edx
  unsigned __int64 v82; // rcx
  unsigned int v83; // r14d
  int v84; // ecx
  struct _KPRCB *v85; // rsi
  __int64 v86; // r8
  _BYTE *v87; // r14
  char v88; // cl
  char v89; // al
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rsi
  _QWORD *i; // rcx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rcx
  _BYTE *v106; // r14
  char v107; // cl
  char v108; // al
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rdx
  struct _KPRCB *v114; // rcx
  __int64 v115; // rdx
  _QWORD *v116; // rsi
  struct _KPRCB *v117; // rsi
  __int64 v118; // r14
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned int v122; // r9d
  int v123; // ecx
  unsigned int v124; // edx
  __int64 v125; // rcx
  int v126; // eax
  int v127; // eax
  int v128; // eax
  unsigned __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rax
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rdx
  unsigned int v138; // edx
  char v139; // al
  char v140; // al
  char v141; // cl
  __int64 v142; // rax
  __int64 v143; // rdx
  unsigned int v144; // edx
  char v145; // al
  char v146; // al
  char v147; // cl
  struct _KPRCB *v148; // r14
  __int64 v149; // rdx
  unsigned int v150; // edx
  char v151; // al
  char v152; // al
  char v153; // cl
  __int64 v154; // rdx
  unsigned int v155; // edx
  char v156; // al
  char v157; // al
  char v158; // cl
  struct _KPRCB *v159; // r15
  ULONG_PTR v160; // rcx
  struct _KPRCB *v161; // rcx
  __int64 v162; // rdx
  bool v163; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v165; // rax
  __int64 v166; // r9
  int v167; // edx
  int v168; // [rsp+30h] [rbp-49h]
  int v169; // [rsp+30h] [rbp-49h]
  int v170; // [rsp+38h] [rbp-41h]
  int v171; // [rsp+3Ch] [rbp-3Dh]
  __int64 v172; // [rsp+40h] [rbp-39h]
  int v173; // [rsp+54h] [rbp-25h] BYREF
  int v174; // [rsp+58h] [rbp-21h]
  int v175; // [rsp+5Ch] [rbp-1Dh] BYREF
  _DWORD v176[2]; // [rsp+60h] [rbp-19h] BYREF
  int v177; // [rsp+68h] [rbp-11h] BYREF
  int v178; // [rsp+6Ch] [rbp-Dh] BYREF
  int v179; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v180; // [rsp+78h] [rbp-1h] BYREF
  __int64 v181; // [rsp+80h] [rbp+7h]
  BOOL v182; // [rsp+E0h] [rbp+67h]
  char v183; // [rsp+E0h] [rbp+67h]
  __int64 v184; // [rsp+E0h] [rbp+67h]
  int v186; // [rsp+F8h] [rbp+7Fh]

  if ( *(_QWORD *)(a2 + 11528) )
    sub_140340390(a2, 1LL, 0LL, 2LL);
  sub_1402B4EC0(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a2 + 33152);
  v7 = *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v6;
  v8 = ((v6 * *(unsigned int *)(a2 + 33208)) >> 16) + v7;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_QWORD *)(a2 + 33152) = v5;
  v9 = 0;
  v10 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v8;
  if ( (v10 & 0xBE) != 0 )
  {
    if ( v10 < 0 )
    {
      v11 = (*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1024LL) >> 4) & 0x1FFLL;
      v12 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1024LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v13, v12);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 34480) + 8LL * (v13 - 2)) + 8LL * (v12 ^ (1 << v13)) + 8);
      *(_QWORD *)(v14 + 8 * v11) += v6;
      v10 &= ~0x80u;
    }
    if ( (v10 & 0x10) != 0 )
    {
      v113 = a2 + 8LL * *(unsigned __int8 *)(a1 + 124);
      *(_QWORD *)(v113 + 33160) += v6;
      v10 &= ~0x10u;
    }
    if ( (v10 & 0x20) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 1608);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a2 + 33968);
        v17 = *(_QWORD *)(a2 + 33976);
        if ( !v16 || !v17 )
          goto LABEL_18;
        if ( *(_BYTE *)(v17 + 100) )
        {
          v18 = *(_DWORD *)(v17 + 116);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 72);
          if ( v18 >= *(_DWORD *)(v16 + 512) )
            v18 = *(_DWORD *)(v16 + 512);
        }
        if ( v18 < 0x4B )
          v19 = v18 / 0x19;
        else
LABEL_18:
          v19 = 3;
        if ( dword_140D068FC )
          v20 = *(_BYTE *)(a2 + 34056);
        else
          v20 = *(_BYTE *)(a2 + 34059);
        v21 = v19;
        v22 = v20;
        v23 = v20 + 2LL * v19;
        v24 = *(_QWORD *)(v15 + 8 * v23);
        v25 = (_QWORD *)(v15 + 8 * v23);
        v26 = dword_140C2A820;
        *v25 = v6 + v24;
        v27 = *(_DWORD *)(v15 + 192);
        if ( v26 > v27 )
        {
          LODWORD(v184) = v26;
          if ( v26 - v27 >= 0x20 )
            HIDWORD(v184) = 1;
          else
            HIDWORD(v184) = (*(_DWORD *)(v15 + 196) << (v26 - v27)) | 1;
          *(_QWORD *)(v15 + 192) = v184;
        }
        else
        {
          v28 = v27 - v26;
          if ( v28 < 0x20 )
            *(_DWORD *)(v15 + 196) |= 1 << v28;
        }
        if ( !dword_140D06C30 )
        {
          v29 = (unsigned __int8)*(_DWORD *)(a1 + 512);
          if ( v29 == 2 || v29 == 5 )
            *(_QWORD *)(v15 + 16 * v21 + 8) += v6;
        }
        if ( *(_QWORD *)(a1 + 1552) )
        {
          *(_QWORD *)(v15 + 8 * (v22 + 2 * (v21 + 8))) += v6;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1552) + 1608LL) + 8 * (v22 + 2 * (v21 + 4))),
            v6);
        }
      }
      v10 &= ~0x20u;
    }
    if ( (v10 & 0x40) != 0 )
    {
      v121 = *(_QWORD *)(a1 + 968);
      if ( v121 )
        *(_BYTE *)(v121 + 64) = 0;
    }
    if ( byte_140D068F8 )
      sub_140575600(a2, a1, v6, 1LL);
    v5 = *(_QWORD *)(a2 + 33200);
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 125) )
      {
        v122 = (unsigned __int8)*(_DWORD *)(a1 + 512);
        if ( v122 < 6 )
        {
          v123 = 0;
          v124 = *(_DWORD *)(a1 + 80);
          if ( v124 <= *(_DWORD *)(a1 + 84) )
            v124 = *(_DWORD *)(a1 + 84);
          LOBYTE(v123) = v124 >= dword_140D05308;
          v125 = *(unsigned __int8 *)(a1 + 516) + (unsigned int)dword_140D05350 * (v123 + 2 * v122);
          *(_QWORD *)(v5 + 8 * v125) += v6;
        }
      }
    }
    if ( (v10 & 0xBE) != 0 )
    {
      v94 = *(_QWORD *)(a1 + 104);
      if ( v94 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v94); i; i = (_QWORD *)i[51] )
          *i += v6;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      {
        v5 = *(_QWORD *)(a2 + 192);
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 576) + 8LL * *(unsigned __int16 *)(v5 + 136) + 8) & *(_QWORD *)(v5 + 128)) != *(_QWORD *)(v5 + 128) )
          *(_QWORD *)(a2 + 33192) += v6;
      }
      if ( *(_QWORD *)(a1 + 360) )
        sub_140571910(a1);
    }
  }
  _enable();
  v30 = (*(_DWORD *)(a1 + 80) >> 1) + (*(_DWORD *)(a1 + 84) >> 1);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v30;
  CurrentPrcb = KeGetCurrentPrcb();
  v173 = 0;
  v32 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v32 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v126 = *(_DWORD *)(v32 + 24);
      *(_DWORD *)(v32 + 24) = v126 + 1;
      if ( v126 == -1 )
LABEL_235:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v104 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v104 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v127 = *(_DWORD *)(v104 + 24) - 1;
        *(_DWORD *)(v104 + 24) = v127;
        if ( !v127 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v173);
    while ( *(_QWORD *)(a2 + 48) );
    v105 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v105 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v128 = *(_DWORD *)(v105 + 24);
        *(_DWORD *)(v105 + 24) = v128 + 1;
        if ( v128 == -1 )
          goto LABEL_235;
      }
    }
  }
  v33 = *(_QWORD *)(a1 + 104);
  v34 = v33;
  if ( v33 )
  {
    v96 = *(unsigned int *)(a2 + 216) + v33;
    if ( v96 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v96 + 112) & 4) != 0 )
        {
          if ( sub_140242E70(v96, v34) )
          {
            if ( (*(_BYTE *)(v96 + 112) & 1) != 0 )
              sub_140210CE4((_RTL_RB_TREE *)a2, v96, 1);
          }
          else if ( *(_QWORD *)v96 >= *(_QWORD *)(v96 + 24) && (*(_BYTE *)(v96 + 112) & 2) == 0 )
          {
            sub_140210178(v34, v96, a2);
          }
        }
        else
        {
          sub_14022A040(v34, a2, v96);
        }
        v9 += *(_DWORD *)(v96 + 116);
        v96 = *(_QWORD *)(v96 + 408);
        if ( !v96 )
          break;
        v34 = v96 - *(unsigned int *)(a2 + 216);
      }
      LOBYTE(v9) = 0;
    }
  }
  v35 = *(_QWORD *)(a2 + 16);
  if ( v35 )
  {
LABEL_126:
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v35;
    if ( *(_BYTE *)(v35 + 388) == 1 )
      *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v35 + 388) = 2;
    goto LABEL_49;
  }
  while ( 1 )
  {
    v35 = sub_1402B4AE0(1LL, a2);
    if ( !v35 )
    {
      v174 = 0;
      if ( dword_140D06AC0 )
      {
        v129 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 8LL)
             - ((*(_QWORD *)(*(_QWORD *)(a2 + 192) + 8LL) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v129 & 0x3333333333333333LL)
                             + ((v129 >> 2) & 0x3333333333333333LL)
                             + (((v129 & 0x3333333333333333LL) + ((v129 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < dword_140D06AC0 )
          break;
        v130 = *(_QWORD *)(a2 + 200);
        v131 = *(_QWORD *)(a2 + 34912);
        if ( v130 != v131 )
        {
          v132 = v131 & ~v130;
          if ( (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 40LL) & v132) == 0 )
          {
            _BitScanForward64(&v133, v132);
            v134 = (unsigned int)dword_140D105E0[64 * *(unsigned __int8 *)(a2 + 208) + (int)v133];
            v174 = v134;
            if ( (*(_DWORD *)(qword_140D088C0[v134] + 236) & 0x400) == 0 )
              break;
          }
        }
      }
      v35 = 0LL;
      v47 = *(_QWORD *)(a2 + 32568);
      if ( (v47 & 1) != 0 )
      {
        if ( v47 == 1 )
          break;
        v48 = v47 ^ ((a2 + 32560) | 1);
      }
      else
      {
        v48 = *(_QWORD *)(a2 + 32568);
      }
      while ( v48 )
      {
        v118 = v48 - 88;
        v35 = sub_14021087C(a2, v48 - 88, 0);
        if ( v35 )
          break;
        v135 = *(_QWORD *)(v118 + 400);
        if ( (v135 & 1) != 0 )
        {
          if ( v135 == 1 )
            goto LABEL_66;
          v48 = v135 ^ ((v118 + 392) | 1);
        }
        else
        {
          v48 = *(_QWORD *)(v118 + 400);
        }
      }
      if ( !v35 )
        break;
    }
LABEL_41:
    if ( *(_QWORD *)(v35 + 568) == qword_140D06A00 || (*(_DWORD *)(v35 + 116) & 8) != 0 )
    {
      v37 = *(_BYTE **)(a2 + 56);
      if ( (*(_BYTE *)(v35 + 2) & 4) != 0
        && *(char *)(v35 + 195) < 16
        && *(_QWORD *)(v35 + 104)
        && (v98 = *(_QWORD *)(v35 + 104)) != 0
        && (v99 = *(unsigned int *)(a2 + 216) + v98) != 0
        && (unsigned int)sub_1402103E0(v35, v99, v36, 0, 0LL) )
      {
        v38 = 1;
      }
      else
      {
        v38 = *(_BYTE *)(v35 + 195);
      }
      v39 = v38 & 0x7F | (*(_BYTE *)(v35 + 119) << 7);
      *v37 = v39;
      v40 = *(_QWORD *)(a2 + 35000);
      if ( v40 )
      {
        if ( v35 == *(_QWORD *)(a2 + 24) )
          v143 = (unsigned int)dword_140D0504C;
        else
          v143 = v39 & 0x7F;
        sub_14045B7FC(v40, v143, 0LL);
      }
      v5 = *(_QWORD *)(a2 + 56);
      if ( dword_140D068FC )
      {
        v144 = *(_DWORD *)(v35 + 80);
        v145 = (*(_BYTE *)(v5 + 64) ^ *(_BYTE *)(v35 + 512)) & 7 ^ *(_BYTE *)(v5 + 64);
        v146 = (v145 ^ (8 * *(_BYTE *)(v35 + 516))) & 0x38 ^ v145;
        if ( v144 <= *(_DWORD *)(v35 + 84) )
          v144 = *(_DWORD *)(v35 + 84);
        v147 = 64;
        if ( v144 < dword_140D05308 )
          v147 = 0;
        *(_BYTE *)(v5 + 64) = v147 | v146 & 0xBF;
      }
      *(_QWORD *)(a2 + 8) = v35;
      if ( *(_BYTE *)(v35 + 388) == 1 )
        *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v35 + 388) = 2;
      if ( (*(_BYTE *)(a2 + 35) & 1) != 0 )
        goto LABEL_49;
LABEL_284:
      __fastfail(0x21u);
    }
    sub_1402F69A0(v35);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v114 = KeGetCurrentPrcb();
    v115 = *((_QWORD *)v114 + 4375);
    if ( v115 )
    {
      if ( *((_BYTE *)v114 + 32) <= 1u )
      {
        v136 = *(_DWORD *)(v115 + 24) - 1;
        *(_DWORD *)(v115 + 24) = v136;
        if ( !v136 )
          sub_140418E4C(v114);
      }
    }
    v116 = (_QWORD *)(v35 + 216);
    v180 = 0LL;
    *v116 = 0LL;
    do
    {
      sub_1403405E0(a2, v116 - 27, &v180);
      v116 = v180;
      LOBYTE(v9) = v9 + 1;
      if ( v180 )
        v180 = (_QWORD *)*v180;
      if ( (v9 & 0xF) == 0 )
        sub_140340300(a2 + 12760);
    }
    while ( v116 );
    sub_140340300(a2 + 12760);
    v117 = KeGetCurrentPrcb();
    LOBYTE(v9) = 0;
    v175 = 0;
    while ( 1 )
    {
      sub_1402B1050((__int64)v117, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        break;
      sub_1402B1050((__int64)v117, 0);
      do
        sub_1402F32E0(&v175);
      while ( *(_QWORD *)(a2 + 48) );
    }
    v35 = *(_QWORD *)(a2 + 16);
    if ( v35 )
      goto LABEL_126;
  }
LABEL_66:
  v35 = sub_1402B4AE0(0LL, a2);
  if ( v35 )
    goto LABEL_41;
  v49 = *(_QWORD *)(a2 + 192);
  v50 = *(_BYTE *)(a2 + 209);
  v51 = *(_QWORD *)(a2 + 34912);
  v52 = *(_BYTE *)(a2 + 35) == 7;
  v53 = *(unsigned __int8 *)(a2 + 35);
  v182 = v52;
  v54 = *(_QWORD *)(a2 + 35000);
  if ( v54 )
    *(_BYTE *)(v54 + 16) = 1;
  *(_BYTE *)(a2 + 13243) = 0;
  if ( (v53 & 1) != 0 )
  {
    v55 = v53 - 1;
    *(_BYTE *)(a2 + 35) = v55;
    v56 = KeGetCurrentPrcb();
    v176[0] = 0;
    while ( 1 )
    {
      sub_1402B1050((__int64)v56, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v49, 0LL) )
        break;
      sub_1402B1050((__int64)v56, 0);
      do
        sub_1402F32E0(v176);
      while ( *(_QWORD *)v49 );
    }
    if ( !v55 )
      *(_QWORD *)(v49 + 8) |= 1LL << v50;
    v57 = *(_QWORD *)(v49 + 40) | (1LL << v50);
    *(_QWORD *)(v49 + 40) = v57;
    if ( (v57 & v51) == v51 )
    {
      *(_QWORD *)(v49 + 16) |= v51;
    }
    else
    {
      v95 = v51 & ~v57;
      if ( ((v95 - 1) & v95) == 0 )
        *(_QWORD *)(v49 + 24) |= v95;
    }
    *(_QWORD *)(v49 + 24) &= ~(1LL << v50);
    v58 = *(_QWORD *)(a2 + 34936);
    if ( (*(_QWORD *)(v49 + 40) & v58) == v58 )
      *(_QWORD *)(v49 + 32) |= v58;
    _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
    sub_1402B1050((__int64)KeGetCurrentPrcb(), 0);
    v52 = v182;
  }
  v59 = *(_QWORD *)(a2 + 24);
  v60 = *(_BYTE **)(a2 + 56);
  if ( (*(_BYTE *)(v59 + 2) & 4) != 0
    && *(char *)(v59 + 195) < 16
    && *(_QWORD *)(v59 + 104)
    && (v100 = *(_QWORD *)(v59 + 104)) != 0
    && (v101 = *(unsigned int *)(a2 + 216) + v100) != 0
    && (unsigned int)sub_1402103E0(v59, v101, v36, 0, 0LL) )
  {
    v61 = 1;
  }
  else
  {
    v61 = *(_BYTE *)(v59 + 195);
  }
  v62 = v61 & 0x7F | (*(_BYTE *)(v59 + 119) << 7);
  *v60 = v62;
  v63 = *(_QWORD *)(a2 + 35000);
  if ( v63 )
  {
    if ( v59 == *(_QWORD *)(a2 + 24) )
      v137 = (unsigned int)dword_140D0504C;
    else
      v137 = v62 & 0x7F;
    sub_14045B7FC(v63, v137, 0LL);
  }
  v64 = *(_QWORD *)(a2 + 56);
  if ( dword_140D068FC )
  {
    v138 = *(_DWORD *)(v59 + 80);
    v139 = (*(_BYTE *)(v64 + 64) ^ *(_BYTE *)(v59 + 512)) & 7 ^ *(_BYTE *)(v64 + 64);
    v140 = (v139 ^ (8 * *(_BYTE *)(v59 + 516))) & 0x38 ^ v139;
    if ( v138 <= *(_DWORD *)(v59 + 84) )
      v138 = *(_DWORD *)(v59 + 84);
    v141 = 64;
    if ( v138 < dword_140D05308 )
      v141 = 0;
    *(_BYTE *)(v64 + 64) = v141 | v140 & 0xBF;
  }
  v65 = *(_BYTE *)(a2 + 35);
  if ( (v65 & 1) != 0 )
    goto LABEL_284;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v66 = KeGetCurrentPrcb();
  if ( (v65 & 2) != 0 )
  {
    sub_1402B1050((__int64)v66, 0);
    if ( v52 )
      goto LABEL_86;
LABEL_104:
    v85 = KeGetCurrentPrcb();
    v177 = 0;
    while ( 1 )
    {
      sub_1402B1050((__int64)v85, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        break;
      sub_1402B1050((__int64)v85, 0);
      do
        sub_1402F32E0(&v177);
      while ( *(_QWORD *)(a2 + 48) );
    }
    v35 = *(_QWORD *)(a2 + 16);
    if ( !v35 )
    {
      v35 = *(_QWORD *)(a2 + 24);
      if ( !dword_140D068FC )
        goto LABEL_108;
      if ( dword_140D06ACC )
        goto LABEL_108;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      sub_1402B1050((__int64)KeGetCurrentPrcb(), 0);
      sub_140574A7C(a2);
      v148 = KeGetCurrentPrcb();
      v178 = 0;
      while ( 1 )
      {
        sub_1402B1050((__int64)v148, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
          break;
        sub_1402B1050((__int64)v148, 0);
        do
          sub_1402F32E0(&v178);
        while ( *(_QWORD *)(a2 + 48) );
      }
      if ( !*(_QWORD *)(a2 + 16) )
        goto LABEL_108;
      v35 = *(_QWORD *)(a2 + 16);
    }
    *(_QWORD *)(a2 + 16) = 0LL;
LABEL_108:
    v87 = *(_BYTE **)(a2 + 56);
    if ( (*(_BYTE *)(v35 + 2) & 4) != 0
      && *(char *)(v35 + 195) < 16
      && *(_QWORD *)(v35 + 104)
      && (v102 = *(_QWORD *)(v35 + 104)) != 0
      && (v103 = *(unsigned int *)(a2 + 216) + v102) != 0
      && (unsigned int)sub_1402103E0(v35, v103, v86, 0, 0LL) )
    {
      v88 = 1;
    }
    else
    {
      v88 = *(_BYTE *)(v35 + 195);
    }
    v89 = v88 & 0x7F | (*(_BYTE *)(v35 + 119) << 7);
    *v87 = v89;
    v90 = *(_QWORD *)(a2 + 35000);
    if ( v90 )
    {
      if ( v35 == *(_QWORD *)(a2 + 24) )
        v149 = (unsigned int)dword_140D0504C;
      else
        v149 = v89 & 0x7F;
      sub_14045B7FC(v90, v149, 0LL);
    }
    v5 = *(_QWORD *)(a2 + 56);
    if ( dword_140D068FC )
    {
      v150 = *(_DWORD *)(v35 + 80);
      v151 = (*(_BYTE *)(v5 + 64) ^ *(_BYTE *)(v35 + 512)) & 7 ^ *(_BYTE *)(v5 + 64);
      v152 = (v151 ^ (8 * *(_BYTE *)(v35 + 516))) & 0x38 ^ v151;
      if ( v150 <= *(_DWORD *)(v35 + 84) )
        v150 = *(_DWORD *)(v35 + 84);
      v153 = 64;
      if ( v150 < dword_140D05308 )
        v153 = 0;
      *(_BYTE *)(v5 + 64) = v153 | v152 & 0xBF;
    }
    *(_QWORD *)(a2 + 8) = v35;
    if ( *(_BYTE *)(v35 + 388) == 1 )
      *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v35 + 388) = 2;
    goto LABEL_49;
  }
  sub_1402B1050((__int64)v66, 0);
LABEL_86:
  v67 = *(_QWORD *)(a2 + 192);
  v68 = *(_BYTE *)(a2 + 209);
  v69 = *(_QWORD *)(v67 + 128);
  v70 = *(_QWORD *)(a2 + 34880) ^ *(_QWORD *)(v67 + 152);
  v71 = *(_QWORD *)(a2 + 200) ^ v69;
  v72 = *(unsigned __int16 *)(v67 + 136);
  v183 = v68;
  v186 = v72;
  v181 = v70;
  if ( (dword_140D0507C & 2) != 0 )
    v69 &= *(_QWORD *)(a2 + 34928);
  v73 = ~*(_QWORD *)(v67 + 40) & v71;
  while ( 1 )
  {
    if ( !v73 && !v70 )
    {
      v170 = *(unsigned __int16 *)(v67 + 138);
      v171 = 0;
      v172 = qword_140D31700[*(unsigned __int16 *)(v67 + 138)];
      v83 = *(_DWORD *)(v172 + 16);
      while ( 1 )
      {
        while ( !v83 )
        {
          v84 = v171 + 1;
          v171 = v84;
          if ( v84 == (unsigned __int16)word_140D05000 )
            goto LABEL_104;
          v93 = *(unsigned int *)(qword_140C506D8 + 4LL * ((unsigned int)(unsigned __int16)word_140D05000 * v170 + v84));
          if ( (_DWORD)v93 == -1 )
            goto LABEL_104;
          v172 = qword_140D31700[v93];
          v83 = *(_DWORD *)(v172 + 16);
        }
        _BitScanForward((unsigned int *)&v91, v83);
        v176[1] = v91;
        v83 &= ~(1 << v91);
        v92 = *(_QWORD *)(v172 + 8 * v91 + 24);
        if ( !v92 )
          goto LABEL_104;
        if ( v92 != *(_QWORD *)(a2 + 192) )
        {
          v142 = sub_1403441B0(a2);
          v5 = 0x140000000uLL;
          v35 = v142;
          if ( v142 )
            goto LABEL_49;
        }
      }
    }
    if ( (v69 & v70) != 0 )
      break;
LABEL_95:
    if ( (v73 & v69) != 0 )
    {
      v80 = __ROR8__(v73 & v69, v68);
      v81 = v72 << 6;
      v169 = v81;
      do
      {
        _BitScanForward64(&v82, v80);
        v80 ^= 1LL << v82;
        v35 = sub_1402B4130(a2, qword_140D088C0[dword_140D105E0[v81 + (((_BYTE)v82 + v68) & 0x3F)]], 0LL);
        if ( v35 )
          goto LABEL_49;
        v81 = v169;
        v68 = v183;
      }
      while ( v80 );
    }
    v70 = v181;
    v68 = v183;
    v73 &= ~v69;
    v69 = *(_QWORD *)(v67 + 128);
    v72 = v186;
  }
  v74 = __ROR8__(v69 & v70, v68);
  v75 = v72 << 6;
  v168 = v75;
  while ( 1 )
  {
    _BitScanForward64(&v76, v74);
    v77 = qword_140D088C0[dword_140D105E0[v75 + ((v68 + (_BYTE)v76) & 0x3F)]];
    v78 = *(_QWORD *)(v77 + 34880);
    v79 = *(_QWORD *)(v77 + 34888);
    v181 = ~v78 & v70;
    v74 &= __ROR8__(~v78, v68);
    v35 = sub_1402B4130(a2, 0LL, v79);
    if ( v35 )
      break;
    v70 = v181;
    v75 = v168;
    v68 = v183;
    if ( !v74 )
    {
      v72 = v186;
      goto LABEL_95;
    }
  }
LABEL_49:
  if ( v35 != *(_QWORD *)(a2 + 24) && v35 != a1 && *(_BYTE *)(v35 + 113) )
  {
    v106 = *(_BYTE **)(a2 + 56);
    if ( (*(_BYTE *)(v35 + 2) & 4) != 0
      && *(char *)(v35 + 195) < 16
      && *(_QWORD *)(v35 + 104)
      && (v119 = *(_QWORD *)(v35 + 104)) != 0
      && (v120 = *(unsigned int *)(a2 + 216) + v119) != 0
      && (unsigned int)sub_1402103E0(v35, v120, v5, 0, 0LL) )
    {
      v107 = 1;
    }
    else
    {
      v107 = *(_BYTE *)(v35 + 195);
    }
    v108 = v107 & 0x7F | (*(_BYTE *)(v35 + 119) << 7);
    *v106 = v108;
    v109 = *(_QWORD *)(a2 + 35000);
    if ( v109 )
    {
      if ( v35 == *(_QWORD *)(a2 + 24) )
        v154 = (unsigned int)dword_140D0504C;
      else
        v154 = v108 & 0x7F;
      sub_14045B7FC(v109, v154, 0LL);
    }
    v110 = *(_QWORD *)(a2 + 56);
    if ( dword_140D068FC )
    {
      v155 = *(_DWORD *)(v35 + 80);
      v156 = (*(_BYTE *)(v110 + 64) ^ *(_BYTE *)(v35 + 512)) & 7 ^ *(_BYTE *)(v110 + 64);
      v157 = (v156 ^ (8 * *(_BYTE *)(v35 + 516))) & 0x38 ^ v156;
      if ( v155 <= *(_DWORD *)(v35 + 84) )
        v155 = *(_DWORD *)(v35 + 84);
      v158 = 64;
      if ( v155 < dword_140D05308 )
        v158 = 0;
      *(_BYTE *)(v110 + 64) = v158 | v157 & 0xBF;
    }
    v111 = *(_QWORD *)(a2 + 35000);
    v112 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 16) = v35;
    if ( v111 )
      *(_BYTE *)(v111 + 16) = v35 == v112;
    if ( *(_BYTE *)(v35 + 388) == 1 )
      *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v35 + 388) = 3;
    v35 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v35;
    if ( *(_BYTE *)(v35 + 388) == 1 )
      *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v35 + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  sub_1402B1050((__int64)KeGetCurrentPrcb(), 0);
  v41 = *(unsigned __int8 *)(a1 + 390);
  if ( a1 == v35 )
  {
    v44 = *(_BYTE *)(v35 + 193) && !*(_WORD *)(v35 + 486) && !(_BYTE)v41;
    _disable();
    sub_140345B70(a2, v35, 0LL);
    _enable();
    if ( (*(_DWORD *)(v35 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 0xBu);
      sub_1402EDFE8(a2, v35, 0LL);
    }
    if ( (BYTE4(xmmword_140D06900) & 4) != 0 )
      sub_1403ABA40(a1, a1);
  }
  else
  {
    v42 = 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 || *(_BYTE *)(a1 + 388) != 5 )
      goto LABEL_54;
    if ( *(_BYTE *)(a1 + 793) )
    {
      v159 = KeGetCurrentPrcb();
      v179 = 0;
      while ( 1 )
      {
        sub_1402B1050((__int64)v159, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        sub_1402B1050((__int64)v159, 0);
        do
          sub_1402F32E0(&v179);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 )
      {
        sub_140210CCC(a1, 1);
        sub_1402B9FC0(v160);
        v42 = 1;
      }
      sub_140224100(a1);
LABEL_54:
      v44 = sub_140428A30(a1, v35, (unsigned __int8)v41);
      if ( v42 && (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
        _InterlockedAnd(*(volatile signed __int32 **)(a1 + 968), 0xFFFBFFFF);
    }
    else
    {
      v44 = sub_140428A30(a1, v35, (unsigned __int8)v41);
    }
  }
  v45 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    LOBYTE(v43) = 1;
    if ( !(unsigned __int8)sub_140357840(a1 + 256, v43) )
    {
      *(_BYTE *)(a1 + 481) = 4;
      *(_QWORD *)(a1 + 264) = a1 + 464;
      *(_QWORD *)(a1 + 272) = a1 + 464;
    }
  }
  if ( a3 )
    *a3 = *(_QWORD *)(a1 + 976);
  if ( v44 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v161 = KeGetCurrentPrcb();
        v162 = *((_QWORD *)v161 + 4375);
        v163 = (*(_DWORD *)(v162 + 20) & 0xFFFF0003) == 0;
        *(_DWORD *)(v162 + 20) &= 0xFFFF0003;
        if ( v163 )
          sub_140418E4C(v161);
      }
    }
    __writecr8(1uLL);
    sub_1402F1DC0(0LL, 0LL, 0LL);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
      {
        v165 = KeGetCurrentPrcb();
        v166 = *((_QWORD *)v165 + 4375);
        v167 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
        v163 = (v167 & *(_DWORD *)(v166 + 20)) == 0;
        *(_DWORD *)(v166 + 20) &= v167;
        if ( v163 )
          sub_140418E4C(v165);
      }
    }
  }
  __writecr8(v41);
  return v45;
}
