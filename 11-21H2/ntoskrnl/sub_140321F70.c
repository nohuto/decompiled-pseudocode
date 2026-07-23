/*
 * XREFs of sub_140321F70 @ 0x140321F70
 * Callers:
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403936C0 @ 0x1403936C0 (sub_1403936C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140321F70(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  __int64 v5; // r14
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  volatile signed __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  signed __int64 v32; // rdi
  __int64 v33; // r12
  int v34; // ecx
  unsigned int v35; // edi
  int v36; // r8d
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r11
  __int64 v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // rax
  __int64 v50; // r13
  struct _KTHREAD *v51; // rax
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned __int8 v54; // r10
  __int64 v55; // r8
  volatile signed __int32 *v56; // rax
  unsigned __int8 v57; // cl
  volatile signed __int64 *v58; // rdx
  char v59; // cl
  __int64 v60; // rdi
  char v61; // dl
  int v62; // eax
  __int16 v63; // ax
  __int64 v64; // rcx
  unsigned int v65; // r12d
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // esi
  __int64 v72; // rax
  void *v73; // rdi
  unsigned int v74; // r8d
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // al
  __int64 v88; // rcx
  __int64 v89; // rdx
  char v90; // al
  unsigned __int64 v91; // rdi
  __int64 **v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rax
  signed __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  volatile signed __int32 *v101; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v104; // r8
  int v105; // eax
  bool v106; // zf
  __int64 v107; // rdi
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  char v116; // [rsp+40h] [rbp-C0h]
  int v117; // [rsp+44h] [rbp-BCh]
  __int64 v118; // [rsp+48h] [rbp-B8h]
  unsigned int v119; // [rsp+50h] [rbp-B0h]
  int v120; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v121; // [rsp+60h] [rbp-A0h]
  int v122; // [rsp+68h] [rbp-98h]
  unsigned int v123; // [rsp+6Ch] [rbp-94h]
  int v124; // [rsp+70h] [rbp-90h]
  int v125; // [rsp+74h] [rbp-8Ch] BYREF
  int v126; // [rsp+78h] [rbp-88h] BYREF
  int v127; // [rsp+7Ch] [rbp-84h] BYREF
  volatile signed __int32 *v128; // [rsp+80h] [rbp-80h]
  __int64 v129; // [rsp+88h] [rbp-78h]
  unsigned __int64 v130; // [rsp+90h] [rbp-70h] BYREF
  __int64 v131; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v132; // [rsp+A0h] [rbp-60h]
  __int64 v133; // [rsp+A8h] [rbp-58h]
  __int64 **v134; // [rsp+B0h] [rbp-50h]
  __int64 v135; // [rsp+B8h] [rbp-48h]
  __int128 v136; // [rsp+C0h] [rbp-40h]
  __int128 v137; // [rsp+D0h] [rbp-30h]
  __int64 v138; // [rsp+E0h] [rbp-20h]
  signed __int64 v139; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v140; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v141; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v142; // [rsp+100h] [rbp+0h]
  __int64 v143; // [rsp+108h] [rbp+8h]
  __int128 v144; // [rsp+110h] [rbp+10h]
  __int128 v145; // [rsp+120h] [rbp+20h]
  __int128 v146; // [rsp+130h] [rbp+30h]
  _QWORD *v147; // [rsp+190h] [rbp+90h] BYREF
  __int64 v148; // [rsp+198h] [rbp+98h]
  unsigned __int64 v149; // [rsp+1A0h] [rbp+A0h] BYREF
  char v150; // [rsp+1A8h] [rbp+A8h]

  v149 = a3;
  v148 = a2;
  v147 = a1;
  v3 = (_QWORD *)a1[7];
  v4 = a1;
  v5 = (a1[2] >> 9) & 0x7FFFFFFFF8LL;
  v132 = v3;
  v6 = (unsigned __int64 *)a1[1];
  v7 = v5 - 0x98000000000LL;
  v130 = v6[7];
  v120 = 0;
  v8 = v6[2];
  if ( (v8 & 1) != 0 )
    v120 = *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *v6;
  if ( (*(_DWORD *)v4 & 8) != 0 )
    v9 = (__int64)v3;
  v135 = v9;
  v129 = *((_QWORD *)CurrentThread + 23);
  v122 = 0;
  v12 = v4[8];
  v133 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v134 = (__int64 **)v12;
  v117 = 16;
  if ( v12 )
  {
    v84 = *(unsigned __int8 *)(v12 + 34);
    v85 = *(unsigned int *)(v12 + 52);
    LODWORD(v85) = v85 & 0x7FFFFFFF;
    if ( (v85 | (v84 << 31)) == 0x7FFFFFFFELL )
      v117 = 80;
  }
  v13 = *((_DWORD *)v4 + 8);
  v124 = v13;
  if ( (v13 & 2) == 0 || v7 > 0xFFFFF6BFFFFFFF78uLL || v7 < 0xFFFFF68000000000uLL )
  {
    v13 |= 0x80000000;
    v124 = v13;
  }
  if ( !*((_DWORD *)v4 + 9) )
    __incgsdword(0x2E9Cu);
  v14 = v13 & 0x1F;
  v15 = 0;
  v123 = 0;
  v16 = qword_140016200[v14] & 0xFFF0000000000E5EuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v19 = qword_140016200[v14] & 0xFFF0000000000E5EuLL | 0x121;
    goto LABEL_22;
  }
  v17 = (__int64)(v7 << 25) >> 16;
  if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v16 = qword_140016200[v14] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v13 & 0x4000000) == 0 )
    {
      v16 = qword_140016200[v14] & 0x7FF0000000000E5ELL | 0x21;
    }
    if ( (unsigned int)sub_14023261C(v7) )
      v16 |= 4uLL;
  }
  v18 = v16;
  v19 = v16 | 4;
  if ( v7 > 0xFFFFF6BFFFFFFF78uLL )
    v19 = v18;
  if ( (v13 & 0x4000000) != 0 )
    v17 = sub_1402CFEB0(v17);
  if ( v17 < 0xFFFF800000000000uLL )
  {
    v20 = HIBYTE(word_140C51864);
    goto LABEL_19;
  }
  if ( (unsigned int)sub_14027B080(v17) != 1 && (v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v17 < qword_140C540C0 || v17 > qword_140C51BF0 )
      v20 = (unsigned __int8)word_140C51864;
    else
      v20 = HIBYTE(word_140C51864);
LABEL_19:
    if ( v20 )
      v19 |= 0x100uLL;
  }
  a3 = v149;
LABEL_22:
  v21 = v19 | 0x42;
  if ( v13 >= 0 || (v13 & 5) != 4 )
    v21 = v19;
  if ( (v13 & 0x40000000) != 0 )
    v21 &= ~4uLL;
  if ( (v13 & 0x20000000) != 0 )
    v21 = ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100 ^ (unsigned __int64)v21;
  if ( (v13 & 0x8000000) != 0 )
    v21 &= ~0x100uLL;
  if ( (v13 & 0x4000000) != 0 )
    v21 |= 0x80uLL;
  v22 = 0xFFFFF6FB7DBED7F8uLL;
  v23 = v21 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v24 = 4LL;
  if ( a3 <= 1 || (v86 = v4[1], v87 = *(_BYTE *)(v86 + 69), (v87 & 4) != 0) )
  {
    v116 = 0;
    if ( !a3 )
    {
      v70 = 273;
      goto LABEL_105;
    }
  }
  else
  {
    v116 = 1;
    *(_BYTE *)(v86 + 69) = v87 | 4;
  }
  v25 = 0LL;
  v121 = 0LL;
  while ( 1 )
  {
    v26 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v93 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v93 )
        {
          v94 = *(_QWORD *)(v93 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v94 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v94 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      v25 = v121;
    }
    if ( *((_DWORD *)v4 + 9) )
    {
      if ( (v26 & 0x400) == 0 && (v26 & 0x4000000) != 0 && !v25 )
        v23 |= 0x40uLL;
    }
    else
    {
      if ( v26 )
        goto LABEL_43;
      v26 = 32LL * (v4[4] & 0x1F);
      v123 = v15 + 1;
      if ( qword_140C50780 )
      {
        if ( (v26 & qword_140C50780) != 0 )
          v26 |= 0x10uLL;
        else
          v26 |= qword_140C50780;
      }
      v27 = v26;
      if ( !sub_140317A80(v7) )
        goto LABEL_42;
      if ( !(unsigned int)sub_140229550() )
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v26 & 1) != 0 )
          v27 = v26 | 0x8000000000000000uLL;
LABEL_42:
        *(_QWORD *)v7 = v27;
        goto LABEL_43;
      }
      if ( !HIBYTE(word_140C51864) && (v26 & 1) != 0 )
        v27 = v26 | 0x8000000000000000uLL;
      *(_QWORD *)v7 = v27;
      sub_1402294F0(v7, v27);
    }
LABEL_43:
    v28 = v148;
    v118 = v148;
    v29 = (volatile signed __int64 *)(v148 + 24);
    v30 = *(_QWORD *)(v148 + 24) & 0xFFFFFFFFFFLL;
    v128 = (volatile signed __int32 *)(v148 + 24);
    if ( v30 == 0x3FFFFFFFFFLL )
    {
      v148 = 0LL;
    }
    else
    {
      v22 = 48 * v30 - 0x220000000000LL;
      v148 = v22;
    }
    v31 = *v29;
    v32 = _InterlockedCompareExchange64(v29, *v29 & 0xFFFFFF0000000000uLL, *v29);
    if ( v31 != v32 )
    {
      do
      {
        v95 = v32;
        v32 = _InterlockedCompareExchange64(v29, v32 & 0xFFFFFF0000000000uLL, v32);
      }
      while ( v95 != v32 );
    }
    v33 = 0xAAAAAAAAAAAAAAABuLL * ((v28 + 0x220000000000LL) >> 4);
    if ( *((_DWORD *)v4 + 9) && !v4[9] && (v26 & 0x400) != 0 )
    {
      v72 = v26;
      if ( qword_140C50780 && (v26 & 0x10) == 0 )
        v72 = v26 & ~qword_140C50780;
      if ( v72 >> 16 )
      {
        v125 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
        {
          do
          {
            do
              sub_1402F32E0(&v125, v31, v28, v22);
            while ( *(__int64 *)v29 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) );
          v28 = v118;
        }
        sub_14033C300(v28, 4LL);
        _InterlockedAnd64(v29, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v26 & 0x3E0) != 0 )
      {
        v26 &= ~0x400uLL;
      }
      else
      {
        v26 = 0LL;
      }
      v73 = (void *)sub_1402CC7C0(v33, 0LL, 0x80000000);
      memset64(v73, v26 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      sub_1402BEDD0((unsigned __int64)v73, 0x11u);
      v26 = sub_1402CCC50(128LL);
      v34 = v117 | 8;
    }
    else
    {
      v34 = v117;
    }
    if ( (*(_DWORD *)v4 & 4) != 0 )
      v34 |= 0x20u;
    v35 = *((_DWORD *)v4 + 8);
    v36 = v34 | 0x20;
    v37 = 0xFFFFF6FB7DBED000uLL;
    v38 = *(_QWORD *)v7;
    if ( (v35 & 2) == 0 )
      v36 = v34;
    v117 = v36;
    v39 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v38 & 1) != 0
      && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
    {
      v96 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v96 )
      {
        v97 = *(_QWORD *)(v96 + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v97 & 0x20) != 0 )
          v38 |= 0x20uLL;
        LOBYTE(v36) = v117;
        if ( (v97 & 0x42) != 0 )
          v38 |= 0x42uLL;
      }
      else
      {
        LOBYTE(v36) = v117;
      }
    }
    if ( (v36 & 4) != 0 )
    {
      v98 = 32LL * (v35 & 0x1F);
      if ( v38 )
        v38 = v98 | v38 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v38 = sub_1402CCC50(v98);
    }
    v40 = -9LL;
    if ( (v38 & 0x400) != 0 )
      v40 = -2049LL;
    v41 = v38 & v40;
    *(_QWORD *)(v118 + 16) = v41;
    if ( (v36 & 2) != 0 )
    {
      *(_QWORD *)(v118 + 40) |= 0x8000000000000000uLL;
    }
    else if ( (v36 & 8) == 0 )
    {
      *(_QWORD *)v118 &= 0xFFFFFFFFFFFFC00FuLL;
      *(_QWORD *)(v118 + 16) = v41 & 0xFFFFFFFFFC00FFFFuLL;
    }
    v119 = 1;
    if ( v35 )
    {
      if ( v35 == 31 )
      {
        v119 = 1;
      }
      else if ( v35 >> 3 == 3 )
      {
        if ( (v35 & 7) != 0 )
          v119 = 2;
      }
      else
      {
        v119 = v35 >> 3 != 1;
      }
    }
    else
    {
      v119 = 3;
    }
    *(_WORD *)(v118 + 32) = 1;
    v42 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = *(_QWORD *)v42;
    if ( v42 >= v37
      && v42 <= v39
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v99 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v99 )
      {
        v100 = *(_QWORD *)(v99 + 8 * ((v42 >> 3) & 0x1FF));
        if ( (v100 & 0x20) != 0 )
          v43 |= 0x20uLL;
        if ( (v100 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v131 = v43;
    v44 = sub_140317A10((unsigned __int64)&v131);
    v46 = v118;
    v47 = (v44 >> 12) & 0xFFFFFFFFFFLL;
    v48 = *(_QWORD *)(v118 + 40);
    v138 = 0LL;
    v139 = v48;
    v136 = 0LL;
    v137 = 0LL;
    v144 = 0LL;
    v145 = 0LL;
    v146 = 0LL;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v118 + 40), v47 | v48 & 0xFFFFFF0000000000uLL, v48);
    for ( *((_QWORD *)&v146 + 1) = v49; v139 != v49; *((_QWORD *)&v146 + 1) = v49 )
    {
      v139 = v49;
      v49 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v118 + 40),
              v47 | v49 & 0xFFFFFF0000000000uLL,
              v49);
    }
    v50 = 48 * v47 - 0x220000000000LL;
    v51 = KeGetCurrentThread();
    v52 = *((_DWORD *)v51 + 346);
    if ( (v52 & 0x100) != 0 )
    {
      v53 = v52 >> 9;
    }
    else
    {
      v53 = (*((_DWORD *)v51 + 344) >> 12) & 7;
      if ( (*(_DWORD *)(*((_QWORD *)v51 + 68) + 1124LL) & 0x100000) != 0 )
      {
        v90 = 2;
        if ( v53 < 2 )
          v90 = v53;
        LOBYTE(v53) = v90;
      }
    }
    v54 = 17;
    v150 = 17;
    v55 = v117 & 1;
    if ( (v117 & 1) == 0 )
    {
      if ( (v117 & 0x10) != 0 )
      {
        v56 = v128;
        v126 = 0;
        if ( !_interlockedbittestandset64(v128, 0x3FuLL) )
          goto LABEL_70;
        v101 = v56;
        do
        {
          do
            sub_1402F32E0(&v126, v47, v55, v45);
          while ( *(__int64 *)v101 < 0 );
        }
        while ( _interlockedbittestandset64(v101, 0x3FuLL) );
        v4 = v147;
        v54 = v150;
      }
      else
      {
        v54 = sub_1402F2700(v118);
        v150 = v54;
      }
      v46 = v118;
      v55 = v117 & 1;
    }
LABEL_70:
    v127 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v127, v47, v55, v45);
        while ( *(__int64 *)(v50 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) );
      LODWORD(v55) = v117 & 1;
      v54 = v150;
      v46 = v118;
    }
    *(_QWORD *)(v50 + 24) ^= ((*(_QWORD *)(v50 + 24) + 1LL) ^ *(_QWORD *)(v50 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v57 = *(_BYTE *)(v46 + 34);
    if ( v57 >> 6 != v119 )
    {
      sub_140267E78(v46, v119, 1);
      v46 = v118;
      LODWORD(v55) = v117 & 1;
      v54 = v150;
      v57 = *(_BYTE *)(v118 + 34);
    }
    v58 = (volatile signed __int64 *)v128;
    *(_BYTE *)(v46 + 35) ^= (*(_BYTE *)(v46 + 35) ^ v53) & 7;
    v59 = v57 & 0xF8 | 6;
    *(_QWORD *)(v46 + 8) = v7;
    *v58 = *v58 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v46 + 34) = v59;
    if ( (v117 & 0x20) == 0 )
      *(_BYTE *)(v46 + 34) = v59 | 0x10;
    if ( (v117 & 0x40) != 0 )
      *(_BYTE *)(v46 + 35) |= 0x20u;
    if ( !(_DWORD)v55 )
    {
      _InterlockedAnd64(v58, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v117 & 0x10) == 0 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v54 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v104 = *((_QWORD *)CurrentPrcb + 4375);
              v105 = ~(unsigned __int16)(-1LL << (v54 + 1));
              v106 = (v105 & *(_DWORD *)(v104 + 20)) == 0;
              *(_DWORD *)(v104 + 20) &= v105;
              if ( v106 )
              {
                sub_140418E4C(CurrentPrcb);
                v54 = v150;
                v46 = v118;
              }
            }
          }
        }
        __writecr8(v54);
      }
    }
    if ( (v117 & 8) != 0 )
      *(_QWORD *)(v46 + 16) = v26;
    if ( (*(_DWORD *)v4 & 4) != 0 )
    {
      v107 = sub_1402E4D28(v33, *((_DWORD *)v4 + 8));
      if ( sub_140317A80(v7) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          if ( !HIBYTE(word_140C51864) && (v107 & 1) != 0 )
            v107 |= 0x8000000000000000uLL;
          *(_QWORD *)v7 = v107;
          sub_1402294F0(v7, v107);
          goto LABEL_288;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v107 & 1) != 0 )
          v107 |= 0x8000000000000000uLL;
      }
      *(_QWORD *)v7 = v107;
LABEL_288:
      if ( (*(_DWORD *)v4 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 1272), 1uLL);
      sub_140228660(v118, 0);
      if ( v132
        && (__int64)(v7 << 25) >> 16 == *(_QWORD *)(v132[1] + 16LL * v132[3]) + (v132[4] << 12)
        && *(_BYTE *)v132 != 5 )
      {
        sub_140232E08(v132);
      }
      goto LABEL_101;
    }
    v23 = (v23 ^ (v33 << 12)) & 0xFFFFFFFFFF000LL ^ v23 | 0x20;
    if ( !v4[9] )
      break;
    v91 = v23;
    if ( sub_140317A80(v7) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v23 & 1) != 0 )
          v91 = v23 | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v91;
        sub_1402294F0(v7, v91);
        goto LABEL_101;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v23 & 1) != 0 )
        v91 = v23 | 0x8000000000000000uLL;
    }
    *(_QWORD *)v7 = v91;
LABEL_101:
    v7 += 8LL;
    v15 = v123;
    v25 = v121 + 1;
    v121 = v25;
    v22 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v25 >= v149 )
    {
      v70 = 273;
      goto LABEL_103;
    }
  }
  if ( v7 != v133 && (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v23 &= ~0x20uLL;
    if ( v124 < 0
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL
      && (*(_DWORD *)(v129 + 1124) & 0x8000) != 0 )
    {
      if ( v122 )
      {
        if ( v122 == 2 )
LABEL_304:
          v23 &= 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        if ( v134 )
        {
          v92 = v134;
        }
        else
        {
          sub_1402ED128(1);
          v92 = sub_1403126F0(v4[2]);
          sub_1402806E0(1, 0x11u);
          v46 = v118;
        }
        if ( ((_DWORD)v92[6] & 0x600000) == 0x600000 )
        {
          v122 = 2;
          goto LABEL_304;
        }
        v122 = 1;
      }
    }
  }
  v60 = v4[1];
  v61 = *(_BYTE *)(v60 + 69);
  if ( (v61 & 5) != 4 || (v61 & 2) != 0 )
  {
    v65 = v120 & 0xFFFFFFFB;
    v120 &= ~4u;
  }
  else
  {
    v62 = *(unsigned __int16 *)(v60 + 66);
    if ( (_WORD)v62 )
    {
      if ( v62 + *(unsigned __int16 *)(v60 + 64) == (((unsigned int)v7 >> 3) & 0x1FF) )
      {
        if ( *(__int64 *)(v46 + 40) < 0 )
        {
          if ( (v61 & 0x10) == 0 )
            goto LABEL_90;
        }
        else if ( (v61 & 0x10) != 0 )
        {
          goto LABEL_90;
        }
      }
      sub_14022FC80((__int64 *)(v60 + 56));
      v46 = v118;
    }
LABEL_90:
    v63 = *(_WORD *)(v60 + 66);
    if ( v63 )
    {
      *(_WORD *)(v60 + 66) = v63 + 1;
    }
    else
    {
      *(_WORD *)(v60 + 66) = 1;
      *(_WORD *)(v60 + 64) = ((unsigned int)v7 >> 3) & 0x1FF;
      if ( *(__int64 *)(v46 + 40) < 0 )
        *(_BYTE *)(v60 + 69) &= ~0x10u;
      else
        *(_BYTE *)(v60 + 69) |= 0x10u;
    }
    v64 = v4[1];
    v65 = v120 | 4;
    v120 |= 4u;
    if ( (*(_BYTE *)(v64 + 69) & 8) != 0 )
    {
      v66 = *(_QWORD *)(v64 + 16);
      if ( (v66 & 1) == 0 || *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        v23 &= ~0x20uLL;
    }
  }
  if ( (unsigned int)sub_140322F10(v130, v7, v46, 0, v23, v65, v135) )
  {
    if ( (*(_DWORD *)v4 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v129 + 1272), 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_101;
  }
  v108 = 48 * (*(_QWORD *)(v118 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  LODWORD(v149) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v118 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v149, v67, v68, v69);
    while ( *(__int64 *)(v118 + 24) < 0 );
  }
  sub_140232694((unsigned __int64 *)(v118 + 16), 1, 0);
  *(_QWORD *)(v118 + 16) &= ~2uLL;
  *(_QWORD *)(v118 + 24) |= 0x4000000000000000uLL;
  sub_140273FD0(v118, v109, v110, v111);
  _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  sub_140228660(v108, 0);
  v70 = -1073741801;
  sub_1403936C0(v148);
  if ( (v65 & 4) != 0 )
    --*(_WORD *)(v4[1] + 66LL);
LABEL_103:
  if ( v116 )
  {
    v88 = v4[1];
    v89 = v88;
    if ( (*(_BYTE *)(v88 + 69) & 4) != 0 && *(_WORD *)(v88 + 66) )
    {
      sub_14022FC80((__int64 *)(v88 + 56));
      v89 = v4[1];
    }
    *(_BYTE *)(v89 + 69) &= ~4u;
  }
  v15 = v123;
  v24 = 4LL;
LABEL_105:
  if ( !*((_DWORD *)v4 + 9) && v15 )
  {
    v74 = 0;
    v75 = v4[2];
    while ( v75 > 0x7FFFFFFEFFFFLL )
    {
      ++v74;
      v75 = (__int64)(v75 << 25) >> 16;
      if ( v74 >= 3 )
        return v70;
    }
    v76 = ((v4[2] >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
    v77 = *(_QWORD *)v76;
    if ( v76 >= 0xFFFFF6FB7DBED000uLL
      && v76 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v77 & 1) != 0
      && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
    {
      v112 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v112 )
      {
        v113 = *(_QWORD *)(v112 + 8 * ((v76 >> 3) & 0x1FF));
        if ( (v113 & 0x20) != 0 )
          v77 |= 0x20uLL;
        if ( (v113 & 0x42) != 0 )
          v77 |= 0x42uLL;
      }
    }
    v130 = v77;
    v79 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v130) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    LODWORD(v147) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v147, v78, v80, v81);
      while ( *(__int64 *)(v79 + 24) < 0 );
    }
    *(_QWORD *)(v79 + 16) ^= ((unsigned int)*(_QWORD *)(v79 + 16) ^ ((unsigned int)*(_QWORD *)(v79 + 16)
                                                                   + ((unsigned __int16)v15 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 <= 1
      && ((__int64)(*(_QWORD *)(v79 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v79 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v140 = (((*(_QWORD *)(v79 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v141 = ((v140 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v142 = ((v141 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v143 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v82 = *(&v139 + v24--);
        v83 = *(_QWORD *)v82;
        if ( v82 >= 0xFFFFF6FB7DBED000uLL
          && v82 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
        {
          if ( (v83 & 1) == 0 )
            return v70;
          if ( (v83 & 0x20) == 0 || (v83 & 0x42) == 0 )
          {
            v114 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v114 )
            {
              v115 = *(_QWORD *)(v114 + 8 * ((v82 >> 3) & 0x1FF));
              if ( (v115 & 0x20) != 0 )
                LOBYTE(v83) = v83 | 0x20;
              if ( (v115 & 0x42) != 0 )
                LOBYTE(v83) = v83 | 0x42;
            }
          }
        }
      }
      while ( (v83 & 1) != 0 && (v83 & 0x80u) == 0LL && v24 );
    }
  }
  return v70;
}
