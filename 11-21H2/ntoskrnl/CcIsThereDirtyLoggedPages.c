/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14023A5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // si
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v15, 0, sizeof(v15));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v5 = (__int64 *)qword_140C49B30;
  v6 = *((_QWORD *)qword_140D06C40 + 1);
  if ( (__int64 *)qword_140C49B30 != &qword_140C49B30 )
  {
    do
    {
      v7 = v5 - 2;
      if ( *(v5 - 1) == a1 )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &qword_140C49B30 );
    if ( v7 )
    {
      v15.LockQueue.Next = 0LL;
      v15.LockQueue.Lock = (volatile PKSPIN_LOCK)(v6 + 704);
      sub_1403119F0(&v15);
      if ( v7[8] || *((_DWORD *)v7 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v7 + 16) + *((_DWORD *)v7 + 50);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v15);
    }
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
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
