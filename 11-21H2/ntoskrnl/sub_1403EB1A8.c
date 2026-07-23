/*
 * XREFs of sub_1403EB1A8 @ 0x1403EB1A8
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402983F0 @ 0x1402983F0 (sub_1402983F0.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     sub_1402D8EEC @ 0x1402D8EEC (sub_1402D8EEC.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403EB1A8(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  ULONG_PTR v6; // r13
  __int64 CurrentProcess; // rax
  signed __int32 v8; // r8d
  unsigned __int128 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r10
  const char *v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r11
  _QWORD *v28; // r9
  char v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned int v38; // ebx
  unsigned __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  PVOID *v41; // rdx
  ULONG_PTR v42; // r8
  __int64 v43; // rax
  void *v44; // rcx
  char v45; // r13
  PIMAGE_NT_HEADERS v46; // rax
  char *v47; // r10
  int v48; // r11d
  int v49; // eax
  int v50; // r9d
  char *v51; // rdx
  char v52; // cl
  char v53; // al
  __int16 v54; // ax
  char *v55; // r8
  unsigned int v56; // edx
  char *v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // cl
  char v61; // al
  char *v62; // rdx
  int v63; // r9d
  char v64; // cl
  char v65; // al
  char *v66; // rdx
  int v67; // r9d
  char v68; // cl
  char v69; // al
  unsigned int v70; // r9d
  char v71; // r14
  char *v72; // r12
  _QWORD *v73; // r11
  char *v74; // rcx
  const char *i; // rax
  ULONG_PTR v76; // r8
  unsigned int v77; // r15d
  __int64 v78; // rax
  ULONG_PTR v79; // r8
  _QWORD *v80; // r11
  __int64 v81; // r8
  ULONG_PTR v82; // rcx
  char v83; // al
  int v84; // eax
  unsigned int v85; // r9d
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  int v88; // r8d
  PIMAGE_NT_HEADERS v89; // rdx
  char *v90; // r13
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  char *v93; // r12
  char *v94; // r15
  __int64 v95; // rax
  char *v96; // r14
  __int64 v97; // rax
  __int64 *v98; // rcx
  unsigned __int64 v99; // r14
  unsigned __int64 v100; // r13
  __int64 v101; // rbx
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  char v105; // r11
  __int64 v106; // rcx
  unsigned int v107; // r9d
  _QWORD *v108; // r12
  unsigned __int64 v109; // rcx
  _QWORD *v110; // r10
  const char *v111; // rax
  __int64 *v112; // r8
  unsigned int v113; // r15d
  __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 *v116; // r10
  __int64 v117; // r8
  unsigned __int64 v118; // rcx
  char v119; // al
  int v120; // eax
  unsigned int v121; // r9d
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  unsigned __int64 v124; // rax
  signed __int32 v126[6]; // [rsp+8h] [rbp-D9h] BYREF
  PIMAGE_NT_HEADERS v127; // [rsp+38h] [rbp-A9h]
  __int64 v128; // [rsp+40h] [rbp-A1h] BYREF
  PVOID BaseOfImage; // [rsp+48h] [rbp-99h] BYREF
  __int64 v130; // [rsp+50h] [rbp-91h]
  unsigned __int64 v131; // [rsp+58h] [rbp-89h]
  __int64 v132; // [rsp+60h] [rbp-81h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-79h]
  unsigned int *v134; // [rsp+70h] [rbp-71h] BYREF
  __int128 v135; // [rsp+78h] [rbp-69h]
  __int128 v136; // [rsp+88h] [rbp-59h]
  __int64 v137; // [rsp+A0h] [rbp-41h] BYREF
  unsigned __int64 v138; // [rsp+B0h] [rbp-31h]
  __int64 v139; // [rsp+B8h] [rbp-29h]
  __int64 *v140; // [rsp+C0h] [rbp-21h]
  __int64 v141; // [rsp+E8h] [rbp+7h]
  __int64 v142; // [rsp+F0h] [rbp+Fh]
  __int64 v143; // [rsp+F8h] [rbp+17h]
  char v146; // [rsp+160h] [rbp+7Fh]
  int v147; // [rsp+160h] [rbp+7Fh]

  v146 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    v8 = sub_140287F30(CurrentProcess);
    if ( dword_140C094D8 != v8 )
    {
      *(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_140C094D8, v8, -1);
      if ( (_DWORD)v9 != -1 )
        return v9;
    }
    v10 = 4 * v4;
    v11 = ((unsigned __int64)&qword_140C0DB80 ^ qword_140C0DB88) & 0x3F;
    v12 = v6 + (unsigned int)(4 * v4);
    v13 = (_QWORD *)v6;
    v14 = (const char *)v6;
    if ( v6 < v12 )
    {
      do
      {
        _mm_prefetch(v14, 0);
        v14 += 64;
      }
      while ( (unsigned __int64)v14 < v12 );
    }
    v15 = v10 >> 7;
    v16 = (unsigned __int64)&qword_140C0DB80 ^ qword_140C0DB88;
    if ( v10 >> 7 )
    {
      do
      {
        v17 = 8LL;
        do
        {
          v18 = v16 ^ *v13;
          v19 = v13 + 1;
          v20 = *v19;
          v13 = v19 + 1;
          v16 = __ROL8__(__ROL8__(v18, v11) ^ v20, v11);
          --v17;
        }
        while ( v17 );
        v21 = __ROL8__((unsigned __int64)&qword_140C0DB80 ^ qword_140C0DB88 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_140C0DB80 ^ qword_140C0DB88 ^ ((unsigned __int64)v13 - v6);
        v141 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v22 = v11 ^ v141 ^ v21;
        LOBYTE(v11) = 1;
        v23 = v22 & 0x3F;
        if ( v23 )
          LOBYTE(v11) = v23;
        --v15;
      }
      while ( v15 );
      v5 = v146;
    }
    v24 = v10 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)v24 >> 3;
      do
      {
        v16 = __ROL8__(*v13++ ^ v16, v11);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      v16 = __ROL8__(v26 ^ v16, v11);
    }
    v27 = v16 ^ qword_140C0DB80;
    BugCheckParameter3 = v4;
    v28 = (_QWORD *)a2;
    v29 = (v16 ^ qword_140C0DB80) & 0x3F;
    *(_QWORD *)&v9 = a2;
    if ( a2 < a2 + v4 )
    {
      do
      {
        _mm_prefetch((const char *)v9, 0);
        *(_QWORD *)&v9 = v9 + 64;
      }
      while ( (unsigned __int64)v9 < a2 + v4 );
    }
    v30 = v16 ^ qword_140C0DB80;
    v31 = (unsigned int)v4 >> 7;
    if ( (unsigned int)v4 >> 7 )
    {
      do
      {
        v32 = 8LL;
        do
        {
          v33 = v30 ^ *v28;
          v34 = v28 + 1;
          v35 = *v34;
          v28 = v34 + 1;
          v30 = __ROL8__(__ROL8__(v33, v29) ^ v35, v29);
          --v32;
        }
        while ( v32 );
        v36 = __ROL8__(v27 ^ ((unsigned __int64)v28 - a2), 17) ^ v27 ^ ((unsigned __int64)v28 - a2);
        v142 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v37 = v29 ^ v142 ^ v36;
        v29 = 1;
        *(_QWORD *)&v9 = v37 & 0x3F;
        if ( (_DWORD)v9 )
          v29 = v9;
        --v31;
      }
      while ( v31 );
      v5 = v146;
      v6 = BugCheckParameter1;
    }
    v38 = v4 & 0x7F;
    if ( v38 >= 8 )
    {
      v39 = (unsigned __int64)v38 >> 3;
      do
      {
        v30 = __ROL8__(*v28++ ^ v30, v29);
        v38 -= 8;
        --v39;
      }
      while ( v39 );
    }
    for ( ; v38; --v38 )
    {
      *(_QWORD *)&v9 = *(unsigned __int8 *)v28;
      v28 = (_QWORD *)((char *)v28 + 1);
      v30 = __ROL8__(v9 ^ v30, v29);
    }
    v40 = v6 ^ v30 ^ BugCheckParameter3;
    if ( (v5 & 2) != 0 )
    {
      qword_140C0DB88 = v6 ^ v30 ^ BugCheckParameter3;
      return v9;
    }
    v41 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_142;
    while ( 1 )
    {
      v42 = (ULONG_PTR)v41[6];
      if ( v6 >= v42 && v6 < v42 + *((unsigned int *)v41 + 16) )
        break;
      v41 = (PVOID *)*v41;
      if ( v41 == &PsLoadedModuleList )
        goto LABEL_142;
    }
    if ( !v42 )
LABEL_142:
      KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
    v147 = 0;
    v43 = 0LL;
    qword_140C0DC80[0] = (__int64)v41[6];
    v132 = 0LL;
LABEL_42:
    v44 = (void *)qword_140C0DC80[v43];
    BaseOfImage = v44;
    if ( !v44 )
      goto LABEL_110;
    v45 = v40 & 0x3F;
    LODWORD(v130) = v40 & 0x3F;
    v46 = RtlImageNtHeader(v44);
    v127 = v46;
    if ( !v46 )
      KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
    v47 = (char *)&v46->OptionalHeader + v46->FileHeader.SizeOfOptionalHeader;
    v131 = (unsigned __int64)&v47[40 * v46->FileHeader.NumberOfSections];
    while ( 1 )
    {
      v48 = 0;
      if ( (*((_DWORD *)v47 + 9) & 0x2000000) != 0 )
        goto LABEL_73;
      v49 = *(_DWORD *)v47;
      if ( *(_DWORD *)v47 == 1414090313 )
        break;
      if ( v49 != 1162297680 )
        goto LABEL_48;
      v54 = *((_WORD *)v47 + 2);
      if ( v54 != 30839 && v54 != 29303 && v54 != 30583 )
      {
LABEL_50:
        v50 = 7;
        v51 = off_140C091E8[0];
        v135 = *(_OWORD *)off_140C091E8;
        v136 = *(_OWORD *)off_140C091F8;
        while ( 1 )
        {
          v52 = v51[v47 - off_140C091E8[0]];
          v53 = *v51++;
          if ( v52 != v53 )
            break;
          if ( !--v50 )
            goto LABEL_73;
        }
        v55 = (char *)*((_QWORD *)&v135 + 1);
        v56 = 8;
        v57 = v47;
        while ( 1 )
        {
          v58 = *(_QWORD *)v57;
          v57 += 8;
          v59 = *(_QWORD *)v55;
          v55 += 8;
          if ( v58 != v59 )
            break;
          v56 -= 8;
          if ( v56 < 8 )
          {
            if ( !v56 )
              goto LABEL_73;
            while ( 1 )
            {
              v60 = *v57++;
              v61 = *v55++;
              if ( v60 != v61 )
                goto LABEL_66;
              if ( !--v56 )
                goto LABEL_73;
            }
          }
        }
LABEL_66:
        v62 = (char *)v136;
        v63 = 4;
        while ( 1 )
        {
          v64 = v47[(_QWORD)v62 - v136];
          v65 = *v62++;
          if ( v64 != v65 )
            break;
          if ( !--v63 )
            goto LABEL_73;
        }
        v66 = (char *)*((_QWORD *)&v136 + 1);
        v67 = 6;
        do
        {
          v68 = v47[(_QWORD)v66 - *((_QWORD *)&v136 + 1)];
          v69 = *v66++;
          if ( v68 != v69 )
            goto LABEL_74;
        }
        while ( --v67 );
      }
LABEL_73:
      v48 = 1;
LABEL_74:
      v70 = *((_DWORD *)v47 + 4);
      if ( *((int *)v47 + 9) < 0 )
        v48 = 1;
      if ( !v48 )
      {
        v71 = v45;
        if ( v70 <= *((_DWORD *)v47 + 2) )
          v70 = *((_DWORD *)v47 + 2);
        v72 = (char *)BaseOfImage + *((unsigned int *)v47 + 3);
        v73 = v72;
        v74 = &v72[v70];
        for ( i = v72; i < v74; i += 64 )
          _mm_prefetch(i, 0);
        v76 = v40;
        v77 = v70 >> 7;
        if ( v70 >> 7 )
        {
          do
          {
            v78 = 8LL;
            do
            {
              v79 = *v73 ^ v76;
              v80 = v73 + 1;
              v81 = *v80 ^ __ROL8__(v79, v71);
              v73 = v80 + 1;
              v76 = __ROL8__(v81, v71);
              --v78;
            }
            while ( v78 );
            v82 = __ROL8__(v40 ^ ((char *)v73 - v72), 17) ^ v40 ^ ((char *)v73 - v72);
            v143 = (v82 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v83 = v71 ^ v143 ^ v82;
            v71 = 1;
            v84 = v83 & 0x3F;
            if ( v84 )
              v71 = v84;
            --v77;
          }
          while ( v77 );
          v45 = v130;
        }
        v85 = v70 & 0x7F;
        if ( v85 >= 8 )
        {
          v86 = (unsigned __int64)v85 >> 3;
          do
          {
            v76 = __ROL8__(*v73++ ^ v76, v71);
            v85 -= 8;
            --v86;
          }
          while ( v86 );
        }
        for ( ; v85; --v85 )
        {
          v87 = *(unsigned __int8 *)v73;
          v73 = (_QWORD *)((char *)v73 + 1);
          v76 = __ROL8__(v87 ^ v76, v71);
        }
        v40 = v76;
      }
      v47 += 40;
      if ( v47 == (char *)v131 )
      {
        v88 = v147;
        if ( !v147 )
        {
          v89 = v127;
          v90 = (char *)BaseOfImage;
          Size = v127->OptionalHeader.DataDirectory[1].Size;
          if ( (unsigned int)Size >= 0x14 )
          {
            VirtualAddress = v127->OptionalHeader.DataDirectory[1].VirtualAddress;
            v93 = (char *)BaseOfImage + Size + VirtualAddress;
            v94 = (char *)BaseOfImage + VirtualAddress;
            if ( (char *)BaseOfImage + VirtualAddress != v93 )
            {
              do
              {
                if ( !*((_DWORD *)v94 + 3) )
                  break;
                v95 = *((unsigned int *)v94 + 4);
                if ( !(_DWORD)v95 )
                  break;
                v96 = *(char **)&v90[v95];
                if ( v96 && (v96 < v90 || v96 >= &v90[v89->OptionalHeader.SizeOfImage]) )
                {
                  if ( sub_140359DE0((__int64)v96) )
                  {
                    RtlPcToFileHeader(v96, &BaseOfImage);
                    if ( BaseOfImage )
                    {
                      v97 = 0LL;
                      v98 = qword_140C0DC80;
                      while ( (PVOID)*v98 != BaseOfImage )
                      {
                        if ( !*v98 )
                        {
                          qword_140C0DC80[v97] = (__int64)BaseOfImage;
                          break;
                        }
                        v97 = (unsigned int)(v97 + 1);
                        ++v98;
                        if ( (unsigned int)v97 >= 0x10 )
                        {
                          if ( (_DWORD)v97 != 16 )
                            break;
                          goto LABEL_110;
                        }
                      }
                    }
                  }
                  v89 = v127;
                }
                v94 += 20;
              }
              while ( v94 != v93 );
              v88 = 0;
            }
          }
        }
        v43 = v132 + 1;
        v147 = v88 + 1;
        ++v132;
        if ( (unsigned int)(v88 + 1) >= 0x10 )
        {
LABEL_110:
          *(_QWORD *)&v9 = memset(qword_140C0DC80, 0, 0x80uLL);
          if ( v40 == qword_140C0DB80 || !v40 )
          {
            *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
            v40 ^= 0x95EA5DE843D5D824uLL;
          }
          _InterlockedOr(v126, 0);
          qword_140C0DB80 = v40;
          return v9;
        }
        goto LABEL_42;
      }
    }
    if ( *((_DWORD *)v47 + 1) == 1195525195 )
      goto LABEL_73;
LABEL_48:
    if ( v49 != 1095914053 || *((_WORD *)v47 + 2) != 16724 )
      goto LABEL_50;
    goto LABEL_73;
  }
  v99 = (unsigned __int64)&qword_140C0DB90;
  v100 = (unsigned __int64)&qword_140C0DB90 & 0x3F;
  v131 = (unsigned __int64)&qword_140C0DB90 & 0x3F;
  RtlImageNtHeader((PVOID)0x140000000LL);
  sub_1402D8EEC((void *)0x140000000LL, &v137, (ULONG *)&v128);
  v101 = v137;
  v102 = 0x140000000uLL;
  LODWORD(v128) = (unsigned int)v128 / 0xC;
  v138 = 0x140000000uLL;
  v103 = v137 + 12LL * (unsigned int)v128;
  v139 = v103;
  v140 = (__int64 *)&v134;
  while ( v101 && v101 != v103 )
  {
    v104 = sub_1402983F0(v101, v102);
    v105 = v100;
    *v140 = v104;
    v101 = v137 + 12;
    v137 += 12LL;
    v106 = *v134;
    v107 = v134[1] - v106;
    v108 = (_QWORD *)(0x140000000LL + v106);
    v109 = 0x140000000LL + v106 + v107;
    v110 = v108;
    v111 = (const char *)v108;
    if ( (unsigned __int64)v108 < v109 )
    {
      do
      {
        _mm_prefetch(v111, 0);
        v111 += 64;
      }
      while ( (unsigned __int64)v111 < v109 );
    }
    v112 = (__int64 *)v99;
    v113 = v107 >> 7;
    if ( v107 >> 7 )
    {
      do
      {
        v114 = 8LL;
        do
        {
          v115 = (unsigned __int64)v112 ^ *v110;
          v116 = v110 + 1;
          v117 = *v116;
          v110 = v116 + 1;
          v112 = (__int64 *)__ROL8__(__ROL8__(v115, v105) ^ v117, v105);
          --v114;
        }
        while ( v114 );
        v118 = __ROL8__(v99 ^ ((char *)v110 - (char *)v108), 17) ^ v99 ^ ((char *)v110 - (char *)v108);
        v119 = v105 ^ ((v118 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v118;
        v105 = 1;
        v120 = v119 & 0x3F;
        if ( v120 )
          v105 = v120;
        --v113;
      }
      while ( v113 );
      LOBYTE(v100) = v131;
    }
    v121 = v107 & 0x7F;
    if ( v121 >= 8 )
    {
      v122 = (unsigned __int64)v121 >> 3;
      do
      {
        v112 = (__int64 *)__ROL8__(*v110++ ^ (unsigned __int64)v112, v105);
        v121 -= 8;
        --v122;
      }
      while ( v122 );
    }
    for ( ; v121; --v121 )
    {
      v123 = *(unsigned __int8 *)v110;
      v110 = (_QWORD *)((char *)v110 + 1);
      v112 = (__int64 *)__ROL8__(v123 ^ (unsigned __int64)v112, v105);
    }
    v103 = v139;
    v102 = v138;
    v99 = (unsigned __int64)v112;
  }
  qword_140C0DB90 = v99;
  if ( qword_140C0DB80 )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
  v124 = __rdtsc();
  v9 = (__ROR8__(v124, 3) ^ v124) * (unsigned __int128)0x7010008004002001uLL;
  qword_140C0DB80 = v9 ^ *((_QWORD *)&v9 + 1);
  if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
  {
    *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
    qword_140C0DB80 = 0x95EA5DE843D5D824uLL;
  }
  return v9;
}
