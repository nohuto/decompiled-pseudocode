/*
 * XREFs of sub_14056B410 @ 0x14056B410
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1405E0B20 (PsRevertToUserMultipleGroupAffinityThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

char __fastcall sub_14056B410(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v6; // eax
  unsigned __int8 CurrentIrql; // r13
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned int v17; // r12d
  unsigned __int16 v18; // dx
  unsigned __int16 *v19; // rsi
  char v20; // al
  char v21; // al
  _WORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  char v26; // al
  unsigned __int16 *v27; // rsi
  unsigned int v28; // r15d
  unsigned int v29; // esi
  _QWORD *v30; // rbx
  char v31; // si
  ULONG_PTR v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KPRCB *v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r8
  unsigned int v43; // r8d
  bool v44; // zf
  struct _KPRCB *v45; // rcx
  __int64 v46; // rdx
  struct _KPRCB *v47; // r9
  __int64 v48; // r8
  int v49; // eax
  int v51[6]; // [rsp+38h] [rbp-18h] BYREF
  int v52; // [rsp+98h] [rbp+48h] BYREF
  int v53; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v54; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v54 = 0LL;
  v6 = *((_DWORD *)CurrentThread + 29);
  if ( (v6 & 8) == 0 )
    return v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | *(_DWORD *)(a4 + 20);
    v8 = 1LL;
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v52 = 0;
  v10 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v11 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 24) = v11 + 1;
      if ( v11 == -1 )
LABEL_9:
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
  {
    v12 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v12 + 24) - 1;
        *(_DWORD *)(v12 + 24) = v13;
        if ( !v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v52, v8, a3, a4);
    while ( *((_QWORD *)CurrentThread + 8) );
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v15 = *(_DWORD *)(v14 + 24);
        *(_DWORD *)(v14 + 24) = v15 + 1;
        if ( v15 == -1 )
          goto LABEL_9;
      }
    }
  }
  v16 = (_QWORD *)*((_QWORD *)CurrentThread + 138);
  v17 = 2048;
  v18 = dword_140D06E40[0];
  if ( v16 )
    *((_QWORD *)CurrentThread + 138) = *v16;
  v19 = *(unsigned __int16 **)(a1 + 24);
  if ( *v19 > v18 || v19[1] < v18 || (v20 = *(_BYTE *)(a1 + 19), (v20 & 1) == 0) || v16 != (_QWORD *)a1 )
    KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 18) == 1 )
    *(_BYTE *)(a1 + 18) = v20 & 2;
  memset(v19 + 4, 0, 8LL * *v19);
  *v19 = 1;
  v21 = *(_BYTE *)(a1 + 18);
  if ( !v21 )
  {
    v25 = *((_QWORD *)CurrentThread + 138);
    if ( v25 )
    {
      v26 = *(_BYTE *)(v25 + 18);
      if ( v26 && v26 != 2 )
        KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
      sub_140300030(*(_QWORD *)(a1 + 24), *(_WORD *)(*(_QWORD *)(a1 + 24) + 2LL), *(unsigned __int16 **)(v25 + 24));
    }
    goto LABEL_41;
  }
  if ( v21 == 2 )
  {
    if ( (*(_BYTE *)(a1 + 19) & 2) == 0 )
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
    v22 = *(_WORD **)(a1 + 24);
    v23 = *(unsigned __int16 *)(a1 + 16);
    v24 = *(_QWORD *)(a1 + 8);
    if ( *v22 > (unsigned __int16)v23 )
      goto LABEL_35;
    if ( v22[1] > (unsigned __int16)v23 )
    {
      *v22 = v23 + 1;
LABEL_35:
      *(_QWORD *)&v22[4 * v23 + 4] |= v24;
    }
  }
LABEL_41:
  v27 = *(unsigned __int16 **)(a1 + 24);
  v28 = *((_DWORD *)CurrentThread + 147);
  if ( (unsigned int)KeIsEmptyAffinityEx(v27) )
  {
    sub_140300030((__int64)v27, v27[1], *((unsigned __int16 **)CurrentThread + 69));
    *((_DWORD *)CurrentThread + 29) &= ~8u;
    v27 = *(unsigned __int16 **)(a1 + 24);
    v17 = *((_DWORD *)CurrentThread + 49);
  }
  sub_14035C1C0((__int64)CurrentPrcb, v27, 0LL, v17, (__int64)&v54);
  v29 = *((_DWORD *)CurrentThread + 147);
  sub_140224100((__int64)CurrentThread);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    sub_14062DAE4(CurrentThread, 1350LL, v28, v29);
  v30 = v54;
  v31 = 0;
  if ( v54 )
  {
    v54 = (_QWORD *)*v54;
    do
    {
      sub_1403405E0((__int64)CurrentPrcb, (ULONG_PTR)(v30 - 27), (__int64)&v54);
      v30 = v54;
      ++v31;
      if ( v54 )
        v54 = (_QWORD *)*v54;
      if ( (v31 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
    }
    while ( v30 );
  }
  LOBYTE(v6) = sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      LOBYTE(v6) = *((_BYTE *)CurrentPrcb + 13242);
      if ( !(_BYTE)v6 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) )
        {
          *((_BYTE *)CurrentPrcb + 6) = 1;
        }
        else
        {
          v51[0] = 5;
          *(_OWORD *)&v51[1] = 0LL;
          LOBYTE(v6) = sub_1402ADD00(v51, 0x2Fu);
        }
      }
    }
  }
  else
  {
    v32 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
      v36 = KeGetCurrentPrcb();
      v53 = 0;
      while ( 1 )
      {
        v37 = *((_QWORD *)v36 + 4375);
        if ( v37 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v37 + 24);
            *(_DWORD *)(v37 + 24) = v38 + 1;
            if ( v38 == -1 )
              sub_140418E4C((__int64)v36);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v39 = *((_QWORD *)v36 + 4375);
        if ( v39 )
        {
          if ( *((_BYTE *)v36 + 32) <= 1u )
          {
            v40 = *(_DWORD *)(v39 + 24) - 1;
            *(_DWORD *)(v39 + 24) = v40;
            if ( !v40 )
              sub_140418E4C((__int64)v36);
          }
        }
        do
          sub_1402F32E0(&v53, v33, v34, v35);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v41 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v35) = 1;
      sub_140345C80((__int64)CurrentPrcb, v32, 0LL, v35);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v41;
      if ( *(_BYTE *)(v41 + 388) == 1 )
      {
        v42 = (unsigned int)(*(_DWORD *)(v41 + 132) - *(_DWORD *)(v41 + 436));
        *(_DWORD *)(v41 + 132) = v42 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v41 + 388) = 2;
      *(_BYTE *)(v32 + 643) = 32;
      *(_BYTE *)(v32 + 390) = CurrentIrql;
      sub_1402B9970((__int64)CurrentPrcb, v32, v42);
      LOBYTE(v43) = CurrentIrql;
      v44 = (unsigned __int8)sub_140428A30(v32, v41, v43) == 0;
    }
    else
    {
      v44 = (*(_DWORD *)(v32 + 116) & 0x40) == 0;
    }
    if ( !v44 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = *((_QWORD *)v45 + 4375);
          v44 = (*(_DWORD *)(v46 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v46 + 20) &= 0xFFFF0003;
          if ( v44 )
            sub_140418E4C((__int64)v45);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v32 + 116) &= ~0x40u;
      sub_1402F1DC0(0, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v47 = KeGetCurrentPrcb();
        v48 = *((_QWORD *)v47 + 4375);
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v44 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
        *(_DWORD *)(v48 + 20) &= v49;
        if ( v44 )
          sub_140418E4C((__int64)v47);
      }
    }
    LOBYTE(v6) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v6;
}
