/*
 * XREFs of sub_140ACF0E0 @ 0x140ACF0E0
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_140ACF0E0(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        ULONG_PTR a4,
        int a5,
        char a6,
        int *a7,
        unsigned int *a8)
{
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rbx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // ecx
  unsigned __int64 v21; // rdx
  int v22; // edi
  __int64 v23; // r8
  int v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned int *v27; // r9
  const char *v28; // rax
  int v29; // r10d
  unsigned __int64 v30; // r8
  unsigned int i; // r11d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  signed __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // r11
  __int64 v38; // rax
  bool v39; // zf
  unsigned __int64 j; // rax
  int v41; // r15d
  _OWORD *v42; // rsi
  __int64 v43; // rcx
  unsigned __int8 CurrentIrql; // r12
  int v45; // edi
  unsigned int *v46; // rcx
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int *v50; // rcx
  __int64 v51; // r9
  _QWORD *v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // esi
  unsigned int *v56; // r13
  unsigned int v57; // r12d
  unsigned int v58; // edi
  unsigned int *v59; // rcx
  char v60; // al
  ULONG_PTR v61; // rbp
  signed __int64 v62; // r8
  __int64 v63; // r9
  _DWORD *v64; // r15
  int v65; // ebp
  int v66; // eax
  __int16 v67; // ax
  __int64 *v68; // r10
  signed __int64 v69; // r9
  char *v70; // rdi
  int v71; // r11d
  char *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rax
  int v75; // eax
  __int64 *v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // r9d
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // r9d
  __int64 v85; // rdx
  __int64 v86; // rax
  unsigned int v87; // r9d
  unsigned int v88; // ecx
  __int64 v89; // r9
  unsigned int v90; // eax
  unsigned int v91; // edx
  int v92; // esi
  unsigned int v93; // eax
  ULONG_PTR v94; // rdi
  __int64 v95; // r14
  char v96; // al
  unsigned __int8 v97; // r15
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // r12
  unsigned __int64 v100; // rbp
  int v101; // eax
  unsigned int v102; // r8d
  _QWORD *v103; // r9
  int v104; // r11d
  const char *v105; // rax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // r8
  unsigned int v108; // r10d
  __int64 v109; // rax
  __int64 v110; // r8
  unsigned __int128 v111; // rax
  unsigned int v112; // r14d
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int64 k; // rax
  int v116; // edx
  unsigned int v117; // [rsp+30h] [rbp-98h]
  int v118; // [rsp+34h] [rbp-94h]
  __int64 v119; // [rsp+38h] [rbp-90h]
  int *v120; // [rsp+40h] [rbp-88h]
  unsigned __int64 v121; // [rsp+48h] [rbp-80h]
  char v122; // [rsp+50h] [rbp-78h]
  unsigned int v123; // [rsp+54h] [rbp-74h]
  unsigned int *v124; // [rsp+58h] [rbp-70h]
  __int64 v125; // [rsp+60h] [rbp-68h]
  __int64 v126; // [rsp+68h] [rbp-60h]
  unsigned int *v127; // [rsp+70h] [rbp-58h]
  int v129; // [rsp+D0h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v9 = a3;
  v119 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 488LL))(a4);
  if ( !v119 )
    return 3221225595LL;
  v10 = v9 / 0xC;
  if ( a5 )
    v11 = 12LL;
  else
    v11 = (a6 & 0x10) != 0 ? 43 : 1;
  v12 = *((unsigned int *)v8 + 491);
  v13 = 4 * v10;
  v14 = 4 * v10 + v12 + 48;
  if ( v14 <= *((_DWORD *)v8 + 633) )
  {
    v15 = (__int64)v8;
    *((_DWORD *)v8 + 491) = v14;
  }
  else
  {
    v15 = sub_140ACFC24(v8, v14, *((unsigned int *)v8 + 571));
    if ( !v15 )
      return 3221225626LL;
    v17 = *((_DWORD *)v8 + 598);
    if ( (v17 & 4) == 0 )
    {
      v18 = *((_DWORD *)v8 + 491);
      v19 = *((_QWORD *)v8 + 242);
      v20 = (v17 & 0x20000000) != 0 ? *((_DWORD *)v8 + 571) : 0;
      if ( v18 >= 8 )
      {
        v21 = (unsigned __int64)v18 >> 3;
        do
        {
          *(_QWORD *)v8 = 0LL;
          v18 -= 8;
          v8 += 8;
          --v21;
        }
        while ( v21 );
      }
      for ( ; v18; --v18 )
        *v8++ = 0;
      v22 = *(_DWORD *)(v15 + 2284);
      *(_DWORD *)(v15 + 2284) = v20;
      if ( v20 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v15 + 856))(v19);
      }
      else if ( (*(_DWORD *)(v15 + 2392) & 0x10000000) != 0 || !v20 )
      {
        (*(void (__fastcall **)(__int64))(v15 + 240))(v19);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v15 + 536))(v19 - 8, *(_QWORD *)(v19 - 8));
      }
      *(_DWORD *)(v15 + 2284) = v22;
    }
    *(_DWORD *)(v15 + 2392) &= ~4u;
  }
  ++*(_DWORD *)(v15 + 2004);
  v23 = v15 + v12;
  v24 = 48;
  v120 = (int *)(v15 + v12);
  v25 = (_QWORD *)(v15 + v12);
  v26 = 6LL;
  do
  {
    *v25 = 0LL;
    v24 -= 8;
    ++v25;
    --v26;
  }
  while ( v26 );
  for ( ; v24; --v24 )
  {
    *(_BYTE *)v25 = 0;
    v25 = (_QWORD *)((char *)v25 + 1);
  }
  *(_DWORD *)v23 = v11;
  v27 = a2;
  *(_QWORD *)(v23 + 8) = a2;
  v28 = (const char *)a2;
  *(_DWORD *)(v23 + 16) = v9;
  *(_DWORD *)(v15 + 2032) += v9;
  v29 = *(_DWORD *)(v15 + 2012);
  if ( v28 < &v28[v9] )
  {
    do
    {
      _mm_prefetch(v28, 0);
      v28 += 64;
    }
    while ( v28 < (const char *)a2 + v9 );
  }
  v30 = *(_QWORD *)(v15 + 2016);
  for ( i = (unsigned int)v9 >> 7; i; --i )
  {
    v32 = 8LL;
    do
    {
      v33 = v30 ^ *(_QWORD *)v27;
      v34 = *((_QWORD *)v27 + 1);
      v27 += 4;
      v30 = __ROL8__(__ROL8__(v33, v29) ^ v34, v29);
      --v32;
    }
    while ( v32 );
    v35 = __ROL8__(*(_QWORD *)(v15 + 2016) ^ ((char *)v27 - (char *)a2), 17) ^ *(_QWORD *)(v15 + 2016) ^ ((char *)v27 - (char *)a2);
    v29 = ((unsigned __int8)((((unsigned __int64)v35 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v35) ^ (unsigned __int8)v29) & 0x3F;
    if ( !v29 )
      LOBYTE(v29) = 1;
  }
  v36 = v9 & 0x7F;
  if ( (unsigned int)v36 >= 8 )
  {
    v37 = (v9 & 0x7F) >> 3;
    do
    {
      v30 = __ROL8__(*(_QWORD *)v27 ^ v30, v29);
      v27 += 2;
      v36 = (unsigned int)(v36 - 8);
      --v37;
    }
    while ( v37 );
  }
  if ( (_DWORD)v36 )
  {
    do
    {
      v38 = *(unsigned __int8 *)v27;
      v27 = (unsigned int *)((char *)v27 + 1);
      v30 = __ROL8__(v38 ^ v30, v29);
      v39 = (_DWORD)v36 == 1;
      v36 = (unsigned int)(v36 - 1);
    }
    while ( !v39 );
  }
  for ( j = v30; ; v30 = (unsigned int)j ^ (unsigned int)v30 )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  LODWORD(v30) = v30 & 0x7FFFFFFF;
  v41 = -1073741275;
  v120[5] = v30;
  *(_DWORD *)(v15 + 2032) += v9;
  v42 = v120 + 6;
  *(_QWORD *)a1 = v15;
  v43 = *(_QWORD *)(v15 + 1304);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v15 + 320))(v43, v36, v30, v27);
  v45 = 24;
  v46 = **(unsigned int ***)(v15 + 1512);
  v47 = (unsigned __int64)(v46 + 4);
  while ( *(_QWORD *)(v47 + 8) != a4 )
  {
    v47 += 24LL;
    if ( v47 >= (unsigned __int64)&v46[6 * *v46 + 4] )
      goto LABEL_48;
  }
  v41 = 0;
  *v42 = *(_OWORD *)v47;
  *((_QWORD *)v120 + 5) = *(_QWORD *)(v47 + 16);
LABEL_48:
  (*(void (__fastcall **)(_QWORD))(v15 + 384))(*(_QWORD *)(v15 + 1304));
  __writecr8(CurrentIrql);
  if ( v41 >= 0 )
  {
    v50 = v120;
    v51 = v119;
  }
  else
  {
    v48 = v120 + 6;
    v49 = 3LL;
    do
    {
      *v48 = 0LL;
      v45 -= 8;
      ++v48;
      --v49;
    }
    while ( v49 );
    for ( ; v45; --v45 )
    {
      *(_BYTE *)v48 = 0;
      v48 = (_QWORD *)((char *)v48 + 1);
    }
    v50 = v120;
    v51 = v119;
    *((_QWORD *)v120 + 4) = a4;
    v120[10] = *(_DWORD *)(v119 + 80);
    *(_QWORD *)v42 = 1LL;
  }
  v52 = v50 + 12;
  v124 = (unsigned int *)(v50 + 12);
  if ( v13 >= 8 )
  {
    v53 = (unsigned __int64)v13 >> 3;
    do
    {
      *v52 = -1LL;
      v13 -= 8;
      ++v52;
      --v53;
    }
    while ( v53 );
  }
  for ( ; v13; --v13 )
  {
    *(_BYTE *)v52 = -1;
    v52 = (_QWORD *)((char *)v52 + 1);
  }
  v54 = (unsigned int)v10;
  v55 = -1;
  v56 = a2;
  v57 = 0;
  v129 = -1;
  v58 = 0;
  v117 = 0;
  v121 = 0LL;
  v59 = &a2[3 * v54];
  v127 = v59;
  v60 = -9;
  if ( (*(_DWORD *)(v15 + 2396) & 0x40) != 0 )
    v60 = a6;
  v122 = v60;
  if ( a2 == v59 )
  {
    *a7 = 0;
    *a8 = 0;
    return 0LL;
  }
  v61 = a4;
  v125 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v15 + 512))(v51, a4, *a2);
  v126 = v11;
  v64 = (_DWORD *)v125;
  if ( !v125 )
    goto LABEL_169;
  while ( 2 )
  {
    v65 = 0;
    if ( (v64[9] & 0x2000000) != 0 )
      goto LABEL_69;
    v66 = *v64;
    if ( *v64 == 1414090313 )
    {
      if ( v64[1] == 1195525195 )
      {
LABEL_69:
        v65 = 1;
        goto LABEL_82;
      }
    }
    else if ( v66 == 1162297680 )
    {
      v67 = *((_WORD *)v64 + 2);
      if ( v67 == 30839 || v67 == 29303 || v67 == 30583 )
        goto LABEL_69;
      goto LABEL_77;
    }
    if ( v66 == 1095914053 && *((_WORD *)v64 + 2) == 16724 )
      goto LABEL_69;
LABEL_77:
    v62 = *(_QWORD *)(v15 + 2296);
    v68 = *(__int64 **)(v15 + 2304);
    v69 = (signed __int64)v64 - v62;
    v70 = *(char **)(v15 + 2312);
    v71 = 7;
    v72 = *(char **)(v15 + 2320);
    while ( 1 )
    {
      v73 = *(unsigned __int8 *)(v69 + v62);
      v74 = *(unsigned __int8 *)v62++;
      if ( v73 != v74 )
        break;
      if ( !--v71 )
      {
LABEL_80:
        v65 = 1;
        goto LABEL_81;
      }
    }
    LODWORD(v62) = 8;
    v76 = (__int64 *)v64;
    while ( 1 )
    {
      v77 = *v76++;
      v78 = *v68++;
      if ( v77 != v78 )
        break;
      v62 = (unsigned int)(v62 - 8);
      if ( (unsigned int)v62 < 8 )
      {
        if ( !(_DWORD)v62 )
          goto LABEL_80;
        while ( 1 )
        {
          v79 = *(unsigned __int8 *)v76;
          v76 = (__int64 *)((char *)v76 + 1);
          v80 = *(unsigned __int8 *)v68;
          v68 = (__int64 *)((char *)v68 + 1);
          if ( v79 != v80 )
            goto LABEL_94;
          v39 = (_DWORD)v62 == 1;
          v62 = (unsigned int)(v62 - 1);
          if ( v39 )
            goto LABEL_80;
        }
      }
    }
LABEL_94:
    v81 = 4;
    v62 = (char *)v64 - v70;
    while ( 1 )
    {
      v82 = (unsigned __int8)v70[v62];
      v83 = (unsigned __int8)*v70++;
      if ( v82 != v83 )
        break;
      if ( !--v81 )
        goto LABEL_80;
    }
    v84 = 6;
    v62 = (char *)v64 - v72;
    while ( 1 )
    {
      v85 = (unsigned __int8)v72[v62];
      v86 = (unsigned __int8)*v72++;
      if ( v85 != v86 )
        break;
      if ( !--v84 )
        goto LABEL_80;
    }
LABEL_81:
    v58 = v117;
    v55 = v129;
LABEL_82:
    v75 = v64[9];
    if ( v75 < 0 )
      v65 = 1;
    v118 = v65;
    if ( v11 == 43 && (v75 & 0x20000000) == 0 )
    {
      v65 = 1;
      v118 = 1;
LABEL_103:
      if ( *v64 == 1414090313 && v64[1] == 1195525195 )
      {
        if ( (*(_DWORD *)(v15 + 2396) & 0x2000) != 0 )
          v65 = 0;
        v118 = v65;
      }
      goto LABEL_108;
    }
    if ( v65 )
      goto LABEL_103;
LABEL_108:
    v87 = v64[4];
    v88 = v64[3];
    if ( v87 <= v64[2] )
      v87 = v64[2];
    v89 = v88 + v87;
    v123 = v89;
    do
    {
      v90 = v56[2];
      v91 = v55;
      if ( (v90 & 1) == 0 )
      {
        v92 = v56[2];
        if ( v90 >= v91 )
          v92 = v91;
        v129 = v92;
        if ( v90 > v58 )
        {
          v117 = v56[2];
          v129 = v92;
        }
      }
      v93 = *v56;
      v94 = a4 + *v56;
      v95 = v56[1] - *v56;
      if ( v126 == 43 )
      {
        if ( v65
          || v88 - v93 < 6
          || v93 - v57 < 6
          || (v96 = *(_BYTE *)(v94 - 1), *(_BYTE *)(v94 - 6) != 76)
          || *(_BYTE *)(v94 - 5) != 0x87
          || *(_BYTE *)(v94 - 4)
          || *(_BYTE *)(v94 - 3) != 0x98
          || *(_BYTE *)(v94 - 2) != 0xC3
          || v96 != -112 && v96 != -15 )
        {
LABEL_138:
          v102 = 0x80000000;
          goto LABEL_165;
        }
      }
      else if ( v65 )
      {
        goto LABEL_138;
      }
      if ( (v122 & 8) != 0 )
      {
        if ( (((v94 & 0xFFF) + v95 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v94 & 0xFFFFFFFFFFFFF000uLL) != v121 )
        {
          if ( (_DWORD)v95 && (*(_DWORD *)(v15 + 2396) & 0x40) != 0 )
          {
            v97 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v98 = v94 & 0xFFFFFFFFFFFFF000uLL;
            v99 = (v94 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v100 = v97;
              while ( 1 )
              {
                v101 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v15 + 1112))(v98, 1LL);
                if ( v101 != -1073741267 )
                  break;
                if ( v97 > 1u )
                  goto LABEL_140;
                v100 = v97;
                __writecr8(v97);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v101 < 0 )
              {
                __writecr8(v100);
                goto LABEL_143;
              }
LABEL_140:
              v98 += 4096LL;
              v99 += 4096LL;
              if ( v99 != ((v94 + v95 - 1) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v100);
          }
          else
          {
LABEL_143:
            if ( !*(_DWORD *)(v15 + 2240) )
            {
              *(_QWORD *)(v15 + 2248) = v15 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v15 + 2256) = (char *)v120 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v15 + 2264) = *v120;
              *(_QWORD *)(v15 + 2272) = v94;
              *(_DWORD *)(v15 + 2240) = 1;
              sub_140AD049C(v15, 0LL, v62, v89);
            }
          }
          v64 = (_DWORD *)v125;
          v65 = v118;
          v121 = (v94 + v95) & 0xFFFFFFFFFFFFF000uLL;
        }
        v56 = a2;
      }
      *(_DWORD *)(v15 + 2032) += v95;
      v103 = (_QWORD *)v94;
      v104 = *(_DWORD *)(v15 + 2012);
      v105 = (const char *)v94;
      v106 = v94 + (unsigned int)v95;
      if ( v94 < v106 )
      {
        do
        {
          _mm_prefetch(v105, 0);
          v105 += 64;
        }
        while ( (unsigned __int64)v105 < v106 );
      }
      v107 = *(_QWORD *)(v15 + 2016);
      v108 = (unsigned int)v95 >> 7;
      if ( (unsigned int)v95 >> 7 )
      {
        do
        {
          v109 = 8LL;
          do
          {
            v110 = v103[1] ^ __ROL8__(*v103 ^ v107, v104);
            v103 += 2;
            v107 = __ROL8__(v110, v104);
            --v109;
          }
          while ( v109 );
          v111 = (__ROL8__(*(_QWORD *)(v15 + 2016) ^ ((unsigned __int64)v103 - v94), 17) ^ *(_QWORD *)(v15 + 2016) ^ ((unsigned __int64)v103 - v94))
               * (unsigned __int128)0x7010008004002001uLL;
          v104 = (BYTE8(v111) ^ (unsigned __int8)(v111 ^ v104)) & 0x3F;
          if ( !v104 )
            LOBYTE(v104) = 1;
          --v108;
        }
        while ( v108 );
        v65 = v118;
      }
      v112 = v95 & 0x7F;
      if ( v112 >= 8 )
      {
        v113 = (unsigned __int64)v112 >> 3;
        do
        {
          v107 = __ROL8__(*v103++ ^ v107, v104);
          v112 -= 8;
          --v113;
        }
        while ( v113 );
      }
      for ( ; v112; --v112 )
      {
        v114 = *(unsigned __int8 *)v103;
        v103 = (_QWORD *)((char *)v103 + 1);
        v107 = __ROL8__(v114 ^ v107, v104);
      }
      for ( k = v107; ; LODWORD(v107) = k ^ v107 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      v89 = v123;
      v102 = v107 & 0x7FFFFFFF;
LABEL_165:
      *v124 = v102;
      v57 = v56[1];
      v56 += 3;
      a2 = v56;
      if ( v56 == v127 )
      {
        v116 = v129;
        if ( v129 == -1 )
          v116 = -(v117 != 0);
        *a7 = v116;
        *a8 = v117;
        return 0LL;
      }
      v62 = *v56;
      v88 = v64[3];
      ++v124;
      if ( (unsigned int)v62 < v88 )
        break;
      v55 = v129;
      v58 = v117;
    }
    while ( v56[1] <= (unsigned int)v89 );
    v61 = a4;
    v55 = v129;
    v58 = v117;
    v64 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, ULONG_PTR, signed __int64, __int64))(v15 + 512))(
                      v119,
                      a4,
                      v62,
                      v89);
    v11 = v126;
    v125 = (__int64)v64;
    if ( v64 )
      continue;
    break;
  }
LABEL_169:
  if ( (*(_DWORD *)(v15 + 2392) & 0x200000) == 0 )
    KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v61, 8uLL, 0LL);
  if ( !*(_DWORD *)(v15 + 2240) )
  {
    *(_QWORD *)(v15 + 2256) = 0LL;
    *(_QWORD *)(v15 + 2248) = v15 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v15 + 2264) = 271LL;
    *(_DWORD *)(v15 + 2240) = 1;
    *(_QWORD *)(v15 + 2272) = v61;
    sub_140AD049C(v15, 0LL, v62, v63);
  }
  return 3221225595LL;
}
