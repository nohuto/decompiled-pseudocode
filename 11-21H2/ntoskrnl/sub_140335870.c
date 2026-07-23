/*
 * XREFs of sub_140335870 @ 0x140335870
 * Callers:
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_140274030 @ 0x140274030 (sub_140274030.c)
 *     sub_1402746C0 @ 0x1402746C0 (sub_1402746C0.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     sub_140286884 @ 0x140286884 (sub_140286884.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC80 @ 0x1402CCC80 (sub_1402CCC80.c)
 *     sub_1402D0490 @ 0x1402D0490 (sub_1402D0490.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_1403365F0 @ 0x1403365F0 (sub_1403365F0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140595E34 @ 0x140595E34 (sub_140595E34.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

void __fastcall sub_140335870(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r12d
  int v9; // esi
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // ecx
  char *v19; // rcx
  size_t v20; // r8
  unsigned __int64 v21; // r8
  __int64 v22; // r14
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  char v26; // cl
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  volatile unsigned __int64 v36; // rax
  ULONG_PTR v37; // rdx
  __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rsi
  char v42; // al
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  char v47; // bl
  __int64 v48; // rcx
  volatile unsigned __int64 v49; // rdx
  unsigned int v50; // r9d
  bool v51; // zf
  __int64 v52; // rax
  char *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  _QWORD *v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  ULONG_PTR v61; // r13
  __int64 v62; // r15
  int v63; // edi
  __int64 v64; // r14
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rbx
  char v69; // al
  char v70; // al
  int v71; // ecx
  char v72; // al
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v81; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v83; // r9
  int v84; // eax
  _QWORD *v85; // rdx
  ULONG_PTR v86; // rsi
  __int64 v87; // rbx
  unsigned __int8 v88; // di
  __int64 v89; // r9
  volatile LONG *v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rbx
  unsigned __int64 v93; // r14
  __int64 v94; // rax
  unsigned __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v98; // [rsp+38h] [rbp-C8h]
  __int64 v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+48h] [rbp-B8h] BYREF
  int v101; // [rsp+4Ch] [rbp-B4h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v104; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+68h] [rbp-98h]
  volatile unsigned __int64 v106; // [rsp+70h] [rbp-90h] BYREF
  char *v107; // [rsp+78h] [rbp-88h]
  ULONG_PTR v108; // [rsp+80h] [rbp-80h]
  unsigned __int64 v109; // [rsp+88h] [rbp-78h]
  __int64 v110; // [rsp+90h] [rbp-70h]
  ULONG_PTR v111; // [rsp+98h] [rbp-68h]
  __int64 v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h]
  _QWORD *v114; // [rsp+B0h] [rbp-50h]
  __int128 v115; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v116; // [rsp+D0h] [rbp-30h]
  __int128 v117; // [rsp+E0h] [rbp-20h]
  __int128 v118; // [rsp+F0h] [rbp-10h]
  __int128 v119; // [rsp+100h] [rbp+0h]
  __int128 v120; // [rsp+110h] [rbp+10h]
  __int64 v121; // [rsp+120h] [rbp+20h]
  __int128 v122; // [rsp+130h] [rbp+30h]
  __int128 v123; // [rsp+140h] [rbp+40h]
  unsigned __int64 v124; // [rsp+150h] [rbp+50h]
  unsigned __int8 v128; // [rsp+1C8h] [rbp+C8h] BYREF

  v128 = 0;
  HIDWORD(v97) = a3 & 1;
  v121 = 0LL;
  v115 = 0LL;
  LOBYTE(v97) = 0;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v114 = (_QWORD *)v5;
  v109 = v5 + 512;
  v112 = 48 * sub_14033AC10(v5) - 0x220000000000LL;
  v105 = sub_140287970(BugCheckParameter4);
  v6 = *(_WORD *)(v105 + 60) & 0x3FF;
  v103 = *(_QWORD *)(v105 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  v8 = 0;
  v104 = 0LL;
  v9 = 0;
  v113 = v7;
  v10 = v7 + 17024;
  v98 = v7 + 17024;
  v11 = sub_1403295C0(BugCheckParameter3);
  v13 = 4;
  v108 = v11;
  v14 = *(_QWORD *)(v11 + 24);
  if ( (v14 & 1) == 0 )
    v13 = 2;
  v101 = v13;
  v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v14 & 1) == 0 )
    v15 = (_QWORD *)v14;
  v111 = (ULONG_PTR)v15;
  if ( *v15 != v12 )
    KeBugCheckEx(0x1Au, 0x782uLL, v11, BugCheckParameter3, BugCheckParameter4);
  v110 = sub_1402D0490(v10, v5, &v128);
  v16 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
  v17 = *(_QWORD *)v16;
  v18 = *(_DWORD *)(v16 + 24);
  *(_DWORD *)(v17 + 12) = 0;
  *(_DWORD *)v17 = 0;
  *(_WORD *)(v17 + 4) = 0;
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_DWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v17 + 24) = 0LL;
  v19 = *(char **)(v16 + 16);
  v20 = 8LL * *(unsigned int *)(v16 + 24);
  BugCheckParameter2 = *(_QWORD *)(v16 + 8);
  v107 = v19;
  memset(v19, 0, v20);
  v22 = *(_QWORD *)v16;
  v23 = BugCheckParameter3;
  v99 = 0LL;
  *(_BYTE *)(v22 + 4) |= 4u;
  do
  {
    v24 = 1LL;
    v25 = v23;
    if ( *(_DWORD *)v22 != 1 )
    {
      v26 = *(_BYTE *)(v22 + 4);
      if ( (v26 & 8) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v22 + 4) = v26 | 8;
    }
    v27 = *(unsigned int *)(v22 + 12);
    if ( !(_DWORD)v27 || (*(_BYTE *)(v22 + 4) & 4) != 0 )
      goto LABEL_24;
    v28 = v22 + 8LL * (unsigned int)(v27 - 1);
    v29 = *(_QWORD *)(v28 + 24);
    if ( (v29 & 0xC00) == 0 )
    {
      v21 = *(_QWORD *)(v28 + 24) & 0x3FFLL;
      if ( (v29 & 0xFFFFFFFFFFFFF000uLL) + ((v21 + 1) << 12) == v23 && v21 + 1 >= v21 && v21 + 1 <= 0x3FF )
      {
        ++*(_QWORD *)(v22 + 16);
        *(_QWORD *)(v28 + 24) = ((unsigned __int16)v29 ^ (unsigned __int16)(v29 + 1)) & 0x3FF ^ v29;
        goto LABEL_36;
      }
    }
    v21 = v22 + 8LL * (unsigned int)(v27 - 1);
    v30 = *(_QWORD *)(v21 + 24);
    if ( (v30 & 0xC00) != 0
      || (v30 & 0xFFFFFFFFFFFFF000uLL) != v23 + 4096
      || (v31 = *(_QWORD *)(v21 + 24) & 0x3FFLL, v31 + 1 < v31)
      || v31 + 1 > 0x3FF )
    {
LABEL_24:
      if ( (unsigned int)v27 >= *(_DWORD *)(v22 + 8) )
      {
        *(_BYTE *)(v22 + 5) = 1;
      }
      else
      {
        while ( 1 )
        {
          v32 = 1024LL;
          if ( (unsigned __int64)(v24 - 1) <= 0x3FF )
            v32 = v24;
          v24 -= v32;
          v33 = v25 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v32 - 1) & 0x3FF;
          v25 += v32 << 12;
          *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)(v22 + 12))++ + 24) = v33;
          v34 = *(_DWORD *)(v22 + 12);
          *(_QWORD *)(v22 + 16) += v32;
          if ( v34 == *(_DWORD *)(v22 + 8) && (*(_BYTE *)(v22 + 4) & 4) == 0 )
          {
            qsort((void *)(v22 + 24), v34, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
            sub_14022BAE0(v22);
            v35 = *(unsigned int *)(v22 + 12);
            if ( (_DWORD)v35 == *(_DWORD *)(v22 + 8) )
              break;
          }
          if ( !v24 )
            goto LABEL_36;
        }
        if ( v24 )
        {
          *(_BYTE *)(v22 + 5) = 1;
          *(_QWORD *)(v22 + 16) = v35;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v22 + 16);
      *(_QWORD *)(v21 + 24) = ((unsigned __int16)(v30 - 4096) ^ (unsigned __int16)(v30 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v30 - 4096);
    }
LABEL_36:
    v36 = *(_QWORD *)v5;
    v37 = BugCheckParameter2;
    v106 = v36;
    *(_QWORD *)(BugCheckParameter2 + 8 * v99) = v36;
    if ( (v36 & 1) != 0 )
    {
      v38 = 48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( !dword_140C52B68 )
        goto LABEL_52;
      v39 = (__int64)(v5 << 25) >> 16;
      if ( v39 >= 0xFFFFF68000000000uLL && v39 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v21 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v40 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
      {
        v37 = *((_QWORD *)KeGetCurrentThread() + 23);
        if ( *(_BYTE *)(v37 + 912) != 1 && (v40 & 1) != 0 && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
        {
          v37 = *((_QWORD *)KeGetCurrentThread() + 23);
          if ( *(_QWORD *)(v37 + 1928) )
            v21 = (v21 >> 3) & 0x1FF;
        }
      }
      if ( (HIBYTE(v40) & 0xF) == 7 )
      {
LABEL_52:
        v41 = v98;
      }
      else
      {
LABEL_50:
        v41 = v98;
        if ( (*(_BYTE *)v5 & 0x20) != 0 )
          sub_140333040(v98, v5);
      }
      if ( HIDWORD(v97) )
      {
        if ( (*(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          v42 = *(_BYTE *)(v38 + 35);
          if ( (v42 & 8) != 0 || (v42 & 7u) > 2 && (v42 & 7u) <= 5 )
          {
            v100 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v100, v37, v21, v27);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
            *(_BYTE *)(v38 + 35) = *(_BYTE *)(v38 + 35) & 0xF8 | 2;
            _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      v43 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v44 = *(_QWORD *)v43;
      if ( v43 >= 0xFFFFF6FB7DBED000uLL
        && v43 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v44 & 1) != 0
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        v45 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 8 * ((v43 >> 3) & 0x1FF));
          if ( (v46 & 0x20) != 0 )
            v44 |= 0x20uLL;
          if ( (v46 & 0x42) != 0 )
            v44 |= 0x42uLL;
        }
      }
      v47 = HIBYTE(v44) & 0xF | (16 * ((v44 >> 60) & 7));
      if ( (HIBYTE(v44) & 0xF) == 8 )
      {
        sub_1402E599C(v41, v23, v38);
        v47 = sub_14033A410(v48, v23);
      }
      v49 = *(_QWORD *)v5;
      v21 = 0LL;
      v50 = ((unsigned int)dword_140D06880 >> 27) & 3;
      if ( v50 > 1 )
      {
        if ( (dword_140D06880 & 0x4000000) != 0 )
          _mm_lfence();
      }
      else
      {
        if ( !v50 )
          goto LABEL_86;
        if ( v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL && (v49 & 0x80u) == 0LL )
          LOBYTE(v49) = 32;
      }
      if ( (v49 & 0x20) == 0 )
      {
        sub_1402746C0((volatile __int64 *)v5, 0LL);
LABEL_87:
        v51 = v103 == 0;
        v52 = v99;
        v53 = v107;
        v107[8 * v99] = v47;
        v53[8 * v52 + 1] = 1;
        if ( !v51 )
          v104 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
        v9 = v8 + 1;
        goto LABEL_97;
      }
LABEL_86:
      *(_QWORD *)v5 = 0LL;
      goto LABEL_87;
    }
    if ( (v36 & 0x400) == 0 )
      break;
    if ( v103 )
    {
      v54 = v36;
      if ( qword_140C50780 && (v36 & 0x10) == 0 )
        v54 = ~qword_140C50780 & v36;
      v104 = v54 >> 16;
    }
    *(_QWORD *)v5 = 0LL;
    v52 = v99;
LABEL_97:
    ++v8;
    v99 = v52 + 1;
    v5 += 8LL;
    v23 += 4096LL;
  }
  while ( v5 < v109 );
  v55 = v98;
  if ( v9 )
  {
    v56 = sub_140218310(v98, v22, v107, v9);
    if ( v56 )
      sub_140274030(0LL, v56 << 25 >> 16 << 25 >> 16);
  }
  v57 = (_QWORD *)v108;
  v58 = v110;
  v122 = 0LL;
  v124 = *(_QWORD *)(v108 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  v123 = 0LL;
  *(_QWORD *)(v108 + 32) = v124;
  sub_14020D8D0(v55, v58);
  sub_1402B0CE0(v55, 2u);
  v61 = BugCheckParameter2;
  *(_QWORD *)&v115 = 0LL;
  v62 = 0LL;
  *(_QWORD *)&v116 = 0x3FFFFFFFFFLL;
  v63 = 0;
  *((_QWORD *)&v116 + 1) = 0x3FFFFFFFFFLL;
  v64 = 0LL;
  DWORD2(v115) = 0;
  LODWORD(v121) = 0;
  *((_QWORD *)&v120 + 1) = 0LL;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v65 = *(_QWORD *)(v61 + 8 * v64);
      if ( (v65 & 1) != 0 )
        break;
LABEL_149:
      if ( ++v64 >= v8 )
      {
        v57 = (_QWORD *)v108;
        goto LABEL_151;
      }
    }
    v66 = 0xFFFFFFFFFFLL;
    v67 = (v65 >> 12) & 0xFFFFFFFFFFLL;
    LOBYTE(v97) = (v65 & 0x42) != 0;
    v68 = 48 * v67 - 0x220000000000LL;
    if ( v63 != 3 )
    {
      if ( (_QWORD)v115 )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
        {
          sub_140338660(&v115, 0LL);
          if ( !(_QWORD)v115 )
            goto LABEL_107;
        }
      }
      else
      {
LABEL_107:
        HIDWORD(v97) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0((_DWORD *)&v97 + 1, v66, v59, v60);
          while ( *(__int64 *)(v68 + 24) < 0 );
        }
      }
      if ( v63 )
      {
        if ( v63 == 2 )
        {
          v71 = sub_140595E34(&v97, 48 * v67 - 0x220000000000LL);
          if ( !v71 )
            goto LABEL_147;
          goto LABEL_138;
        }
        v69 = *(_BYTE *)(v68 + 34) & 0xF7;
        v51 = (v97 & 0x42) == 0;
        *(_BYTE *)(v68 + 34) = v69;
        if ( !v51 )
          *(_BYTE *)(v68 + 34) = v69 | 0x10;
        v51 = (*(_WORD *)(v68 + 32))-- == 1;
        if ( !v51 )
        {
          if ( v63 == 1 )
            sub_14028C9B4(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v68 + 40) >> 43) & 0x3FFLL)), 1uLL, 1);
LABEL_147:
          _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_148;
        }
        if ( (*(_QWORD *)(v68 + 24) & 0x4000000000000000LL) != 0
          || (v70 = *(_BYTE *)(v68 + 35), (v70 & 0x40) != 0)
          || (v70 & 0x10) != 0 )
        {
LABEL_120:
          v71 = 2;
LABEL_138:
          if ( !(_QWORD)v115 )
            DWORD2(v115) = (*(_BYTE *)(v68 + 34) & 0x10 | 0x20u) >> 4;
          if ( v71 != 1 )
          {
            sub_140338660(&v115, 1LL);
            if ( v63 )
            {
              if ( v63 == 2 )
              {
                sub_140231A68(&v97, 48 * v67 - 0x220000000000LL);
              }
              else
              {
                sub_14028C9B4(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v68 + 40) >> 43) & 0x3FFLL)), 1uLL, 1);
                sub_140338500(48 * v67 - 0x220000000000LL, v67);
              }
            }
            else
            {
              sub_140273FD0(48 * v67 - 0x220000000000LL, v77, v78, v79);
            }
            goto LABEL_147;
          }
          sub_1403365F0(&v115, v67);
LABEL_148:
          v63 = v121;
          ++v62;
          goto LABEL_149;
        }
      }
      else
      {
        if ( (_BYTE)v97 )
          sub_14033C2A0(48 * v67 - 0x220000000000LL);
        if ( _bittest64((const signed __int64 *)(v68 + 40), 0x35u) )
        {
          v72 = *(_BYTE *)(v68 + 34);
          if ( (v72 & 0x10) != 0 )
          {
            if ( byte_140C5072C )
              *(_BYTE *)(v68 + 34) = v72 & 0xEF;
          }
        }
        v73 = *(_QWORD *)(v68 + 24);
        if ( (v73 & 0x4000000000000000LL) != 0 )
          goto LABEL_120;
        v74 = *(_BYTE *)(v68 + 35);
        if ( (v74 & 0x40) != 0 || (v74 & 0x10) != 0 || (v73 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v68 + 32) != 1 )
          goto LABEL_120;
        *(_WORD *)(v68 + 32) = 0;
        v75 = -9LL;
        *(_QWORD *)(v68 + 24) = v73 & 0xC000000000000000uLL;
        v76 = *(_QWORD *)(v68 + 16);
        if ( (v76 & 0x400) != 0 )
          v75 = -2049LL;
        *(_QWORD *)(v68 + 16) = v76 & v75;
      }
    }
    v71 = 1;
    goto LABEL_138;
  }
LABEL_151:
  sub_140338660(&v115, 0LL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v81 = v128;
    if ( v128 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v83 = *((_QWORD *)CurrentPrcb + 4375);
      v81 = v128;
      v84 = ~(unsigned __int16)(-1LL << (v128 + 1));
      v51 = (v84 & *(_DWORD *)(v83 + 20)) == 0;
      *(_DWORD *)(v83 + 20) &= v84;
      if ( v51 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v81 = v128;
  }
  __writecr8(v81);
  v85 = v57;
  v86 = v111;
  sub_140285FE0((__int64 *)v111, v85, v101);
  if ( v62 )
  {
    v87 = v112;
    sub_1402F2700(v112);
    *(_QWORD *)(v87 + 24) ^= (*(_QWORD *)(v87 + 24) ^ (*(_QWORD *)(v87 + 24) - v62)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v88 = v128;
  }
  else
  {
    v88 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v88 <= 0xFu )
    {
      v89 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v89 + 20) |= ~((unsigned __int8)(1LL << (v88 + 1)) - 1) & 4;
    }
    v128 = v88;
  }
  v90 = (volatile LONG *)(v105 + 72);
  if ( v103 )
  {
    v92 = 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel(v90);
    if ( v86 )
    {
      v93 = v104;
      while ( 1 )
      {
        v94 = sub_140286884(v86, *(unsigned int *)(v86 + 44), 4);
        v95 = *(_QWORD *)(v86 + 8);
        v92 += v94;
        if ( v93 >= v95 && v93 < v95 + 8LL * *(unsigned int *)(v86 + 44) )
          break;
        v86 = *(_QWORD *)(v86 + 16);
        if ( !v86 )
          KeBugCheckEx(0x1Au, 0x783uLL, v61, BugCheckParameter3, BugCheckParameter4);
      }
    }
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v90);
    v92 = 0LL;
  }
  v96 = v105;
  --*(_QWORD *)(v105 + 40);
  --*(_DWORD *)(v96 + 88);
  sub_140287660(v96, v88, v91);
  if ( v92 )
    sub_1405C4B8C(v113, 1LL, v92);
  if ( (a3 & 2) != 0 )
  {
    v106 = 0LL;
    sub_1402CCC80((unsigned __int64)&v106);
    *v114 = v106;
  }
  else
  {
    sub_1402864A0(0LL, BugCheckParameter3);
  }
}
