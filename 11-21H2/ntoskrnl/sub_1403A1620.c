/*
 * XREFs of sub_1403A1620 @ 0x1403A1620
 * Callers:
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14030A3C0 @ 0x14030A3C0 (sub_14030A3C0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403545B0 @ 0x1403545B0 (sub_1403545B0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14039D6B0 @ 0x14039D6B0 (sub_14039D6B0.c)
 *     sub_14039E954 @ 0x14039E954 (sub_14039E954.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C7284 @ 0x1405C7284 (sub_1405C7284.c)
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 *     sub_1405C83DC @ 0x1405C83DC (sub_1405C83DC.c)
 *     sub_1405C84DC @ 0x1405C84DC (sub_1405C84DC.c)
 *     sub_1405C8640 @ 0x1405C8640 (sub_1405C8640.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 */

unsigned __int64 *__fastcall sub_1403A1620(
        __int64 a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        char *a4,
        unsigned int *a5,
        int *a6,
        unsigned __int64 *a7,
        bool *a8)
{
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  LONGLONG v17; // rdx
  unsigned __int64 *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  int v21; // eax
  char v22; // al
  char v23; // bl
  unsigned __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // r10
  char v28; // al
  int v29; // r12d
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r8
  __int16 v32; // r12
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // eax
  ULONG v38; // eax
  char v39; // al
  int v40; // edi
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rsi
  unsigned int v44; // ebx
  int v45; // eax
  char v46; // r15
  char v47; // si
  __int64 v48; // rdx
  unsigned __int64 v49; // r12
  __int64 v50; // r10
  unsigned int v51; // edi
  __int64 v52; // r9
  unsigned int v53; // r11d
  __int64 v54; // r12
  unsigned __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  char v58; // dl
  int v59; // eax
  char v60; // r9
  int v61; // ecx
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rdi
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int i; // ecx
  ULONG v67; // eax
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r10
  unsigned int v72; // r9d
  unsigned int v73; // r8d
  __int64 v74; // rcx
  bool v75; // al
  int v76; // esi
  unsigned __int64 *result; // rax
  int v78; // eax
  unsigned int v79; // eax
  unsigned __int64 v80; // rbx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rdx
  signed __int64 v86; // rax
  int v87; // eax
  LARGE_INTEGER *v88; // r15
  _DWORD *v89; // rcx
  __int64 v90; // r8
  unsigned int v91; // r12d
  _DWORD *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rsi
  int v96; // ebx
  unsigned __int8 v97; // cl
  int v98; // eax
  int v99; // r9d
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rcx
  __int64 v103; // r15
  int v104; // eax
  unsigned int v105; // ecx
  _DWORD *v106; // rax
  bool v107; // zf
  _DWORD *v108; // rcx
  __int64 *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  _DWORD *v112; // rax
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  unsigned __int8 v115; // [rsp+50h] [rbp-B0h]
  char v116; // [rsp+50h] [rbp-B0h]
  char v117; // [rsp+51h] [rbp-AFh]
  unsigned int v118; // [rsp+54h] [rbp-ACh] BYREF
  int v119; // [rsp+58h] [rbp-A8h] BYREF
  int v120; // [rsp+5Ch] [rbp-A4h] BYREF
  int v121; // [rsp+60h] [rbp-A0h]
  unsigned int v122; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v123; // [rsp+68h] [rbp-98h]
  unsigned int v124; // [rsp+70h] [rbp-90h]
  unsigned int v125; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v126; // [rsp+78h] [rbp-88h]
  int v127; // [rsp+80h] [rbp-80h]
  int v128; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v129; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v130; // [rsp+90h] [rbp-70h]
  unsigned int v131; // [rsp+98h] [rbp-68h]
  __int64 v132; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v133; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER *v134; // [rsp+B0h] [rbp-50h]
  unsigned int *v135; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v136; // [rsp+C0h] [rbp-40h] BYREF
  bool *v137; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v138; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v139; // [rsp+D8h] [rbp-28h]
  __int64 v140; // [rsp+E0h] [rbp-20h]
  __int64 v141; // [rsp+E8h] [rbp-18h]
  __int64 v142; // [rsp+F0h] [rbp-10h]
  unsigned int *v143; // [rsp+F8h] [rbp-8h]
  int *v144; // [rsp+100h] [rbp+0h]
  char *v145; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v146; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v147[2]; // [rsp+118h] [rbp+18h] BYREF
  __int16 v148; // [rsp+128h] [rbp+28h]
  int v149; // [rsp+12Ah] [rbp+2Ah]
  __int16 v150; // [rsp+12Eh] [rbp+2Eh]
  __int128 v151; // [rsp+130h] [rbp+30h] BYREF
  __int64 v152; // [rsp+140h] [rbp+40h]
  _DWORD *v153; // [rsp+148h] [rbp+48h] BYREF
  int v154; // [rsp+150h] [rbp+50h]
  int v155; // [rsp+154h] [rbp+54h]
  unsigned int *v156; // [rsp+158h] [rbp+58h] BYREF
  int v157; // [rsp+160h] [rbp+60h]
  int v158; // [rsp+164h] [rbp+64h]
  _QWORD v159[34]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v160[68]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v161[34]; // [rsp+390h] [rbp+290h] BYREF

  v143 = a5;
  v144 = a6;
  v146 = a7;
  v139 = a3;
  v134 = a2;
  v123 = a1;
  v137 = a8;
  v145 = a4;
  memset(v160, 0, 0x108uLL);
  v9 = *(_QWORD *)(a1 + 33600);
  v10 = 0LL;
  v140 = *(_QWORD *)(a1 + 33608);
  v132 = qword_140D068A8;
  v126 = *(_QWORD *)(a1 + 33600);
  v141 = v9;
  v131 = dword_140C0B8D0;
  v115 = 0;
  LOBYTE(v121) = 1;
  LOBYTE(v127) = 0;
  v117 = 0;
  v118 = 0;
  v130 = 0LL;
  v124 = 0;
  v135 = 0LL;
  v125 = 0;
  v119 = 0;
  v133 = 0LL;
  v138 = 0LL;
  v128 = 0;
  while ( 1 )
  {
    v11 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v12 = MEMORY[0xFFFFF78000000350];
      v13 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v11 )
        break;
    }
    _mm_pause();
  }
  v15 = v126;
  v16 = v141;
  if ( PerformanceCounter.QuadPart > v12 )
  {
    v142 = 0LL;
    v17 = PerformanceCounter.QuadPart - v12 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v17 <<= MEMORY[0xFFFFF78000000369];
    v10 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v142 = v10;
  }
  v18 = v139;
  v19 = v10 + v13;
  v20 = v123;
  *v139 = v19;
  *(LARGE_INTEGER *)(v15 + 688) = PerformanceCounter;
  *(_QWORD *)(v15 + 696) = *(_QWORD *)(v20 + 33624) + *(_QWORD *)(v20 + 33808);
  *(_BYTE *)(v15 + 730) = *(_BYTE *)(v20 + 34060);
  *(_BYTE *)(v15 + 728) = *(_BYTE *)(v20 + 33664);
  *(_BYTE *)(v15 + 729) = *(_BYTE *)(v20 + 33665);
  *(_BYTE *)(v15 + 731) = 1;
  if ( *(_BYTE *)(v20 + 33) && sub_1403545B0() )
  {
    *(_BYTE *)(v15 + 732) = 1;
    *(_WORD *)(v15 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v15 + 732) = 0;
  }
  if ( *(_BYTE *)(v15 + 1) )
  {
    *(_WORD *)(v15 + 48) |= 0x100u;
    v21 = *(_DWORD *)(v15 + 28);
  }
  else
  {
    v21 = -1;
  }
  *(_DWORD *)(v15 + 720) = v21;
  if ( byte_140D06A4E )
  {
    v22 = BYTE6(off_140C03040[534 * dword_140C232CC + 24]);
    *(_BYTE *)(v15 + 734) = v22;
    if ( v22 )
      *(_WORD *)(v15 + 48) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v15 + 734) = 0;
  }
  *v134 = PerformanceCounter;
  *(_QWORD *)(v16 + 336) = 2097153LL;
  memset((void *)(v16 + 344), 0, 0x100uLL);
  v23 = *(_BYTE *)(v20 + 33);
  v24 = *v18;
  v25 = *(_QWORD *)(v20 + 33600);
  if ( !v23 && dword_140D05038 )
  {
    v126 = 0LL;
    _m_prefetchw(&qword_140D00B70);
    v85 = qword_140D00B70;
    if ( (_WORD)qword_140D00B70 )
    {
      while ( 1 )
      {
        v86 = _InterlockedCompareExchange64(&qword_140D00B70, v85 ^ (unsigned __int16)(v85 ^ (v85 - 1)), v85);
        if ( v85 == v86 )
          break;
        v85 = v86;
        _mm_pause();
        if ( !(_WORD)v86 )
          goto LABEL_149;
      }
      v126 = v85 >> 16;
    }
LABEL_149:
    v26 = *(_QWORD *)(v20 + 33600);
    v23 = *(_BYTE *)(v20 + 33);
  }
  else
  {
    v126 = 0LL;
    v26 = v25;
  }
  v149 = 0;
  v150 = 0;
  memset(&v159[1], 0, 0x100uLL);
  v27 = v123;
  v28 = *(_BYTE *)(v26 + 732);
  v29 = -(v23 != 0);
  v30 = qword_140C2B1A0;
  v31 = 0LL;
  v32 = v29 & 8;
  v122 = 0;
  v33 = -1LL;
  v129 = 0LL;
  v120 = 2;
  if ( *(_BYTE *)(v123 + 33) )
  {
    if ( v28 && !(_BYTE)dword_140D05304 && !dword_140D31000 )
    {
      sub_14030A3C0(v123, 1u, v24, 0, 0, &v129, &v120);
      v31 = 0LL;
      v27 = v123;
      if ( v24 + (unsigned int)dword_140C2B1C8 < v129 )
        v30 = v129;
      else
        v120 = 2;
    }
  }
  else
  {
    sub_14030A3C0(v123, 0, v24, 0, 0, &v129, &v120);
    v27 = v123;
    if ( v30 <= v129 )
      v30 = v129;
    v31 = 0LL;
  }
  if ( v30 == -1LL )
  {
    v34 = -1LL;
  }
  else
  {
    v34 = 0LL;
    if ( v30 > v24 )
      v34 = v30 - v24;
  }
  v35 = *(_DWORD *)(v27 + 11684);
  v36 = 0;
  v37 = v35;
  if ( v35 )
  {
    do
    {
      v36 += DesiredTime;
      v37 >>= 4;
    }
    while ( v37 );
    v31 = v36;
    v38 = DesiredTime / (v35 + 1);
    if ( !v38 )
      v38 = 1;
    v33 = v38;
  }
  if ( v34 <= v33 )
  {
    v33 = v34;
  }
  else
  {
    v32 |= 1u;
    if ( v34 >= v31 )
      v34 = v31;
  }
  LODWORD(v159[0]) = 2097153;
  memset((char *)v159 + 4, 0, 0x104uLL);
  if ( qword_140D06CB0 && *(_BYTE *)(v123 + 33) && (unsigned __int8)sub_14039D6B0((unsigned __int16 *)v159) )
  {
    v80 = 0LL;
    v148 = 0;
    v147[1] = (unsigned __int16 *)v159[1];
    v147[0] = (unsigned __int16 *)v159;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v122, v147) )
    {
      v81 = sub_140348800(v122);
      v82 = *(_QWORD *)(v81 + 33648);
      if ( v82 > v80 && v82 != -1LL )
        v80 = *(_QWORD *)(v81 + 33648);
    }
    if ( v80 && v34 + v24 > v80 )
    {
      v32 |= 0x2000u;
      v34 = v80 > v24 ? (unsigned int)(v80 - v24) : 1LL;
      if ( v34 < v33 )
        v33 = v34;
    }
  }
  if ( v33 < v126 )
  {
    v33 = v126;
    v34 = v126;
    v32 |= 0x1000u;
  }
  *(_WORD *)(v25 + 48) |= v32;
  v39 = v120;
  *(_QWORD *)(v25 + 712) = v34;
  v40 = -1;
  *(_BYTE *)(v25 + 733) = v39;
  *(_QWORD *)(v25 + 704) = v33;
  v41 = *(_QWORD *)(v16 + 624);
  v122 = -1;
  if ( v41 )
  {
    v40 = sub_14042A5E0(*(_QWORD *)(v16 + 680), v16 + 688);
    v122 = v40;
  }
  v42 = v123;
  if ( *(_BYTE *)(v123 + 33669) )
  {
    v40 = 0;
    v122 = 0;
  }
  v43 = v132;
  if ( !v132 )
  {
    v44 = v118;
    goto LABEL_43;
  }
  *(_QWORD *)(v16 + 768) = 2097153LL;
  memset((void *)(v16 + 776), 0, 0x100uLL);
  sub_1402D990C((unsigned __int16 *)(v16 + 768));
  KeAddProcessorAffinityEx((unsigned __int16 *)(v16 + 768), *(_DWORD *)(v42 + 36));
  v87 = *(_DWORD *)v43;
  v88 = *(LARGE_INTEGER **)(v43 + 48);
  v89 = *(_DWORD **)(v16 + 1040);
  v134 = v88;
  v130 = v89;
  memset(v89, 0, 4 * v87 + 8);
  v44 = v118;
  v90 = 0LL;
  v91 = 0;
  if ( !*(_DWORD *)(v16 + 1064) )
    goto LABEL_208;
  v92 = v130;
  v93 = 0LL;
  while ( 1 )
  {
    if ( byte_140C095A4 )
      goto LABEL_199;
    v94 = *(_QWORD *)(v16 + 1072);
    if ( !*(_BYTE *)(v94 + 24LL * v91 + 1) )
    {
      v93 = v124;
LABEL_199:
      LODWORD(v101) = -2;
      goto LABEL_200;
    }
    v95 = *(unsigned int *)(v94 + 24LL * v91 + 4);
    v96 = v123;
    if ( dword_140C0C5EC == -1 || (unsigned int)v95 < dword_140C0C5EC || !sub_14039E954(v123) )
    {
      v98 = (unsigned __int8)v121;
      if ( v115 == 1 )
        v98 = 1;
      v97 = 0;
    }
    else
    {
      v97 = 1;
      v98 = (unsigned __int8)v121;
      if ( !v115 )
        v98 = 1;
    }
    v115 = v97;
    v121 = v98;
    if ( (_BYTE)v98 )
    {
      LOBYTE(v121) = 0;
      sub_1405C7284(v96, v97, v97, *v139, v90, (__int64)&v133, (__int64)&v138, (__int64)&v128, (__int64)&v119);
      LODWORD(v90) = 0;
    }
    v99 = v133;
    v118 = -1;
    *(_DWORD *)(v16 + 1084) = v90;
    v100 = sub_1405C7A38(v96, v40, v131, v99, v95, v95, (__int64)&v118, v16 + 1080);
    v44 = v118;
    v101 = v100;
    if ( !*(_BYTE *)(v132 + 12) && !v100 && *(_QWORD *)(v132 + 16) )
      v101 = (unsigned int)sub_14042A5E0(*(_QWORD *)(v16 + 680), v118);
    sub_1405C8640(v101, &v88[126 * v95 + 9]);
    v102 = 0xFFFFFFFFLL;
    v103 = v132 + 448 * v95;
    if ( v101 == 0xFFFFFFFFLL )
      goto LABEL_194;
    v126 = *(_QWORD *)(v103 + 64);
    if ( !v101 )
    {
      v106 = v130;
      *v137 = 1;
      *v106 = v95;
      v107 = *(_BYTE *)(v103 + 121) == 0;
      v160[0] = 2097153;
      if ( !v107 )
        v102 = (unsigned int)v95;
      v134 = (LARGE_INTEGER *)v102;
      v76 = v102;
      memset(&v160[1], 0, 0x104uLL);
      if ( (unsigned int)sub_1402FEDA0((_WORD *)(v16 + 336), (char *)(v103 + 128), v160, HIWORD(v160[0])) )
        sub_1405C8FE4(v16 + 336, v160);
      v42 = v123;
      LODWORD(v50) = 0;
      v46 = v115;
      v49 = v126;
      v73 = v125;
      goto LABEL_90;
    }
    if ( v101 != 2147483651LL )
    {
LABEL_194:
      v104 = (unsigned __int8)v127;
      if ( v101 == 2147483656LL )
        v104 = 1;
      v127 = v104;
    }
    else
    {
      v117 = 1;
    }
    sub_1405C83DC(v16 + 1080, 0LL);
    v92 = v130;
    v90 = 0LL;
    v93 = v124;
    v88 = v134;
LABEL_200:
    v105 = v93 + 1;
    v92[v93 + 2] = v101;
    ++v91;
    v93 = (unsigned int)(v93 + 1);
    v124 = v105;
    if ( v91 >= *(_DWORD *)(v16 + 1064) )
      break;
    v40 = v122;
  }
  v124 = v105;
LABEL_208:
  v108 = v130;
  *(_DWORD *)(v16 + 1084) = 0;
  *v108 = -1;
  sub_1405C8FE4(v16 + 336, v16 + 336);
  v42 = v123;
LABEL_43:
  v45 = *(_DWORD *)(v16 + 32);
  v46 = 0;
  v47 = 1;
  v135 = *(unsigned int **)(v16 + 1032);
  memset(v135, 0, 4 * v45 + 8);
  v49 = *(_QWORD *)(v16 + 40);
  v50 = 0LL;
  v51 = 0;
  v126 = v49;
  v121 = 0;
  if ( !*(_DWORD *)(v16 + 1048) )
  {
    v73 = 0;
    goto LABEL_89;
  }
  v52 = 2147483658LL;
  v53 = 0x80000000;
  while ( 2 )
  {
    v54 = v51;
    v44 = *(_DWORD *)(*(_QWORD *)(v16 + 1056) + 24LL * v51 + 4);
    v118 = v44;
    if ( !v132 && v44 == *(_DWORD *)(v16 + 32) - 1 && *(_BYTE *)(v16 + 732) && sub_14039E954(v42) )
    {
      v116 = 1;
      if ( !v46 )
        v47 = 1;
    }
    else
    {
      if ( v46 == 1 )
        v47 = 1;
      v116 = 0;
    }
    if ( v47 )
    {
      LOBYTE(v123) = 0;
      v151 = 0LL;
      v55 = *v139;
      v152 = 0LL;
      memset(v161, 0, 0x108uLL);
      v56 = *(_QWORD *)(v42 + 33600);
      LODWORD(v129) = 0;
      v57 = -1LL;
      v58 = *(_BYTE *)(v56 + 732);
      v59 = 0;
      v119 = 0;
      if ( *(_BYTE *)(v42 + 33) )
      {
        v59 = 8;
        v119 = 8;
      }
      v60 = v116;
      if ( v116 )
        v119 = v59 | 4;
      v61 = 2;
      v62 = qword_140C2B1A0;
      v120 = 2;
      v136 = 0LL;
      if ( *(_BYTE *)(v42 + 33) )
      {
        if ( v58 && !(_BYTE)dword_140D05304 && !dword_140D31000 )
        {
          sub_14030A3C0(v42, 1u, v55, v116, 0, &v136, &v120);
          v60 = v116;
          if ( v55 + (unsigned int)dword_140C2B1C8 < v136 )
          {
            v62 = v136;
            goto LABEL_59;
          }
          v61 = 2;
        }
      }
      else
      {
        sub_14030A3C0(v42, 0, v55, v116, 0, &v136, &v120);
        v60 = v116;
        if ( v62 <= v136 )
          v62 = v136;
LABEL_59:
        v61 = v120;
      }
      if ( v62 == -1LL )
      {
        v63 = -1LL;
      }
      else
      {
        v63 = 0LL;
        if ( v62 > v55 )
          v63 = v62 - v55;
      }
      v64 = *(_DWORD *)(v42 + 11684);
      v65 = v64;
      v128 = v61;
      for ( i = 0; v65; v65 >>= 4 )
        i += DesiredTime;
      if ( !v60 && v64 )
      {
        v67 = DesiredTime / (v64 + 1);
        if ( !v67 )
          v67 = 1;
        v57 = v67;
      }
      if ( v63 <= v57 )
      {
        v57 = v63;
      }
      else
      {
        v119 |= 1u;
        if ( v63 >= i )
          v63 = i;
      }
      LODWORD(v161[0]) = 2097153;
      memset((char *)v161 + 4, 0, 0x104uLL);
      if ( qword_140D06CB0 && *(_BYTE *)(v42 + 33) && (unsigned __int8)sub_14039D6B0((unsigned __int16 *)v161) )
      {
        v83 = 0LL;
        *((_QWORD *)&v151 + 1) = v161[1];
        *(_QWORD *)&v151 = v161;
LABEL_136:
        v84 = v83;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v129, (unsigned __int16 **)&v151) )
        {
          v83 = *(_QWORD *)(sub_140348800(v129) + 33648);
          if ( v83 > v84 && v83 != -1LL )
            goto LABEL_136;
        }
        if ( v84 && v63 + v55 > v84 )
        {
          v119 |= 0x2000u;
          v63 = v84 > v55 ? (unsigned int)(v84 - v55) : 1LL;
          if ( v63 < v57 )
            v57 = v63;
        }
      }
      v44 = v118;
      v50 = 0LL;
      v138 = v63;
      v53 = 0x80000000;
      v51 = v121;
      v52 = 2147483658LL;
      v133 = v57;
      v47 = v123;
    }
    if ( !v44 )
    {
      v70 = v50;
      v71 = v140 + 80;
      goto LABEL_83;
    }
    v68 = *(_QWORD *)(v42 + 33600);
    if ( *(_DWORD *)(v68 + 36) == 3 && byte_140C095A4 )
    {
      v48 = 4294967294LL;
      goto LABEL_82;
    }
    v69 = 344LL * v44;
    if ( *(_BYTE *)(v69 + v68 + 1447) )
    {
      v48 = v52;
      goto LABEL_82;
    }
    if ( v44 > v122 && v122 != -1 )
    {
      v48 = 2147483656LL;
      goto LABEL_82;
    }
    if ( !*(_BYTE *)(v69 + v68 + 1442) && *(_BYTE *)(v68 + 731) )
    {
      v48 = 2147483655LL;
      goto LABEL_82;
    }
    v78 = *(_DWORD *)(v69 + v68 + 1400);
    if ( v78 )
    {
      if ( v78 >= 0 )
      {
        if ( *(_QWORD *)(v69 + v68 + 1432) )
        {
          v109 = (__int64 *)(v69 + v68 + 1408);
          v110 = *v109;
          v107 = *v109 == (_QWORD)v109;
          v79 = v53;
          if ( !v107 )
            v79 = *(_DWORD *)(v110 + 16);
        }
        else
        {
          v79 = v53;
        }
      }
      else
      {
        v79 = -2147483635;
      }
    }
    else
    {
      v79 = v50;
    }
    v44 = v118;
    if ( v79 )
    {
      v48 = v79 | 0x100000000LL;
      goto LABEL_158;
    }
    if ( *(_DWORD *)(v69 + v68 + 1384) > v131 )
    {
      v44 = v118;
      v48 = 2147483650LL;
      goto LABEL_82;
    }
    if ( *(unsigned int *)(v69 + v68 + 1388) > v133 )
    {
      v44 = v118;
      v48 = 2147483651LL;
      goto LABEL_82;
    }
    if ( *(_QWORD *)(v68 + 640) )
    {
      v48 = (unsigned int)sub_14042A5E0(*(_QWORD *)(v68 + 680), v118);
LABEL_158:
      if ( !v48 )
        goto LABEL_112;
      goto LABEL_82;
    }
    v48 = v50;
LABEL_112:
    if ( *(_QWORD *)(v16 + 632) )
      v48 = (unsigned int)sub_14042A5E0(*(_QWORD *)(v16 + 680), v44);
LABEL_82:
    v70 = v48;
    v71 = 1000LL * v44 + v140 + 80;
    if ( !v48 )
    {
LABEL_83:
      v72 = 0;
      goto LABEL_84;
    }
    v53 = 0x80000000;
    if ( (v48 & 0x80000000) != 0 )
    {
      if ( (unsigned int)v48 <= 0x8000000C )
      {
        v72 = v48 - 2147483646;
        goto LABEL_84;
      }
LABEL_99:
      if ( v70 == 2147483651LL )
      {
        v117 = 1;
      }
      else if ( v70 == 2147483656LL )
      {
        LOBYTE(v127) = 1;
      }
      ++v51;
      v46 = v116;
      v50 = 0LL;
      v121 = v51;
      v52 = 2147483658LL;
      v135[v54 + 2] = v70;
      if ( v51 >= *(_DWORD *)(v16 + 1048) )
      {
        v49 = v126;
        v73 = 0;
        goto LABEL_89;
      }
      continue;
    }
    break;
  }
  if ( (v48 & 0x100000000LL) != 0 )
  {
    v111 = *(_QWORD *)(v71 + 120);
    v72 = 2;
    if ( v111 )
      ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v48 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v111 + 32) + 24);
  }
  else
  {
    v72 = 1;
  }
  v70 = v48;
LABEL_84:
  ++*(_QWORD *)(v71 + 8LL * v72);
  if ( v70 )
  {
    v53 = 0x80000000;
    goto LABEL_99;
  }
  v73 = v51;
  v74 = 344LL * v44;
  v125 = v51;
  *v135 = v44;
  v75 = !*(_BYTE *)(v74 + v16 + 1442) || v132 && (!*(_BYTE *)(v74 + v16 + 1445) || v44);
  v48 = (__int64)v137;
  LODWORD(v50) = 0;
  v46 = v116;
  v49 = v126;
  *v137 = v75;
LABEL_89:
  v76 = -1;
LABEL_90:
  if ( *v137 )
  {
    LOBYTE(v48) = 1;
    sub_1405C84DC(v42 + 33672, v48);
    v73 = v125;
  }
  if ( (DWORD2(xmmword_140D06900) & 0x200000) != 0 )
  {
    v112 = v130;
    if ( v130 )
    {
      v113 = v124;
      v130[1] = v124;
      v153 = v112;
      v155 = v50;
      v154 = 4 * v113 + 8;
      sub_14035EDE4((__int64)&v153, 1u, 0x40200000u, 0x123Eu, 0x602u);
      v73 = v125;
      LODWORD(v50) = 0;
    }
    v114 = v135;
    if ( v135 )
    {
      v135[1] = v73;
      v156 = v114;
      v158 = v50;
      v157 = 4 * v73 + 8;
      sub_14035EDE4((__int64)&v156, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v16 + 48) |= v119;
  *(_BYTE *)(v16 + 7) = v127;
  *(_BYTE *)(v16 + 6) = v117;
  *(_QWORD *)(v16 + 712) = v138;
  *(_QWORD *)(v16 + 704) = v133;
  *(_BYTE *)(v16 + 733) = v128;
  *v143 = v44;
  *v144 = v76;
  *v145 = v46;
  result = v146;
  *v146 = v49;
  return result;
}
