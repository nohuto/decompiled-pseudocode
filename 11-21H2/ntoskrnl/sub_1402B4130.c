/*
 * XREFs of sub_1402B4130 @ 0x1402B4130
 * Callers:
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1403441B0 @ 0x1403441B0 (sub_1403441B0.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140210484 @ 0x140210484 (sub_140210484.c)
 *     sub_140210580 @ 0x140210580 (sub_140210580.c)
 *     sub_14023BD18 @ 0x14023BD18 (sub_14023BD18.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4E80 @ 0x1402B4E80 (sub_1402B4E80.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045AD66 @ 0x14045AD66 (sub_14045AD66.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

__int64 __fastcall sub_1402B4130(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v6; // r14
  int v7; // r11d
  struct _KPRCB *v9; // rbp
  __int64 v10; // rcx
  struct _KPRCB *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  struct _KPRCB *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  _WORD *v25; // rdx
  unsigned int v26; // r15d
  __int64 v27; // r10
  __int64 v28; // rdx
  unsigned int v29; // eax
  _QWORD **v30; // r12
  _QWORD *v31; // r13
  _WORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // eax
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  char *v39; // r12
  char v40; // r13
  char v41; // al
  char v42; // cl
  __int64 *v43; // rax
  char v44; // r9
  __int64 v45; // r10
  char v46; // r12
  int v47; // r15d
  __int64 v48; // rbx
  __int64 v49; // rsi
  int v50; // r15d
  struct _KPRCB *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct _KPRCB *v54; // rcx
  __int64 v55; // rdx
  unsigned int v56; // r15d
  __int64 v57; // r8
  unsigned int v58; // eax
  _QWORD *v59; // r12
  __int64 v60; // r9
  _QWORD *v61; // rdx
  _WORD *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r13
  unsigned int v65; // eax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  struct _KPRCB *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  struct _KPRCB *v86; // rcx
  __int64 v87; // rdx
  _QWORD *v88; // r11
  struct _KPRCB *v89; // rcx
  __int64 v90; // rdx
  _QWORD *v91; // rbp
  char v92; // r12
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  __int64 v120; // rdx
  char v121; // al
  char v122; // al
  unsigned int v123; // edx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  char v128; // [rsp+30h] [rbp-78h]
  char v129; // [rsp+34h] [rbp-74h]
  __int64 v130; // [rsp+38h] [rbp-70h]
  _QWORD *v131; // [rsp+38h] [rbp-70h]
  __int64 v132; // [rsp+40h] [rbp-68h]
  __int64 v133; // [rsp+40h] [rbp-68h]
  int v134; // [rsp+48h] [rbp-60h] BYREF
  int v135; // [rsp+4Ch] [rbp-5Ch] BYREF
  int v136; // [rsp+50h] [rbp-58h] BYREF
  int v137; // [rsp+54h] [rbp-54h] BYREF
  int v138; // [rsp+58h] [rbp-50h]
  int v139; // [rsp+5Ch] [rbp-4Ch] BYREF
  _QWORD *v140; // [rsp+60h] [rbp-48h] BYREF
  struct _KPRCB *v141; // [rsp+B8h] [rbp+10h]
  int v142; // [rsp+C8h] [rbp+20h]
  __int64 v143; // [rsp+C8h] [rbp+20h]
  int v144; // [rsp+C8h] [rbp+20h]

  v6 = 64;
LABEL_2:
  while ( 2 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 32472) && !(unsigned __int8)sub_1402B4E80(a2, a1) && !*(_QWORD *)(a2 + 32560) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = a1;
        v134 = v7;
        v17 = a2;
        if ( a1 <= a2 )
        {
          v16 = a2;
          v17 = a1;
        }
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v18 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v93 = *(_DWORD *)(v18 + 24);
            *(_DWORD *)(v18 + 24) = v93 + 1;
            if ( v93 == -1 )
LABEL_142:
              sub_140418E4C(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
        {
          v74 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v74 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v94 = *(_DWORD *)(v74 + 24) - 1;
              *(_DWORD *)(v74 + 24) = v94;
              if ( !v94 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          do
            sub_1402F32E0(&v134);
          while ( *(_QWORD *)(v17 + 48) );
          v75 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v75 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v95 = *(_DWORD *)(v75 + 24);
              *(_DWORD *)(v75 + 24) = v95 + 1;
              if ( v95 == -1 )
                goto LABEL_142;
            }
          }
        }
        if ( v17 != v16 )
        {
          v19 = KeGetCurrentPrcb();
          v135 = 0;
          v20 = *((_QWORD *)v19 + 4375);
          if ( v20 )
          {
            if ( *((_BYTE *)v19 + 32) <= 1u )
            {
              v96 = *(_DWORD *)(v20 + 24);
              *(_DWORD *)(v20 + 24) = v96 + 1;
              if ( v96 == -1 )
LABEL_151:
                sub_140418E4C(v19);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
          {
            v72 = *((_QWORD *)v19 + 4375);
            if ( v72 )
            {
              if ( *((_BYTE *)v19 + 32) <= 1u )
              {
                v97 = *(_DWORD *)(v72 + 24) - 1;
                *(_DWORD *)(v72 + 24) = v97;
                if ( !v97 )
                  sub_140418E4C(v19);
              }
            }
            do
              sub_1402F32E0(&v135);
            while ( *(_QWORD *)(v16 + 48) );
            v73 = *((_QWORD *)v19 + 4375);
            if ( v73 )
            {
              if ( *((_BYTE *)v19 + 32) <= 1u )
              {
                v98 = *(_DWORD *)(v73 + 24);
                *(_DWORD *)(v73 + 24) = v98 + 1;
                if ( v98 == -1 )
                  goto LABEL_151;
              }
            }
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v9 = KeGetCurrentPrcb();
        v136 = 0;
        v10 = *((_QWORD *)v9 + 4375);
        if ( v10 )
        {
          if ( *((_BYTE *)v9 + 32) <= 1u )
          {
            v99 = *(_DWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 24) = v99 + 1;
            if ( v99 == -1 )
LABEL_160:
              sub_140418E4C(v9);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v76 = *((_QWORD *)v9 + 4375);
          if ( v76 )
          {
            if ( *((_BYTE *)v9 + 32) <= 1u )
            {
              v100 = *(_DWORD *)(v76 + 24) - 1;
              *(_DWORD *)(v76 + 24) = v100;
              if ( !v100 )
                sub_140418E4C(v9);
            }
          }
          do
            sub_1402F32E0(&v136);
          while ( *(_QWORD *)(a1 + 48) );
          v77 = *((_QWORD *)v9 + 4375);
          if ( v77 )
          {
            if ( *((_BYTE *)v9 + 32) <= 1u )
            {
              v101 = *(_DWORD *)(v77 + 24);
              *(_DWORD *)(v77 + 24) = v101 + 1;
              if ( v101 == -1 )
                goto LABEL_160;
            }
          }
        }
        v11 = KeGetCurrentPrcb();
        v137 = 0;
        v12 = *((_QWORD *)v11 + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)v11 + 32) <= 1u )
          {
            v102 = *(_DWORD *)(v12 + 24);
            *(_DWORD *)(v12 + 24) = v102 + 1;
            if ( v102 == -1 )
LABEL_169:
              sub_140418E4C(v11);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          v13 = *((_QWORD *)v11 + 4375);
          if ( v13 )
          {
            if ( *((_BYTE *)v11 + 32) <= 1u )
            {
              v103 = *(_DWORD *)(v13 + 24) - 1;
              *(_DWORD *)(v13 + 24) = v103;
              if ( !v103 )
                sub_140418E4C(v11);
            }
          }
          do
            sub_1402F32E0(&v137);
          while ( *(_QWORD *)a3 );
          v14 = *((_QWORD *)v11 + 4375);
          if ( v14 )
          {
            if ( *((_BYTE *)v11 + 32) <= 1u )
            {
              v104 = *(_DWORD *)(v14 + 24);
              *(_DWORD *)(v14 + 24) = v104 + 1;
              if ( v104 == -1 )
                goto LABEL_169;
            }
          }
        }
      }
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v21 )
        break;
      if ( a3 )
      {
        _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
        v70 = KeGetCurrentPrcb();
        v78 = *((_QWORD *)v70 + 4375);
        if ( v78 )
        {
          if ( *((_BYTE *)v70 + 32) <= 1u )
          {
            v117 = *(_DWORD *)(v78 + 24) - 1;
            *(_DWORD *)(v78 + 24) = v117;
            if ( !v117 )
LABEL_208:
              sub_140418E4C(v70);
          }
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
        v70 = KeGetCurrentPrcb();
        v71 = *((_QWORD *)v70 + 4375);
        if ( v71 )
        {
          if ( *((_BYTE *)v70 + 32) <= 1u )
          {
            v118 = *(_DWORD *)(v71 + 24) - 1;
            *(_DWORD *)(v71 + 24) = v118;
            if ( !v118 )
              goto LABEL_208;
          }
        }
      }
      v7 = 0;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( v21 != *(_QWORD *)(a1 + 24) )
      {
        v44 = 1;
        goto LABEL_57;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v86 = KeGetCurrentPrcb();
      v87 = *((_QWORD *)v86 + 4375);
      if ( v87 )
      {
        if ( *((_BYTE *)v86 + 32) <= 1u )
        {
          v119 = *(_DWORD *)(v87 + 24) - 1;
          *(_DWORD *)(v87 + 24) = v119;
          if ( !v119 )
          {
            sub_140418E4C(v86);
            goto LABEL_2;
          }
        }
      }
    }
    if ( a3 )
    {
      v56 = *(_DWORD *)(a3 + 8) & 0xFFFFFFFE;
      if ( v56 )
      {
        v57 = 64LL;
        v133 = *(_QWORD *)(a1 + 200);
        v144 = 64;
LABEL_72:
        _BitScanReverse(&v58, v56);
        v56 ^= 1 << v58;
        v59 = (_QWORD *)(a3 + 16 + 16LL * v58);
        v128 = v58;
        v60 = v133;
        v61 = (_QWORD *)*v59;
        v131 = (_QWORD *)*v59;
        while ( 1 )
        {
          v62 = (_WORD *)v61[45];
          v21 = (__int64)(v61 - 27);
          v63 = *(unsigned __int8 *)(a1 + 208);
          if ( (unsigned __int16)v63 < *v62 )
          {
            v64 = *(_QWORD *)&v62[4 * v63 + 4];
            if ( v64 )
            {
              v65 = *(unsigned __int8 *)(v21 + 125);
              if ( v65 >= 5 )
              {
                v65 = sub_14045AD66(v61 - 27, v61, v57, v60);
                v61 = v131;
                v60 = v133;
                LODWORD(v57) = v144;
              }
              if ( v65 )
              {
                v57 = *(_QWORD *)(a1 + 192);
                v105 = v65 * *(unsigned __int8 *)(v57 + 185);
                v106 = *(_QWORD *)(v57 + 192);
                LODWORD(v57) = v144;
                v107 = v64 & *(_QWORD *)(v106 + 24LL * ((unsigned int)*(unsigned __int8 *)(v21 + 516) + v105) + 16);
                if ( v107 )
                  v64 = v107;
                v61 = v131;
              }
              if ( (v60 & v64) != 0 )
              {
                v66 = *(_QWORD *)(v21 + 104);
                if ( !v66 )
                  break;
                v85 = *(unsigned int *)(a1 + 216) + v66;
                if ( !v85 || !sub_14023BD18(v85) )
                  break;
              }
            }
          }
          v61 = (_QWORD *)*v61;
          v57 = (unsigned int)(v57 - 1);
          v144 = v57;
          v131 = v61;
          if ( v61 == v59 || !(_DWORD)v57 )
          {
            if ( !v56 || !(_DWORD)v57 )
            {
              v21 = 0LL;
              goto LABEL_87;
            }
            goto LABEL_72;
          }
        }
        if ( (*(_DWORD *)(v21 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v21 + 968), 0xFFFBFFFF);
        v67 = *(_QWORD **)(v21 + 216);
        v68 = *(_QWORD **)(v21 + 224);
        if ( v67[1] != v21 + 216 || *v68 != v21 + 216 )
          __fastfail(3u);
        *v68 = v67;
        v67[1] = v68;
        if ( v68 == v67 )
          *(_DWORD *)(a3 + 8) ^= 1 << v128;
        --*(_DWORD *)(a3 + 672);
        *(_QWORD *)(a3 + 680) -= *(unsigned int *)(v21 + 1648);
        *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
      }
LABEL_87:
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v36 = KeGetCurrentPrcb();
      v69 = *((_QWORD *)v36 + 4375);
      if ( v69 )
      {
        if ( *((_BYTE *)v36 + 32) <= 1u )
        {
          v108 = *(_DWORD *)(v69 + 24) - 1;
          *(_DWORD *)(v69 + 24) = v108;
          if ( !v108 )
            goto LABEL_199;
        }
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_1402B4E80(a2, a1) )
        goto LABEL_32;
      v23 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(v23 + 568) != qword_140D06A00 && (*(_DWORD *)(v23 + 116) & 8) == 0 )
        goto LABEL_32;
      v21 = *(_QWORD *)(a2 + 16);
      v24 = *(unsigned __int8 *)(a1 + 208);
      v25 = *(_WORD **)(v21 + 576);
      if ( (unsigned __int16)v24 < *v25 && ((*(_QWORD *)&v25[4 * v24 + 4] >> *(_BYTE *)(a1 + 209)) & 1) != 0 )
      {
        sub_14035C3FC(a2, 0LL, v22);
        *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
      }
      else
      {
        v21 = 0LL;
LABEL_32:
        v26 = *(_DWORD *)(a2 + 32472);
        if ( v26 )
        {
          v27 = *(_QWORD *)(a1 + 200);
          v28 = 64LL;
          v142 = 64;
          v130 = v27;
LABEL_34:
          _BitScanReverse(&v29, v26);
          v26 ^= 1 << v29;
          v30 = (_QWORD **)(a2 + 32576 + 16LL * v29);
          v129 = v29;
          v31 = *v30;
          while ( 1 )
          {
            v32 = (_WORD *)v31[45];
            v21 = (__int64)(v31 - 27);
            v33 = *(unsigned __int8 *)(a1 + 208);
            if ( (unsigned __int16)v33 < *v32 )
            {
              v34 = *(_QWORD *)&v32[4 * v33 + 4];
              v132 = v34;
              if ( v34 )
              {
                v35 = *(unsigned __int8 *)(v21 + 125);
                if ( v35 >= 5 )
                {
                  v35 = sub_14045AD66(v31 - 27, v28, v22, v34);
                  v34 = v132;
                  LODWORD(v28) = v142;
                  v27 = v130;
                }
                if ( v35 )
                {
                  v22 = *(_QWORD *)(a1 + 192);
                  if ( (v34 & *(_QWORD *)(*(_QWORD *)(v22 + 192)
                                        + 24LL
                                        * (*(unsigned __int8 *)(v21 + 516) + v35 * *(unsigned __int8 *)(v22 + 185))
                                        + 16)) != 0 )
                    v34 &= *(_QWORD *)(*(_QWORD *)(v22 + 192)
                                     + 24LL * (*(unsigned __int8 *)(v21 + 516) + v35 * *(unsigned __int8 *)(v22 + 185))
                                     + 16);
                  LODWORD(v28) = v142;
                }
                if ( (v27 & v34) != 0 )
                {
                  v83 = *(_QWORD *)(v21 + 104);
                  if ( !v83 )
                    break;
                  v84 = *(unsigned int *)(a1 + 216) + v83;
                  if ( !v84 || !sub_14023BD18(v84) )
                    break;
                }
              }
            }
            v31 = (_QWORD *)*v31;
            v28 = (unsigned int)(v28 - 1);
            v142 = v28;
            if ( v31 == v30 || !(_DWORD)v28 )
            {
              if ( !v26 || !(_DWORD)v28 )
              {
                v21 = 0LL;
                goto LABEL_44;
              }
              goto LABEL_34;
            }
          }
          sub_140210484(a2, (__int64)v31, v129);
          *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
        }
        else
        {
LABEL_44:
          v138 = 0;
          if ( !dword_140D06AC0
            || (v109 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
                     - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL),
                (unsigned int)((0x101010101010101LL
                              * (((v109 & 0x3333333333333333LL)
                                + ((v109 >> 2) & 0x3333333333333333LL)
                                + (((v109 & 0x3333333333333333LL) + ((v109 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= dword_140D06AC0)
            && ((v110 = *(_QWORD *)(a1 + 200), v111 = *(_QWORD *)(a1 + 34912), v110 == v111)
             || (v112 = v111 & ~v110, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v112) != 0)
             || (_BitScanForward64(&v113, v112),
                 v114 = (unsigned int)dword_140D105E0[64 * *(unsigned __int8 *)(a1 + 208) + (int)v113],
                 v138 = v114,
                 (*(_DWORD *)(qword_140D088C0[v114] + 236) & 0x400) != 0)) )
          {
            v21 = sub_140210580(a1, a2, a2 + 32560);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v36 = KeGetCurrentPrcb();
      v37 = *((_QWORD *)v36 + 4375);
      if ( v37 )
      {
        if ( *((_BYTE *)v36 + 32) <= 1u )
        {
          v115 = *(_DWORD *)(v37 + 24) - 1;
          *(_DWORD *)(v37 + 24) = v115;
          if ( !v115 )
LABEL_199:
            sub_140418E4C(v36);
        }
      }
    }
    if ( !v21 )
    {
      v38 = *(_QWORD *)(a1 + 35000);
      if ( v38 )
        *(_BYTE *)(v38 + 16) = 1;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      sub_1402B1050((__int64)KeGetCurrentPrcb(), 0);
      return v21;
    }
    if ( *(_QWORD *)(v21 + 568) != qword_140D06A00 && (*(_DWORD *)(v21 + 116) & 8) == 0 )
    {
      sub_1402F69A0(v21);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v89 = KeGetCurrentPrcb();
      v90 = *((_QWORD *)v89 + 4375);
      if ( v90 )
      {
        if ( *((_BYTE *)v89 + 32) <= 1u )
        {
          v116 = *(_DWORD *)(v90 + 24) - 1;
          *(_DWORD *)(v90 + 24) = v116;
          if ( !v116 )
          {
            sub_140418E4C(v89);
            v88 = 0LL;
          }
        }
      }
      v91 = (_QWORD *)(v21 + 216);
      v140 = v88;
      v92 = (char)v88;
      *v91 = v88;
      do
      {
        sub_1403405E0(a1, v91 - 27, &v140);
        v91 = v140;
        ++v92;
        if ( v140 )
          v140 = (_QWORD *)*v140;
        if ( (v92 & 0xF) == 0 )
          sub_140340300(a1 + 12760);
      }
      while ( v91 );
      sub_140340300(a1 + 12760);
      continue;
    }
    break;
  }
  v39 = *(char **)(a1 + 56);
  v40 = *v39;
  if ( (*(_BYTE *)(v21 + 2) & 4) != 0 )
  {
    if ( *(char *)(v21 + 195) < 16
      && *(_QWORD *)(v21 + 104)
      && (v81 = *(_QWORD *)(v21 + 104)) != 0
      && (v82 = *(unsigned int *)(a1 + 216) + v81) != 0
      && (unsigned int)sub_1402103E0(v21, v82, 0LL, 0, 0LL) )
    {
      v41 = v40 ^ (v40 ^ 1) & 0x7F;
    }
    else
    {
      v41 = v40 ^ (v40 ^ *(_BYTE *)(v21 + 195)) & 0x7F;
    }
  }
  else
  {
    v41 = v40 ^ (*(_BYTE *)(v21 + 195) ^ v40) & 0x7F;
  }
  v42 = v41 & 0x7F | (*(_BYTE *)(v21 + 119) << 7);
  *v39 = v42;
  v43 = (__int64 *)(a1 + 56);
  v44 = 0;
  if ( *(_QWORD *)(a1 + 35000) )
  {
    if ( v21 == *(_QWORD *)(a1 + 24) )
      v120 = (unsigned int)dword_140D0504C;
    else
      v120 = v42 & 0x7F;
    sub_14045B7FC(*(_QWORD *)(a1 + 35000), v120, 0LL);
    v44 = 0;
    v43 = (__int64 *)(a1 + 56);
  }
  v45 = *v43;
  if ( dword_140D068FC )
  {
    v121 = (*(_BYTE *)(v45 + 64) ^ *(_BYTE *)(v21 + 512)) & 7 ^ *(_BYTE *)(v45 + 64);
    v122 = (v121 ^ (8 * *(_BYTE *)(v21 + 516))) & 0x38 ^ v121;
    v123 = *(_DWORD *)(v21 + 80);
    if ( v123 <= *(_DWORD *)(v21 + 84) )
      v123 = *(_DWORD *)(v21 + 84);
    if ( v123 < dword_140D05308 )
      v6 = 0;
    *(_BYTE *)(v45 + 64) = v6 | v122 & 0xBF;
  }
LABEL_57:
  *(_QWORD *)(a1 + 8) = v21;
  if ( *(_BYTE *)(v21 + 388) == 1 )
    *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v21 + 388) = 2;
  if ( !v44 )
  {
    v46 = *(_BYTE *)(a1 + 209);
    v47 = *(unsigned __int8 *)(a1 + 35);
    v48 = *(_QWORD *)(a1 + 192);
    v49 = 1LL << v46;
    v143 = *(_QWORD *)(a1 + 34912);
    *(_BYTE *)(a1 + 13243) = 0;
    if ( (v47 & 1) == 0 )
    {
      v50 = v47 + 1;
      *(_BYTE *)(a1 + 35) = v50;
      v51 = KeGetCurrentPrcb();
      v141 = v51;
      v139 = 0;
      v52 = *((_QWORD *)v51 + 4375);
      if ( v52 )
      {
        if ( *((_BYTE *)v51 + 32) <= 1u )
        {
          v124 = *(_DWORD *)(v52 + 24);
          *(_DWORD *)(v52 + 24) = v124 + 1;
          if ( v124 == -1 )
            sub_140418E4C(v51);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
      {
        v79 = *((_QWORD *)v141 + 4375);
        if ( v79 )
        {
          if ( *((_BYTE *)v141 + 32) <= 1u )
          {
            v125 = *(_DWORD *)(v79 + 24) - 1;
            *(_DWORD *)(v79 + 24) = v125;
            if ( !v125 )
              sub_140418E4C(v141);
          }
        }
        do
          sub_1402F32E0(&v139);
        while ( *(_QWORD *)v48 );
        v80 = *((_QWORD *)v141 + 4375);
        if ( v80 )
        {
          if ( *((_BYTE *)v141 + 32) <= 1u )
          {
            v126 = *(_DWORD *)(v80 + 24);
            *(_DWORD *)(v80 + 24) = v126 + 1;
            if ( v126 == -1 )
              sub_140418E4C(v141);
          }
        }
      }
      if ( v50 == 1 )
        *(_QWORD *)(v48 + 8) &= ~(1LL << v46);
      *(_QWORD *)(v48 + 40) &= ~(1LL << v46);
      *(_QWORD *)(v48 + 16) &= ~v143;
      v53 = *(_QWORD *)(v48 + 24) & ~v143;
      if ( (v143 & ~*(_QWORD *)(v48 + 40)) == v49 )
        v53 |= v49;
      *(_QWORD *)(v48 + 24) = v53;
      *(_QWORD *)(v48 + 32) &= ~*(_QWORD *)(a1 + 34936);
      _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
      v54 = KeGetCurrentPrcb();
      v55 = *((_QWORD *)v54 + 4375);
      if ( v55 )
      {
        if ( *((_BYTE *)v54 + 32) <= 1u )
        {
          v127 = *(_DWORD *)(v55 + 24) - 1;
          *(_DWORD *)(v55 + 24) = v127;
          if ( !v127 )
            sub_140418E4C(v54);
        }
      }
      goto LABEL_68;
    }
LABEL_234:
    __fastfail(0x21u);
  }
LABEL_68:
  if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
    goto LABEL_234;
  return v21;
}
