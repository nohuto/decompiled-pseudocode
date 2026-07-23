/*
 * XREFs of sub_1402CA5E0 @ 0x1402CA5E0
 * Callers:
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140268520 @ 0x140268520 (sub_140268520.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

__int64 __fastcall sub_1402CA5E0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int16 a8,
        unsigned __int64 a9)
{
  __int64 v9; // r13
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r11
  _BOOL8 v19; // r8
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  int v22; // r12d
  __int64 *v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r15
  volatile LONG *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  int v36; // eax
  __int64 v37; // r9
  unsigned __int8 v38; // r10
  __int64 v39; // r9
  int *v40; // rsi
  struct _KPRCB *v41; // r14
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int i; // ecx
  unsigned __int8 *v47; // rcx
  unsigned __int8 *v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // r14d
  __int64 v52; // r15
  __int64 *v53; // r10
  __int64 v54; // r12
  int v55; // edx
  unsigned int v56; // r13d
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // r10d
  unsigned __int64 v64; // r11
  unsigned int v65; // r8d
  __int64 *v66; // r15
  unsigned int v67; // r9d
  __int64 **v68; // rcx
  BOOL v69; // eax
  unsigned int j; // edx
  unsigned int v71; // eax
  __int64 v72; // r12
  volatile signed __int64 *v73; // r14
  signed __int8 v74; // al
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  __int64 v77; // r9
  int v78; // eax
  __int64 **v79; // rax
  _QWORD *v80; // rax
  int v81; // eax
  char v82; // al
  ULONG_PTR v83; // r14
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v90; // r8
  int v91; // eax
  _DWORD *v93; // rcx
  struct _KPRCB *v94; // rcx
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // r14
  __int64 v98; // rax
  __int64 v99; // rdi
  struct _KPRCB *v100; // rcx
  __int64 v101; // rdx
  unsigned __int8 v102; // di
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r9
  __int64 v105; // r8
  int v106; // eax
  __int64 v107; // r12
  _QWORD *v108; // rcx
  _QWORD *v109; // rbx
  unsigned __int64 v110; // rcx
  char v111; // [rsp+30h] [rbp-D0h] BYREF
  char v112; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v113; // [rsp+34h] [rbp-CCh]
  __int64 v114; // [rsp+38h] [rbp-C8h]
  __int64 v115; // [rsp+40h] [rbp-C0h]
  unsigned int v116; // [rsp+48h] [rbp-B8h]
  __int64 v117; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v118; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v119; // [rsp+60h] [rbp-A0h]
  __int64 v120; // [rsp+68h] [rbp-98h]
  int v121; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v122; // [rsp+74h] [rbp-8Ch]
  __int64 v123; // [rsp+78h] [rbp-88h] BYREF
  __int64 v124; // [rsp+80h] [rbp-80h]
  __int64 v125; // [rsp+88h] [rbp-78h]
  __int64 v126; // [rsp+90h] [rbp-70h]
  int v127; // [rsp+98h] [rbp-68h] BYREF
  int v128; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int64 v129; // [rsp+A0h] [rbp-60h]
  __int64 v130; // [rsp+A8h] [rbp-58h]
  _QWORD *v131; // [rsp+B0h] [rbp-50h]
  __int64 **v132; // [rsp+B8h] [rbp-48h]
  __int64 v133; // [rsp+C0h] [rbp-40h]
  __int64 v134; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v135; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v136[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v137; // [rsp+E8h] [rbp-18h]
  __int64 v138; // [rsp+F0h] [rbp-10h]
  __int64 v139; // [rsp+F8h] [rbp-8h]
  __int64 v140; // [rsp+100h] [rbp+0h]
  void *retaddr; // [rsp+148h] [rbp+48h]
  int v145; // [rsp+170h] [rbp+70h]

  v12 = *(_QWORD *)(a1 + 16);
  v111 = 0;
  v13 = 24512LL * a5 + v12;
  v139 = 24512LL * a5;
  v120 = v13;
  if ( !*(_QWORD *)(v13 + 22608) && (dword_140D06880 & 0x30) != 0 )
    return 0LL;
  v14 = a3;
  v15 = qword_14001C780[a3];
  v16 = 4LL * a3;
  v17 = *(int *)((char *)dword_140C507C0 + v16);
  v133 = v15;
  v18 = v13 + 1072LL * a3;
  v140 = v16;
  v122 = v17;
  v19 = (a8 & 1) == 0;
  v124 = v18;
  if ( (a8 & 4) != 0 )
    v123 = 0x100000000LL;
  else
    v123 = 1LL;
  v114 = 0LL;
  v126 = 0LL;
  v131 = 0LL;
  v20 = ((a8 & 2) != 0) + 1;
  LOBYTE(v9) = 17;
  v116 = v20;
  v117 = v9;
  if ( a2 )
  {
    v130 = 0LL;
    v21 = a2 / (v15 << 12);
    v16 = a2 % (v15 << 12);
  }
  else
  {
    v130 = v13 + 16 * v14 + 22852;
    v21 = *(unsigned int *)(v16 + v130);
  }
  v129 = v21;
  v138 = v18 + 560;
  v125 = (a8 & 1) == 0;
  v137 = (int)a7;
  while ( 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = &v123;
        v24 = 0;
        do
        {
          v25 = *(int *)v23;
          if ( *(_QWORD *)(v18 + 8 * v25 + 16) || v19 && *(_QWORD *)(v18 + 8 * v25 + 32) )
            goto LABEL_46;
          ++v24;
          v23 = (__int64 *)((char *)v23 + 4);
        }
        while ( v24 < v20 );
        if ( v24 != v20 )
          break;
        if ( v22 )
        {
          v26 = (volatile LONG *)(v13 + 22848);
          if ( !*(_DWORD *)(v13 + 22788) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel(v26);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v90 = *((_QWORD *)CurrentPrcb + 4375);
                  v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                  v31 = (v91 & *(_DWORD *)(v90 + 20)) == 0;
                  *(_DWORD *)(v90 + 20) &= v91;
                  if ( v31 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8((unsigned __int8)v9);
            return 0LL;
          }
          if ( (a8 & 0x40) != 0 )
          {
            v135 = 393479LL;
            v136[1] = v136;
            v136[0] = v136;
            v134 = *(_QWORD *)(v13 + 22792);
            *(_QWORD *)(v13 + 22792) = &v134;
            ExReleaseSpinLockExclusiveFromDpcLevel(v26);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v27 = KeGetCurrentIrql();
                if ( v27 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v27 >= 2u )
                {
                  v28 = KeGetCurrentPrcb();
                  v29 = *((_QWORD *)v28 + 4375);
                  v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                  v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
                  *(_DWORD *)(v29 + 20) &= v30;
                  if ( v31 )
                    sub_140418E4C(v28);
                }
              }
            }
            __writecr8((unsigned __int8)v9);
            sub_140217454((__int64)&v135, 0x12u);
            v18 = v124;
            v22 = 0;
            v20 = v116;
            v19 = v125;
          }
          else
          {
            ExReleaseSpinLockExclusiveFromDpcLevel(v26);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v32 = KeGetCurrentIrql();
                if ( v32 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v32 >= 2u )
                {
                  v33 = KeGetCurrentPrcb();
                  v16 = -1LL << ((unsigned __int8)v9 + 1);
                  v34 = *((_QWORD *)v33 + 4375);
                  v35 = ~(unsigned __int16)v16;
                  v31 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
                  *(_DWORD *)(v34 + 20) &= v35;
                  if ( v31 )
                    sub_140418E4C(v33);
                }
              }
            }
            __writecr8((unsigned __int8)v9);
            if ( a9 || (_BYTE)v9 != 2 )
              return 0LL;
            v36 = *(_DWORD *)(v13 + 22788);
            v127 = 0;
            if ( v36 )
            {
              do
                sub_1402F32E0(&v127);
              while ( *(_DWORD *)(v13 + 22788) );
            }
            v18 = v124;
            v22 = 0;
            v20 = v116;
            v19 = v125;
          }
        }
        else
        {
          if ( (a8 & 0x40) == 0 )
            return 0LL;
          v22 = 1;
          v9 = KeGetCurrentIrql();
          v117 = v9;
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v9 <= 0xFu )
          {
            v37 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v37 + 20) |= ~((unsigned __int8)(1LL << ((unsigned __int8)v9 + 1)) - 1) & 4;
          }
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 22848));
          v18 = v124;
          v20 = v116;
          v19 = v125;
        }
      }
LABEL_46:
      if ( v22 )
        break;
      v22 = 1;
      v38 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v38 <= 0xFu )
      {
        v39 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v16 = (-1LL << (v38 + 1)) & 4;
        *(_DWORD *)(v39 + 20) |= v16;
      }
      v40 = (int *)(v13 + 22848);
      LOBYTE(v9) = v38;
      v117 = v38;
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        LOBYTE(v16) = -1;
        sub_140461A66(v40, v16);
      }
      else
      {
        v121 = 0;
        v41 = KeGetCurrentPrcb();
        v42 = *((_QWORD *)v41 + 4375);
        if ( v42 )
        {
          if ( *((_BYTE *)v41 + 32) <= 1u )
          {
            v43 = *(_DWORD *)(v42 + 24);
            *(_DWORD *)(v42 + 24) = v43 + 1;
            if ( v43 == -1 )
              sub_140418E4C(v41);
          }
        }
        if ( _interlockedbittestandset(v40, 0x1Fu) )
        {
          v44 = *((_QWORD *)v41 + 4375);
          if ( v44 )
          {
            if ( *((_BYTE *)v41 + 32) <= 1u )
            {
              v45 = *(_DWORD *)(v44 + 24) - 1;
              *(_DWORD *)(v44 + 24) = v45;
              if ( !v45 )
                sub_140418E4C(v41);
            }
          }
          v121 = sub_140220C30(v40, 0xFFu);
        }
        for ( i = *v40; (*v40 & 0xBFFFFFFF) != 0x80000000; i = *v40 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v40, 0x40000000u);
          sub_1402F32E0(&v121);
        }
      }
      v18 = v124;
      v13 = v120;
      if ( *(_QWORD *)(v124 + 8 * v25 + 16) )
        break;
      v19 = v125;
      v20 = v116;
      if ( v125 == 1 )
      {
        if ( *(_QWORD *)(v124 + 8 * v25 + 32) )
          break;
      }
    }
    if ( a6 == 4 )
    {
      v48 = (unsigned __int8 *)(v13 + 22821);
      v47 = (unsigned __int8 *)(v13 + 22821 + (unsigned int)dword_140D05004);
    }
    else
    {
      v111 = a6;
      v47 = (unsigned __int8 *)&v112;
      v48 = (unsigned __int8 *)&v111;
    }
    v118 = v47;
    v119 = v48;
LABEL_74:
    v49 = *v48;
    v50 = 0LL;
    v113 = v49;
    v115 = 0LL;
LABEL_75:
    v51 = 0;
    v52 = v49;
    v53 = &v123;
LABEL_76:
    v55 = 0;
    v56 = a7;
    v57 = v137;
    v145 = *(_DWORD *)v53;
    v54 = *(int *)v53;
    v58 = 4 * (v52 + 4 * (v54 + 2 * v50));
    while ( 1 )
    {
      v59 = v57;
      v60 = *(_QWORD *)(v18 + 8 * (v58 + v57) + 560);
      if ( *(_QWORD *)(v18 + 8 * (v58 + v57) + 48) )
        break;
      v61 = v57 + 1;
      v57 = 0LL;
      if ( v59 != 3 )
        v57 = v61;
      v62 = v56 + 1;
      v56 = 0;
      if ( v59 != 3 )
        v56 = v62;
      if ( (unsigned int)++v55 > 3 )
      {
        v50 = v115;
        ++v51;
        v53 = (__int64 *)((char *)v53 + 4);
        if ( v51 < v116 )
          goto LABEL_76;
        v49 = v113;
        v50 = v115 + 1;
        v145 = v54;
        v115 = v50;
        if ( v50 <= v125 )
          goto LABEL_75;
        v48 = v119 + 1;
        v115 = v50;
        v119 = v48;
        if ( v48 != v118 )
          goto LABEL_74;
        break;
      }
    }
    v63 = v122;
    v64 = a9;
    v65 = (unsigned int)v129 % v122;
    LODWORD(v118) = (unsigned int)v129 % v122;
    v66 = (__int64 *)(v60 + 24LL * ((unsigned int)v129 % v122));
    v67 = v113;
    v68 = (__int64 **)(v138 + 8 * (v57 + 4 * (v113 + 4 * (v54 + 2 * v115))));
    v132 = v68;
    v69 = a9 == 0;
LABEL_87:
    LODWORD(v119) = v69;
LABEL_88:
    for ( j = 0; j < v63; LODWORD(v118) = v65 )
    {
      if ( (__int64 *)*v66 != v66 )
      {
        if ( v69 || v114 )
          goto LABEL_103;
        if ( (*(_BYTE *)(v66[1] + 34) & 8) == 0 )
          goto LABEL_104;
        v68 = v132;
      }
      v71 = v65 + 1;
      if ( v65 + 1 == v63 )
        v66 = *v68;
      else
        v66 += 3;
      v65 = 0;
      ++j;
      if ( v71 != v63 )
        v65 = v71;
      v69 = (int)v119;
    }
    if ( j == v63 )
      break;
LABEL_103:
    v72 = v114;
    if ( !v114 )
LABEL_104:
      v72 = v66[1];
    v73 = (volatile signed __int64 *)(v72 + 24);
    v74 = _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL);
    if ( v126 )
    {
      if ( v74 )
        goto LABEL_168;
LABEL_119:
      if ( v64 )
      {
        v72 = v66[1];
        v79 = *(__int64 ***)(v72 + 8);
        if ( *(__int64 **)v72 != v66
          || *v79 != (__int64 *)v72
          || (v66[1] = (__int64)v79, *v79 = v66, v80 = (_QWORD *)*v66, *(__int64 **)(*v66 + 8) != v66) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v72 = v80;
        *(_QWORD *)(v72 + 8) = v66;
        v80[1] = v72;
        *v66 = v72;
        if ( !(unsigned int)sub_140268520(v64, v72, 0LL) )
        {
LABEL_124:
          _InterlockedAnd64(v73, 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_168;
        }
      }
      else
      {
        if ( !(unsigned int)sub_1402CB2D0(v120, v72, a3, v67, a8) )
          goto LABEL_124;
        if ( (a8 & 0x80u) != 0 )
          ++*(_DWORD *)(v139 + *(_QWORD *)(a1 + 16) + 22788);
        *(_QWORD *)v72 = 0LL;
      }
      if ( !v72 )
        goto LABEL_124;
      if ( v126 )
        *v131 = v72;
      else
        v126 = v72;
      v81 = (_DWORD)v118 + 1;
      LODWORD(v118) = (_DWORD)v118 + 1;
      if ( v130 )
        *(_DWORD *)(v140 + v130) = v81;
      v82 = --a4;
      if ( !a4 || (v82 & 0xF) == 0 && KeShouldYieldProcessor() )
        goto LABEL_168;
      v114 = v72 + 48 * v133;
      v83 = 0xAAAAAAAAAAAAAAABuLL * ((v114 + 0x220000000000LL) >> 4);
      if ( v83 > qword_140C50840
        || (*(_QWORD *)(16 * ((v72 + 48 * v133 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        goto LABEL_151;
      }
      v84 = sub_140235E10(v72 + 48 * v133);
      v85 = v145;
      if ( v84 != a3 )
      {
        v67 = v113;
        v114 = 0LL;
        goto LABEL_154;
      }
      if ( (*(_BYTE *)(v114 + 34) & 7) != v145 )
      {
        v67 = v113;
        v114 = 0LL;
        goto LABEL_154;
      }
      if ( *((_DWORD *)sub_1402C1550(v83) + 2) == a5
        && *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v114 + 40) >> 43) & 0x3FFLL)) == a1 )
      {
        v86 = sub_1402E8990(v114);
        v67 = v113;
        if ( v86 == v113 && *(unsigned __int8 *)(v114 + 34) >> 6 == v56 )
        {
          if ( v83 >= 0x100000 )
          {
            v87 = v115;
            v85 = v145;
            if ( v115 )
              v114 = 0LL;
            goto LABEL_155;
          }
LABEL_153:
          v85 = v145;
LABEL_154:
          v87 = v115;
LABEL_155:
          v65 = (unsigned int)v118;
          v63 = v122;
          if ( (_DWORD)v118 == v122 )
          {
            v64 = a9;
            v65 = 0;
            LODWORD(v118) = 0;
            v131 = (_QWORD *)v72;
            v66 = *(__int64 **)(v124 + 8 * (v57 + 4 * (v67 + 4 * (v85 + 2 * v87))) + 560);
            v69 = (int)v119;
            v68 = v132;
          }
          else
          {
            v69 = (int)v119;
            v66 += 3;
            v68 = v132;
            v64 = a9;
            v131 = (_QWORD *)v72;
          }
          goto LABEL_88;
        }
      }
      else
      {
LABEL_151:
        v67 = v113;
      }
      v114 = 0LL;
      goto LABEL_153;
    }
    if ( !v74 )
      goto LABEL_119;
    v13 = v120;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v120 + 22848));
    v128 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v73, 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v128);
      while ( *(__int64 *)v73 < 0 );
    }
    _InterlockedAnd64(v73, 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v9) = v117;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v75 = KeGetCurrentIrql();
        if ( v75 <= 0xFu && (unsigned __int8)v117 <= 0xFu && v75 >= 2u )
        {
          v76 = KeGetCurrentPrcb();
          v16 = -1LL << ((unsigned __int8)v117 + 1);
          v77 = *((_QWORD *)v76 + 4375);
          v78 = ~(unsigned __int16)v16;
          v31 = (v78 & *(_DWORD *)(v77 + 20)) == 0;
          *(_DWORD *)(v77 + 20) &= v78;
          if ( v31 )
            sub_140418E4C(v76);
        }
      }
    }
    __writecr8((unsigned __int8)v9);
    v18 = v124;
    v20 = v116;
    v19 = v125;
  }
  if ( !v69 )
  {
    v69 = 1;
    goto LABEL_87;
  }
LABEL_168:
  v93 = (_DWORD *)(v120 + 22848);
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(v93, retaddr);
  else
    *v93 = 0;
  v94 = KeGetCurrentPrcb();
  v95 = *((_QWORD *)v94 + 4375);
  if ( v95 )
  {
    if ( *((_BYTE *)v94 + 32) <= 1u )
    {
      v96 = *(_DWORD *)(v95 + 24) - 1;
      *(_DWORD *)(v95 + 24) = v96;
      if ( !v96 )
        sub_140418E4C(v94);
    }
  }
  v97 = v126;
  v98 = v126;
  if ( !v126 )
  {
LABEL_186:
    v102 = v117;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v103 = KeGetCurrentIrql();
        if ( v103 <= 0xFu && (unsigned __int8)v117 <= 0xFu && v103 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v105 = *((_QWORD *)v104 + 4375);
          v106 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v117 + 1));
          v31 = (v106 & *(_DWORD *)(v105 + 20)) == 0;
          *(_DWORD *)(v105 + 20) &= v106;
          if ( v31 )
            sub_140418E4C(v104);
        }
      }
    }
    __writecr8(v102);
    if ( v97 )
      goto LABEL_194;
    return v97;
  }
  while ( 2 )
  {
    if ( a9 )
    {
      v99 = 0LL;
LABEL_178:
      _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v100 = KeGetCurrentPrcb();
          v101 = *((_QWORD *)v100 + 4375);
          v31 = (*(_DWORD *)(v101 + 20) & 0xFFFF0007) == 0;
          *(_DWORD *)(v101 + 20) &= 0xFFFF0007;
          if ( v31 )
            sub_140418E4C(v100);
        }
      }
      __writecr8(2uLL);
    }
    else
    {
      v99 = *(_QWORD *)v98;
      if ( !*(_QWORD *)v98 )
        goto LABEL_178;
      _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v98 = v99;
    if ( v99 )
      continue;
    break;
  }
  v97 = v126;
  if ( (a8 & 0x80u) == 0 )
    goto LABEL_186;
LABEL_194:
  if ( (a8 & 0x100) == 0 && a7 != *(unsigned __int8 *)(v97 + 34) >> 6 )
  {
    v107 = v133;
    v108 = (_QWORD *)v97;
    while ( !a9 )
    {
      v109 = (_QWORD *)*v108;
      sub_14026873C(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v108 + 0x44000000000LL) >> 4), v107, a7);
      v108 = v109;
      if ( !v109 )
        return v97;
    }
    v110 = (__int64)((unsigned __int128)((__int64)(v108 + 0x44000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    sub_14026873C((v110 >> 63) + v110, v107, a7);
  }
  return v97;
}
