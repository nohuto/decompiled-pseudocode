/*
 * XREFs of sub_14020F360 @ 0x14020F360
 * Callers:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 * Callees:
 *     sub_140210110 @ 0x140210110 (sub_140210110.c)
 *     sub_140210130 @ 0x140210130 (sub_140210130.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_140229CA0 @ 0x140229CA0 (sub_140229CA0.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_140253F34 @ 0x140253F34 (sub_140253F34.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_14039F200 @ 0x14039F200 (sub_14039F200.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 *     sub_140571910 @ 0x140571910 (sub_140571910.c)
 *     sub_140573A80 @ 0x140573A80 (sub_140573A80.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062E258 @ 0x14062E258 (sub_14062E258.c)
 *     sub_14062E8B8 @ 0x14062E8B8 (sub_14062E8B8.c)
 */

bool __fastcall sub_14020F360(__int64 a1, unsigned __int8 a2, char a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // r15d
  char v16; // bl
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned __int8 v29; // al
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int v42; // edx
  unsigned __int8 v43; // al
  unsigned __int64 *v44; // rdx
  unsigned __int64 v45; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v47; // rcx
  bool v48; // zf
  char v49; // r9
  unsigned int v50; // eax
  unsigned __int8 v51; // bl
  char v52; // di
  unsigned __int8 v53; // dl
  char v54; // cl
  unsigned int v55; // eax
  struct _KPRCB *v56; // rcx
  char v57; // r9
  unsigned __int8 v58; // r10
  int v59; // ecx
  int v60; // edi
  char v61; // al
  __int64 v62; // r8
  char v63; // bl
  int v64; // ebx
  struct _KPRCB *v65; // rdi
  __int64 v66; // rdx
  int v67; // ebx
  unsigned __int64 v68; // r11
  signed int v69; // r12d
  unsigned int v70; // ecx
  int v71; // r15d
  unsigned int v72; // edi
  bool v73; // cc
  unsigned int v74; // ebx
  __int64 v75; // r8
  unsigned int v76; // r9d
  _WORD *v77; // rdx
  __int64 v78; // rax
  int v79; // eax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  _BYTE *v82; // rbx
  char v83; // cl
  char v84; // al
  __int64 v85; // rcx
  __int64 v86; // r8
  char v87; // di
  __int64 v88; // rcx
  _QWORD *v89; // rax
  struct _KPRCB *v90; // rcx
  __int64 v91; // rdx
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r8
  __int64 v96; // rcx
  char v97; // al
  unsigned int v98; // r10d
  unsigned __int64 v99; // rcx
  volatile signed __int32 *v100; // r15
  __int64 *v101; // rax
  __int64 **v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  char v106; // dl
  char v107; // al
  char v108; // cl
  __int64 v109; // rbx
  __int64 v110; // rbx
  unsigned int v111; // edx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  unsigned int v116; // r9d
  int v117; // ecx
  unsigned int v118; // edx
  __int64 v119; // r8
  __int64 v120; // rax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // r10d
  int v126; // ebx
  char *v127; // rcx
  char v128; // al
  char *v129; // rcx
  char v130; // al
  char v131; // al
  int v132; // r15d
  unsigned int v133; // edi
  unsigned __int64 *v134; // rdx
  __int64 v135; // rdx
  unsigned int v136; // edx
  char v137; // al
  char v138; // al
  char v139; // cl
  int v140; // eax
  int v141; // [rsp+30h] [rbp-48h] BYREF
  int v142; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v143; // [rsp+38h] [rbp-40h]
  int v144; // [rsp+40h] [rbp-38h]
  int v145; // [rsp+44h] [rbp-34h] BYREF
  int v146; // [rsp+48h] [rbp-30h]
  int v147; // [rsp+4Ch] [rbp-2Ch] BYREF
  _QWORD *v148; // [rsp+50h] [rbp-28h] BYREF
  __int64 v149; // [rsp+58h] [rbp-20h] BYREF
  __int64 v150; // [rsp+60h] [rbp-18h]
  unsigned __int64 v151; // [rsp+68h] [rbp-10h]
  __int64 v152; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v155; // [rsp+D8h] [rbp+60h]

  v3 = *(_QWORD **)(a1 + 11528);
  if ( v3 )
    *(_QWORD *)(a1 + 11528) = *v3;
  if ( (WORD2(xmmword_140D06900) & 0x200) != 0 )
    sub_14062E258(v3 - 27, 1LL, a2);
  v5 = *(v3 - 14);
  v6 = *(_QWORD *)(a1 + 8);
  v141 = 0;
  v142 = 0;
  v150 = v5;
  if ( v5 )
  {
    v93 = *(unsigned int *)(a1 + 216);
    v48 = v93 + v5 == 0;
    v94 = v93 + v5;
    v150 = v94;
    if ( !v48 )
    {
      v95 = v94;
      if ( *((char *)v3 - 21) < 16
        && (*(_DWORD *)(v3 - 12) & 0x200) == 0
        && !*((_DWORD *)v3 + 67)
        && *((_BYTE *)v3 + 174) != 1 )
      {
        v96 = v94;
        do
        {
          if ( (*(_BYTE *)(v96 + 112) & 2) != 0 )
          {
            v141 = -1;
            goto LABEL_213;
          }
          v96 = *(_QWORD *)(v96 + 408);
        }
        while ( v96 );
        while ( !*(_DWORD *)(v95 + 116) )
        {
          v95 = *(_QWORD *)(v95 + 408);
          if ( !v95 )
          {
            v141 = 0;
            goto LABEL_6;
          }
        }
        v141 = *(_DWORD *)(v95 + 116);
LABEL_213:
        v109 = *(_QWORD *)(v6 + 104);
        if ( v109 )
        {
          v110 = *(unsigned int *)(a1 + 216) + v109;
          if ( v110 )
          {
            v142 = sub_1402103E0(v6, v110, v95, 1, 0LL);
            if ( v142 )
              sub_140253F34(v94, v110, &v141, &v142);
          }
        }
      }
    }
  }
LABEL_6:
  v7 = (__int64 *)*(v3 - 1);
  v8 = &v7[6 * *((unsigned __int8 *)v3 + 371)];
  do
  {
    if ( *((_BYTE *)v7 + 17) < 5u )
    {
      v100 = (volatile signed __int32 *)v7[4];
      sub_1402F3290(v100);
      if ( *((_BYTE *)v7 + 17) == 4 )
      {
        v101 = (__int64 *)*v7;
        v102 = (__int64 **)v7[1];
        if ( *(__int64 **)(*v7 + 8) != v7 || *v102 != v7 )
          __fastfail(3u);
        *v102 = v101;
        v101[1] = (__int64)v102;
      }
      _InterlockedAnd(v100, 0xFFFFFF7F);
    }
    v7 += 6;
  }
  while ( v7 != v8 );
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v9 = __rdtsc();
  v10 = v9 - *(_QWORD *)(a1 + 33152);
  v11 = v10 + *(_QWORD *)(v6 + 72);
  *(_QWORD *)(v6 + 72) = v11;
  v12 = v10 * *(unsigned int *)(a1 + 33208);
  v151 = v11;
  v13 = v12 >> 16;
  v14 = v13 + *(unsigned int *)(v6 + 80);
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  *(_QWORD *)(a1 + 33152) = v9;
  v15 = 3;
  v16 = *(_BYTE *)(v6 + 2);
  *(_DWORD *)(v6 + 80) = v14;
  if ( (v16 & 0xBE) != 0 )
  {
    if ( v16 < 0 )
    {
      v17 = *(_QWORD *)(a1 + 34480);
      v18 = (*(_QWORD *)(*(_QWORD *)(v6 + 544) + 1024LL) >> 4) & 0x1FFLL;
      v19 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v6 + 544) + 1024LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v20, v19);
      v21 = 1 << v20;
      v22 = v20 - 2;
      v144 = v22;
      v13 = *(_QWORD *)(v17 + 8 * v22);
      v23 = *(_QWORD *)(v13 + 8LL * (v19 ^ v21) + 8);
      *(_QWORD *)(v23 + 8 * v18) += v10;
      v16 &= ~0x80u;
    }
    if ( (v16 & 0x10) != 0 )
    {
      v112 = a1 + 8LL * *(unsigned __int8 *)(v6 + 124);
      v13 = v10 + *(_QWORD *)(v112 + 33160);
      *(_QWORD *)(v112 + 33160) = v13;
      v16 &= ~0x10u;
    }
    if ( (v16 & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(v6 + 1608);
      if ( v24 )
      {
        v25 = *(_QWORD *)(a1 + 33968);
        v26 = *(_QWORD *)(a1 + 33976);
        if ( !v25 || !v26 )
          goto LABEL_24;
        if ( *(_BYTE *)(v26 + 100) )
        {
          v27 = *(_DWORD *)(v26 + 116);
        }
        else
        {
          v27 = *(_DWORD *)(v26 + 72);
          if ( v27 >= *(_DWORD *)(v25 + 512) )
            v27 = *(_DWORD *)(v25 + 512);
        }
        if ( v27 < 0x4B )
          v28 = v27 / 0x19;
        else
LABEL_24:
          v28 = 3;
        if ( dword_140D068FC )
          v29 = *(_BYTE *)(a1 + 34056);
        else
          v29 = *(_BYTE *)(a1 + 34059);
        v30 = v28;
        v31 = v29;
        v32 = v29 + 2LL * v28;
        v33 = *(_QWORD *)(v24 + 8 * v32);
        v34 = (_QWORD *)(v24 + 8 * v32);
        v35 = dword_140C2A820;
        *v34 = v10 + v33;
        v13 = *(unsigned int *)(v24 + 192);
        if ( v35 > (unsigned int)v13 )
        {
          LODWORD(v152) = v35;
          v111 = v35 - v13;
          if ( v35 - (unsigned int)v13 >= 0x20 )
          {
            HIDWORD(v152) = 1;
          }
          else
          {
            v13 = v111;
            HIDWORD(v152) = (*(_DWORD *)(v24 + 196) << v111) | 1;
          }
          *(_QWORD *)(v24 + 192) = v152;
        }
        else
        {
          v13 = (unsigned int)v13 - v35;
          if ( (unsigned int)v13 < 0x20 )
            *(_DWORD *)(v24 + 196) |= 1 << v13;
        }
        if ( !dword_140D06C30 )
        {
          v36 = (unsigned __int8)*(_DWORD *)(v6 + 512);
          if ( v36 == 2 || v36 == 5 )
          {
            v13 = v10 + *(_QWORD *)(v24 + 16 * v30 + 8);
            *(_QWORD *)(v24 + 16 * v30 + 8) = v13;
          }
        }
        if ( *(_QWORD *)(v6 + 1552) )
        {
          *(_QWORD *)(v24 + 8 * (v31 + 2 * (v30 + 8))) += v10;
          v13 = v31 + 2 * (v30 + 4);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 1552) + 1608LL) + 8 * v13),
            v10);
        }
      }
      v16 &= ~0x20u;
    }
    if ( (v16 & 0x40) != 0 )
    {
      v115 = *(_QWORD *)(v6 + 968);
      if ( v115 )
        *(_BYTE *)(v115 + 64) = 0;
    }
    if ( byte_140D068F8 )
      sub_140575600(a1, v6, v10, 0LL);
    v37 = *(_QWORD *)(a1 + 33200);
    if ( v37 )
    {
      if ( *(_BYTE *)(v6 + 125) )
      {
        v116 = (unsigned __int8)*(_DWORD *)(v6 + 512);
        if ( v116 < 6 )
        {
          v117 = 0;
          v118 = *(_DWORD *)(v6 + 80);
          if ( v118 <= *(_DWORD *)(v6 + 84) )
            v118 = *(_DWORD *)(v6 + 84);
          LOBYTE(v117) = v118 >= dword_140D05308;
          v13 = *(unsigned __int8 *)(v6 + 516) + (unsigned int)dword_140D05350 * (v117 + 2 * v116);
          *(_QWORD *)(v37 + 8 * v13) += v10;
        }
      }
    }
    if ( (v16 & 0xBE) != 0 )
    {
      v13 = *(_QWORD *)(v6 + 104);
      if ( v13 )
      {
        for ( v13 += *(unsigned int *)(a1 + 216); v13; v13 = *(_QWORD *)(v13 + 408) )
          *(_QWORD *)v13 += v10;
      }
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        v119 = *(_QWORD *)(a1 + 192);
        v13 = *(unsigned __int16 *)(v119 + 136);
        if ( (*(_QWORD *)(v119 + 128) & *(_QWORD *)(*(_QWORD *)(v6 + 576) + 8 * v13 + 8)) != *(_QWORD *)(v119 + 128) )
          *(_QWORD *)(a1 + 33192) += v10;
      }
      if ( *(_QWORD *)(v6 + 360) )
        sub_140571910(v6);
    }
  }
  v38 = __rdtsc();
  v39 = v38 - *(_QWORD *)(a1 + 33152);
  *(_QWORD *)(a1 + 33400) += v39;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 33968);
    v41 = *(_QWORD *)(a1 + 33976);
    if ( v40 && v41 )
    {
      if ( *(_BYTE *)(v41 + 100) )
      {
        v42 = *(_DWORD *)(v41 + 116);
      }
      else
      {
        v42 = *(_DWORD *)(v41 + 72);
        if ( v42 >= *(_DWORD *)(v40 + 512) )
          v42 = *(_DWORD *)(v40 + 512);
      }
      if ( v42 < 0x4B )
        v15 = v42 / 0x19;
    }
    if ( dword_140D068FC )
      v43 = *(_BYTE *)(a1 + 34056);
    else
      v43 = *(_BYTE *)(a1 + 34059);
    v44 = (unsigned __int64 *)(a1 + 8 * (v43 + 2 * (v15 + 2088LL)));
    v13 = v39 + *v44;
    *v44 = v13;
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x40) != 0 )
  {
    v120 = *(_QWORD *)(v6 + 968);
    if ( v120 )
      *(_BYTE *)(v120 + 64) = 1;
  }
  *(_QWORD *)(a1 + 33152) = v38;
  if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
    sub_140571770(v6, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a1 + 6) )
  {
    LOBYTE(v13) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v13);
  }
  _enable();
  v45 = *(v3 - 18);
  CurrentPrcb = KeGetCurrentPrcb();
  v155 = *(_QWORD *)(v6 + 32);
  v143 = v45;
  v47 = *((_QWORD *)CurrentPrcb + 4375);
  v145 = 0;
  if ( v47 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v121 = *(_DWORD *)(v47 + 24);
      *(_DWORD *)(v47 + 24) = v121 + 1;
      if ( v121 == -1 )
LABEL_252:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v3 - 38, 0LL) )
  {
    v113 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v113 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v122 = *(_DWORD *)(v113 + 24) - 1;
        *(_DWORD *)(v113 + 24) = v122;
        if ( !v122 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v145);
    while ( *(v3 - 19) );
    v114 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v114 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v123 = *(_DWORD *)(v114 + 24);
        *(_DWORD *)(v114 + 24) = v123 + 1;
        if ( v123 == -1 )
          goto LABEL_252;
      }
    }
  }
  v48 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
  v149 = 0LL;
  if ( v48 )
  {
    v49 = 0;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)v3[94], 0x100000u);
    v124 = sub_140577654(v3 - 27, &v149);
    v125 = *((_DWORD *)v3 + 202);
    v126 = v124;
    if ( v124 != v125 )
    {
      v127 = (char *)v3 + (char)v124;
      v128 = v127[608];
      if ( v128 == -1 )
        KeBugCheckEx(0x157u, (ULONG_PTR)(v3 - 27), (char)v126, 1uLL, 0LL);
      v127[608] = v128 + 1;
      *((_DWORD *)v3 + 160) |= 1 << v126;
      if ( v125 != 32 )
      {
        v129 = (char *)v3 + (char)v125;
        v130 = v129[608];
        if ( !v130 )
          KeBugCheckEx(0x157u, (ULONG_PTR)(v3 - 27), (char)v125, 2uLL, 0LL);
        v131 = v130 - 1;
        v129[608] = v131;
        if ( !v131 )
          *((_DWORD *)v3 + 160) ^= 1 << v125;
      }
      *((_DWORD *)v3 + 202) = v126;
    }
    v132 = *((char *)v3 - 21);
    v133 = (char)sub_140573A80(v3 - 27, (unsigned __int8)v126);
    if ( v133 != v132 )
    {
      sub_1402EC3E4(v3 - 27, 0LL, 0LL);
      sub_140291010(0LL, v3 - 27, v133, 0LL);
    }
    if ( (*(_DWORD *)(v3 - 12) & 0x400000) != 0 )
      _InterlockedAnd((volatile signed __int32 *)v3[94], 0xFFEFFFFF);
    if ( v132 != v133 && (BYTE4(xmmword_140D06910) & 0x20) != 0 )
      sub_14062E8B8((_DWORD)v3 - 216, v132, v126, v133, (__int64)&v149);
    v49 = 1;
  }
  if ( *((char *)v3 - 21) >= 16 )
  {
    v63 = 1;
    goto LABEL_93;
  }
  v50 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)v3 + 55);
  if ( v143 < *(v3 - 23) )
  {
    v51 = 0;
    if ( *((char *)v3 + 347) < 14 && (v50 < 2 || *((_BYTE *)v3 + 348)) )
      goto LABEL_77;
  }
  else
  {
    v51 = 4;
    if ( v50 < 2 )
      v51 = 5;
  }
  v52 = *((_BYTE *)v3 - 21);
  v51 |= 8u;
  if ( v52 < 16 )
  {
    if ( (dword_140D068EC & 0x8000) != 0
      && *(_BYTE *)(v3[41] + 1850LL) == 2
      && (v39 = *((unsigned __int8 *)v3 + 348), v106 = v39 & 0xF, (v39 & 0xF) != 0 && (*(_DWORD *)(v3 - 12) & 8) == 0) )
    {
      v107 = v106 + *((_BYTE *)v3 + 347);
      *((_BYTE *)v3 + 348) = v106;
      v108 = v52 - ((unsigned __int8)v39 >> 4) - 1;
      v52 = v107;
      if ( v108 >= v107 )
        v52 = v108;
    }
    else
    {
      v53 = *((_BYTE *)v3 + 348);
      v54 = *((_BYTE *)v3 + 347);
      if ( (char)(v52 - (v53 >> 4) - (v53 & 0xF) - 1) >= v54 )
        v54 = v52 - (*((_BYTE *)v3 + 348) >> 4) - (*((_BYTE *)v3 + 348) & 0xF) - 1;
      v52 = v54;
      if ( v53 )
      {
        if ( (v53 & 0xF) != 0 )
          *((_DWORD *)v3 + 164) = MEMORY[0xFFFFF78000000320];
        *((_BYTE *)v3 + 348) = 0;
      }
    }
  }
  v55 = *((_DWORD *)v3 + 160);
  v146 = 0;
  if ( v55 )
  {
    _BitScanReverse((unsigned int *)&v39, v55);
    if ( v52 < (int)v39 )
      v52 = v39;
    v146 = v39;
  }
  if ( !v49 )
  {
    v56 = KeGetCurrentPrcb();
    if ( v52 > *((char *)v3 - 21) )
    {
      if ( *((_BYTE *)v3 + 577) )
      {
        v39 = (unsigned __int64)(v3 + 74);
        if ( v3[74] == 1LL )
        {
          v134 = (unsigned __int64 *)((char *)v56 + 35704);
          if ( v56 != (struct _KPRCB *)-35704LL )
          {
            *(_QWORD *)v39 = *v134;
            *v134 = v39;
            _InterlockedIncrement16((volatile signed __int16 *)v3 + 326);
            sub_140229D30(v56);
          }
        }
      }
    }
    v48 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
    *((_BYTE *)v3 - 21) = v52;
    if ( !v48 )
    {
      LOBYTE(v39) = 1;
      sub_14045B7FC(v3[94], (unsigned int)v52, v39);
    }
  }
LABEL_77:
  if ( *(_BYTE *)(v3[41] + 1850LL) == 2 )
    v51 |= 2u;
  v45 = *((unsigned int *)v3 - 24);
  if ( ((unsigned __int8)~v51 & ((v45 & 8) == 0)) == 0 || *((char *)v3 - 21) <= 0 )
    goto LABEL_91;
  v57 = *((_BYTE *)v3 + 348);
  if ( v57 )
  {
    if ( (v57 & 0xF0) == 0 && (v51 & 2) != 0 )
    {
      v58 = a2;
      v45 = (unsigned int)*((char *)v3 + 347);
      v59 = v45 + (char)a2;
      v60 = v59;
      goto LABEL_195;
    }
LABEL_91:
    if ( (dword_140D068EC & 0x8000) == 0 && (v51 & 6) == 6 && (v45 & 8) == 0 && *((char *)v3 - 21) > 0 )
      sub_14039F200(v3 - 27);
    goto LABEL_92;
  }
  v45 = (unsigned int)*((char *)v3 + 347);
  v58 = a2;
  v59 = v45 + (char)a2;
  v60 = v59;
  if ( (v51 & 2) != 0 )
LABEL_195:
    v60 += (char)dword_140D06AB0;
  if ( v60 >= 16 )
    v60 = 15;
  if ( v60 > *((char *)v3 - 21) )
  {
    v61 = 0;
    if ( v60 > v59 )
      v61 = v60 - v58 - v45;
    *((_BYTE *)v3 + 348) = v57 ^ (v57 ^ v61) & 0xF;
    sub_140229CA0(v3 - 27, (unsigned __int8)v60, 1LL);
    v48 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
    *((_BYTE *)v3 - 21) = v60;
    if ( !v48 )
    {
      LOBYTE(v62) = 1;
      sub_14045B7FC(v3[94], (unsigned int)(char)v60, v62);
    }
  }
LABEL_92:
  v63 = v51 >> 3;
LABEL_93:
  v64 = 32 * (v63 & 1);
  if ( v3[44] != qword_140D06A00 && (*((_DWORD *)v3 - 25) & 8) == 0 )
    sub_140292884(v3 - 27);
  v65 = KeGetCurrentPrcb();
  v147 = 0;
  while ( 1 )
  {
    LOBYTE(v45) = 1;
    sub_1402B1050(v65, v45);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    sub_1402B1050(v65, 0LL);
    do
      sub_1402F32E0(&v147);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v67 = v64 | 0xF;
  v68 = v155;
  v69 = *((char *)v3 - 21);
  v70 = v67 & 0xFFFFFFFA;
  v71 = *(char *)(v6 + 195);
  if ( v151 + (unsigned int)dword_140D06B98 <= v155 )
    v70 = v67;
  v72 = v70 & 0xFFFFFFF3;
  if ( a3 )
    v72 = v70;
  if ( v69 > v71 )
  {
    v72 &= ~1u;
    *(_BYTE *)(v6 + 565) = 1;
  }
  else
  {
    if ( (v72 & 4) == 0 )
    {
      if ( (v72 & 8) == 0 )
      {
        v71 = 0;
LABEL_104:
        v73 = v71 < v69;
        goto LABEL_105;
      }
      LOBYTE(v66) = 1;
      v97 = sub_1402BA000(v6, v66, 0LL);
      v68 = v155;
      v71 = v97;
    }
    if ( v71 < 16 )
      goto LABEL_104;
    if ( v69 < 16 )
    {
      v71 = 15;
      goto LABEL_104;
    }
    v73 = v71 < v69;
    if ( v71 <= v69 )
    {
LABEL_105:
      if ( !v73 )
        goto LABEL_107;
    }
  }
  v71 = v69;
LABEL_107:
  v74 = v72 & 0xFFFFFFFD;
  if ( !*(_QWORD *)(a1 + 16) )
    v74 = v72;
  LODWORD(v75) = 1 << v69;
  v76 = *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 8LL) | *(_DWORD *)(a1 + 32472);
  if ( (v74 & 1) == 0 )
  {
    v98 = v74 & 0xFFFFFFFD;
    if ( (unsigned int)v75 > v76 )
      v98 = v74;
    v74 = v98;
    if ( v141 && (v76 > 1 || !(unsigned __int8)sub_140210130(a1, *(unsigned int *)(*(_QWORD *)(v150 + 416) + 116LL))) )
      v74 = v98 & 0xFFFFFFFD;
  }
  v77 = (_WORD *)v3[45];
  v78 = *(unsigned __int8 *)(a1 + 208);
  if ( (unsigned __int16)v78 >= *v77 || ((*(_QWORD *)&v77[4 * v78 + 4] >> *(_BYTE *)(a1 + 209)) & 1) == 0 )
    v74 &= ~2u;
  v79 = *((_DWORD *)v3 - 24);
  if ( (v79 & 0x20000) == 0 || (v79 & 0x100000) != 0 )
    v74 &= ~2u;
  if ( (v74 & 1) != 0 )
  {
    if ( !_bittest((const int *)&v76, v69) && (v74 & 2) != 0 )
    {
      v80 = v151;
      v81 = v68 + v143 - v151;
    }
    else
    {
      v81 = (unsigned int)dword_140D06B98 + v143;
      v80 = v68 - (unsigned int)dword_140D06B98;
    }
    if ( (v74 & 2) == 0 )
      *((_BYTE *)v3 + 349) = 1;
    v74 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)v3 - 24, 5u);
    *(v3 - 23) = v81;
    *(_QWORD *)(v6 + 32) = v80;
  }
  if ( v74 >= 0x20 )
  {
    v99 = v143 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)v3 + 435);
    if ( (*(_DWORD *)(v3 - 12) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)v3 - 24, 5u);
    *(v3 - 23) = v99;
  }
  if ( v71 != v69 )
  {
    sub_140229CA0(v3 - 27, (unsigned __int8)v71, 1LL);
    v48 = (*(_DWORD *)(v3 - 12) & 0x400000) == 0;
    *((_BYTE *)v3 - 21) = v71;
    if ( !v48 )
    {
      LOBYTE(v75) = 1;
      sub_14045B7FC(v3[94], (unsigned int)(char)v71, v75);
    }
    *((_BYTE *)v3 + 348) += 16 * (v71 - v69);
  }
  *((_BYTE *)v3 + 351) = a2;
  *((_BYTE *)v3 + 350) = 0;
  if ( (v74 & 2) != 0 )
  {
    *((_DWORD *)v3 + 80) = *(_DWORD *)(a1 + 36);
    v48 = (*((_BYTE *)v3 - 214) & 4) == 0;
    *((_BYTE *)v3 + 349) = 0;
    v82 = *(_BYTE **)(a1 + 56);
    if ( !v48
      && *((char *)v3 - 21) < 16
      && *(v3 - 14)
      && (v103 = *(v3 - 14)) != 0
      && (v104 = *(unsigned int *)(a1 + 216) + v103) != 0
      && (unsigned int)sub_1402103E0((int)v3 - 216, v104, v75, 0, 0LL) )
    {
      v83 = 1;
    }
    else
    {
      v83 = *((_BYTE *)v3 - 21);
    }
    v84 = v83 & 0x7F | (*((_BYTE *)v3 - 97) << 7);
    *v82 = v84;
    v85 = *(_QWORD *)(a1 + 35000);
    if ( v85 )
    {
      if ( v3 - 27 == *(_QWORD **)(a1 + 24) )
        v135 = (unsigned int)dword_140D0504C;
      else
        v135 = v84 & 0x7F;
      sub_14045B7FC(v85, v135, 0LL);
    }
    v86 = *(_QWORD *)(a1 + 56);
    if ( dword_140D068FC )
    {
      v87 = 0;
      v136 = *((_DWORD *)v3 - 34);
      v137 = (*(_BYTE *)(v86 + 64) ^ *((_BYTE *)v3 + 296)) & 7 ^ *(_BYTE *)(v86 + 64);
      v138 = (v137 ^ (8 * *((_BYTE *)v3 + 300))) & 0x38 ^ v137;
      if ( v136 <= *((_DWORD *)v3 - 33) )
        v136 = *((_DWORD *)v3 - 33);
      v139 = 64;
      if ( v136 < dword_140D05308 )
        v139 = 0;
      *(_BYTE *)(v86 + 64) = v139 | v138 & 0xBF;
    }
    else
    {
      v87 = 0;
    }
    v88 = *(_QWORD *)(a1 + 35000);
    v89 = *(_QWORD **)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v3 - 27;
    if ( v88 )
      *(_BYTE *)(v88 + 16) = v3 - 27 == v89;
    if ( *((_BYTE *)v3 + 172) == 1 )
      *((_DWORD *)v3 - 21) = *((_DWORD *)v3 - 21) - *((_DWORD *)v3 + 55) + MEMORY[0xFFFFF78000000320];
    *((_BYTE *)v3 + 172) = 3;
    LOBYTE(v74) = 16;
  }
  else
  {
    v87 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  sub_1402B1050(KeGetCurrentPrcb(), 0LL);
  *(v3 - 19) = 0LL;
  v90 = KeGetCurrentPrcb();
  v91 = *((_QWORD *)v90 + 4375);
  if ( v91 )
  {
    if ( *((_BYTE *)v90 + 32) <= 1u )
    {
      v140 = *(_DWORD *)(v91 + 24) - 1;
      *(_DWORD *)(v91 + 24) = v140;
      if ( !v140 )
        sub_140418E4C(v90);
    }
  }
  if ( (v74 & 0x10) == 0 )
  {
    if ( (unsigned __int8)sub_140210110(v3 - 27) )
    {
      *v3 = 0LL;
      v148 = 0LL;
      do
      {
        sub_1403405E0(a1, v3 - 27, &v148);
        v3 = v148;
        ++v87;
        if ( v148 )
          v148 = (_QWORD *)*v148;
        if ( (v87 & 0xF) == 0 )
          sub_140340300(a1 + 12760);
      }
      while ( v3 );
      sub_140340300(a1 + 12760);
    }
    else
    {
      sub_140211410(a1, v105);
    }
  }
  return *(_QWORD *)(a1 + 11528) == 0LL;
}
