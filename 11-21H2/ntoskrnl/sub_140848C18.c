/*
 * XREFs of sub_140848C18 @ 0x140848C18
 * Callers:
 *     sub_140848BD0 @ 0x140848BD0 (sub_140848BD0.c)
 *     sub_14099DE60 @ 0x14099DE60 (sub_14099DE60.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     sub_1403B3F5C @ 0x1403B3F5C (sub_1403B3F5C.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D33D8 @ 0x1405D33D8 (sub_1405D33D8.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 *     sub_14081ACB4 @ 0x14081ACB4 (sub_14081ACB4.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 *     sub_14084983C @ 0x14084983C (sub_14084983C.c)
 *     sub_14098EBBC @ 0x14098EBBC (sub_14098EBBC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140848C18(__int64 a1, char a2)
{
  __int64 v4; // r15
  unsigned int v5; // r14d
  char *v6; // rdi
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r9d
  __int64 *v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  unsigned int v22; // eax
  bool v23; // zf
  __int64 Pool2; // rax
  char *v25; // r12
  __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // eax
  ULONG v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // r14d
  __int64 v37; // r14
  unsigned __int64 v38; // rcx
  char v39; // al
  __int64 *v40; // r10
  __int64 v41; // r12
  int v42; // r11d
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 v47; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v49; // edx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  char v52; // al
  unsigned int v53; // r12d
  _DWORD *v54; // r14
  __int64 v55; // rbx
  __int64 *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // eax
  _QWORD *v64; // rax
  char v65; // r8
  __int64 v66; // rdx
  char v67; // al
  __int64 v68; // rcx
  char v69; // dl
  char v70; // bl
  __int64 v72; // rcx
  __int64 v73; // rax
  _DWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int128 *v77; // rax
  PVOID **v78; // rbx
  __int64 v79; // rsi
  PVOID *v80; // rcx
  signed __int32 v81[8]; // [rsp+8h] [rbp-100h] BYREF
  int v82; // [rsp+28h] [rbp-E0h]
  unsigned int v83; // [rsp+2Ch] [rbp-DCh]
  unsigned int v84; // [rsp+30h] [rbp-D8h]
  int v85; // [rsp+34h] [rbp-D4h]
  __int64 v86; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v87; // [rsp+40h] [rbp-C8h]
  unsigned int v88; // [rsp+44h] [rbp-C4h]
  __int64 v89; // [rsp+48h] [rbp-C0h]
  __int64 v90; // [rsp+50h] [rbp-B8h]
  __int64 v91; // [rsp+58h] [rbp-B0h]
  _QWORD v92[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v93; // [rsp+70h] [rbp-98h] BYREF
  __int64 v94; // [rsp+80h] [rbp-88h]
  __int128 v95; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v96[68]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v97[68]; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(&v97[2], 0, 0x100uLL);
  v95 = 0LL;
  memset(&v96[2], 0, 0x100uLL);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = 0LL;
  LOBYTE(v82) = 0;
  LODWORD(v89) = *(_DWORD *)(a1 + 20);
  v88 = v4;
  v96[0] = 2097153;
  v93 = 0LL;
  memset(&v96[1], 0, 0x104uLL);
  v97[0] = 2097153;
  memset(&v97[1], 0, 0x104uLL);
  KeQueryActiveProcessorAffinity2((__int64)v97);
  v83 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( !a2 )
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v9 = -1;
  v86 = -1LL;
  v10 = 0;
  if ( v5 )
  {
    v11 = *(_QWORD *)(a1 + 544);
    do
    {
      v12 = *(unsigned int *)(v11 + 24LL * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_122;
      if ( *((_DWORD *)&v86 + v12) == -1 )
        *((_DWORD *)&v86 + v12) = v10;
      ++v10;
    }
    while ( v10 < v5 );
    v9 = v86;
  }
  if ( v9 == -1 && HIDWORD(v86) == -1 )
  {
LABEL_122:
    v36 = -1073741811;
    goto LABEL_133;
  }
  v13 = 0;
  v14 = &v86;
  v15 = 2LL;
  do
  {
    v23 = *(_DWORD *)v14 == -1;
    v16 = v13 + 1;
    v14 = (__int64 *)((char *)v14 + 4);
    if ( v23 )
      v16 = v13;
    v13 = v16;
    --v15;
  }
  while ( v15 );
  v85 = v16;
  if ( (_DWORD)v4 )
  {
    v17 = v4;
    v18 = (_DWORD *)(*(_QWORD *)(a1 + 552) + 28LL);
    do
    {
      v19 = v8 + 1;
      if ( *v18 != 1 )
        v19 = v8;
      v18 += 8;
      v8 = v19;
      --v17;
    }
    while ( v17 );
    v13 = v85;
    v83 = v19;
  }
  v20 = (136 * v4 + 999) & 0xFFFFFFF8;
  v21 = v20 + 48 * v13 * v4;
  v22 = v21;
  v23 = v8 == 0;
  if ( v8 )
  {
    v22 = v21 + 136 * v8;
    v23 = v8 == 0;
  }
  if ( v23 )
    v21 = 0;
  Pool2 = ExAllocatePool2(64LL, v22, 1884115024LL);
  v6 = (char *)Pool2;
  if ( !Pool2 )
  {
    v36 = -1073741670;
    goto LABEL_133;
  }
  v25 = (char *)(Pool2 + 992);
  v26 = Pool2 + v21;
  v90 = v26;
  v27 = 0;
  v92[0] = Pool2 + v20;
  v87 = 0;
  if ( *(_BYTE *)(a1 + 11) )
    dword_140D05068 = *(_DWORD *)(a1 + 48);
  v84 = 0;
  v28 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_48:
    v36 = 0;
    if ( (unsigned int)KeIsEmptyAffinityEx(v96) )
    {
      v73 = 0LL;
      if ( (_DWORD)v4 )
      {
        v74 = v25 + 16;
        while ( *v74 != 1 )
        {
          v73 = (unsigned int)(v73 + 1);
          v74 += 34;
          if ( (unsigned int)v73 >= (unsigned int)v4 )
            goto LABEL_138;
        }
        *((_QWORD *)v6 + 2) = *(_QWORD *)&v25[136 * v73];
        *((_DWORD *)v6 + 76) = 1;
      }
      else
      {
LABEL_138:
        if ( (_DWORD)v73 == (_DWORD)v4 )
          *((_DWORD *)v6 + 76) = 2;
      }
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v95, v96);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v95);
      v47 = sub_140348800(FirstSetRightGroupAffinity);
      *((_QWORD *)v6 + 2) = v47 + 33968;
      v6[300] = *(_BYTE *)(v47 + 34056);
    }
    *((_QWORD *)v6 + 3) = 2097153LL;
    memset(v6 + 32, 0, 0x100uLL);
    sub_140300030((__int64)(v6 + 24), *((_WORD *)v6 + 13), (unsigned __int16 *)v96);
    *((_QWORD *)v6 + 40) = *(_QWORD *)(a1 + 368);
    *((_QWORD *)v6 + 42) = *(_QWORD *)(a1 + 384);
    *((_QWORD *)v6 + 43) = *(_QWORD *)(a1 + 392);
    *((_QWORD *)v6 + 44) = *(_QWORD *)(a1 + 400);
    *((_QWORD *)v6 + 45) = *(_QWORD *)(a1 + 408);
    *((_QWORD *)v6 + 41) = *(_QWORD *)(a1 + 376);
    *((_QWORD *)v6 + 36) = *(_QWORD *)(a1 + 96);
    *((_QWORD *)v6 + 39) = v25;
    *((_DWORD *)v6 + 182) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v49 = v89;
    v50 = 6LL;
    *((LARGE_INTEGER *)v6 + 122) = PerformanceCounter;
    *((_DWORD *)v6 + 110) = v49;
    *((_DWORD *)v6 + 74) = v4;
    *((_DWORD *)v6 + 114) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)v6 + 111) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v6 + 112) = *(_DWORD *)(a1 + 28);
    *((_DWORD *)v6 + 113) = *(_DWORD *)(a1 + 32);
    v6[481] = *(_BYTE *)(a1 + 4);
    *((_QWORD *)v6 + 48) = *(_QWORD *)(a1 + 448);
    *((_QWORD *)v6 + 49) = *(_QWORD *)(a1 + 456);
    *((_QWORD *)v6 + 50) = *(_QWORD *)(a1 + 464);
    *((_QWORD *)v6 + 51) = *(_QWORD *)(a1 + 496);
    *((_QWORD *)v6 + 52) = *(_QWORD *)(a1 + 504);
    *((_QWORD *)v6 + 53) = *(_QWORD *)(a1 + 512);
    *((_QWORD *)v6 + 46) = *(_QWORD *)(a1 + 432);
    *((_QWORD *)v6 + 47) = *(_QWORD *)(a1 + 440);
    v6[504] = *(_BYTE *)(a1 + 52);
    v51 = v6 + 748;
    do
    {
      *(v51 - 1) = 100;
      *v51 = v49;
      v51 += 10;
      --v50;
    }
    while ( v50 );
    v6[482] = *(_BYTE *)(a1 + 6);
    v6[483] = *(_BYTE *)(a1 + 7);
    v6[484] = *(_BYTE *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) == 253 || (v52 = 1, *(_QWORD *)(a1 + 464)) )
      v52 = 0;
    v6[486] = v52;
    v6[485] = *(_BYTE *)(a1 + 11);
    if ( dword_140D050C0 == -1 )
      dword_140D050C0 = *(_BYTE *)(a1 + 12) != 0;
    *((_QWORD *)v6 + 58) = *(_QWORD *)(a1 + 56);
    *((_QWORD *)v6 + 59) = *(_QWORD *)(a1 + 64);
    v6[480] = 100;
    if ( qword_140C20498 <= (unsigned __int64)*(unsigned int *)(a1 + 40) )
      qword_140C20498 = *(unsigned int *)(a1 + 40);
    if ( *((_QWORD *)v6 + 43) )
      dword_140C23B14 |= 0x40u;
    if ( *((_QWORD *)v6 + 42) )
      dword_140C23B14 |= 0x20u;
    if ( *((_QWORD *)v6 + 41) )
      dword_140C23B14 |= 0x200u;
    if ( *((_QWORD *)v6 + 45) )
      dword_140C23B14 |= 0x80u;
    if ( *((_QWORD *)v6 + 44) )
      dword_140C23B14 |= 0x100u;
    if ( *(_BYTE *)(a1 + 9) )
      byte_140D069CF = 1;
    if ( *(_BYTE *)(a1 + 10) )
      byte_140D069E1 = 1;
    v6[487] = *(_BYTE *)(a1 + 13);
    *((_DWORD *)v6 + 122) = *(_DWORD *)(a1 + 72);
    *((_DWORD *)v6 + 123) = *(_DWORD *)(a1 + 76);
    *((_DWORD *)v6 + 124) = *(_DWORD *)(a1 + 80);
    *((_DWORD *)v6 + 125) = *(_DWORD *)(a1 + 84);
    _InterlockedOr(v81, 0);
    v53 = 0;
    if ( (_DWORD)v4 )
    {
      v54 = v6 + 1008;
      do
      {
        if ( *v54 != 2 )
        {
          v55 = *((_QWORD *)v54 - 2);
          v56 = &v86;
          v93 = 0LL;
          *(_DWORD *)(v55 + 60) = 0x10000;
          v57 = v85 * v53;
          v58 = 2LL;
          *(_QWORD *)v55 = v6;
          *(_QWORD *)(v55 + 8) = &v6[136 * v53 + 992];
          v59 = 48 * v57;
          v60 = (__int64 *)&v93;
          v61 = v92[0] + v59;
          do
          {
            if ( *(_DWORD *)v56 != -1 )
            {
              *v60 = v61;
              v61 += 48LL;
            }
            v56 = (__int64 *)((char *)v56 + 4);
            ++v60;
            --v58;
          }
          while ( v58 );
          if ( *v54 )
          {
            sub_14098EBBC(v55, v56);
            v75 = 2LL;
            v76 = v55 - (_QWORD)&v93;
            v77 = &v93;
            do
            {
              if ( *(_QWORD *)v77 )
                *(_QWORD *)((char *)v77 + v76 + 96) = *(_QWORD *)v77;
              v77 = (__int128 *)((char *)v77 + 8);
              --v75;
            }
            while ( v75 );
          }
          else
          {
            sub_1403CE4FC(v55 - 33968, &v93, *(_BYTE *)(a1 + 14));
          }
        }
        ++v53;
        v54 += 34;
      }
      while ( v53 < (unsigned int)v4 );
      v8 = v83;
      v36 = 0;
    }
    if ( !qword_140C23AC0 )
      qword_140C23AC0 = *(_QWORD *)(a1 + 88);
    v62 = qword_140C23AB8;
    if ( !qword_140C23AB8 )
    {
      v62 = *(_QWORD *)(a1 + 472);
      qword_140C23AB8 = v62;
    }
    if ( !qword_140C23B40 )
      qword_140C23B40 = *(_QWORD *)(a1 + 480);
    if ( !qword_140C23B38 )
      qword_140C23B38 = *(_QWORD *)(a1 + 488);
    if ( !qword_140C23B50 )
      qword_140C23B50 = *(_QWORD *)(a1 + 520);
    if ( !qword_140C23B48 )
      qword_140C23B48 = *(_QWORD *)(a1 + 528);
    if ( !qword_140C23B28 )
      qword_140C23B28 = *(_QWORD *)(a1 + 536);
    if ( !qword_140C23B20 )
      qword_140C23B20 = *(_QWORD *)(a1 + 416);
    if ( !qword_140C23B30 )
      qword_140C23B30 = *(_QWORD *)(a1 + 424);
    if ( v62 )
      byte_140C204A0 = 1;
    v63 = dword_140D06A5C + 1;
    *((_DWORD *)v6 + 108) = dword_140D06A5C + 1;
    dword_140D06A5C = v63;
    v64 = (_QWORD *)qword_140D06978;
    if ( *(__int64 **)qword_140D06978 != &qword_140D06970 )
      __fastfail(3u);
    *(_QWORD *)v6 = &qword_140D06970;
    v65 = 1;
    *((_QWORD *)v6 + 1) = v64;
    *v64 = v6;
    v66 = qword_140D06970;
    qword_140D06978 = (__int64)v6;
    LOBYTE(v82) = 1;
    if ( (__int64 *)qword_140D06970 != &qword_140D06970 )
    {
      do
      {
        v67 = *(_BYTE *)(v66 + 485);
        v66 = *(_QWORD *)v66;
        v65 = v67 != 0 ? v65 : 0;
      }
      while ( (__int64 *)v66 != &qword_140D06970 );
      LOBYTE(v82) = v65;
    }
    sub_1402FEC10((char *)v96, &word_140C0BBF0, &word_140C0BBF0, word_140C0BBF2);
    if ( (unsigned int)KeIsEqualAffinityEx(&word_140C0BBF0, (unsigned __int16 *)word_140C0B8E0) )
    {
      v68 = qword_140D06970;
      v69 = 1;
      while ( (__int64 *)v68 != &qword_140D06970 )
      {
        if ( !*(_BYTE *)(v68 + 487)
          || *(_QWORD *)(v68 + 472) != *((_QWORD *)v6 + 59)
          || *(_DWORD *)(v68 + 452) != *((_DWORD *)v6 + 113)
          || *(_DWORD *)(v68 + 444) != *((_DWORD *)v6 + 111)
          || *(_DWORD *)(v68 + 488) != *((_DWORD *)v6 + 122)
          || *(_DWORD *)(v68 + 492) != *((_DWORD *)v6 + 123)
          || *(_DWORD *)(v68 + 496) != *((_DWORD *)v6 + 124)
          || *(_DWORD *)(v68 + 500) != *((_DWORD *)v6 + 125) )
        {
          v69 = 0;
          break;
        }
        v68 = *(_QWORD *)v68;
      }
      byte_140D069E0 = v69;
    }
    *((_WORD *)v6 + 494) = 257;
    sub_14081ACB4(&dword_140C23B14, (__int64)v6);
    sub_1403B3F5C((__int64)v6);
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v96, 0) )
      sub_1403CEDC4();
    sub_14081A3AC();
    v6 = 0LL;
    sub_14069DDE8(1);
    v7 = v90;
    goto LABEL_116;
  }
  v29 = 0LL;
  v30 = Pool2 + 1012;
  while ( 1 )
  {
    v31 = *(_QWORD *)(a1 + 552);
    *(_DWORD *)(v30 - 4) = *(_DWORD *)(v29 + v31 + 28);
    v32 = *(_DWORD *)(v29 + v31);
    if ( !*(_DWORD *)(v29 + v31 + 28) )
      break;
    v33 = -1;
    *(_DWORD *)v30 = v32;
    if ( *(_DWORD *)(v29 + v31 + 28) == 1 )
    {
      v87 = v27 + 1;
      v72 = v26 + 136LL * v27;
      v91 = v72;
      *(_WORD *)(v72 + 58) = 100;
      v36 = sub_14084983C(v72, v26, 0LL);
      if ( v36 < 0 )
        goto LABEL_132;
      *(_QWORD *)(v30 - 20) = v91;
      goto LABEL_37;
    }
LABEL_38:
    *(_DWORD *)(v30 + 28) = 100;
    *(_QWORD *)(v30 - 12) = *(_QWORD *)(v29 + v31 + 8);
    *(_DWORD *)(v30 + 4) = *(_DWORD *)(v29 + v31 + 16);
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v29 + v31 + 20);
    *(_DWORD *)(v30 + 12) = *(_DWORD *)(v29 + v31 + 24);
    *(_DWORD *)(v30 + 56) = v89;
    *(_DWORD *)(v30 + 36) = 100;
    *(_DWORD *)(v30 + 52) = 100;
    *(_DWORD *)(v30 + 60) = 1;
    *(_DWORD *)(v30 + 64) = 100;
    *(_DWORD *)(v30 + 68) = 100;
    *(_DWORD *)(v30 + 96) = 100;
    *(_DWORD *)(v30 + 100) = 100;
    *(_QWORD *)(v30 + 108) = 0LL;
    if ( *(_BYTE *)(a1 + 7) || (v39 = 1, !*(_BYTE *)(a1 + 11)) )
      v39 = 0;
    *(_BYTE *)(v30 + 105) = v39;
    if ( *(_DWORD *)(v29 + v31 + 16) < 0x64u )
    {
      *(_QWORD *)(v30 + 20) = MEMORY[0xFFFFF78000000008];
      sub_1405D33D8(100 - *(_DWORD *)(v29 + v31 + 16), v33);
    }
    v40 = &v86;
    v41 = 2LL;
    v42 = v85 * v28;
    v43 = v92[0] + 48LL * v85 * v28;
    do
    {
      v44 = *(unsigned int *)v40;
      if ( (_DWORD)v44 != -1 )
      {
        v45 = *(_QWORD *)(a1 + 544);
        *(_QWORD *)(v43 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8LL * (unsigned int)(v42 + v44));
        *(_BYTE *)(v43 + 33) = *(_BYTE *)(v45 + 24 * v44 + 17);
        *(_BYTE *)(v43 + 32) = *(_BYTE *)(v45 + 24 * v44 + 16);
        *(_BYTE *)(v43 + 34) = *(_BYTE *)(v45 + 24 * v44 + 18);
        *(_BYTE *)(v43 + 35) = *(_BYTE *)(v45 + 24 * v44 + 8);
        *(_QWORD *)v43 = *(_QWORD *)(v45 + 24 * v44);
        v43 += 48LL;
      }
      v40 = (__int64 *)((char *)v40 + 4);
      --v41;
    }
    while ( v41 );
    v27 = v87;
    ++v28;
    v29 += 32LL;
    v26 = v90;
    v30 += 136LL;
    v84 = v28;
    if ( v28 >= v88 )
    {
      LODWORD(v4) = v88;
      v25 = v6 + 992;
      v8 = v83;
      goto LABEL_48;
    }
  }
  v33 = *(_DWORD *)(v29 + v31);
  if ( v32 != -1 && !(unsigned int)KeCheckProcessorAffinityEx(&word_140C0BBF0, v32) )
  {
    v94 = sub_140348800(v33);
    v91 = v94 + 33968;
    v36 = sub_14084983C(v94 + 33968, v34, v35);
    if ( v36 < 0 )
      goto LABEL_132;
    KeAddProcessorAffinityEx((unsigned __int16 *)v96, v33);
    v37 = v94;
    *(_QWORD *)(v30 - 20) = v91;
    v38 = (unsigned int)dword_140D05044;
    if ( dword_140D05044 == -1 )
      v38 = (unsigned int)dword_140D05068;
    *(_QWORD *)(v37 + 34104) = sub_14029394C(v38, 0xF4240uLL, 1000000LL * *(unsigned int *)(v37 + 68));
LABEL_37:
    v28 = v84;
    goto LABEL_38;
  }
  v36 = -1073741811;
LABEL_132:
  v8 = v83;
  v7 = v90;
LABEL_133:
  sub_140224C00(&qword_140C22FE0);
LABEL_116:
  v70 = v82;
  if ( ((unsigned int)dword_140D06A5C > 1 || (_BYTE)v82)
    && (unsigned int)KeIsEqualAffinityEx(&word_140C0BBF0, (unsigned __int16 *)word_140C0B8E0) )
  {
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    byte_140D068E7 = v70;
    sub_140848BE8(1);
  }
  if ( v6 )
  {
    if ( v8 )
    {
      v78 = (PVOID **)(v7 + 16);
      v79 = v8;
      do
      {
        v80 = *v78;
        if ( *v78 )
        {
          if ( v80[11] )
          {
            ExFreePoolWithTag(v80[11], 0x704D5050u);
            (*v78)[11] = 0LL;
            v80 = *v78;
          }
          if ( v80[19] )
          {
            ExFreePoolWithTag(v80[19], 0x704D5050u);
            (*v78)[19] = 0LL;
            v80 = *v78;
          }
          if ( v80[27] )
          {
            ExFreePoolWithTag(v80[27], 0x704D5050u);
            (*v78)[27] = 0LL;
            v80 = *v78;
          }
          ExFreePoolWithTag(v80, 0x704D5050u);
          *v78 = 0LL;
        }
        v78 += 17;
        --v79;
      }
      while ( v79 );
    }
    ExFreePoolWithTag(v6, 0x704D5050u);
  }
  v92[1] = -1LL;
  v92[0] = 0LL;
  KeSetTimer2((__int64)&unk_140C23A00, -36000000000LL, 36000000000LL, (__int64)v92);
  return (unsigned int)v36;
}
