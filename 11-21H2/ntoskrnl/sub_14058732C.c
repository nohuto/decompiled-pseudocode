/*
 * XREFs of sub_14058732C @ 0x14058732C
 * Callers:
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_14096A988 @ 0x14096A988 (sub_14096A988.c)
 *     sub_140AF6988 @ 0x140AF6988 (sub_140AF6988.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14058732C()
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v3; // r9
  int v4; // edx
  bool v5; // zf
  __int64 v6; // rcx
  unsigned __int64 *v7; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 result; // rax
  PVOID v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C52980, &LockHandle);
  if ( qword_140C52968 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_35;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_35;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( CurrentIrql < 2u )
      goto LABEL_35;
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *((_QWORD *)CurrentPrcb + 4375);
    v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v4 & *(_DWORD *)(v3 + 20)) == 0;
    *(_DWORD *)(v3 + 20) &= v4;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)CurrentPrcb;
LABEL_34:
    sub_140418E4C(v6);
LABEL_35:
    result = 1LL;
LABEL_36:
    __writecr8(OldIrql);
    return result;
  }
  v7 = (unsigned __int64 *)sub_1402828F0(64, 0x80000uLL, 0x7048694Du);
  if ( !v7 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = *((_QWORD *)v9 + 4375);
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v5 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v5 )
            sub_140418E4C((__int64)v9);
        }
      }
    }
    result = 0LL;
    goto LABEL_36;
  }
  v13 = sub_1402828F0(64, 0x2000000uLL, 0x7048694Du);
  if ( v13 )
  {
    stru_140C52958.SizeOfBitMap = 0x400000LL;
    stru_140C52958.Buffer = v7;
    qword_140C52968 = (__int64)v13;
    qword_140C53140 = 0x100000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_35;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_35;
    v19 = KeGetCurrentIrql();
    if ( v19 > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( v19 < 2u )
      goto LABEL_35;
    v20 = KeGetCurrentPrcb();
    v21 = *((_QWORD *)v20 + 4375);
    v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
    *(_DWORD *)(v21 + 20) &= v22;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)v20;
    goto LABEL_34;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v5 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v5 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  __writecr8(v14);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
