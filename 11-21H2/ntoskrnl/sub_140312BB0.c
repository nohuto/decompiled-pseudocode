/*
 * XREFs of sub_140312BB0 @ 0x140312BB0
 * Callers:
 *     sub_140582708 @ 0x140582708 (sub_140582708.c)
 *     sub_140760730 @ 0x140760730 (sub_140760730.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     sub_1407EDA2C @ 0x1407EDA2C (sub_1407EDA2C.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_140247A74 @ 0x140247A74 (sub_140247A74.c)
 *     sub_140247FBC @ 0x140247FBC (sub_140247FBC.c)
 *     sub_140256158 @ 0x140256158 (sub_140256158.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140313790 @ 0x140313790 (sub_140313790.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_1403CB264 @ 0x1403CB264 (sub_1403CB264.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_1406F4650 @ 0x1406F4650 (sub_1406F4650.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 */

__int64 __fastcall sub_140312BB0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r13
  char v7; // di
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  char *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // r8
  __m128i *v23; // rdi
  bool v24; // si
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // rsi
  __int64 CurrentThread; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // r15
  unsigned __int64 v34; // rax
  bool v35; // zf
  char v36; // dl
  __int64 v37; // r12
  __int64 v38; // rax
  __int16 v39; // cx
  __int64 v40; // rax
  __int64 v41; // r15
  unsigned __int8 v42; // r8
  ULONG_PTR v43; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r14
  int v56; // r15d
  int v57; // eax
  unsigned __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // eax
  unsigned int v63; // ebx
  __int64 v64; // r8
  struct _KPRCB *v65; // r10
  int v66; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rcx
  char v73; // [rsp+30h] [rbp-188h]
  unsigned __int8 v74; // [rsp+31h] [rbp-187h]
  char *v76; // [rsp+38h] [rbp-180h]
  ULONG_PTR *v77; // [rsp+40h] [rbp-178h]
  unsigned __int64 v78; // [rsp+48h] [rbp-170h]
  unsigned __int64 v79; // [rsp+50h] [rbp-168h]
  int v80; // [rsp+58h] [rbp-160h]
  char v81; // [rsp+68h] [rbp-150h]
  int v82; // [rsp+6Ch] [rbp-14Ch]
  int v83; // [rsp+70h] [rbp-148h] BYREF
  int v84; // [rsp+74h] [rbp-144h] BYREF
  __int64 v85; // [rsp+78h] [rbp-140h]
  unsigned __int64 v86; // [rsp+80h] [rbp-138h]
  ULONG_PTR v87; // [rsp+88h] [rbp-130h]
  unsigned __int64 v88; // [rsp+90h] [rbp-128h]
  __int64 v89; // [rsp+98h] [rbp-120h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-118h] BYREF
  ULONG_PTR v91; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-108h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-100h]
  int v94; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v95; // [rsp+C4h] [rbp-F4h]
  __int16 v96; // [rsp+C6h] [rbp-F2h]
  __int64 v97; // [rsp+C8h] [rbp-F0h]
  __int64 v98; // [rsp+D0h] [rbp-E8h]
  __int64 v99; // [rsp+D8h] [rbp-E0h]
  _BYTE v100[152]; // [rsp+E0h] [rbp-D8h] BYREF

  v88 = a3;
  v5 = a2;
  v93 = a2;
  v89 = a1;
  v96 = 0;
  memset(v100, 0, sizeof(v100));
  if ( (unsigned int)sub_1402FDD20((__int64)(v5 << 25) >> 16) )
    return 0LL;
  v7 = 1;
  v8 = 0;
  v73 = 1;
  v82 = 0;
  v9 = sub_14027B080((__int64)(v5 << 25) >> 16);
  if ( v9 == 1 )
  {
    v85 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    v8 = 2;
    v76 = (char *)sub_14027B520();
    v82 = 2;
    v13 = v76;
    v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
    v85 = 0LL;
    if ( v9 == 6 )
    {
      v13 = sub_14026DFC0(2);
      v76 = v13;
    }
    else
    {
      v13 = (char *)&unk_140C536C0;
      v76 = (char *)&unk_140C536C0;
    }
  }
  LOBYTE(v11) = 0;
  v80 = v12;
  v81 = 0;
  v14 = 1LL;
  if ( a1 )
  {
    if ( v8 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      v59 = sub_140313790(v10, v12, v11, 1LL);
      v11 = (unsigned __int8)v11;
      if ( v59 == (_DWORD)v14 )
        v11 = (unsigned int)v14;
      v81 = v11;
    }
    if ( (*(_DWORD *)(a1 + 196) & 0x100) == 0 )
      v80 = 2;
  }
  sub_1406F4650(v5, a3, v11, v14);
  v97 = 20LL;
  v15 = -1LL;
  v95 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v16 = 0LL;
  v79 = 0LL;
  v78 = -1LL;
  v94 = v8;
  v74 = sub_1402CF4F0((__int64)v13);
  while ( 1 )
  {
    if ( v16 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_13;
      sub_14032F1B0(&v94);
      sub_14020D8D0((__int64)v13, v16);
    }
    v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v79 = v16;
    sub_14031DE00(v13, v16, 0LL);
LABEL_13:
    v17 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v60 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v60 )
      {
        v61 = *(_QWORD *)(v60 + 8 * ((v5 >> 3) & 0x1FF));
        if ( (v61 & 0x20) != 0 )
          v17 |= 0x20uLL;
        if ( (v61 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
    }
    v91 = v17;
    v18 = (__int64)(v5 << 25) >> 16;
    v87 = v18;
    if ( (v17 & 1) != 0 )
    {
      v21 = ((unsigned __int64)sub_140317A10(&v91) >> 12) & 0xFFFFFFFFFFLL;
      v86 = v21;
      v22 = *(_QWORD *)(48 * v21 - 0x220000000000LL + 40);
      v23 = (__m128i *)(48 * v21 - 0x220000000000LL);
      if ( (v22 & 0x10000000000LL) == 0 && v23->m128i_i64[1] > 0 )
      {
        sub_14032F1B0(&v94);
        v62 = sub_140316400(v18);
        v41 = (__int64)v76;
        v63 = v62;
        if ( v62 >= 0 )
          goto LABEL_155;
        sub_14020D8D0((__int64)v76, v16);
        sub_1402B0CE0((__int64)v76, v74);
        sub_1405BCAF8(v76, v63);
LABEL_154:
        v16 = 0LL;
        v79 = 0LL;
        sub_1402CF4F0(v41);
LABEL_155:
        v15 = v78;
LABEL_62:
        v7 = v73;
        goto LABEL_63;
      }
      v24 = 0;
      if ( (unsigned int)sub_140313790(v20, v19, v22, 0xFFFFDE0000000000uLL) && (a4 & 4) != 0 )
        v24 = (((unsigned __int8)v23[1].m128i_i8[0] >> 5) & 2) == 0;
      if ( v26 < 0 && (!v85 || v81 || v24) && (a4 & 1) != 0 )
      {
        sub_14032F1B0(&v94);
        v41 = (__int64)v76;
        sub_14020D8D0((__int64)v76, v79);
        sub_1402B0CE0((__int64)v76, v74);
        v45 = v88;
        if ( v24 )
          v45 = v5;
        v46 = 0LL;
        goto LABEL_153;
      }
      if ( (v17 & 0x800) == 0 && (v17 & 0x200) != 0 )
      {
        sub_14032F1B0(&v94);
        v41 = (__int64)v76;
        sub_14020D8D0((__int64)v76, v79);
        sub_1402B0CE0((__int64)v76, v74);
        v45 = v88;
        v46 = 1LL;
LABEL_153:
        sub_14033F41C(v89, v5, v45, v46);
        goto LABEL_154;
      }
      v28 = 0LL;
      v29 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v26 >> 43) & 0x3FF));
      v77 = (ULONG_PTR *)v29;
      v30 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      CurrentThread = 0xFFFFF6FB7DBED000uLL;
      v32 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL )
      {
        CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
        if ( v30 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          v25 = *(_QWORD *)(CurrentThread + 184);
          if ( *(_BYTE *)(v25 + 912) != 1 && (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            CurrentThread = (__int64)KeGetCurrentThread();
            v25 = *(_QWORD *)(CurrentThread + 184);
            v64 = *(_QWORD *)(v25 + 1928);
            if ( v64 )
            {
              CurrentThread = *(_QWORD *)(v64 + 8 * ((v30 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v32 |= 0x20uLL;
              if ( (CurrentThread & 0x42) != 0 )
                v32 |= 0x42uLL;
            }
            v29 = (__int64)v77;
          }
        }
      }
      v33 = HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7));
      v92 = v33;
      if ( v78 != -1LL )
      {
        CurrentThread = v27 + 48 * v78;
        v25 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(CurrentThread + 40) >> 43) & 0x3FFLL));
        if ( v29 == v25 )
          goto LABEL_42;
        sub_140268408(CurrentThread);
        v29 = (__int64)v77;
        v78 = -1LL;
      }
      if ( (a4 & 2) != 0 )
      {
        if ( (v33 & 0xF) == 9 )
          goto LABEL_42;
      }
      else if ( v23[2].m128i_i16[0] != 1 )
      {
        goto LABEL_42;
      }
      if ( (!byte_140C58C66
         || !_bittest64(
               (const signed __int64 *)qword_140C58DE0,
               (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v21) >> 4)) >> 9))
        && !_bittest64(&v23[2].m128i_i64[1], 0x35u) )
      {
        CurrentThread = 0x3FFFFFFFFFFFFFFFLL;
        if ( (v23[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v23[2].m128i_i16[0] == 1 )
        {
          if ( (dword_140D06880 & 0x4000) != 0 )
          {
            if ( (unsigned int)sub_140313B20(48 * v21 - 0x220000000000LL) )
              goto LABEL_42;
            v29 = (__int64)v77;
          }
          if ( (dword_140D06880 & 0x20000) != 0 )
          {
            if ( (unsigned int)sub_140313B20(48 * v21 - 0x220000000000LL) )
              goto LABEL_42;
            v29 = (__int64)v77;
          }
          v34 = *(_QWORD *)v30;
          CurrentThread = 0xFFFFF6FB7DBED000uLL;
          if ( v30 >= 0xFFFFF6FB7DBED000uLL
            && (CurrentThread = 0xFFFFF6FB7DBED7F8uLL, v30 <= 0xFFFFF6FB7DBED7F8uLL)
            && (dword_140D06880 & 0xC00000) != 0
            && (CurrentThread = (__int64)KeGetCurrentThread(),
                v25 = *(_QWORD *)(CurrentThread + 184),
                *(_BYTE *)(v25 + 912) != 1)
            && (v34 & 1) != 0 )
          {
            if ( (v34 & 0x20) == 0 || (v35 = (v34 & 0x42) == 0, (v34 & 0x42) == 0) )
            {
              v25 = *((_QWORD *)KeGetCurrentThread() + 23);
              CurrentThread = *(_QWORD *)(v25 + 1928);
              if ( CurrentThread )
              {
                CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v30 >> 3) & 0x1FF));
                if ( (CurrentThread & 0x20) != 0 )
                  LOBYTE(v34) = v34 | 0x20;
                if ( (CurrentThread & 0x42) != 0 )
                  LOBYTE(v34) = v34 | 0x42;
              }
              goto LABEL_38;
            }
          }
          else
          {
LABEL_38:
            v35 = (v34 & 0x42) == 0;
          }
          LOBYTE(CurrentThread) = !v35;
          if ( !v35 && (v80 & 2) == 0 )
            goto LABEL_42;
          v90 = v21;
          if ( dword_140C4F514 && (ULONG_PTR *)v29 == &StartContext )
          {
            v52 = qword_140C4F518;
            if ( (qword_140C4F520 & 1) != 0 )
            {
              if ( !qword_140C4F518 )
                goto LABEL_117;
              v52 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
            }
            if ( !v52 )
              goto LABEL_117;
            v53 = ExAcquireSpinLockShared(&dword_140C4F510);
            if ( dword_140C4F514 )
            {
              v54 = qword_140C4F538;
              if ( qword_140C4F538 )
              {
                if ( !(unsigned int)sub_1403CB264(&v90, qword_140C4F538) )
                  goto LABEL_115;
                v54 = 0LL;
              }
              v55 = v86 & 0xFFFFFFFFFFFFFE00uLL;
              if ( qword_140C4F540 == (v86 & 0xFFFFFFFFFFFFFE00uLL) )
                goto LABEL_115;
              v54 = qword_140C4F518;
              if ( (qword_140C4F520 & 1) != 0 )
              {
                if ( !qword_140C4F518 )
                {
                  qword_140C4F540 = v86 & 0xFFFFFFFFFFFFFE00uLL;
                  goto LABEL_115;
                }
                v54 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
              }
              v56 = qword_140C4F520 & 1;
              if ( !v54 )
                goto LABEL_130;
              while ( 2 )
              {
                v57 = sub_1403CB264(&v90, v54);
                if ( v57 >= 0 )
                {
                  if ( v57 <= 0 )
                  {
LABEL_129:
                    if ( v54 )
                      qword_140C4F538 = v54;
                    else
LABEL_130:
                      qword_140C4F540 = v55;
LABEL_115:
                    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
                    if ( dword_140D06B08 )
                    {
                      if ( (dword_140D06B08 & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v53 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          CurrentThread = (unsigned int)(v53 + 1);
                          v25 = -1LL << ((unsigned __int8)v53 + 1);
                          v27 = *((_QWORD *)CurrentPrcb + 4375);
                          v69 = ~(unsigned __int16)v25;
                          v35 = (v69 & *(_DWORD *)(v27 + 20)) == 0;
                          v29 = (unsigned int)v69 & *(_DWORD *)(v27 + 20);
                          *(_DWORD *)(v27 + 20) = v29;
                          if ( v35 )
                            sub_140418E4C(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v53);
                    if ( !v54 )
                    {
LABEL_117:
                      sub_14032F1B0(&v94);
                      sub_14020D8D0((__int64)v76, v79);
                      sub_1402B0CE0((__int64)v76, v74);
                      v16 = 0LL;
                      v78 = sub_14079D08C(v77, 0LL, 0LL);
                      v79 = 0LL;
                      v15 = v78;
                      v74 = sub_1402CF4F0((__int64)v76);
                      v41 = (__int64)v76;
                      goto LABEL_62;
                    }
                    v33 = v92;
                    v21 = v86;
                    goto LABEL_42;
                  }
                  v58 = *(_QWORD *)(v54 + 8);
                  if ( !v56 || !v58 )
                    goto LABEL_127;
LABEL_136:
                  v54 ^= v58;
                }
                else
                {
                  v58 = *(_QWORD *)v54;
                  if ( v56 && v58 )
                    goto LABEL_136;
LABEL_127:
                  v54 = v58;
                }
                if ( !v54 )
                  goto LABEL_129;
                continue;
              }
            }
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
            CurrentThread = (unsigned int)dword_140D06B08;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentThread = KeGetCurrentIrql();
                if ( (unsigned __int8)CurrentThread <= 0xFu
                  && (unsigned __int8)v53 <= 0xFu
                  && (unsigned __int8)CurrentThread >= 2u )
                {
                  v65 = KeGetCurrentPrcb();
                  CurrentThread = (unsigned int)(v53 + 1);
                  v25 = -1LL << ((unsigned __int8)v53 + 1);
                  v27 = *((_QWORD *)v65 + 4375);
                  v66 = ~(unsigned __int16)v25;
                  v35 = (v66 & *(_DWORD *)(v27 + 20)) == 0;
                  v29 = (unsigned int)v66 & *(_DWORD *)(v27 + 20);
                  *(_DWORD *)(v27 + 20) = v29;
                  if ( v35 )
                    sub_140418E4C(v65);
                }
              }
            }
            __writecr8(v53);
            v21 = v86;
          }
          if ( v21 < qword_140C4F5D0 )
            goto LABEL_117;
        }
      }
LABEL_42:
      v83 = 0;
      while ( _interlockedbittestandset64(&v23[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v83, v25, v29, v27);
        while ( v23[1].m128i_i64[1] < 0 );
      }
      v15 = v78;
      v36 = a4;
      if ( v78 == -1LL )
        goto LABEL_44;
      if ( (a4 & 2) != 0 )
      {
        v33 = sub_14033A410(CurrentThread, v87);
        if ( (v33 & 0xF) == 9 )
        {
          v37 = (__int64)v77;
          goto LABEL_86;
        }
        v36 = a4;
      }
      else if ( v23[2].m128i_i16[0] != 1 )
      {
        v37 = (__int64)v77;
LABEL_46:
        if ( v82 == 2 )
        {
          v41 = (__int64)v76;
          if ( !(unsigned int)sub_140274508((__int64)v23, 0LL, v29) )
            v73 = 0;
          goto LABEL_54;
        }
        v38 = v23[2].m128i_i64[1];
        if ( (v38 & 0x10000000000LL) == 0 && (v38 & 0x20000000000000LL) == 0 )
        {
          v39 = v23[2].m128i_i16[0];
          v40 = v23[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL;
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              if ( !v40 && (v23[2].m128i_i8[2] & 8) == 0 )
                goto LABEL_53;
            }
            else if ( v39 != 2 || !v40 || (v23[2].m128i_i8[2] & 8) == 0 )
            {
              goto LABEL_53;
            }
          }
          v23[2].m128i_i8[3] |= 0x20u;
        }
LABEL_53:
        ++v23[2].m128i_i16[0];
        v41 = (__int64)v76;
LABEL_54:
        if ( (v23[1].m128i_i64[0] & 0x400) == 0 )
        {
          v42 = v23[2].m128i_u8[2];
          if ( (v42 & 0x10) == 0 )
          {
            if ( (((v23[1].m128i_i64[0] & 0x400) == 0) & (unsigned __int8)~(v42 >> 3)) != 0 )
            {
              v70 = sub_140232694((unsigned __int64 *)&v23[1], 1, 0);
              v42 = v23[2].m128i_u8[2];
              v28 = v70;
            }
            v23[2].m128i_i8[2] = v42 | 0x10;
          }
        }
        v43 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL
          && v5 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v71 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v71 )
          {
            v72 = *(_QWORD *)(v71 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (v72 & 0x20) != 0 )
              LOWORD(v43) = v43 | 0x20;
            if ( (v72 & 0x42) != 0 )
              LOWORD(v43) = v43 | 0x42;
          }
        }
        if ( (v43 & 0x800) != 0 && (v43 & 0x42) == 0 )
        {
          sub_14033A510(v5, 2LL);
          sub_1402CF280((__int64)&v94, v87, 1LL, 0);
        }
        _InterlockedAnd64(&v23[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        if ( v28 )
          sub_1402E20D0(v37, v28, 1);
        v16 = v79;
        v5 += 8LL;
        goto LABEL_62;
      }
      if ( _bittest64(&v23[2].m128i_i64[1], 0x35u) || sub_140277C50((__int64)v23) )
      {
LABEL_44:
        v37 = (__int64)v77;
        goto LABEL_45;
      }
      v48 = v21;
      v37 = (__int64)v77;
      if ( !(unsigned int)sub_140247FBC(v77, v48, v78) )
      {
LABEL_106:
        v36 = a4;
LABEL_45:
        if ( (v36 & 2) == 0 )
          goto LABEL_46;
LABEL_86:
        v35 = (v33 & 0xF) == 9;
        v41 = (__int64)v76;
        if ( !v35 )
          sub_140247A74(v76, v5, v23);
        goto LABEL_54;
      }
      _InterlockedAnd64(&v23[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( v23[2].m128i_i64[1] < 0 && (v23[1].m128i_i32[0] & 0x400LL) != 0 )
      {
        v50 = sub_140273AF0(v23->m128i_i64[1] | 0x8000000000000000uLL, 0LL);
        if ( !v50 )
          goto LABEL_214;
      }
      else
      {
        v50 = 1LL;
      }
      if ( (unsigned int)sub_1402EA95C(v23, (__m128i *)(48 * v78 - 0x220000000000LL), v87, 0, 2u, v80) == 1 )
      {
        v23[1].m128i_i64[0] = 0LL;
        sub_1402E89B0((unsigned __int64 *)&v23[1]);
        sub_140268408((__int64)v23);
        v23 = (__m128i *)(48 * v78 - 0x220000000000LL);
        v15 = -1LL;
        v78 = -1LL;
LABEL_103:
        if ( v50 > 1 )
        {
          LOBYTE(v49) = 17;
          sub_140334790(v50, v49);
        }
        v84 = 0;
        while ( _interlockedbittestandset64(&v23[1].m128i_i32[2], 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v84, v49, v29, v51);
          while ( v23[1].m128i_i64[1] < 0 );
        }
        goto LABEL_106;
      }
LABEL_214:
      v15 = v78;
      goto LABEL_103;
    }
    sub_14032F1B0(&v94);
    sub_14020D8D0((__int64)v76, v16);
    sub_1402B0CE0((__int64)v76, v74);
    v47 = sub_14031C860(0LL, (__int64)(v5 << 25) >> 16);
    if ( v47 < 0 )
      KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v5 << 25) >> 16, v17, v47);
    v41 = (__int64)v76;
    v16 = 0LL;
    v79 = 0LL;
    sub_1402CF4F0((__int64)v76);
LABEL_63:
    if ( v5 > v88 || v7 != 1 )
      break;
    v13 = v76;
  }
  if ( v74 != 17 )
  {
    sub_14032F1B0(&v94);
    if ( v16 )
      sub_14020D8D0(v41, v16);
    sub_1402B0CE0(v41, v74);
  }
  if ( v15 != -1 )
    sub_140268408(48 * v15 - 0x220000000000LL);
  if ( v7 )
    return 0LL;
  sub_140256158(v93, v5 - 16, 0);
  return 3221225626LL;
}
