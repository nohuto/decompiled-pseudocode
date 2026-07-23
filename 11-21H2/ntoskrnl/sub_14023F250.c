/*
 * XREFs of sub_14023F250 @ 0x14023F250
 * Callers:
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A78C @ 0x14028A78C (sub_14028A78C.c)
 *     sub_14028AD10 @ 0x14028AD10 (sub_14028AD10.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14023F250(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v2; // r14
  unsigned int *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned int **v7; // r15
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  unsigned int **v10; // rax
  _SLIST_ENTRY *v11; // rdx
  PVOID *v12; // rax
  PVOID v13; // rcx
  PVOID *v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 528);
  v2 = (struct _FAST_MUTEX *)(a1 + 280);
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v4 = *(unsigned int **)(a1 + 160);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 704), &LockHandle);
    sub_14028AD10(a1, v4[2]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          v5 = (unsigned int)v18 & *(_DWORD *)(v17 + 20);
          *(_DWORD *)(v17 + 20) = v5;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v7 = (unsigned int **)(v4 + 4);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (unsigned int *)v7 )
        break;
      v9 = *(_QWORD *)v8;
      v10 = (unsigned int **)*((_QWORD *)v8 + 1);
      if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
LABEL_20:
        __fastfail(3u);
      *v10 = (unsigned int *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = (_SLIST_ENTRY *)*((_QWORD *)v8 + 5);
      if ( v11 && v11 != (_SLIST_ENTRY *)(v4 + 24) )
        sub_140203D88((__int64)&stru_140CE2340, v11, v5);
      if ( v8 < v4 || v8 >= v4 + 48 )
      {
        v12 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        *((_QWORD *)v8 + 1) = p_P;
        *(_QWORD *)v8 = &P;
        *v12 = v8;
        p_P = (PVOID *)v8;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex(v2);
    while ( 1 )
    {
      v13 = P;
      if ( P == &P )
        break;
      v14 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v14[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v14[1] = &P;
      ExFreePoolWithTag(v13, 0);
    }
    sub_14028A78C(v4);
  }
  else
  {
    KeReleaseGuardedMutex(v2);
  }
}
