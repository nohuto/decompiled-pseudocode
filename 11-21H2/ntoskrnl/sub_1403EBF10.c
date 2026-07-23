/*
 * XREFs of sub_1403EBF10 @ 0x1403EBF10
 * Callers:
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_1403A0A90 @ 0x1403A0A90 (sub_1403A0A90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140569E30 @ 0x140569E30 (sub_140569E30.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     sub_140AD2100 @ 0x140AD2100 (sub_140AD2100.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 *     sub_140AD23C0 @ 0x140AD23C0 (sub_140AD23C0.c)
 */

char __fastcall sub_1403EBF10(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int128 v7; // rax
  _QWORD *Pool2; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r14
  int v15; // r10d
  _QWORD *v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  const char *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned int i; // r11d
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int *v32; // rax
  unsigned int v33; // ecx
  _QWORD *v34; // r8
  unsigned int v35; // r9d
  int *v36; // rdi
  __int64 v37; // r10
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // rax
  _QWORD *v45; // r11
  __int64 v46; // r8
  _QWORD *v47; // r9
  const char *v48; // rax
  int v49; // r14d
  unsigned __int64 v50; // rsi
  unsigned int v51; // r10d
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  bool v58; // zf
  unsigned __int64 j; // rax
  unsigned int v60; // esi
  BOOL v61; // r12d
  __int64 v62; // rcx
  unsigned __int8 v63; // r13
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // r15
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int8 v70; // r12
  __int64 v71; // rdx
  unsigned int *v72; // rcx
  unsigned int *v73; // rsi
  char v74; // r13
  unsigned __int64 v75; // r15
  __int64 v76; // r8
  __int64 *v77; // r9
  unsigned int *v78; // r10
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  unsigned __int8 v85; // r15
  unsigned __int64 v86; // rdx
  unsigned int *v87; // rcx
  unsigned int *v88; // rsi
  unsigned __int64 v89; // r14
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  _QWORD *v94; // rax
  __int64 v95; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v97; // rdx
  unsigned int *v98; // rcx
  char v99; // r13
  unsigned __int64 v100; // r15
  __int64 v101; // r8
  __int64 *v102; // r9
  unsigned int *v103; // r10
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // r14
  unsigned __int64 v109; // r12
  __int64 v110; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v112; // rsi
  __int64 v113; // r15
  unsigned __int64 v114; // r9
  unsigned __int64 v115; // r14
  unsigned int v116; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rdi
  _QWORD *v121; // rcx
  char *v122; // r8
  int v123; // r10d
  unsigned __int64 v124; // r11
  signed __int64 v125; // r8
  int v126; // esi
  _QWORD *v127; // r9
  const char *v128; // rax
  int v129; // r10d
  __int64 v130; // r8
  int v131; // edi
  __int64 v132; // rax
  __int64 v133; // r8
  unsigned __int64 v134; // rcx
  int v135; // r11d
  __int64 v136; // rax
  void (__fastcall *v137)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *v138; // rax
  int v139; // ecx
  int v140; // ecx
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  volatile signed __int32 *v145; // rax
  __int64 v147; // [rsp+40h] [rbp-39h]
  _QWORD *v148; // [rsp+48h] [rbp-31h]
  int v149; // [rsp+48h] [rbp-31h]
  __int64 v150; // [rsp+78h] [rbp-1h]
  unsigned int v151; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v153; // [rsp+E8h] [rbp+6Fh]
  int v154; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v155; // [rsp+F0h] [rbp+77h]
  int v156; // [rsp+F0h] [rbp+77h]
  _QWORD *v157; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *(_QWORD **)&qword_140D06848;
  v4 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&qword_140D06848 + 2396LL) & 0x100000) != 0 )
    sub_14024B6F8(a1, a2, a3);
  else
    _mm_lfence();
  v5 = __rdtsc();
  v6 = 15LL;
  v7 = (__ROR8__(v5, 3) ^ v5) * (unsigned __int128)0x7010008004002001uLL;
  Pool2 = (_QWORD *)ExAllocatePool2(
                      66LL,
                      v3[331] + 2751LL,
                      (unsigned int)dword_140C0DBA0[((unsigned __int64)v7 ^ *((_QWORD *)&v7 + 1)) & 0xF]);
  v148 = Pool2;
  v9 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    v10 = Pool2 + 4;
    Pool2[3] = Pool2;
    Pool2[2] = sub_1403F9450;
    v157 = Pool2 + 4;
    memmove(Pool2 + 4, v3, 0xA68uLL);
    v9[332] = v3;
    v9[333] = v9 + 337;
    v11 = __rdtsc();
    v12 = *((unsigned int *)v9 + 509);
    v13 = (__ROR8__(v11, 3) ^ v11) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v9 + 516) = 0;
    *((_DWORD *)v9 + 514) = (*((_QWORD *)&v13 + 1) ^ (unsigned __int64)v13) % v12;
    v14 = v9[332];
    v15 = *((_DWORD *)v9 + 511);
    v16 = (_QWORD *)v14;
    v17 = __rdtsc();
    v18 = __ROR8__(v17, 3);
    v19 = v9[256];
    *((_DWORD *)v9 + 518) = (((v18 ^ v17) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v18 ^ v17));
    v9[334] = ((unsigned __int64)v9 + 2751) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = (const char *)v14;
    v21 = *(unsigned int *)(v14 + 1964);
    if ( v14 < v14 + v21 )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( (unsigned __int64)v20 < v14 + v21 );
    }
    v22 = v19;
    for ( i = (unsigned int)v21 >> 7; i; --i )
    {
      v24 = 8LL;
      do
      {
        v25 = v16[1] ^ __ROL8__(*v16 ^ v22, v15);
        v16 += 2;
        v22 = __ROL8__(v25, v15);
        --v24;
      }
      while ( v24 );
      v26 = __ROL8__(v19 ^ ((unsigned __int64)v16 - v14), 17) ^ v19 ^ ((unsigned __int64)v16 - v14);
      v15 = ((unsigned __int8)(((v26 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v26) ^ (unsigned __int8)v15) & 0x3F;
      if ( !v15 )
        LOBYTE(v15) = 1;
    }
    v27 = *(_DWORD *)(v14 + 1964) & 0x7F;
    if ( v27 >= 8 )
    {
      v28 = (unsigned __int64)(v21 & 0x7F) >> 3;
      do
      {
        v22 = __ROL8__(*v16++ ^ v22, v15);
        v27 -= 8;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v27; --v27 )
    {
      v29 = *(unsigned __int8 *)v16;
      v16 = (_QWORD *)((char *)v16 + 1);
      v22 = __ROL8__(v29 ^ v22, v15);
    }
    v30 = 0xA3A03F5891C8B4E8uLL;
    if ( v22 != qword_140D06850 )
    {
      v31 = v9[177];
      *(_QWORD *)v31 = v14;
      *(_DWORD *)(v31 + 16) = v21;
      if ( !*((_DWORD *)v9 + 568) )
      {
        *(_QWORD *)(v9[177] + 24LL) = v22 ^ qword_140D06850;
        if ( !*((_DWORD *)v9 + 568) )
        {
          v9[286] = 0LL;
          v9[285] = v9 - 0xB8BF814EDC6E95FLL;
          v9[287] = 273LL;
          v9[288] = v22;
          *((_DWORD *)v9 + 568) = 1;
          sub_140AD049C(v9 + 4, 0LL, v22, v16);
        }
      }
    }
    v150 = 0LL;
    v32 = &v151;
    v33 = 4;
    do
    {
      *(_BYTE *)v32 = 0;
      v32 = (unsigned int *)((char *)v32 + 1);
      --v33;
    }
    while ( v33 );
    v153 = 0;
    if ( *((_DWORD *)v9 + 509) )
    {
      while ( 1 )
      {
        v34 = v10;
        if ( v10[328] )
          v34 = (_QWORD *)v10[328];
        v35 = 0;
        v36 = (int *)((char *)v34 + *((unsigned int *)v34 + 500));
        if ( (_DWORD)v150 && HIDWORD(v150) <= v33 )
        {
          v35 = HIDWORD(v150);
          v36 = (int *)((char *)v34 + v151);
        }
        if ( v35 != v33 )
        {
          v37 = v33 - v35;
          v35 = v33;
          while ( 1 )
          {
            v38 = *v36;
            if ( *v36 > 12 )
              break;
            if ( v38 == 12 )
              goto LABEL_46;
            v39 = v38 - 1;
            if ( !v39 )
              goto LABEL_46;
            v40 = v39 - 6;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( !v41 )
              {
                v43 = *((unsigned __int16 *)v36 + 16);
LABEL_51:
                v42 = (v43 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v41 != 2 )
                goto LABEL_48;
              v42 = (unsigned int)(16 * (v36[7] + 3));
            }
            else
            {
              v42 = (unsigned int)(24 * (v36[6] + 2));
            }
LABEL_52:
            v36 = (int *)((char *)v36 + v42);
            if ( !--v37 )
            {
              v33 = v153;
              v6 = 15LL;
              goto LABEL_54;
            }
          }
          if ( v38 == 28 )
          {
            v43 = *((unsigned __int16 *)v36 + 20);
            goto LABEL_51;
          }
          if ( v38 == 30 )
          {
            v30 = ((v36[9] != 0 ? v36[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v42 = (unsigned int)v30 + 24 * (*((unsigned __int16 *)v36 + 20) + 2);
            goto LABEL_52;
          }
          if ( v38 <= 32 )
          {
LABEL_48:
            v42 = 48LL;
            goto LABEL_52;
          }
          if ( v38 <= 34 )
          {
            v30 = ((v36[8] & 0xFFF) + (unsigned __int64)(unsigned int)v36[10] + 4095) >> 12;
            v42 = (unsigned int)(20 * v30 + 48);
            goto LABEL_52;
          }
          if ( v38 != 43 )
            goto LABEL_48;
LABEL_46:
          v30 = (unsigned int)v36[4] / 0xCuLL;
          v42 = (unsigned int)(4 * v30 + 48);
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v150) = 1;
        HIDWORD(v150) = v35;
        v151 = (_DWORD)v36 - (_DWORD)v34;
        v44 = *v36;
        if ( (_DWORD)v44 == 36 )
          break;
        if ( (unsigned int)v44 > 0x2B )
          goto LABEL_138;
        v30 = 0x80200000002LL;
        if ( !_bittest64((const __int64 *)&v30, v44) )
          goto LABEL_138;
        v95 = v10[163];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v10[40])(v95);
        v98 = *(unsigned int **)v10[189];
        v88 = v98 + 4;
        v99 = *((_BYTE *)v98 + 12);
        v100 = (unsigned __int64)&v98[6 * *v98 + 4];
        do
        {
          v101 = 24LL;
          v102 = (__int64 *)(v36 + 6);
          v103 = v88;
          while ( 1 )
          {
            v104 = *(_QWORD *)v103;
            v103 += 2;
            v105 = *v102++;
            if ( v104 != v105 )
              break;
            v101 = (unsigned int)(v101 - 8);
            if ( (unsigned int)v101 < 8 )
            {
              if ( !(_DWORD)v101 )
                goto LABEL_128;
              while ( 1 )
              {
                v97 = *(unsigned __int8 *)v103;
                v103 = (unsigned int *)((char *)v103 + 1);
                v106 = *(unsigned __int8 *)v102;
                v102 = (__int64 *)((char *)v102 + 1);
                if ( v97 != v106 )
                  goto LABEL_127;
                v58 = (_DWORD)v101 == 1;
                v101 = (unsigned int)(v101 - 1);
                if ( v58 )
                  goto LABEL_128;
              }
            }
          }
LABEL_127:
          v88 += 6;
        }
        while ( (unsigned __int64)v88 < v100 );
LABEL_128:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v10[48])(v10[163], v97, v101, v102);
        __writecr8(CurrentIrql);
        if ( !v99 )
          goto LABEL_206;
        if ( (*((_DWORD *)v10 + 599) & 0x10) != 0 && !*((_DWORD *)v10 + 560) )
        {
          v10[281] = v10 - 0xB8BF814EDC6E963LL;
          v10[282] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v10[283] = *v36;
          v10[284] = 1LL;
          *((_DWORD *)v10 + 560) = 1;
          sub_140AD049C(v10, 0LL, v92, v93);
        }
        if ( *((_QWORD *)v36 + 3) != 1LL )
        {
LABEL_206:
          if ( v88 == (unsigned int *)v100 && !*((_DWORD *)v10 + 560) )
          {
            v94 = v10 - 0xB8BF814EDC6E963LL;
LABEL_136:
            v10[281] = v94;
            v10[282] = (char *)v36 - 0x4C48B4211BBACBEBLL;
            v10[283] = *v36;
            v10[284] = v88;
            *((_DWORD *)v10 + 560) = 1;
            sub_140AD049C(v10, 0LL, v92, v93);
          }
        }
LABEL_137:
        v33 = v153;
        v6 = 15LL;
LABEL_138:
        v153 = ++v33;
        if ( v33 >= *((_DWORD *)v10 + 501) )
        {
          v9 = v148;
          goto LABEL_140;
        }
      }
      v45 = (_QWORD *)*((_QWORD *)v36 + 1);
      v46 = (unsigned int)v36[4];
      v47 = v45;
      *((_DWORD *)v10 + 508) += v46;
      v48 = (const char *)v45;
      v49 = *((_DWORD *)v10 + 503);
      if ( v45 < (_QWORD *)((char *)v45 + v46) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( v48 < (const char *)v45 + v46 );
      }
      v50 = v10[252];
      v51 = (unsigned int)v46 >> 7;
      if ( (unsigned int)v46 >> 7 )
      {
        do
        {
          v52 = 8LL;
          do
          {
            v53 = v50 ^ *v47;
            v54 = v47[1];
            v47 += 2;
            v50 = __ROL8__(__ROL8__(v53, v49) ^ v54, v49);
            --v52;
          }
          while ( v52 );
          v55 = __ROL8__(v10[252] ^ ((char *)v47 - (char *)v45), 17) ^ v10[252] ^ ((char *)v47 - (char *)v45);
          v30 = (v55 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v49 = ((unsigned __int8)(v30 ^ v55) ^ (unsigned __int8)v49) & 0x3F;
          if ( !v49 )
            LOBYTE(v49) = 1;
          --v51;
        }
        while ( v51 );
        v10 = v157;
      }
      v56 = v46 & 0x7F;
      if ( (unsigned int)v56 >= 8 )
      {
        v30 = (unsigned __int64)(unsigned int)v56 >> 3;
        do
        {
          v50 = __ROL8__(*v47++ ^ v50, v49);
          v56 = (unsigned int)(v56 - 8);
          --v30;
        }
        while ( v30 );
      }
      if ( (_DWORD)v56 )
      {
        do
        {
          v57 = *(unsigned __int8 *)v47;
          v47 = (_QWORD *)((char *)v47 + 1);
          v50 = __ROL8__(v57 ^ v50, v49);
          v58 = (_DWORD)v56 == 1;
          v56 = (unsigned int)(v56 - 1);
        }
        while ( !v58 );
      }
      for ( j = v50; ; LODWORD(v50) = j ^ v50 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v60 = v50 & 0x7FFFFFFF;
      v61 = 0;
      if ( v60 != v36[5] )
      {
        if ( !*v36 )
          v61 = v36[6] != 0;
        v62 = (unsigned int)v36[4];
        v30 = *((_QWORD *)v36 + 1);
        if ( v36[4] && (*((_DWORD *)v10 + 599) & 0x40) != 0 )
        {
          v63 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v64 = v30 & 0xFFFFFFFFFFFFF000uLL;
          v147 = (v30 + v62 - 1) | 0xFFF;
          v155 = (v30 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v65 = v63;
            while ( 1 )
            {
              v66 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v10[139])(v64, 0LL, v56, v47);
              if ( v66 != -1073741267 )
                break;
              if ( v61 )
                goto LABEL_86;
              if ( v63 > 1u )
                goto LABEL_84;
              v65 = v63;
              __writecr8(v63);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v66 < 0 )
            {
LABEL_86:
              __writecr8(v65);
              goto LABEL_87;
            }
LABEL_84:
            v64 += 4096LL;
            v155 += 4096LL;
            if ( v155 != v147 )
              continue;
            break;
          }
          __writecr8(v65);
        }
        else
        {
LABEL_87:
          if ( !*((_DWORD *)v10 + 560) )
          {
            *(_QWORD *)(v10[173] + 24LL) = v60 ^ (unsigned __int64)(unsigned int)v36[5];
            v67 = *((_QWORD *)v36 + 1);
            if ( !*((_DWORD *)v10 + 560) )
            {
              v10[281] = v10 - 0xB8BF814EDC6E963LL;
              v10[282] = (char *)v36 - 0x4C48B4211BBACBEBLL;
              v68 = *v36;
              v10[284] = v67;
              v10[283] = v68;
              *((_DWORD *)v10 + 560) = 1;
              sub_140AD049C(v10, 0LL, v56, v47);
            }
          }
        }
      }
      v69 = v10[163];
      v70 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD *))v10[40])(v69, v30, v56, v47);
      v72 = *(unsigned int **)v10[189];
      v73 = v72 + 4;
      v74 = *((_BYTE *)v72 + 12);
      v75 = (unsigned __int64)&v72[6 * *v72 + 4];
      do
      {
        v76 = 24LL;
        v77 = (__int64 *)(v36 + 6);
        v78 = v73;
        while ( 1 )
        {
          v79 = *(_QWORD *)v78;
          v78 += 2;
          v80 = *v77++;
          if ( v79 != v80 )
            break;
          v76 = (unsigned int)(v76 - 8);
          if ( (unsigned int)v76 < 8 )
          {
            if ( !(_DWORD)v76 )
              goto LABEL_99;
            while ( 1 )
            {
              v71 = *(unsigned __int8 *)v78;
              v78 = (unsigned int *)((char *)v78 + 1);
              v81 = *(unsigned __int8 *)v77;
              v77 = (__int64 *)((char *)v77 + 1);
              if ( v71 != v81 )
                goto LABEL_98;
              v58 = (_DWORD)v76 == 1;
              v76 = (unsigned int)(v76 - 1);
              if ( v58 )
                goto LABEL_99;
            }
          }
        }
LABEL_98:
        v73 += 6;
      }
      while ( (unsigned __int64)v73 < v75 );
LABEL_99:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v10[48])(v10[163], v71, v76, v77);
      __writecr8(v70);
      if ( !v74 )
        goto LABEL_207;
      if ( (*((_DWORD *)v10 + 599) & 0x10) != 0 && !*((_DWORD *)v10 + 560) )
      {
        v10[281] = v10 - 0xB8BF814EDC6E963LL;
        v10[282] = (char *)v36 - 0x4C48B4211BBACBEBLL;
        v10[283] = *v36;
        v10[284] = 1LL;
        *((_DWORD *)v10 + 560) = 1;
        sub_140AD049C(v10, 0LL, v82, v83);
      }
      if ( *((_QWORD *)v36 + 3) != 1LL )
      {
LABEL_207:
        if ( v73 == (unsigned int *)v75 && !*((_DWORD *)v10 + 560) )
        {
          v10[281] = v10 - 0xB8BF814EDC6E963LL;
          v10[282] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v10[283] = *v36;
          v10[284] = v73;
          *((_DWORD *)v10 + 560) = 1;
          sub_140AD049C(v10, 0LL, v82, v83);
        }
      }
      v84 = v10[163];
      v85 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v10[40])(v84);
      v86 = 0LL;
      v87 = *(unsigned int **)v10[189];
      v88 = v87 + 4;
      v89 = (unsigned __int64)&v87[6 * *v87 + 4];
      while ( 1 )
      {
        v88 += 6;
        if ( (unsigned __int64)v88 >= v89 )
          break;
        v90 = *((_QWORD *)v88 + 1);
        if ( v90 < v86 )
          break;
        if ( (v90 & 0xFFFFFFFFFFFFF000uLL) != v90 )
          break;
        v91 = v90 + v88[4];
        if ( v91 <= v90 || v91 == v86 )
          break;
        v86 = v90 + v88[4];
      }
      ((void (__fastcall *)(_QWORD))v10[48])(v10[163]);
      __writecr8(v85);
      if ( v88 == (unsigned int *)v89 || *((_DWORD *)v10 + 560) )
        goto LABEL_137;
      v94 = v10 - 0xB8BF814EDC6E963LL;
      goto LABEL_136;
    }
LABEL_140:
    if ( *((_DWORD *)v10 + 560) )
    {
      v107 = v10[284];
      v108 = v10[282];
      v109 = v10[281];
      v110 = v10[283];
      v154 = v107;
      v156 = v108;
      v149 = v109;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v112 = *(_QWORD *)((char *)CurrentPrcb + v10[193]);
      v113 = *(_QWORD *)((char *)CurrentPrcb + v10[195]);
      if ( !*((_BYTE *)CurrentPrcb + v10[194])
        || (unsigned __int64)&v157 > v112
        || (unsigned __int64)&v157 < v112 - 24576 )
      {
        v112 = *(_QWORD *)(v113 + v10[201]);
      }
      if ( (v10[299] & 0x8000000) == 0 )
      {
        v109 = __readcr0();
        __writecr0(v109 & 0xFFFFFFFFFFFEFFFFuLL);
        v114 = (unsigned __int64)(v10 + 334);
        v115 = (unsigned __int64)&v10[2 * *((unsigned int *)v10 + 666) + 334];
        v116 = 0;
        for ( k = (_QWORD *)v115; v116 < *((_DWORD *)v10 + 667); ++v116 )
        {
          *(_QWORD *)*k = k[1];
          v118 = __readcr4();
          if ( (v118 & 0x20080) != 0 )
          {
            __writecr4(v118 ^ 0x80);
            __writecr4(v118);
          }
          else
          {
            v119 = __readcr3();
            __writecr3(v119);
          }
          k += 2;
        }
        if ( v114 < v115 )
        {
          do
          {
            v120 = *(unsigned int *)(v114 + 8);
            v121 = k;
            v122 = *(char **)v114;
            v123 = v120;
            if ( (unsigned int)v120 >= 8 )
            {
              v124 = (unsigned __int64)(unsigned int)v120 >> 3;
              do
              {
                v123 -= 8;
                *(_QWORD *)v122 = *v121++;
                v122 += 8;
                --v124;
              }
              while ( v124 );
            }
            if ( v123 )
            {
              v125 = v122 - (char *)v121;
              do
              {
                *((_BYTE *)v121 + v125) = *(_BYTE *)v121;
                v121 = (_QWORD *)((char *)v121 + 1);
                --v123;
              }
              while ( v123 );
            }
            k = (_QWORD *)((char *)k + v120);
            v114 += 16LL;
          }
          while ( v114 < v115 );
          LODWORD(v107) = v154;
        }
        *(_BYTE *)v10[65] = -61;
        __writecr0(v109);
        LODWORD(v108) = v156;
        LODWORD(v109) = v149;
      }
      v140 = *((_DWORD *)v10 + 572);
      if ( v140 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v140 = *((_DWORD *)v10 + 572);
        }
        if ( v140 )
        {
          v141 = v140 - 1;
          if ( v141 )
          {
            v142 = v141 - 1;
            if ( v142 )
            {
              v143 = v142 - 1;
              if ( v143 )
              {
                v144 = v143 - 1;
                if ( v144 )
                {
                  if ( v144 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)KeGetCurrentPrcb() + v10[195]),
                      (*((_DWORD *)v10 + 598) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v10[178] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v10[207]
                                                + *(_QWORD *)((char *)KeGetCurrentPrcb() + v10[195])
                                                + v10[203]),
                    (*((_DWORD *)v10 + 598) >> 10) & 0x1F);
                }
                goto LABEL_201;
              }
              v145 = (volatile signed __int32 *)v10[167];
            }
            else
            {
              v145 = (volatile signed __int32 *)v10[166];
            }
          }
          else
          {
            v145 = (volatile signed __int32 *)v10[164];
          }
          _interlockedbittestandset64(v145, 0LL);
        }
      }
LABEL_201:
      *(_QWORD *)(v113 + v10[204]) = 0LL;
      *(_QWORD *)(v113 + v10[206]) = 0LL;
      sub_140AD23C0(v10[41]);
      sub_140AD2100(265, v109, v108, v107, v110, v10[41], v112);
      JUMPOUT(0x1403ECDEALL);
    }
    v126 = *((_DWORD *)v10 + 49);
    *((_DWORD *)v10 + 49) = 0;
    v127 = v10;
    *((_DWORD *)v10 + 508) += 1528;
    v128 = (const char *)v10;
    v129 = *((_DWORD *)v10 + 503);
    if ( v10 < v10 + 191 )
    {
      do
      {
        _mm_prefetch(v128, 0);
        v128 += 64;
      }
      while ( v128 < (const char *)v10 + 1528 );
    }
    v130 = v10[252];
    v131 = 11;
    do
    {
      v132 = 8LL;
      do
      {
        v133 = v127[1] ^ __ROL8__(*v127 ^ v130, v129);
        v127 += 2;
        v130 = __ROL8__(v133, v129);
        --v132;
      }
      while ( v132 );
      v134 = __ROL8__(v10[252] ^ ((char *)v127 - (char *)v10), 17) ^ v10[252] ^ ((char *)v127 - (char *)v10);
      v129 = ((unsigned __int8)(((v134 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v134) ^ (unsigned __int8)v129) & 0x3F;
      if ( !v129 )
        LOBYTE(v129) = 1;
      --v131;
    }
    while ( v131 );
    v4 = a1;
    v135 = 120;
    do
    {
      v130 = __ROL8__(*v127++ ^ v130, v129);
      v135 -= 8;
      --v6;
    }
    while ( v6 );
    for ( ; v135; --v135 )
    {
      v136 = *(unsigned __int8 *)v127;
      v127 = (_QWORD *)((char *)v127 + 1);
      v130 = __ROL8__(v136 ^ v130, v129);
    }
    v137 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v10[32];
    *((_DWORD *)v10 + 49) = v126;
    v10[317] = v130;
    v137(v9, 1LL, v130, v127);
  }
  LOBYTE(v138) = sub_1403A0A90(v4);
  v139 = (_BYTE)v138 != 0;
  if ( (_BYTE)v138 )
  {
    _disable();
    v138 = *(const signed __int32 **)((char *)KeGetCurrentPrcb() + *(_QWORD *)(*(_QWORD *)&qword_140D06848 + 1560LL));
    _enable();
    v139 = _bittest(v138, 0x18u);
  }
  if ( !byte_140C097FC && !(_BYTE)KdDebuggerNotPresent && !v139 )
  {
    v138 = (const signed __int32 *)sub_140569E30();
    if ( v138 )
      __writedr(7u, (unsigned __int64)v138);
  }
  return (char)v138;
}
