/*
 * XREFs of KeClockInterruptNotify @ 0x140305780
 * Callers:
 *     sub_140303240 @ 0x140303240 (sub_140303240.c)
 *     sub_140305670 @ 0x140305670 (sub_140305670.c)
 *     sub_140521AC0 @ 0x140521AC0 (sub_140521AC0.c)
 * Callees:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_14022FA04 @ 0x14022FA04 (sub_14022FA04.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 */

unsigned __int64 __fastcall KeClockInterruptNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // r12
  unsigned __int8 v6; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  char *v9; // r15
  char *v10; // r14
  struct _KPRCB *v11; // rbp
  __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // r15
  unsigned __int8 v17; // bp
  __int64 v18; // rbx
  LARGE_INTEGER v19; // rsi
  __int64 v20; // r13
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v22; // rcx
  char *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 result; // rax
  bool v26; // zf
  char *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // bl
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  int v42; // eax
  int v43; // eax
  __int64 v44; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // r9
  unsigned __int8 v50; // al
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // r9
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // r9
  unsigned __int8 v59; // al
  __int64 v60; // r9
  int v61; // eax
  __int16 v62; // bx
  __int64 v63; // rcx
  __int64 v64; // r9
  unsigned __int8 v65; // si
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  int v68; // eax
  unsigned __int8 v69; // di
  __int64 v70; // r9
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  __int64 v73; // r9
  int v74; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v76; // r9
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r9
  __int64 v79; // r8
  int v80; // eax
  unsigned __int8 v81; // di
  __int64 v82; // r9
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  __int64 v85; // r8
  int v86; // eax
  LARGE_INTEGER v87; // [rsp+20h] [rbp-68h] BYREF
  __int64 v88; // [rsp+28h] [rbp-60h] BYREF
  __int64 v89; // [rsp+30h] [rbp-58h] BYREF
  char *v90; // [rsp+38h] [rbp-50h]
  char *v91; // [rsp+40h] [rbp-48h]
  __int64 v92; // [rsp+48h] [rbp-40h]
  int v93; // [rsp+80h] [rbp-8h]
  int v94; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v95; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0;
  v89 = 0LL;
  v6 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0LL;
  v87.QuadPart = 0LL;
  v90 = 0LL;
  v10 = (char *)CurrentPrcb + 36992;
  v88 = 0LL;
  v91 = (char *)CurrentPrcb + 36992;
  if ( !dword_140D06A38 )
  {
    _disable();
    v11 = KeGetCurrentPrcb();
    v94 = 0;
    v12 = *((_QWORD *)v11 + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)v11 + 32) <= 1u )
      {
        v35 = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = v35 + 1;
        if ( v35 == -1 )
LABEL_43:
          sub_140418E4C(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
    {
      v31 = *((_QWORD *)v11 + 4375);
      if ( v31 )
      {
        if ( *((_BYTE *)v11 + 32) <= 1u )
        {
          v36 = *(_DWORD *)(v31 + 24) - 1;
          *(_DWORD *)(v31 + 24) = v36;
          if ( !v36 )
            sub_140418E4C(v11);
        }
      }
      do
        sub_1402F32E0(&v94, a2, a3, a4);
      while ( qword_140C2BC60 );
      v32 = *((_QWORD *)v11 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v11 + 32) <= 1u )
        {
          v37 = *(_DWORD *)(v32 + 24);
          *(_DWORD *)(v32 + 24) = v37 + 1;
          if ( v37 == -1 )
            goto LABEL_43;
        }
      }
    }
    if ( *((_BYTE *)CurrentPrcb + 33) && !dword_140D06A38 && dword_140C2B994 == 4 )
    {
      v38 = KeQueryInterruptTimePrecise(&v87);
      v41 = v38;
      if ( !byte_140D06889 )
        sub_1405C6C1C(v38);
      if ( dword_140C2B99C == 32 )
      {
        sub_14042A5E0(v40, v39);
        v42 = 0;
      }
      else
      {
        v42 = dword_140C2B99C + 1;
      }
      dword_140C2B99C = v42;
      if ( (unsigned __int64)(v41 - qword_140C2B988) > 0x1312D00 )
      {
        LOBYTE(v39) = 1;
        sub_14057A428(2LL, v39);
      }
      else
      {
        ++qword_140C2B190;
        v5 = 1;
        v9 = (char *)&unk_140C2B480 + 16 * (unsigned int)dword_140C2B460;
        v90 = v9;
        dword_140C2B460 = ((_BYTE)dword_140C2B460 + 1) & 0xF;
        *v9 = 0;
        *((_QWORD *)v9 + 1) = v41;
      }
    }
    _InterlockedAnd64(&qword_140C2BC60, 0LL);
    v13 = KeGetCurrentPrcb();
    v14 = *((_QWORD *)v13 + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)v13 + 32) <= 1u )
      {
        v43 = *(_DWORD *)(v14 + 24) - 1;
        *(_DWORD *)(v14 + 24) = v43;
        if ( !v43 )
          sub_140418E4C(v13);
      }
    }
    _enable();
    if ( v5 )
    {
      result = 15LL;
      if ( byte_140D06889 && *((_DWORD *)CurrentPrcb + 9252) == 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v13 = (struct _KPRCB *)((unsigned int)CurrentIrql + 1);
          v76 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v76 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        LOBYTE(v13) = 1;
        *((_DWORD *)CurrentPrcb + 9252) = 2;
        sub_14056D050(v13);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v77 = KeGetCurrentIrql();
            if ( v77 <= 0xFu && CurrentIrql <= 0xFu && v77 >= 2u )
            {
              v78 = KeGetCurrentPrcb();
              v79 = *((_QWORD *)v78 + 4375);
              v80 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v26 = (v80 & *(_DWORD *)(v79 + 20)) == 0;
              *(_DWORD *)(v79 + 20) &= v80;
              if ( v26 )
                sub_140418E4C(v78);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( !v9 )
          goto LABEL_161;
      }
      else
      {
        if ( dword_140C2B7E4 != 1 )
          return result;
        v81 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v81 <= 0xFu )
        {
          v82 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v82 + 20) |= (-1 << (v81 + 1)) & 0xFFFC;
        }
        dword_140C2B7E4 = 2;
        sub_14022F4BC();
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            if ( v83 <= 0xFu && v81 <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = *((_QWORD *)v84 + 4375);
              v86 = ~(unsigned __int16)(-1LL << (v81 + 1));
              v26 = (v86 & *(_DWORD *)(v85 + 20)) == 0;
              *(_DWORD *)(v85 + 20) &= v86;
              if ( v26 )
                sub_140418E4C(v84);
            }
          }
        }
        result = v81;
        __writecr8(v81);
        if ( !v9 )
        {
LABEL_161:
          ++qword_140C2B198;
          return result;
        }
      }
      *v9 = 1;
      goto LABEL_161;
    }
  }
  v15 = *((unsigned int *)CurrentPrcb + 9283);
  *((_DWORD *)CurrentPrcb + 9283) = ((_BYTE)v15 + 1) & 0xF;
  v16 = &v10[32 * v15 + 152 + 8 * v15];
  *((_QWORD *)v16 + 1) = MEMORY[0xFFFFF78000000008];
  v17 = *(_BYTE *)(a1 + 368) & 1;
  if ( !*((_BYTE *)CurrentPrcb + 33) )
  {
    if ( byte_140D06889 && !dword_140D05038 )
    {
      v62 = v93;
      _disable();
      sub_14020F07C(0LL, 0, (__int64)&v87, (__int64)&v87);
      if ( (v62 & 0x200) != 0 )
        _enable();
      v63 = KeGetCurrentIrql();
      v95 = v63;
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v63 <= 0xFu )
      {
        v64 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v64 + 20) |= (-1 << (v63 + 1)) & 0xFFFC;
      }
      sub_14056CFD8(CurrentPrcb, 0LL);
      v65 = v95;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && (unsigned __int8)v95 <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            a4 = *((_QWORD *)v67 + 4375);
            v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v95 + 1));
            v26 = (v68 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = (unsigned int)v68 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v26 )
              sub_140418E4C(v67);
          }
        }
      }
      __writecr8(v65);
    }
    sub_140307660(v17, v6, a3, a4);
    while ( 1 )
    {
      v18 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v19.QuadPart = MEMORY[0xFFFFF78000000350];
        v20 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v22 = MEMORY[0xFFFFF78000000340];
        if ( MEMORY[0xFFFFF78000000340] == v18 )
          break;
      }
      _mm_pause();
    }
    v23 = v91;
    v87 = PerformanceCounter;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v19.QuadPart )
    {
      v92 = 0LL;
      v24 = -1 - v19.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v22 = MEMORY[0xFFFFF78000000369];
        v24 <<= MEMORY[0xFFFFF78000000369];
      }
      v4 = ((unsigned __int64)v24 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v92 = v4;
    }
    *((_QWORD *)v16 + 2) = v4 + v20;
    *(_QWORD *)v16 = MEMORY[0xFFFFF78000000350];
    result = __rdtsc();
    v16[32] = 0;
    v26 = byte_140D06889 == 0;
    *((_QWORD *)v16 + 3) = result;
    if ( !v26 )
    {
      v69 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v69 <= 0xFu )
      {
        v22 = (unsigned int)v69 + 1;
        v70 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v70 + 20) |= (-1 << (v69 + 1)) & 0xFFFC;
      }
      if ( *((_DWORD *)v23 + 4) == 1 )
        *((_DWORD *)v23 + 4) = 2;
      LOBYTE(v22) = 1;
      sub_14056D050(v22);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v69 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = *((_QWORD *)v72 + 4375);
            v74 = ~(unsigned __int16)(-1LL << (v69 + 1));
            v26 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
            *(_DWORD *)(v73 + 20) &= v74;
            if ( v26 )
              sub_140418E4C(v72);
          }
        }
      }
      result = v69;
      __writecr8(v69);
    }
    return result;
  }
  v27 = (char *)&unk_140C2B1E0 + 40 * (unsigned int)dword_140C2B7E0;
  dword_140C2B7E0 = ((_BYTE)dword_140C2B7E0 + 1) & 0xF;
  v26 = byte_140D06889 == 0;
  *((_QWORD *)v27 + 1) = MEMORY[0xFFFFF78000000008];
  if ( v26 )
  {
    if ( dword_140C2B7E4 != 1 )
      goto LABEL_20;
    v33 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v33 <= 0xFu )
    {
      v49 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v49 + 20) |= (-1 << (v33 + 1)) & 0xFFFC;
    }
    dword_140C2B7E4 = 2;
    qword_140C2B7F8 = 0LL;
    if ( !dword_140D06B08 )
      goto LABEL_33;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_33;
    v50 = KeGetCurrentIrql();
    if ( v50 > 0xFu )
      goto LABEL_33;
    if ( v33 > 0xFu )
      goto LABEL_33;
    if ( v50 < 2u )
      goto LABEL_33;
    v46 = KeGetCurrentPrcb();
    v51 = *((_QWORD *)v46 + 4375);
    v52 = ~(unsigned __int16)(-1LL << (v33 + 1));
    v26 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
    *(_DWORD *)(v51 + 20) &= v52;
    if ( !v26 )
      goto LABEL_33;
LABEL_81:
    sub_140418E4C(v46);
LABEL_33:
    __writecr8(v33);
    goto LABEL_20;
  }
  if ( *((_DWORD *)v10 + 4) == 1 )
  {
    v33 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v33 <= 0xFu )
    {
      v44 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v44 + 20) |= (-1 << (v33 + 1)) & 0xFFFC;
    }
    *((_DWORD *)v10 + 4) = 2;
    dword_140C2B7E4 = 2;
    qword_140C2B7F8 = 0LL;
    if ( !dword_140D06B08 )
      goto LABEL_33;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_33;
    v45 = KeGetCurrentIrql();
    if ( v45 > 0xFu )
      goto LABEL_33;
    if ( v33 > 0xFu )
      goto LABEL_33;
    if ( v45 < 2u )
      goto LABEL_33;
    v46 = KeGetCurrentPrcb();
    v47 = *((_QWORD *)v46 + 4375);
    v48 = ~(unsigned __int16)(-1LL << (v33 + 1));
    v26 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
    *(_DWORD *)(v47 + 20) &= v48;
    if ( !v26 )
      goto LABEL_33;
    goto LABEL_81;
  }
LABEL_20:
  sub_140304060(v17, v6);
  if ( byte_140D06889 )
  {
    v34 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v34 <= 0xFu )
    {
      v28 = (unsigned int)v34 + 1;
      v53 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v53 + 20) |= (-1 << (v34 + 1)) & 0xFFFC;
    }
    LOBYTE(v28) = 1;
    sub_14056D050(v28);
    if ( !dword_140D06B08 )
      goto LABEL_36;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_36;
    v54 = KeGetCurrentIrql();
    if ( v54 > 0xFu )
      goto LABEL_36;
    if ( v34 > 0xFu )
      goto LABEL_36;
    if ( v54 < 2u )
      goto LABEL_36;
    v55 = KeGetCurrentPrcb();
    v56 = *((_QWORD *)v55 + 4375);
    v57 = ~(unsigned __int16)(-1LL << (v34 + 1));
    v26 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
    *(_DWORD *)(v56 + 20) &= v57;
    if ( !v26 )
      goto LABEL_36;
    goto LABEL_101;
  }
  if ( dword_140C2B7E4 != 2 )
    goto LABEL_22;
  v34 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v34 <= 0xFu )
  {
    v58 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v58 + 20) |= (-1 << (v34 + 1)) & 0xFFFC;
  }
  sub_14022F4BC();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v59 = KeGetCurrentIrql();
      if ( v59 <= 0xFu && v34 <= 0xFu && v59 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v60 = *((_QWORD *)v55 + 4375);
        v61 = ~(unsigned __int16)(-1LL << (v34 + 1));
        v26 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
        *(_DWORD *)(v60 + 20) &= v61;
        if ( v26 )
LABEL_101:
          sub_140418E4C(v55);
      }
    }
  }
LABEL_36:
  __writecr8(v34);
LABEL_22:
  *(_QWORD *)v27 = MEMORY[0xFFFFF78000000350];
  *(_QWORD *)v16 = MEMORY[0xFFFFF78000000350];
  *((_QWORD *)v27 + 3) = __rdtsc();
  *((_DWORD *)v27 + 8) = HIDWORD(KeGetPcr()[1].LockArray);
  v29 = __rdtsc();
  v16[32] = 1;
  *((_QWORD *)v16 + 3) = ((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29;
  v30 = MEMORY[0xFFFFF78000000008];
  if ( dword_140D31000 == 2 )
  {
    sub_14022F864(MEMORY[0xFFFFF78000000008], &v88, (int *)&v89);
    if ( !byte_140D06889 )
    {
      _InterlockedExchange(&dword_140D31000, 0);
      sub_14022FA04(0, 2, &v89, &v88);
    }
  }
  qword_140C2B1A0 = v30 + (unsigned int)dword_140D06938;
  result = v30 + *((unsigned int *)v10 + 2);
  *(_QWORD *)v10 = result;
  *((_QWORD *)v27 + 2) = v30;
  *((_QWORD *)v16 + 2) = v30;
  return result;
}
