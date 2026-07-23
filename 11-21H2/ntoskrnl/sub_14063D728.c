/*
 * XREFs of sub_14063D728 @ 0x14063D728
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x14063D340 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AE310 @ 0x1402AE310 (sub_1402AE310.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406325F8 @ 0x1406325F8 (sub_1406325F8.c)
 */

char __fastcall sub_14063D728(__int64 a1)
{
  unsigned int v2; // esi
  struct _KTHREAD *CurrentThread; // r14
  int v4; // r12d
  int v5; // ebp
  int v6; // r15d
  char v7; // di
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = DWORD1(xmmword_140D06900) & 0x20000;
  v6 = 65537;
  __incgsdword(0x8AE0u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = sub_1402AE310(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v5 )
    {
      v2 = 1;
      v6 = 65569;
      v4 = *(_DWORD *)(a1 + 68);
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v5 )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v2 = v9 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
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
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v7 )
  {
    __incgsdword(0x8AE4u);
    __incgsdword(0x8A64u);
  }
  if ( v5 )
    sub_1406325F8(v6, a1, v2, v4);
  return v7;
}
