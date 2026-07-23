/*
 * XREFs of sub_1409EFAE0 @ 0x1409EFAE0
 * Callers:
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460AEA @ 0x140460AEA (sub_140460AEA.c)
 *     sub_1406359A8 @ 0x1406359A8 (sub_1406359A8.c)
 *     sub_1406373B8 @ 0x1406373B8 (sub_1406373B8.c)
 *     sub_1407589DC @ 0x1407589DC (sub_1407589DC.c)
 *     sub_1409EF2FC @ 0x1409EF2FC (sub_1409EF2FC.c)
 *     sub_1409EF998 @ 0x1409EF998 (sub_1409EF998.c)
 *     sub_1409F0964 @ 0x1409F0964 (sub_1409F0964.c)
 *     sub_1409F1828 @ 0x1409F1828 (sub_1409F1828.c)
 *     sub_1409F18BC @ 0x1409F18BC (sub_1409F18BC.c)
 *     sub_1409F19C8 @ 0x1409F19C8 (sub_1409F19C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EFAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r12
  void *v9; // r13
  char *v10; // r14
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  char *Pool2; // rax
  size_t v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // edi
  __int64 v27; // rax
  __m128i v28; // xmm6
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // edx
  struct _KTHREAD *v33; // rcx
  char *v34; // r9
  char *v35; // r10
  __int64 v36; // r8
  unsigned int v37; // eax
  char i; // cl
  __int64 v39; // r11
  unsigned __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // edi
  __int64 v43; // rdx
  _QWORD *v44; // r11
  __int64 v45; // rcx
  char k; // cl
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // r10
  unsigned int v51; // edi
  __int64 v52; // rcx
  _QWORD *v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // r12
  __int64 v58; // rax
  _QWORD *n; // rdx
  _QWORD *v60; // r9
  __int64 v61; // r11
  _QWORD *ii; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  int v67; // edi
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // r8d
  __int64 v71; // rcx
  unsigned int v72; // edi
  void *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v77; // [rsp+20h] [rbp-E8h]
  int v78; // [rsp+24h] [rbp-E4h]
  __int64 v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+30h] [rbp-D8h]
  __int64 j; // [rsp+30h] [rbp-D8h]
  __int64 v82; // [rsp+38h] [rbp-D0h]
  __int64 v83; // [rsp+40h] [rbp-C8h]
  __int64 v84; // [rsp+48h] [rbp-C0h]
  __m128i *v85; // [rsp+50h] [rbp-B8h]
  __int64 v86; // [rsp+50h] [rbp-B8h]
  unsigned int v87; // [rsp+58h] [rbp-B0h]
  int v88; // [rsp+5Ch] [rbp-ACh]
  unsigned int v89; // [rsp+60h] [rbp-A8h]
  __int128 v90; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v91; // [rsp+78h] [rbp-90h]
  unsigned __int64 v92[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v93[3]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v94; // [rsp+B0h] [rbp-58h]
  int v97; // [rsp+130h] [rbp+28h]
  unsigned __int64 v98; // [rsp+130h] [rbp+28h]
  __int64 v99; // [rsp+130h] [rbp+28h]
  int v100; // [rsp+130h] [rbp+28h]
  __int64 m; // [rsp+130h] [rbp+28h]
  __int64 v102; // [rsp+130h] [rbp+28h]
  __int64 v103; // [rsp+130h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v80 = 0LL;
  v10 = 0LL;
  v77 = 0;
  *a6 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  *((_QWORD *)&v90 + 1) = *(_QWORD *)(a5 + 32);
  v12 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v93[2] = v12;
  if ( !v12 )
  {
    v78 = -1073741637;
    goto LABEL_132;
  }
  LODWORD(v91) = v12->OptionalHeader.CheckSum;
  DWORD1(v91) = v12->FileHeader.TimeDateStamp;
  if ( (*(_DWORD *)(a5 + 8) & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(a5 + 48);
    if ( !v14 )
    {
      v78 = -1073741637;
      goto LABEL_132;
    }
    v13 = *(_QWORD *)(v14 + 24);
  }
  *(_QWORD *)&v90 = v13;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 1312) )
    {
      v77 = 1;
    }
    else
    {
      v77 = 0;
      v15 = *(unsigned int *)(a3 + 40);
      *(_QWORD *)&v90 = v15 ^ v13;
      DWORD2(v91) = v15;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(a1 + 664, 0LL);
  v17 = sub_1409EF998(a1, (__int64)&v90, a6);
  if ( v17 && v17 == *a6 )
  {
    sub_1406373B8(a1, a3, *a6, v77);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
    sub_1402AFC00(a1 + 664);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v78 = 0;
    goto LABEL_17;
  }
  v88 = *(_DWORD *)(a1 + 684) >> 5;
  v18 = *(_DWORD *)(a1 + 680);
  if ( v18 <= *(_DWORD *)(a1 + 696) )
    v18 = *(_DWORD *)(a1 + 696);
  v89 = v18;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
  sub_1402AFC00(a1 + 664);
  sub_1402F9540((__int64)KeGetCurrentThread());
  Pool2 = (char *)ExAllocatePool2(256LL, 176LL, 1450669125LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    v78 = -1073741670;
LABEL_17:
    v9 = 0LL;
    goto LABEL_132;
  }
  memset(Pool2, 0, 0xB0uLL);
  *((_QWORD *)v10 + 10) = v10 + 72;
  *((_QWORD *)v10 + 9) = v10 + 72;
  *((_QWORD *)v10 + 12) = v10 + 88;
  *((_QWORD *)v10 + 11) = v10 + 88;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 8) = 1LL;
  *((_QWORD *)v10 + 1) = v90;
  v20 = *((_QWORD *)&v90 + 1);
  *((_QWORD *)v10 + 5) = *((_QWORD *)&v90 + 1);
  *((_QWORD *)v10 + 4) = v91;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v93[0] = 0LL;
  v93[1] = 0LL;
  v87 = 0;
  v85 = (__m128i *)v93;
  v97 = 1;
  if ( (int)sub_1407589DC(*(char **)(a5 + 16), v20, (__int64 *)v10 + 6, (_DWORD *)v10 + 14) >= 0 )
  {
    v21 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v87 = *(_DWORD *)(v21 + 20);
      v85 = (__m128i *)(v21 + 4);
      goto LABEL_28;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v22 = 0;
  v97 = 0;
  v23 = v77;
  if ( !v77 )
  {
LABEL_39:
    if ( !v22 && !v23 )
      goto LABEL_46;
    goto LABEL_41;
  }
LABEL_28:
  v78 = sub_1409F18BC(v10, a5, a4);
  if ( v78 < 0 )
    goto LABEL_17;
  v92[0] = *((_QWORD *)v10 + 14);
  v92[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  v24 = *(_DWORD *)(a1 + 1112);
  if ( v24 )
    v22 = sub_1409EF2FC(v92, (unsigned __int64 *)(a1 + 792), v24);
  else
    v22 = v97;
  if ( !v22 )
    goto LABEL_38;
  v25 = *(_DWORD *)(a1 + 1116);
  if ( !v25 )
    goto LABEL_38;
  if ( (unsigned int)sub_1409EF2FC(v92, (unsigned __int64 *)(a1 + 952), v25) )
  {
    v22 = 0;
LABEL_38:
    v23 = v77;
    goto LABEL_39;
  }
  v22 = 1;
LABEL_41:
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v22 << 16)) & 0x10000;
  v26 = *((_DWORD *)v10 + 10);
  LODWORD(v98) = *((_DWORD *)v10 + 9);
  HIDWORD(v98) = *((_DWORD *)v10 + 8);
  v27 = sub_140460AEA(v98, *(unsigned int *)(a1 + 12));
  v94 = *v85;
  v28 = v94;
  v29 = sub_140460AEA(__PAIR64__(v87, v26), v27);
  v30 = sub_140460AEA(v28.m128i_u64[0], v29);
  v99 = sub_140460AEA(_mm_srli_si128(v28, 8).m128i_u64[0], v30);
  v31 = v99 ^ HIDWORD(v99);
  if ( (unsigned int)v99 == HIDWORD(v99) )
    v31 = 1;
  if ( !v77 )
    v31 ^= *(_DWORD *)(a3 + 40);
  *((_DWORD *)v10 + 31) = v31;
LABEL_46:
  v32 = 2 * v88;
  if ( v89 + 1 > 2 * v88 )
  {
    v8 = v32;
    if ( !v32 )
      v8 = 128LL;
    v80 = ExAllocatePool2(256LL, 8LL * (unsigned int)(2 * v8), 1450669125LL);
  }
  v33 = KeGetCurrentThread();
  --*((_WORD *)v33 + 242);
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v34 = (char *)v80;
  if ( v80 && (unsigned int)v8 > *(_DWORD *)(a1 + 684) >> 5 )
  {
    v35 = (char *)(v80 + 8LL * (unsigned int)v8);
    v36 = (unsigned int)v8;
    v100 = v8 & (v8 - 1);
    if ( v100 )
    {
      v37 = v8;
      for ( i = -1; v37; v37 >>= 1 )
        ++i;
      v36 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v36 > 0x4000000 )
      v36 = 0x4000000LL;
    v39 = a1 + 696;
    v40 = (unsigned __int64)(8 * v36 + 7) >> 3;
    if ( v35 > &v35[8 * v36] )
      v40 = 0LL;
    if ( v40 )
      memset64(v35, (a1 + 696) | 1, v40);
    v41 = *(_DWORD *)(a1 + 700);
    v86 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
    v42 = 0;
    if ( (v41 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v43 = *(_QWORD *)(v39 + 8);
        for ( j = v43; ; v43 = j )
        {
          v44 = *(_QWORD **)(v43 + 8LL * v42);
          if ( ((unsigned __int8)v44 & 1) != 0 )
            break;
          *(_QWORD *)(v43 + 8LL * v42) = *v44;
          v82 = v86 & v44[1];
          v45 = (37
               * (BYTE6(v82)
                + 37
                * (BYTE5(v82)
                 + 37
                 * (BYTE4(v82)
                  + 37 * (BYTE3(v82) + 37 * (BYTE2(v82) + 37 * (BYTE1(v82) + 37 * ((unsigned __int8)v82 + 11623883)))))))
               + HIBYTE(v82)) & (unsigned int)(v36 - 1);
          *v44 = *(_QWORD *)&v35[8 * v45];
          *(_QWORD *)&v35[8 * v45] = v44;
        }
        ++v42;
        v39 = a1 + 696;
        v41 = *(_DWORD *)(a1 + 700);
      }
      while ( v42 < v41 >> 5 );
    }
    *(_QWORD *)(v39 + 8) = v35;
    *(_DWORD *)(v39 + 4) = v41 & 0x1F | (32 * v36);
    if ( v100 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v47 = a1 + 680;
    v48 = (unsigned __int64)(8 * v8 + 7) >> 3;
    if ( v34 > &v34[8 * v8] )
      v48 = 0LL;
    if ( v48 )
      memset64(v34, (a1 + 680) | 1, v48);
    v49 = *(_DWORD *)(a1 + 684);
    v50 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
    v51 = 0;
    if ( (v49 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v52 = *(_QWORD *)(v47 + 8);
        for ( m = v52; ; v52 = m )
        {
          v53 = *(_QWORD **)(v52 + 8LL * v51);
          if ( ((unsigned __int8)v53 & 1) != 0 )
            break;
          *(_QWORD *)(v52 + 8LL * v51) = *v53;
          v83 = v50 & v53[1];
          v54 = (37
               * (BYTE6(v83)
                + 37
                * (BYTE5(v83)
                 + 37
                 * (BYTE4(v83)
                  + 37 * (BYTE3(v83) + 37 * (BYTE2(v83) + 37 * (BYTE1(v83) + 37 * ((unsigned __int8)v83 + 11623883)))))))
               + HIBYTE(v83)) & (unsigned int)(v8 - 1);
          *v53 = *(_QWORD *)&v34[8 * v54];
          *(_QWORD *)&v34[8 * v54] = v53;
        }
        ++v51;
        v47 = a1 + 680;
        v49 = *(_DWORD *)(a1 + 684);
      }
      while ( v51 < v49 >> 5 );
    }
    v55 = *(_QWORD *)(v47 + 8);
    *(_QWORD *)(v47 + 8) = v34;
    v56 = (32 * v8) | v49 & 0x1F;
    v57 = a1 + 680;
    *(_DWORD *)(a1 + 684) = v56;
    v80 = v55;
  }
  else
  {
    v57 = a1 + 680;
  }
  if ( *(_DWORD *)(a1 + 684) >= 0x20u )
  {
    v58 = sub_1409EF998(a1, (__int64)&v90, a6);
    if ( v58 )
    {
      if ( v58 == *a6 )
      {
        sub_1406373B8(a1, a3, *a6, v77);
LABEL_90:
        v78 = 0;
        goto LABEL_86;
      }
      *(_DWORD *)(v58 + 120) |= 0x40000u;
      v102 = *(_QWORD *)(v58 + 8) & (-1LL << (*(_DWORD *)(v57 + 4) & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(v57 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v102)
                            + 37
                            * (BYTE5(v102)
                             + 37
                             * (BYTE4(v102)
                              + 37
                              * (BYTE3(v102)
                               + 37 * (BYTE2(v102) + 37 * (BYTE1(v102) + 37 * ((unsigned __int8)v102 + 11623883)))))))
                           + HIBYTE(v102)) & (unsigned int)((*(_DWORD *)(v57 + 4) >> 5) - 1)));
            (*n & 1) == 0;
            n = (_QWORD *)*n )
      {
        if ( *n == v58 )
        {
          *n = *(_QWORD *)v58;
          --*(_DWORD *)v57;
          break;
        }
      }
      *(_QWORD *)v58 = 0LL;
      v60 = (_QWORD *)(v58 + 16);
      v61 = a1 + 696;
      if ( *(_QWORD *)(v58 + 16) )
      {
        v103 = *(_QWORD *)(v58 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                            + 8LL
                            * ((37
                              * (BYTE6(v103)
                               + 37
                               * (BYTE5(v103)
                                + 37
                                * (BYTE4(v103)
                                 + 37
                                 * (BYTE3(v103)
                                  + 37 * (BYTE2(v103) + 37 * (BYTE1(v103) + 37 * ((unsigned __int8)v103 + 11623883)))))))
                              + HIBYTE(v103)) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1)));
              (*ii & 1) == 0;
              ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v60 )
          {
            *ii = *v60;
            --*(_DWORD *)v61;
            break;
          }
        }
        *v60 = 0LL;
      }
    }
    else
    {
      v61 = a1 + 696;
    }
    *((_DWORD *)v10 + 30) = *((_DWORD *)v10 + 30) & 0xFFEFFFFF | (v77 << 20);
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1120))++;
    v84 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(v57 + 4) & 0x1F));
    v63 = (37
         * (BYTE6(v84)
          + 37
          * (BYTE5(v84)
           + 37
           * (BYTE4(v84)
            + 37 * (BYTE3(v84) + 37 * (BYTE2(v84) + 37 * (BYTE1(v84) + 37 * ((unsigned __int8)v84 + 11623883)))))))
         + HIBYTE(v84)) & (unsigned int)((*(_DWORD *)(v57 + 4) >> 5) - 1);
    v64 = *(_QWORD *)(v57 + 8);
    *(_QWORD *)v10 = *(_QWORD *)(v64 + 8 * v63);
    *(_QWORD *)(v64 + 8 * v63) = v10;
    ++*(_DWORD *)v57;
    v65 = (_QWORD *)(a1 + 712);
    v66 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v66 + 8) != a1 + 712 )
      __fastfail(3u);
    *((_QWORD *)v10 + 9) = v66;
    *((_QWORD *)v10 + 10) = v65;
    *(_QWORD *)(v66 + 8) = v10 + 72;
    *v65 = v10 + 72;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 728);
    ++*(_DWORD *)(a1 + 732);
    v67 = *((_DWORD *)v10 + 30);
    if ( (v67 & 0x10000) != 0 || v77 )
    {
      v68 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v68;
      v69 = v68 & (-1LL << (*(_BYTE *)(a1 + 700) & 0x1F));
      v70 = *(_DWORD *)(a1 + 700) >> 5;
      if ( !v70 )
        goto LABEL_124;
      v71 = *(_QWORD *)(a1 + 704)
          + 8LL
          * ((37
            * (BYTE6(v69)
             + 37
             * (BYTE5(v69)
              + 37
              * (BYTE4(v69)
               + 37 * (BYTE3(v69) + 37 * (BYTE2(v69) + 37 * (BYTE1(v69) + 37 * ((unsigned __int8)v69 + 11623883)))))))
            + HIBYTE(v69)) & (unsigned int)(v70 - 1));
      while ( 1 )
      {
        v71 = *(_QWORD *)v71;
        if ( (v71 & 1) != 0 )
          break;
        if ( v69 == ((-1LL << (*(_BYTE *)(a1 + 700) & 0x1F)) & *(_QWORD *)(v71 + 8)) )
          goto LABEL_114;
      }
      v71 = 0LL;
LABEL_114:
      if ( v71 )
      {
        if ( *(_DWORD *)(v71 + 16) == *((_DWORD *)v10 + 8)
          && *(_DWORD *)(v71 + 20) == *((_DWORD *)v10 + 9)
          && *(_QWORD *)(v71 + 24) == *((_QWORD *)v10 + 5)
          && (unsigned int)sub_1406359A8(*(_QWORD *)(v71 + 32), *((_QWORD *)v10 + 6)) )
        {
          v72 = *((_DWORD *)v10 + 30);
        }
        else
        {
          *((_DWORD *)v10 + 31) = 0;
          v72 = v67 & 0xFFFEFFFF;
        }
        *((_DWORD *)v10 + 30) = v72 | 0x80000;
        sub_1409F19C8(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v73 = (void *)*((_QWORD *)v10 + 6);
        if ( v73 )
          ExFreePoolWithTag(v73, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
      }
      else
      {
LABEL_124:
        v79 = *((_QWORD *)v10 + 3) & (-1LL << (*(_DWORD *)(v61 + 4) & 0x1F));
        v74 = (37
             * (BYTE6(v79)
              + 37
              * (BYTE5(v79)
               + 37
               * (BYTE4(v79)
                + 37 * (BYTE3(v79) + 37 * (BYTE2(v79) + 37 * (BYTE1(v79) + 37 * ((unsigned __int8)v79 + 11623883)))))))
             + HIBYTE(v79)) & (unsigned int)((*(_DWORD *)(v61 + 4) >> 5) - 1);
        v75 = *(_QWORD *)(v61 + 8);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v75 + 8 * v74);
        *(_QWORD *)(v75 + 8 * v74) = v10 + 16;
        ++*(_DWORD *)v61;
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        sub_1406373B8(a1, a3, (__int64)v10, v77);
        *((_DWORD *)v10 + 40) = *(_DWORD *)(a3 + 40);
        *((_DWORD *)v10 + 41) = *(_DWORD *)(a3 + 44);
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 8) <= 1 )
      __fastfail(0xEu);
    *a6 = (__int64)v10;
    v10 = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 664);
    sub_1402AFC00(a1 + 664);
    sub_1402F9540((__int64)KeGetCurrentThread());
    sub_1409F0964(a1);
    goto LABEL_90;
  }
  v78 = -1073741670;
LABEL_86:
  v9 = (void *)v80;
LABEL_132:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 664);
    sub_1402AFC00(a1 + 664);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 8) = 0LL;
    sub_1409F1828(v10);
    ExFreePoolWithTag(v10, 0x56777445u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x56777445u);
  return (unsigned int)v78;
}
