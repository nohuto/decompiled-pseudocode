/*
 * XREFs of KeSetBasePriorityThread @ 0x1402EBF30
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140291174 @ 0x140291174 (sub_140291174.c)
 *     sub_140291EE4 @ 0x140291EE4 (sub_140291EE4.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rcx
  int v8; // r13d
  LONG v9; // r15d
  char v10; // r8
  int v11; // ecx
  int v12; // edi
  int v13; // r12d
  volatile signed __int32 *v14; // rcx
  _QWORD *v15; // rdi
  char v16; // r12
  ULONG_PTR v17; // rdi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  struct _KPRCB *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  struct _KPRCB *v40; // rcx
  __int64 v41; // rdx
  struct _KPRCB *v42; // r9
  __int64 v43; // r8
  int v44; // eax
  int v45; // [rsp+30h] [rbp-48h] BYREF
  int v46; // [rsp+34h] [rbp-44h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-40h] BYREF
  struct _KTHREAD *v48; // [rsp+40h] [rbp-38h]
  int v49[6]; // [rsp+48h] [rbp-30h] BYREF
  int v50; // [rsp+A0h] [rbp+28h] BYREF
  int v51; // [rsp+B0h] [rbp+38h] BYREF
  int v52; // [rsp+B8h] [rbp+40h]

  v2 = *((_QWORD *)Thread + 68);
  v51 = 0;
  v50 = 0;
  if ( (_UNKNOWN *)v2 == &unk_140D32B00 )
    return 0;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  v48 = (struct _KTHREAD *)*((_QWORD *)CurrentPrcb + 1);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v31 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v31 + 1;
      if ( v31 == -1 )
LABEL_70:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Thread + 16, 0LL) )
  {
    v27 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v27 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v32 = *(_DWORD *)(v27 + 24) - 1;
        *(_DWORD *)(v27 + 24) = v32;
        if ( !v32 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v45);
    while ( *((_QWORD *)Thread + 8) );
    v28 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v28 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v33 = *(_DWORD *)(v28 + 24);
        *(_DWORD *)(v28 + 24) = v33 + 1;
        if ( v33 == -1 )
          goto LABEL_70;
      }
    }
  }
  v8 = *((char *)Thread + 563);
  v9 = v8 - *(char *)(v2 + 640);
  v52 = v8;
  if ( *((_BYTE *)Thread + 645) )
    v9 = 16 * *((char *)Thread + 645);
  *((_BYTE *)Thread + 645) = 0;
  v10 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v10 = 1;
    if ( Increment <= 0 )
      v10 = -1;
    *((_BYTE *)Thread + 645) = v10;
  }
  v11 = *(char *)(v2 + 640);
  v12 = Increment + v11;
  v51 = Increment + v11;
  if ( (char)v11 >= 16 )
  {
    if ( v12 >= 16 )
    {
      if ( v12 > 31 )
      {
        v12 = 31;
        v51 = 31;
      }
    }
    else
    {
      v12 = 16;
      v51 = 16;
    }
    goto LABEL_52;
  }
  if ( v12 >= 16 )
  {
    v12 = 15;
    v51 = 15;
    v13 = 15;
  }
  else
  {
    v13 = Increment + v11;
    if ( v12 <= 0 )
    {
      v12 = 1;
      v51 = 1;
      v13 = 1;
    }
  }
  if ( v10 )
  {
LABEL_52:
    v50 = v12;
    goto LABEL_15;
  }
  v12 = v13 - v8 + (char)sub_1402BA000((__int64)Thread, 0, 1);
  v50 = v12;
  if ( v12 >= 16 )
  {
    v12 = 15;
    goto LABEL_52;
  }
  if ( v12 <= 0 )
  {
    v12 = 1;
    goto LABEL_52;
  }
LABEL_15:
  sub_1402EC3E4(Thread, &v51, 0LL);
  if ( v12 != *((char *)Thread + 195) )
  {
    if ( Thread != v48 || *((_BYTE *)CurrentPrcb + 32) )
    {
      v20 = *((_QWORD *)Thread + 9);
      v12 = v50;
    }
    else
    {
      _disable();
      v20 = sub_140345AA0(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v21 = v20 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)Thread + 651);
    if ( (*((_DWORD *)Thread + 30) & 0x20) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)Thread + 30, 5u);
      v12 = v50;
    }
    *((_QWORD *)Thread + 4) = v21;
    sub_140291174((ULONG_PTR)Thread, v12);
    sub_140344A30(Thread, &v47, (unsigned int)v12);
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)Thread + 29);
  if ( v14 && (*(_BYTE *)v14 & 0x7F) == 0x15 )
    sub_140291EE4(v14, (__int64)Thread);
  else
    sub_140224100((__int64)Thread);
  v15 = v47;
  v16 = 0;
  if ( v47 )
  {
    v47 = (_QWORD *)*v47;
    do
    {
      sub_1403405E0(CurrentPrcb, v15 - 27, &v47);
      v15 = v47;
      ++v16;
      if ( v47 )
        v47 = (_QWORD *)*v47;
      if ( (v16 & 0xF) == 0 )
        sub_140340300((char *)CurrentPrcb + 12760);
    }
    while ( v15 );
  }
  sub_140340300((char *)CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) && !*((_BYTE *)CurrentPrcb + 13242) )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) )
      {
        *((_BYTE *)CurrentPrcb + 6) = 1;
      }
      else
      {
        v49[0] = 5;
        *(_OWORD *)&v49[1] = 0LL;
        sub_1402ADD00(v49, 0x2Fu);
      }
    }
  }
  else
  {
    v17 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
      v23 = KeGetCurrentPrcb();
      v46 = 0;
      v24 = *((_QWORD *)v23 + 4375);
      if ( v24 )
      {
        if ( *((_BYTE *)v23 + 32) <= 1u )
        {
          v34 = *(_DWORD *)(v24 + 24);
          *(_DWORD *)(v24 + 24) = v34 + 1;
          if ( v34 == -1 )
LABEL_84:
            sub_140418E4C(v23);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
      {
        v29 = *((_QWORD *)v23 + 4375);
        if ( v29 )
        {
          if ( *((_BYTE *)v23 + 32) <= 1u )
          {
            v35 = *(_DWORD *)(v29 + 24) - 1;
            *(_DWORD *)(v29 + 24) = v35;
            if ( !v35 )
              sub_140418E4C(v23);
          }
        }
        do
          sub_1402F32E0(&v46);
        while ( *((_QWORD *)CurrentPrcb + 6) );
        v30 = *((_QWORD *)v23 + 4375);
        if ( v30 )
        {
          if ( *((_BYTE *)v23 + 32) <= 1u )
          {
            v36 = *(_DWORD *)(v30 + 24);
            *(_DWORD *)(v30 + 24) = v36 + 1;
            if ( v36 == -1 )
              goto LABEL_84;
          }
        }
      }
      v25 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v22) = 1;
      sub_140345C80(CurrentPrcb, v17, 0LL, v22);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v25;
      if ( *(_BYTE *)(v25 + 388) == 1 )
      {
        v26 = (unsigned int)(*(_DWORD *)(v25 + 132) - *(_DWORD *)(v25 + 436));
        *(_DWORD *)(v25 + 132) = v26 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v25 + 388) = 2;
      *(_BYTE *)(v17 + 643) = 32;
      *(_BYTE *)(v17 + 390) = CurrentIrql;
      sub_1402B9970((__int64)CurrentPrcb, v17, v26);
      if ( (unsigned __int8)sub_140428A30(v17, v25, CurrentIrql) )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v37 = KeGetCurrentPrcb();
            v38 = *((_QWORD *)v37 + 4375);
            v39 = (*(_DWORD *)(v38 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v38 + 20) &= 0xFFFF0003;
            if ( v39 )
              sub_140418E4C(v37);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v17 + 116) &= ~0x40u;
        sub_1402F1DC0(0LL, 0LL, 0LL);
      }
      v8 = v52;
    }
    else if ( (*(_DWORD *)(v17 + 116) & 0x40) != 0 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v40 = KeGetCurrentPrcb();
          v41 = *((_QWORD *)v40 + 4375);
          v39 = (*(_DWORD *)(v41 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v41 + 20) &= 0xFFFF0003;
          if ( v39 )
            sub_140418E4C(v40);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v17 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v42 = KeGetCurrentPrcb();
        v43 = *((_QWORD *)v42 + 4375);
        v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
        *(_DWORD *)(v43 + 20) &= v44;
        if ( v39 )
          sub_140418E4C(v42);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
    sub_14062E0D0((_DWORD)Thread, 1329, v8, v51, (__int64)&v50);
  return v9;
}
