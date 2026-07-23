/*
 * XREFs of KiSwInterruptDispatch @ 0x1403E47B0
 * Callers:
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     KiGetTrapFrameMode @ 0x1403D6710 (KiGetTrapFrameMode.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     KiReadKernelDr7 @ 0x14056C6DC (KiReadKernelDr7.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     $$ba @ 0x140B11898 ($$ba.c)
 *     SdbpCheckDll @ 0x140B134F0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140B137B0 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *Pool2; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r14
  int v13; // r10d
  _QWORD *v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  const char *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int i; // r11d
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  unsigned int *v31; // rax
  unsigned int v32; // ecx
  _QWORD *v33; // r8
  unsigned int v34; // r9d
  int *v35; // rdi
  __int64 v36; // r10
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  bool v42; // zf
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  unsigned __int64 v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // r8
  _QWORD *v51; // r9
  const char *v52; // rax
  int v53; // r14d
  unsigned __int64 v54; // rsi
  unsigned int v55; // r10d
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 j; // rax
  unsigned int v63; // esi
  BOOL v64; // r12d
  __int64 v65; // rcx
  unsigned __int8 v66; // r13
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // r15
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int8 v73; // r12
  __int64 v74; // rdx
  unsigned int *v75; // rcx
  unsigned int *v76; // rsi
  char v77; // r13
  unsigned __int64 v78; // r15
  __int64 v79; // r8
  __int64 *v80; // r9
  unsigned int *v81; // r10
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned __int8 v88; // r15
  unsigned __int64 v89; // rdx
  unsigned int *v90; // rcx
  unsigned int *v91; // rsi
  unsigned __int64 v92; // r14
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v101; // rdx
  unsigned int *v102; // rcx
  char v103; // r13
  unsigned __int64 v104; // r15
  __int64 v105; // r8
  __int64 *v106; // r9
  unsigned int *v107; // r10
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r13
  unsigned __int64 v112; // rdi
  __int64 v113; // r14
  unsigned __int64 v114; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v116; // rsi
  __int64 v117; // r15
  unsigned __int64 v118; // r9
  unsigned __int64 v119; // r14
  unsigned int v120; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rdi
  _QWORD *v125; // rcx
  char *v126; // r8
  int v127; // r10d
  unsigned __int64 v128; // r11
  signed __int64 v129; // r8
  int v130; // esi
  _QWORD *v131; // r9
  int v132; // r10d
  const char *v133; // rax
  __int64 v134; // r11
  int v135; // edi
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // r8
  _QWORD *v139; // r9
  __int64 v140; // r8
  unsigned __int64 v141; // rcx
  __int64 v142; // rax
  int v143; // r11d
  __int64 v144; // rax
  void (__fastcall *v145)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // ecx
  int v151; // ecx
  int v152; // ecx
  volatile signed __int32 *v153; // rax
  _QWORD *v155; // [rsp+40h] [rbp-39h]
  int v156; // [rsp+40h] [rbp-39h]
  __int64 v157; // [rsp+48h] [rbp-31h]
  int v158; // [rsp+48h] [rbp-31h]
  __int64 v159; // [rsp+78h] [rbp-1h]
  unsigned int v160; // [rsp+80h] [rbp+7h] BYREF
  int v162; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v163; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v164; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD **)&MaxDataSize;
  v4 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3);
  else
    _mm_lfence();
  v5 = __rdtsc();
  v6 = __ROR8__(v5, 3) ^ v5;
  Pool2 = (_QWORD *)ExAllocatePool2(
                      66LL,
                      v3[338] + 2807LL,
                      (unsigned int)dword_140C0E060[((unsigned __int8)v6 ^ (unsigned __int8)((v6
                                                                                            * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF]);
  v155 = Pool2;
  v8 = Pool2;
  if ( Pool2 )
  {
    v9 = Pool2 + 4;
    Pool2[3] = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = sub_1403F1B50;
    v163 = Pool2 + 4;
    memmove(Pool2 + 4, v3, 0xAA0uLL);
    v8[339] = v3;
    v8[340] = v8 + 344;
    v10 = __rdtsc();
    *((_DWORD *)v8 + 530) = 0;
    v11 = (__ROR8__(v10, 3) ^ v10) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v8 + 528) = (*((_QWORD *)&v11 + 1) ^ (unsigned __int64)v11) % *((unsigned int *)v8 + 523);
    v12 = v8[339];
    v13 = *((_DWORD *)v8 + 525);
    v14 = (_QWORD *)v12;
    v15 = __rdtsc();
    v16 = __ROR8__(v15, 3);
    v17 = v8[263];
    *((_DWORD *)v8 + 532) = (((v16 ^ v15) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v16 ^ v15));
    v8[341] = ((unsigned __int64)v8 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = (const char *)v12;
    v19 = *(unsigned int *)(v12 + 2020);
    if ( v12 < v12 + v19 )
    {
      do
      {
        _mm_prefetch(v18, 0);
        v18 += 64;
      }
      while ( (unsigned __int64)v18 < v12 + v19 );
    }
    v20 = v17;
    for ( i = (unsigned int)v19 >> 7; i; --i )
    {
      v22 = 8LL;
      do
      {
        v23 = v14[1] ^ __ROL8__(*v14 ^ v20, v13);
        v14 += 2;
        v20 = __ROL8__(v23, v13);
        --v22;
      }
      while ( v22 );
      v24 = __ROL8__(v17 ^ ((unsigned __int64)v14 - v12), 17) ^ v17 ^ ((unsigned __int64)v14 - v12);
      v13 = ((unsigned __int8)(((v24 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v24) ^ (unsigned __int8)v13) & 0x3F;
      if ( !v13 )
        LOBYTE(v13) = 1;
    }
    v25 = *(_DWORD *)(v12 + 2020) & 0x7F;
    if ( v25 >= 8 )
    {
      v26 = (unsigned __int64)(v19 & 0x7F) >> 3;
      do
      {
        v20 = __ROL8__(*v14++ ^ v20, v13);
        v25 -= 8;
        --v26;
      }
      while ( v26 );
    }
    for ( ; v25; --v25 )
    {
      v27 = *(unsigned __int8 *)v14;
      v14 = (_QWORD *)((char *)v14 + 1);
      v20 = __ROL8__(v27 ^ v20, v13);
    }
    v28 = 0xA3A03F5891C8B4E8uLL;
    if ( v20 != qword_140D1EA10 )
    {
      v29 = v8[181];
      *(_QWORD *)v29 = v12;
      *(_DWORD *)(v29 + 16) = v19;
      if ( !*((_DWORD *)v8 + 582) )
      {
        *(_QWORD *)(v8[181] + 24LL) = v20 ^ qword_140D1EA10;
        if ( !*((_DWORD *)v8 + 582) )
        {
          v8[293] = 0LL;
          v8[292] = v8 - 0xB8BF814EDC6E95FLL;
          v8[294] = 273LL;
          v8[295] = v20;
          *((_DWORD *)v8 + 582) = 1;
          __ba(v8 + 4, 0LL, v20, v14);
        }
      }
    }
    v30 = 4;
    v159 = 0LL;
    v31 = &v160;
    do
    {
      *(_BYTE *)v31 = 0;
      v31 = (unsigned int *)((char *)v31 + 1);
      --v30;
    }
    while ( v30 );
    v32 = 0;
    v162 = 0;
    if ( *((_DWORD *)v8 + 523) )
    {
      while ( 1 )
      {
        v33 = v9;
        v34 = 0;
        if ( v9[335] )
          v33 = (_QWORD *)v9[335];
        v35 = (int *)((char *)v33 + *((unsigned int *)v33 + 514));
        if ( (_DWORD)v159 && HIDWORD(v159) <= v32 )
        {
          v34 = HIDWORD(v159);
          v35 = (int *)((char *)v33 + v160);
        }
        if ( v34 != v32 )
        {
          v36 = v32 - v34;
          v34 = v32;
          while ( 1 )
          {
            v37 = *v35;
            if ( *v35 > 28 )
            {
              v45 = v37 - 30;
              if ( !v45 )
              {
                v28 = ((v35[9] != 0 ? v35[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
                v43 = (unsigned int)v28 + 24 * (*((unsigned __int16 *)v35 + 20) + 2);
                goto LABEL_53;
              }
              v46 = v45 - 3;
              if ( !v46 || (v47 = v46 - 1) == 0 )
              {
                v28 = ((v35[8] & 0xFFF) + (unsigned __int64)(unsigned int)v35[10] + 4095) >> 12;
                v43 = (unsigned int)(20 * v28 + 48);
                goto LABEL_53;
              }
              v42 = v47 == 9;
            }
            else
            {
              if ( v37 == 28 )
              {
                v44 = *((unsigned __int16 *)v35 + 20);
                goto LABEL_41;
              }
              v38 = v37 - 1;
              if ( !v38 )
                goto LABEL_50;
              v39 = v38 - 6;
              if ( !v39 )
              {
                v43 = (unsigned int)(24 * (v35[6] + 2));
                goto LABEL_53;
              }
              v40 = v39 - 1;
              if ( !v40 )
              {
                v44 = *((unsigned __int16 *)v35 + 16);
LABEL_41:
                v43 = (v44 + 55) & 0xFFFFFFF8;
                goto LABEL_53;
              }
              v41 = v40 - 2;
              if ( !v41 )
              {
                v43 = (unsigned int)(16 * (v35[7] + 3));
                goto LABEL_53;
              }
              v42 = v41 == 2;
            }
            if ( v42 )
            {
LABEL_50:
              v28 = (unsigned int)v35[4] / 0xCuLL;
              v43 = (unsigned int)(4 * v28 + 48);
              goto LABEL_53;
            }
            v43 = 48LL;
LABEL_53:
            v35 = (int *)((char *)v35 + v43);
            if ( !--v36 )
            {
              v9 = v163;
              v32 = v162;
              break;
            }
          }
        }
        LODWORD(v159) = 1;
        HIDWORD(v159) = v34;
        v160 = (_DWORD)v35 - (_DWORD)v33;
        v48 = *v35;
        if ( (_DWORD)v48 == 36 )
          break;
        if ( (unsigned int)v48 > 0x2B )
          goto LABEL_139;
        v28 = 0x80200000002LL;
        if ( !_bittest64((const __int64 *)&v28, v48) )
          goto LABEL_139;
        v99 = v9[167];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v9[42])(v99);
        v102 = *(unsigned int **)v9[195];
        v91 = v102 + 4;
        v103 = *((_BYTE *)v102 + 12);
        v104 = (unsigned __int64)&v102[6 * *v102 + 4];
        do
        {
          v105 = 24LL;
          v106 = (__int64 *)(v35 + 6);
          v107 = v91;
          while ( 1 )
          {
            v108 = *(_QWORD *)v107;
            v107 += 2;
            v109 = *v106++;
            if ( v108 != v109 )
              break;
            v105 = (unsigned int)(v105 - 8);
            if ( (unsigned int)v105 < 8 )
            {
              if ( !(_DWORD)v105 )
                goto LABEL_129;
              while ( 1 )
              {
                v101 = *(unsigned __int8 *)v107;
                v107 = (unsigned int *)((char *)v107 + 1);
                v110 = *(unsigned __int8 *)v106;
                v106 = (__int64 *)((char *)v106 + 1);
                if ( v101 != v110 )
                  goto LABEL_128;
                v42 = (_DWORD)v105 == 1;
                v105 = (unsigned int)(v105 - 1);
                if ( v42 )
                  goto LABEL_129;
              }
            }
          }
LABEL_128:
          v91 += 6;
        }
        while ( (unsigned __int64)v91 < v104 );
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v9[50])(v9[167], v101, v105, v106);
        __writecr8(CurrentIrql);
        if ( !v103 )
          goto LABEL_206;
        if ( (*((_DWORD *)v9 + 613) & 0x10) != 0 && !*((_DWORD *)v9 + 574) )
        {
          v9[288] = v9 - 0xB8BF814EDC6E963LL;
          v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
          v9[290] = *v35;
          v9[291] = 1LL;
          *((_DWORD *)v9 + 574) = 1;
          __ba(v9, 0LL, v96, v97);
        }
        if ( *((_QWORD *)v35 + 3) != 1LL )
        {
LABEL_206:
          if ( v91 == (unsigned int *)v104 && !*((_DWORD *)v9 + 574) )
          {
            v9[288] = v9 - 0xB8BF814EDC6E963LL;
            v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
            v98 = *v35;
            *((_DWORD *)v9 + 574) = 1;
LABEL_137:
            v9[290] = v98;
            v9[291] = v91;
            __ba(v9, 0LL, v96, v97);
          }
        }
LABEL_138:
        v32 = v162;
LABEL_139:
        v162 = ++v32;
        if ( v32 >= *((_DWORD *)v9 + 515) )
          goto LABEL_140;
      }
      v49 = (_QWORD *)*((_QWORD *)v35 + 1);
      v50 = (unsigned int)v35[4];
      v51 = v49;
      *((_DWORD *)v9 + 522) += v50;
      v52 = (const char *)v49;
      v53 = *((_DWORD *)v9 + 517);
      if ( v49 < (_QWORD *)((char *)v49 + v50) )
      {
        do
        {
          _mm_prefetch(v52, 0);
          v52 += 64;
        }
        while ( v52 < (const char *)v49 + v50 );
      }
      v54 = v9[259];
      v55 = (unsigned int)v50 >> 7;
      if ( (unsigned int)v50 >> 7 )
      {
        do
        {
          v56 = 8LL;
          do
          {
            v57 = v51[1] ^ __ROL8__(*v51 ^ v54, v53);
            v51 += 2;
            v54 = __ROL8__(v57, v53);
            --v56;
          }
          while ( v56 );
          v58 = __ROL8__(v9[259] ^ ((char *)v51 - (char *)v49), 17) ^ v9[259] ^ ((char *)v51 - (char *)v49);
          v28 = (v58 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v53 = ((unsigned __int8)(v28 ^ v58) ^ (unsigned __int8)v53) & 0x3F;
          if ( !v53 )
            LOBYTE(v53) = 1;
          --v55;
        }
        while ( v55 );
        v9 = v163;
      }
      v59 = v50 & 0x7F;
      if ( (unsigned int)v59 >= 8 )
      {
        v60 = (unsigned __int64)(unsigned int)v59 >> 3;
        do
        {
          v54 = __ROL8__(*v51++ ^ v54, v53);
          v59 = (unsigned int)(v59 - 8);
          --v60;
        }
        while ( v60 );
      }
      if ( (_DWORD)v59 )
      {
        do
        {
          v61 = *(unsigned __int8 *)v51;
          v51 = (_QWORD *)((char *)v51 + 1);
          v54 = __ROL8__(v61 ^ v54, v53);
          v42 = (_DWORD)v59 == 1;
          v59 = (unsigned int)(v59 - 1);
        }
        while ( !v42 );
      }
      for ( j = v54; ; LODWORD(v54) = j ^ v54 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v63 = v54 & 0x7FFFFFFF;
      v64 = 0;
      if ( v63 != v35[5] )
      {
        if ( !*v35 )
          v64 = v35[6] != 0;
        v65 = (unsigned int)v35[4];
        v28 = *((_QWORD *)v35 + 1);
        if ( v35[4] && (*((_DWORD *)v9 + 613) & 0x40) != 0 )
        {
          v66 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v67 = v28 & 0xFFFFFFFFFFFFF000uLL;
          v157 = (v28 + v65 - 1) | 0xFFF;
          v164 = (v28 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v68 = v66;
            while ( 1 )
            {
              v69 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v9[141])(v67, 0LL, v59, v51);
              if ( v69 != -1073741267 )
                break;
              if ( v64 )
                goto LABEL_87;
              if ( v66 > 1u )
                goto LABEL_85;
              v68 = v66;
              __writecr8(v66);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v69 < 0 )
            {
LABEL_87:
              __writecr8(v68);
              goto LABEL_88;
            }
LABEL_85:
            v67 += 4096LL;
            v164 += 4096LL;
            if ( v164 != v157 )
              continue;
            break;
          }
          __writecr8(v68);
        }
        else
        {
LABEL_88:
          if ( !*((_DWORD *)v9 + 574) )
          {
            *(_QWORD *)(v9[177] + 24LL) = (unsigned int)v35[5] ^ (unsigned __int64)v63;
            v70 = *((_QWORD *)v35 + 1);
            if ( !*((_DWORD *)v9 + 574) )
            {
              v9[288] = v9 - 0xB8BF814EDC6E963LL;
              v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
              v71 = *v35;
              v9[291] = v70;
              v9[290] = v71;
              *((_DWORD *)v9 + 574) = 1;
              __ba(v9, 0LL, v59, v51);
            }
          }
        }
      }
      v72 = v9[167];
      v73 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD *))v9[42])(v72, v28, v59, v51);
      v75 = *(unsigned int **)v9[195];
      v76 = v75 + 4;
      v77 = *((_BYTE *)v75 + 12);
      v78 = (unsigned __int64)&v75[6 * *v75 + 4];
      do
      {
        v79 = 24LL;
        v80 = (__int64 *)(v35 + 6);
        v81 = v76;
        while ( 1 )
        {
          v82 = *(_QWORD *)v81;
          v81 += 2;
          v83 = *v80++;
          if ( v82 != v83 )
            break;
          v79 = (unsigned int)(v79 - 8);
          if ( (unsigned int)v79 < 8 )
          {
            if ( !(_DWORD)v79 )
              goto LABEL_100;
            while ( 1 )
            {
              v74 = *(unsigned __int8 *)v81;
              v81 = (unsigned int *)((char *)v81 + 1);
              v84 = *(unsigned __int8 *)v80;
              v80 = (__int64 *)((char *)v80 + 1);
              if ( v74 != v84 )
                goto LABEL_99;
              v42 = (_DWORD)v79 == 1;
              v79 = (unsigned int)(v79 - 1);
              if ( v42 )
                goto LABEL_100;
            }
          }
        }
LABEL_99:
        v76 += 6;
      }
      while ( (unsigned __int64)v76 < v78 );
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v9[50])(v9[167], v74, v79, v80);
      __writecr8(v73);
      if ( !v77 )
        goto LABEL_207;
      if ( (*((_DWORD *)v9 + 613) & 0x10) != 0 && !*((_DWORD *)v9 + 574) )
      {
        v9[288] = v9 - 0xB8BF814EDC6E963LL;
        v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
        v9[290] = *v35;
        v9[291] = 1LL;
        *((_DWORD *)v9 + 574) = 1;
        __ba(v9, 0LL, v85, v86);
      }
      if ( *((_QWORD *)v35 + 3) != 1LL )
      {
LABEL_207:
        if ( v76 == (unsigned int *)v78 && !*((_DWORD *)v9 + 574) )
        {
          v9[288] = v9 - 0xB8BF814EDC6E963LL;
          v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
          v93 = *v35;
          *((_DWORD *)v9 + 574) = 1;
          v9[290] = v93;
          v9[291] = v76;
          __ba(v9, 0LL, v85, v86);
        }
      }
      v87 = v9[167];
      v88 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v9[42])(v87);
      v89 = 0LL;
      v90 = *(unsigned int **)v9[195];
      v91 = v90 + 4;
      v92 = (unsigned __int64)&v90[6 * *v90 + 4];
      while ( 1 )
      {
        v91 += 6;
        if ( (unsigned __int64)v91 >= v92 )
          break;
        v94 = *((_QWORD *)v91 + 1);
        if ( v94 < v89 )
          break;
        if ( (v94 & 0xFFFFFFFFFFFFF000uLL) != v94 )
          break;
        v95 = v94 + v91[4];
        if ( v95 <= v94 || v95 == v89 )
          break;
        v89 = v94 + v91[4];
      }
      ((void (__fastcall *)(_QWORD))v9[50])(v9[167]);
      __writecr8(v88);
      if ( v91 == (unsigned int *)v92 || *((_DWORD *)v9 + 574) )
        goto LABEL_138;
      v9[288] = v9 - 0xB8BF814EDC6E963LL;
      v9[289] = (char *)v35 - 0x4C48B4211BBACBEBLL;
      v98 = *v35;
      *((_DWORD *)v9 + 574) = 1;
      goto LABEL_137;
    }
LABEL_140:
    if ( *((_DWORD *)v9 + 574) )
    {
      v111 = v9[290];
      v112 = v9[291];
      v113 = v9[289];
      v114 = v9[288];
      v164 = v112;
      v158 = v113;
      v156 = v114;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v116 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9[200]);
      v117 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9[202]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v9[201])
        || (unsigned __int64)&v163 > v116
        || (unsigned __int64)&v163 < v116 - 24576 )
      {
        v116 = *(_QWORD *)(v117 + v9[208]);
      }
      if ( (v9[306] & 0x8000000) == 0 )
      {
        v114 = __readcr0();
        __writecr0(v114 & 0xFFFFFFFFFFFEFFFFuLL);
        v118 = (unsigned __int64)(v9 + 341);
        v119 = (unsigned __int64)&v9[2 * *((unsigned int *)v9 + 680) + 341];
        v120 = 0;
        for ( k = (_QWORD *)v119; v120 < *((_DWORD *)v9 + 681); ++v120 )
        {
          *(_QWORD *)*k = k[1];
          v122 = __readcr4();
          if ( (v122 & 0x20080) != 0 )
          {
            __writecr4(v122 ^ 0x80);
            __writecr4(v122);
          }
          else
          {
            v123 = __readcr3();
            __writecr3(v123);
          }
          k += 2;
        }
        if ( v118 < v119 )
        {
          do
          {
            v124 = *(unsigned int *)(v118 + 8);
            v125 = k;
            v126 = *(char **)v118;
            v127 = v124;
            if ( (unsigned int)v124 >= 8 )
            {
              v128 = (unsigned __int64)(unsigned int)v124 >> 3;
              do
              {
                v127 -= 8;
                *(_QWORD *)v126 = *v125++;
                v126 += 8;
                --v128;
              }
              while ( v128 );
            }
            if ( v127 )
            {
              v129 = v126 - (char *)v125;
              do
              {
                *((_BYTE *)v125 + v129) = *(_BYTE *)v125;
                v125 = (_QWORD *)((char *)v125 + 1);
                --v127;
              }
              while ( v127 );
            }
            k = (_QWORD *)((char *)k + v124);
            v118 += 16LL;
          }
          while ( v118 < v119 );
          LODWORD(v112) = v164;
        }
        *(_BYTE *)v9[67] = -61;
        __writecr0(v114);
        LODWORD(v113) = v158;
        LODWORD(v114) = v156;
      }
      v148 = *((_DWORD *)v9 + 586);
      if ( v148 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v148 = *((_DWORD *)v9 + 586);
        }
        if ( v148 )
        {
          v149 = v148 - 1;
          if ( v149 )
          {
            v150 = v149 - 1;
            if ( v150 )
            {
              v151 = v150 - 1;
              if ( v151 )
              {
                v152 = v151 - 1;
                if ( v152 )
                {
                  if ( v152 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v9[202]),
                      (*((_DWORD *)v9 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v9[182] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v9[214]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v9[202])
                                                + v9[210]),
                    (*((_DWORD *)v9 + 612) >> 10) & 0x1F);
                }
                goto LABEL_201;
              }
              v153 = (volatile signed __int32 *)v9[171];
            }
            else
            {
              v153 = (volatile signed __int32 *)v9[170];
            }
          }
          else
          {
            v153 = (volatile signed __int32 *)v9[168];
          }
          _interlockedbittestandset64(v153, 0LL);
        }
      }
LABEL_201:
      *(_QWORD *)(v117 + v9[211]) = 0LL;
      *(_QWORD *)(v117 + v9[213]) = 0LL;
      SdbpCheckDll(265, v114, v113, v112, v111, v9[43], v116);
      JUMPOUT(0x1403E56D5LL);
    }
    *((_DWORD *)v9 + 522) += 1576;
    v130 = *((_DWORD *)v9 + 49);
    v131 = v9;
    v132 = *((_DWORD *)v9 + 517);
    v133 = (const char *)v9;
    v134 = v9[259];
    *((_DWORD *)v9 + 49) = 0;
    if ( v9 < v9 + 197 )
    {
      do
      {
        _mm_prefetch(v133, 0);
        v133 += 64;
      }
      while ( v133 < (const char *)v9 + 1576 );
    }
    v135 = 12;
    v136 = v134;
    do
    {
      v137 = 8LL;
      do
      {
        v138 = *v131 ^ v136;
        v139 = v131 + 1;
        v140 = *v139 ^ __ROL8__(v138, v132);
        v131 = v139 + 1;
        v136 = __ROL8__(v140, v132);
        --v137;
      }
      while ( v137 );
      v141 = __ROL8__(v134 ^ ((char *)v131 - (char *)v9), 17) ^ v134 ^ ((char *)v131 - (char *)v9);
      v132 = ((unsigned __int8)(((v141 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v141) ^ (unsigned __int8)v132) & 0x3F;
      if ( !v132 )
        LOBYTE(v132) = 1;
      --v135;
    }
    while ( v135 );
    v142 = 5LL;
    v4 = a1;
    v143 = 40;
    do
    {
      v136 = __ROL8__(*v131++ ^ v136, v132);
      v143 -= 8;
      --v142;
    }
    while ( v142 );
    for ( ; v143; --v143 )
    {
      v144 = *(unsigned __int8 *)v131;
      v131 = (_QWORD *)((char *)v131 + 1);
      v136 = __ROL8__(v144 ^ v136, v132);
    }
    v145 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v9[34];
    *((_DWORD *)v9 + 49) = v130;
    v9[324] = v136;
    v145(v155, 1LL, v136, v131);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v4);
  v147 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1616LL));
    _enable();
    v147 = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v147 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
