/*
 * XREFs of sub_1402075A4 @ 0x1402075A4
 * Callers:
 *     sub_140678AEC @ 0x140678AEC (sub_140678AEC.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_14096DD40 @ 0x14096DD40 (sub_14096DD40.c)
 *     sub_1409B01E0 @ 0x1409B01E0 (sub_1409B01E0.c)
 * Callees:
 *     sub_140207880 @ 0x140207880 (sub_140207880.c)
 *     sub_14020794C @ 0x14020794C (sub_14020794C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402075A4(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v7; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rdx
  unsigned __int16 **v14; // rcx
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 OldIrql; // rbx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // edx
  bool v29; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v31; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    goto LABEL_45;
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0LL;
  v6 = dword_140D06884;
  v7 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)dword_140D06884 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = qword_140D088C0[v5];
      v10 = 212LL * (unsigned int)v5;
      v31 = 0;
      while ( 1 )
      {
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v11 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v11 + 24);
            *(_DWORD *)(v11 + 24) = v21 + 1;
            if ( v21 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          break;
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v22 = *(_DWORD *)(v20 + 24) - 1;
            *(_DWORD *)(v20 + 24) = v22;
            if ( !v22 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v31);
        while ( *(_QWORD *)(v9 + 48) );
      }
      v12 = &a1[v10 + 100];
      v13 = *(_QWORD *)v12;
      v14 = (unsigned __int16 **)*((_QWORD *)v12 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        break;
      *v14 = (unsigned __int16 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = *((_QWORD *)v15 + 4375);
      if ( v16 )
      {
        if ( *((_BYTE *)v15 + 32) <= 1u )
        {
          v23 = *(_DWORD *)(v16 + 24) - 1;
          *(_DWORD *)(v16 + 24) = v23;
          if ( !v23 )
            sub_140418E4C(v15);
        }
      }
      v4 += *(_QWORD *)&a1[v10 + 92];
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        goto LABEL_11;
    }
LABEL_45:
    __fastfail(3u);
  }
LABEL_11:
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v24 = *a1;
    if ( !v7 )
    {
      dword_140C2B870 -= v24;
      goto LABEL_13;
    }
    *(_DWORD *)(v7 + 20) -= v24;
LABEL_24:
    if ( *(_QWORD *)(v7 + 80) == v7 + 80 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      goto LABEL_17;
    }
    v17 = v7;
    goto LABEL_15;
  }
  if ( v7 )
    goto LABEL_24;
LABEL_13:
  if ( (__int64 *)qword_140C2B880 == &qword_140C2B880 )
  {
    dword_140C2B86C = 0;
    dword_140C2B894 = 0;
    goto LABEL_17;
  }
  v17 = 0LL;
LABEL_15:
  if ( (unsigned __int8)sub_14020794C(*((_DWORD *)a1 + 1) & 1, 0LL, v17) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    sub_140207880(*((_DWORD *)a1 + 1) & 1, 0LL);
LABEL_17:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v28;
        if ( v29 )
          sub_140418E4C(v26);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
