/*
 * XREFs of sub_14039C4BC @ 0x14039C4BC
 * Callers:
 *     sub_14039C41C @ 0x14039C41C (sub_14039C41C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033E1B0 @ 0x14033E1B0 (sub_14033E1B0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_14035A160 @ 0x14035A160 (sub_14035A160.c)
 *     sub_14035A264 @ 0x14035A264 (sub_14035A264.c)
 *     sub_14035A6C8 @ 0x14035A6C8 (sub_14035A6C8.c)
 *     sub_14035A718 @ 0x14035A718 (sub_14035A718.c)
 *     sub_14035A7F8 @ 0x14035A7F8 (sub_14035A7F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

char __fastcall sub_14039C4BC(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _RTL_RB_TREE *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  char v7; // si
  char result; // al
  __int64 v9; // r9
  __int64 v10; // rax
  char v11; // r14
  char v12; // al
  char v13; // dl
  char v14; // si
  int v15; // r10d
  ULONG_PTR v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r8
  bool v28; // zf
  struct _KPRCB *v29; // rcx
  __int64 v30; // rdx
  struct _KPRCB *v31; // r9
  __int64 v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  int v35[6]; // [rsp+48h] [rbp-18h] BYREF
  int v36; // [rsp+A8h] [rbp+48h] BYREF
  _QWORD *v37; // [rsp+B8h] [rbp+58h] BYREF

  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = sub_14034F230((__int64)a1, 1, &LockHandle);
  v5 = (__int64)v4;
  if ( v4 )
  {
    if ( !a1[17] )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( a1 != (unsigned __int8 *)v4 )
      sub_14035A718((__int64)a1, v4);
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + 24);
    else
      v11 = 30;
    if ( !*(_BYTE *)(v5 + 17) )
    {
      v12 = sub_14035A7F8(v5);
      v13 = v11;
      if ( v12 < v11 )
        v13 = v12;
      v11 = v13;
    }
    sub_14033E1B0(a1, v5);
    v14 = sub_14035A6C8(a1);
    if ( v11 < v14 )
    {
      if ( !v15 )
      {
LABEL_31:
        sub_14035A264(v5, v14, (int)&v37, 0, (__int64)CurrentPrcb + 35696);
        goto LABEL_4;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_4;
    }
    sub_14035A160(v5, v15, (int)&v37, 0, (__int64)CurrentPrcb + 35696);
    goto LABEL_31;
  }
LABEL_5:
  v6 = v37;
  v7 = 0;
  if ( v37 )
  {
    v37 = (_QWORD *)*v37;
    do
    {
      sub_1403405E0((__int64)CurrentPrcb, (ULONG_PTR)(v6 - 27), (__int64)&v37);
      v6 = v37;
      ++v7;
      if ( v37 )
        v37 = (_QWORD *)*v37;
      if ( (v7 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
    }
    while ( v6 );
  }
  result = sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
  if ( CurrentIrql < 2u )
  {
    v16 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
      v20 = KeGetCurrentPrcb();
      v36 = 0;
      while ( 1 )
      {
        v21 = *((_QWORD *)v20 + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v22 = *(_DWORD *)(v21 + 24);
            *(_DWORD *)(v21 + 24) = v22 + 1;
            if ( v22 == -1 )
              sub_140418E4C(v20);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v23 = *((_QWORD *)v20 + 4375);
        if ( v23 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v24 = *(_DWORD *)(v23 + 24) - 1;
            *(_DWORD *)(v23 + 24) = v24;
            if ( !v24 )
              sub_140418E4C(v20);
          }
        }
        do
          sub_1402F32E0(&v36, v17, v18, v19);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v25 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v19) = 1;
      sub_140345C80((__int64)CurrentPrcb, v16, 0LL, v19);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v25;
      if ( *(_BYTE *)(v25 + 388) == 1 )
      {
        v26 = (unsigned int)(*(_DWORD *)(v25 + 132) - *(_DWORD *)(v25 + 436));
        *(_DWORD *)(v25 + 132) = v26 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v25 + 388) = 2;
      *(_BYTE *)(v16 + 643) = 32;
      *(_BYTE *)(v16 + 390) = CurrentIrql;
      sub_1402B9970((__int64)CurrentPrcb, v16, v26);
      LOBYTE(v27) = CurrentIrql;
      v28 = (unsigned __int8)sub_140428A30(v16, v25, v27) == 0;
    }
    else
    {
      v28 = (*(_DWORD *)(v16 + 116) & 0x40) == 0;
    }
    if ( !v28 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 4375);
          v28 = (*(_DWORD *)(v30 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v30 + 20) &= 0xFFFF0003;
          if ( v28 )
            sub_140418E4C(v29);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v16 + 116) &= ~0x40u;
      sub_1402F1DC0(0, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v31 = KeGetCurrentPrcb();
        v32 = *((_QWORD *)v31 + 4375);
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
        *(_DWORD *)(v32 + 20) &= v33;
        if ( v28 )
          sub_140418E4C(v31);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else if ( *((_QWORD *)CurrentPrcb + 2) )
  {
    result = *((_BYTE *)CurrentPrcb + 13242);
    if ( !result )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) )
      {
        *((_BYTE *)CurrentPrcb + 6) = 1;
      }
      else
      {
        v35[0] = 5;
        *(_OWORD *)&v35[1] = 0LL;
        return sub_1402ADD00(v35, 0x2Fu);
      }
    }
  }
  return result;
}
