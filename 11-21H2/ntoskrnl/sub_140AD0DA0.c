/*
 * XREFs of sub_140AD0DA0 @ 0x140AD0DA0
 * Callers:
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 * Callees:
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     sub_140AD2100 @ 0x140AD2100 (sub_140AD2100.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 *     sub_140AD23C0 @ 0x140AD23C0 (sub_140AD23C0.c)
 */

__int64 __fastcall sub_140AD0DA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // esi
  _QWORD *v8; // r9
  int v9; // r10d
  const char *v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // r11
  int v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int *v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // r8
  unsigned int v30; // r9d
  int *v31; // rbx
  __int64 v32; // r10
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // r11
  int v40; // r14d
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned __int64 v43; // r15
  _QWORD *v44; // r9
  const char *v45; // rax
  unsigned __int64 v46; // rsi
  unsigned int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  bool v54; // zf
  unsigned __int64 i; // rax
  unsigned int v56; // esi
  BOOL v57; // r12d
  __int64 v58; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r15
  int v62; // eax
  __int64 v63; // r13
  __int64 v64; // rbx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v68; // r14
  __int64 v69; // r15
  unsigned __int64 v70; // r8
  unsigned int v71; // r10d
  unsigned __int64 v72; // r9
  _QWORD *j; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rsi
  _QWORD *v79; // rcx
  char *v80; // r10
  int v81; // r11d
  unsigned __int64 v82; // rbx
  signed __int64 v83; // r10
  __int64 v84; // r8
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  _QWORD *v87; // r9
  unsigned __int64 v88; // rax
  unsigned __int128 v89; // rax
  __int64 v90; // rdx
  char *v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // r8
  char v94; // al
  unsigned __int64 v95; // rdx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  volatile signed __int32 *v102; // rax
  signed __int32 v103[8]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v104; // [rsp+48h] [rbp-39h]
  unsigned int v105; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v106; // [rsp+58h] [rbp-29h]
  unsigned __int64 v107; // [rsp+60h] [rbp-21h]
  __int64 v108; // [rsp+68h] [rbp-19h]
  __int16 v109; // [rsp+70h] [rbp-11h] BYREF
  __int64 v110; // [rsp+72h] [rbp-Fh]
  char v111; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v112[16]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v113; // [rsp+98h] [rbp+17h]
  unsigned __int64 v114; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 v115; // [rsp+A8h] [rbp+27h]
  __int64 v116; // [rsp+B0h] [rbp+2Fh]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 2392) & 0x110000) != 0x110000 )
  {
    v3 = *(_QWORD *)(a2 + 2216);
    v4 = 38LL;
    v5 = (_QWORD *)v3;
    v6 = 304;
    do
    {
      *v5 = 0LL;
      v6 -= 8;
      ++v5;
      --v4;
    }
    while ( v4 );
    for ( ; v6; --v6 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 2064);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 2080);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)(v2 + 2096);
    v109 = 303;
    v110 = v3;
    *(_WORD *)(v3 + 16) = v2 + 2112;
    *(_DWORD *)(v3 + 24) = (unsigned __int64)(v2 + 2112) >> 32;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2112) >> 16;
    _disable();
    if ( *(int *)(v2 + 2392) >= 0 )
    {
      __sidt(v112);
      __lidt(&v109);
      __writedr(7u, 0LL);
      __lidt(v112);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 2032) += 1528;
  v7 = *(_DWORD *)(v2 + 196);
  v8 = (_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 2012);
  v10 = (const char *)v2;
  v11 = *(_QWORD *)(v2 + 2016);
  *(_DWORD *)(v2 + 196) = 0;
  if ( v2 < (unsigned __int64)(v2 + 1528) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < v2 + 1528 );
  }
  v12 = v11;
  v13 = 11;
  do
  {
    v14 = 8LL;
    do
    {
      v15 = v12 ^ *v8;
      v16 = v8 + 1;
      v17 = *v16;
      v8 = v16 + 1;
      v12 = __ROL8__(__ROL8__(v15, v9) ^ v17, v9);
      --v14;
    }
    while ( v14 );
    v18 = __ROL8__(v11 ^ ((unsigned __int64)v8 - v2), 17) ^ v11 ^ ((unsigned __int64)v8 - v2);
    v113 = (v18 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v9 = ((unsigned __int8)(v113 ^ v18) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
    --v13;
  }
  while ( v13 );
  v19 = 120;
  v20 = 15LL;
  v21 = 64;
  do
  {
    v12 = __ROL8__(*v8++ ^ v12, v9);
    v19 -= 8;
    --v20;
  }
  while ( v20 );
  for ( ; v19; --v19 )
  {
    v22 = *(unsigned __int8 *)v8;
    v8 = (_QWORD *)((char *)v8 + 1);
    v12 = __ROL8__(v22 ^ v12, v9);
  }
  v23 = 0xA3A03F5891C8B4E8uLL;
  *(_DWORD *)(v2 + 196) = v7;
  if ( *(_QWORD *)(v2 + 2536) != v12 )
  {
    v24 = *(_QWORD *)(v2 + 1384);
    v25 = *(_DWORD *)(v2 + 1964);
    *(_QWORD *)v24 = v2;
    *(_DWORD *)(v24 + 16) = v25;
    if ( !*(_DWORD *)(v2 + 2240) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1384) + 24LL) = *(_QWORD *)(v2 + 2536) ^ v12;
      if ( !*(_DWORD *)(v2 + 2240) )
      {
        *(_QWORD *)(v2 + 2256) = 0LL;
        *(_QWORD *)(v2 + 2248) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2264) = 265LL;
        *(_QWORD *)(v2 + 2272) = v12;
        *(_DWORD *)(v2 + 2240) = 1;
        sub_140AD049C(v2, 0LL);
      }
    }
  }
  v104 = 0LL;
  v26 = &v105;
  v27 = 4;
  do
  {
    *(_BYTE *)v26 = 0;
    v26 = (unsigned int *)((char *)v26 + 1);
    --v27;
  }
  while ( v27 );
  v28 = 0;
  LODWORD(v106) = 0;
  if ( *(_DWORD *)(v2 + 1960) )
  {
    while ( 1 )
    {
      v29 = v2;
      v30 = 0;
      if ( *(_QWORD *)(v2 + 2624) )
        v29 = *(_QWORD *)(v2 + 2624);
      v31 = (int *)(v29 + *(unsigned int *)(v29 + 2000));
      if ( (_DWORD)v104 && HIDWORD(v104) <= v28 )
      {
        v30 = HIDWORD(v104);
        v31 = (int *)(v29 + v105);
      }
      if ( v30 != v28 )
        break;
LABEL_57:
      v39 = (_QWORD *)*((_QWORD *)v31 + 1);
      v40 = *(_DWORD *)(v2 + 2012);
      v41 = (_DWORD)v31 - v29;
      v42 = (unsigned int)v31[4];
      *(_DWORD *)(v2 + 2032) += v42;
      v43 = *(_QWORD *)(v2 + 2016);
      HIDWORD(v104) = v30;
      v44 = v39;
      v105 = v41;
      LODWORD(v104) = 1;
      v45 = (const char *)v39;
      if ( v39 < (_QWORD *)((char *)v39 + v42) )
      {
        do
        {
          _mm_prefetch(v45, 0);
          v45 += 64;
        }
        while ( v45 < (const char *)v39 + v42 );
      }
      v46 = v43;
      v47 = (unsigned int)v42 >> 7;
      if ( (unsigned int)v42 >> 7 )
      {
        do
        {
          v48 = 8LL;
          do
          {
            v49 = v44[1] ^ __ROL8__(*v44 ^ v46, v40);
            v44 += 2;
            v46 = __ROL8__(v49, v40);
            --v48;
          }
          while ( v48 );
          v50 = __ROL8__(v43 ^ ((char *)v44 - (char *)v39), 17) ^ v43 ^ ((char *)v44 - (char *)v39);
          v23 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v114 = v23;
          v40 = ((unsigned __int8)(v23 ^ v50) ^ (unsigned __int8)v40) & 0x3F;
          if ( !v40 )
            LOBYTE(v40) = 1;
          --v47;
        }
        while ( v47 );
        v2 = a2;
      }
      v51 = v42 & 0x7F;
      if ( (unsigned int)v51 >= 8 )
      {
        v52 = (unsigned __int64)(unsigned int)v51 >> 3;
        do
        {
          v46 = __ROL8__(*v44++ ^ v46, v40);
          v51 = (unsigned int)(v51 - 8);
          --v52;
        }
        while ( v52 );
      }
      if ( (_DWORD)v51 )
      {
        do
        {
          v53 = *(unsigned __int8 *)v44;
          v44 = (_QWORD *)((char *)v44 + 1);
          v46 = __ROL8__(v53 ^ v46, v40);
          v54 = (_DWORD)v51 == 1;
          v51 = (unsigned int)(v51 - 1);
        }
        while ( !v54 );
      }
      for ( i = v46; ; LODWORD(v46) = i ^ v46 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v56 = v46 & 0x7FFFFFFF;
      v57 = 0;
      if ( v56 != v31[5] )
      {
        if ( !*v31 )
          v57 = v31[6] != 0;
        v58 = (unsigned int)v31[4];
        v23 = *((_QWORD *)v31 + 1);
        if ( v31[4] && (*(_DWORD *)(v2 + 2396) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v60 = v23 & 0xFFFFFFFFFFFFF000uLL;
          v108 = (v23 + v58 - 1) | 0xFFF;
          v107 = (v23 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v61 = CurrentIrql;
            while ( 1 )
            {
              v62 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v2 + 1112))(
                      v60,
                      0LL,
                      v51,
                      v44);
              if ( v62 != -1073741267 )
                break;
              if ( v57 )
                goto LABEL_100;
              if ( CurrentIrql > 1u )
                goto LABEL_86;
              v61 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v62 < 0 )
            {
LABEL_100:
              __writecr8(v61);
              goto LABEL_101;
            }
LABEL_86:
            v23 = 4096LL;
            v60 += 4096LL;
            v107 += 4096LL;
            if ( v107 != v108 )
              continue;
            break;
          }
          __writecr8(v61);
        }
        else
        {
LABEL_101:
          if ( !*(_DWORD *)(v2 + 2240) )
          {
            *(_QWORD *)(*(_QWORD *)(v2 + 1384) + 24LL) = v56 ^ (unsigned __int64)(unsigned int)v31[5];
            v75 = *((_QWORD *)v31 + 1);
            if ( !*(_DWORD *)(v2 + 2240) )
            {
              *(_QWORD *)(v2 + 2248) = v2 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v2 + 2256) = (char *)v31 - 0x4C48B4211BBACBEBLL;
              v76 = *v31;
              *(_QWORD *)(v2 + 2272) = v75;
              *(_QWORD *)(v2 + 2264) = v76;
              *(_DWORD *)(v2 + 2240) = 1;
              sub_140AD049C(v2, 0LL);
            }
          }
        }
      }
      v21 = 64;
      v28 = v106 + 1;
      LODWORD(v106) = v28;
      if ( v28 >= *(_DWORD *)(v2 + 1960) )
        goto LABEL_89;
    }
    v32 = v28 - v30;
    v30 = v28;
    while ( 1 )
    {
      v33 = *v31;
      if ( *v31 > 12 )
        break;
      if ( v33 == 12 )
        goto LABEL_50;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_50;
      v35 = v34 - 6;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( !v36 )
        {
          v38 = *((unsigned __int16 *)v31 + 16);
LABEL_55:
          v37 = (v38 + 55) & 0xFFFFFFF8;
          goto LABEL_56;
        }
        if ( v36 != 2 )
          goto LABEL_52;
        v37 = (unsigned int)(16 * (v31[7] + 3));
      }
      else
      {
        v37 = (unsigned int)(24 * (v31[6] + 2));
      }
LABEL_56:
      v31 = (int *)((char *)v31 + v37);
      if ( !--v32 )
        goto LABEL_57;
    }
    if ( v33 == 28 )
    {
      v38 = *((unsigned __int16 *)v31 + 20);
      goto LABEL_55;
    }
    if ( v33 == 30 )
    {
      v23 = ((v31[9] != 0 ? v31[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
      v37 = (unsigned int)v23 + 24 * (*((unsigned __int16 *)v31 + 20) + 2);
      goto LABEL_56;
    }
    if ( v33 <= 32 )
    {
LABEL_52:
      v37 = 48LL;
      goto LABEL_56;
    }
    if ( v33 <= 34 )
    {
      v23 = ((v31[8] & 0xFFF) + (unsigned __int64)(unsigned int)v31[10] + 4095) >> 12;
      v37 = (unsigned int)(20 * v23 + 48);
      goto LABEL_56;
    }
    if ( v33 != 43 )
      goto LABEL_52;
LABEL_50:
    v23 = (unsigned int)v31[4] / 0xCuLL;
    v37 = (unsigned int)(4 * v23 + 48);
    goto LABEL_56;
  }
LABEL_89:
  if ( *(_DWORD *)(v2 + 2240) )
  {
    v63 = *(_QWORD *)(v2 + 2264);
    v64 = *(_QWORD *)(v2 + 2272);
    v65 = *(_QWORD *)(v2 + 2256);
    v66 = *(_QWORD *)(v2 + 2248);
    v108 = v64;
    v107 = v65;
    v106 = v66;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v68 = *(_QWORD *)((char *)CurrentPrcb + *(_QWORD *)(v2 + 1544));
    v69 = *(_QWORD *)((char *)CurrentPrcb + *(_QWORD *)(v2 + 1560));
    if ( !*((_BYTE *)CurrentPrcb + *(_QWORD *)(v2 + 1552))
      || (unsigned __int64)&v111 > v68
      || (unsigned __int64)&v111 < v68 - 24576 )
    {
      v68 = *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1608));
    }
    if ( (*(_DWORD *)(v2 + 2392) & 0x8000000) == 0 )
    {
      v66 = __readcr0();
      __writecr0(v66 & 0xFFFFFFFFFFFEFFFFuLL);
      v70 = v2 + 2672;
      v71 = 0;
      v72 = v2 + 2672 + 16LL * *(unsigned int *)(v2 + 2664);
      for ( j = (_QWORD *)v72; v71 < *(_DWORD *)(v2 + 2668); ++v71 )
      {
        *(_QWORD *)*j = j[1];
        v74 = __readcr4();
        if ( (v74 & 0x20080) != 0 )
        {
          __writecr4(v74 ^ 0x80);
          __writecr4(v74);
        }
        else
        {
          v77 = __readcr3();
          __writecr3(v77);
        }
        j += 2;
      }
      if ( v70 < v72 )
      {
        do
        {
          v78 = *(unsigned int *)(v70 + 8);
          v79 = j;
          v80 = *(char **)v70;
          v81 = v78;
          if ( (unsigned int)v78 >= 8 )
          {
            v82 = (unsigned __int64)(unsigned int)v78 >> 3;
            do
            {
              v81 -= 8;
              *(_QWORD *)v80 = *v79++;
              v80 += 8;
              --v82;
            }
            while ( v82 );
          }
          if ( v81 )
          {
            v83 = v80 - (char *)v79;
            do
            {
              *((_BYTE *)v79 + v83) = *(_BYTE *)v79;
              v79 = (_QWORD *)((char *)v79 + 1);
              --v81;
            }
            while ( v81 );
          }
          j = (_QWORD *)((char *)j + v78);
          v70 += 16LL;
        }
        while ( v70 < v72 );
        LODWORD(v64) = v108;
        LODWORD(v65) = v107;
      }
      **(_BYTE **)(v2 + 520) = -61;
      __writecr0(v66);
      LODWORD(v66) = v106;
    }
    v97 = *(_DWORD *)(v2 + 2288);
    if ( v97 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v97 = *(_DWORD *)(v2 + 2288);
      }
      if ( v97 )
      {
        v98 = v97 - 1;
        if ( v98 )
        {
          v99 = v98 - 1;
          if ( v99 )
          {
            v100 = v99 - 1;
            if ( v100 )
            {
              v101 = v100 - 1;
              if ( v101 )
              {
                if ( v101 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v2 + 1560)),
                    (*(_DWORD *)(v2 + 2392) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2 + 1424) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v2 + 1656)
                                              + *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v2 + 1560))
                                              + *(_QWORD *)(v2 + 1624)),
                  (*(_DWORD *)(v2 + 2392) >> 10) & 0x1F);
              }
              goto LABEL_149;
            }
            v102 = *(volatile signed __int32 **)(v2 + 1336);
          }
          else
          {
            v102 = *(volatile signed __int32 **)(v2 + 1328);
          }
        }
        else
        {
          v102 = *(volatile signed __int32 **)(v2 + 1312);
        }
        _interlockedbittestandset64(v102, 0LL);
      }
    }
LABEL_149:
    *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1632)) = 0LL;
    *(_QWORD *)(v69 + *(_QWORD *)(v2 + 1648)) = 0LL;
    sub_140AD23C0(*(_QWORD *)(v2 + 328));
    sub_140AD2100(265, v66, v65, v64, v63, *(_QWORD *)(v2 + 328), v68);
    JUMPOUT(0x140AD18B3LL);
  }
  v84 = v2 + *(unsigned int *)(v2 + 1976);
  if ( (*(_DWORD *)(v2 + 2392) & 0x10000000) != 0 )
  {
    v85 = __rdtsc();
    v86 = __ROR8__(v85, 3) ^ v85;
    v23 = (v86 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v115 = v23;
    v84 = (__int64)sub_14042C490 + 16 * (((unsigned __int8)v86 ^ (unsigned __int8)v23) & 0xF);
  }
  v87 = *(_QWORD **)(v2 + 2512);
  if ( v87 )
  {
    v88 = __rdtsc();
    v89 = (__ROR8__(v88, 3) ^ v88) * (unsigned __int128)0x7010008004002001uLL;
    v116 = *((_QWORD *)&v89 + 1);
    *((_QWORD *)&v89 + 1) ^= v89;
    v87[2] = *((_QWORD *)&v89 + 1);
    *(_QWORD *)&v89 = v84 ^ *((_QWORD *)&v89 + 1);
    v23 = v2 ^ *((_QWORD *)&v89 + 1);
    v87[3] = v89;
    v87[1] = v23;
    _InterlockedOr(v103, 0);
    v84 = *(_QWORD *)(v2 + 736);
  }
  else
  {
    v87 = (_QWORD *)v2;
  }
  *(_QWORD *)(v2 + 1904) = v84;
  *(_QWORD *)(v2 + 1912) = v87;
  *(_QWORD *)(v2 + 1888) = 0LL;
  _disable();
  _enable();
  LOBYTE(v90) = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v2 + 600))(v2 + 1992, v23);
  (*(void (__fastcall **)(__int64, __int64))(v2 + 608))(v2 + 1992, v90);
  switch ( *(_DWORD *)(v2 + 2048) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v2 + 2400) = *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v2 + 1560));
      _enable();
      break;
    case 4:
      v95 = *(_QWORD *)(v2 + 2472);
      *(_QWORD *)(*(_QWORD *)(v95 + 56) ^ *(_QWORD *)(v95 + 64)) = v95 ^ *(_QWORD *)(v95 + 72) ^ *(_QWORD *)(v95 + 64);
      *(_QWORD *)(v95 + 72) = 0LL;
      *(_QWORD *)(v95 + 56) = 0LL;
      break;
    case 5:
      v91 = (char *)(v2 + 2408);
      v92 = (_QWORD *)(*(_QWORD *)(v2 + 2400) + 8LL);
      v93 = 8LL;
      do
      {
        v21 -= 8;
        *v92 = *(_QWORD *)v91;
        v91 += 8;
        ++v92;
        --v93;
      }
      while ( v93 );
      for ( ; v21; --v21 )
      {
        v94 = *v91++;
        *(_BYTE *)v92 = v94;
        v92 = (_QWORD *)((char *)v92 + 1);
      }
      break;
  }
  _InterlockedOr(v103, 0);
  return v2;
}
