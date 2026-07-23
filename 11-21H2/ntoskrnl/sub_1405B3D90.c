/*
 * XREFs of sub_1405B3D90 @ 0x1405B3D90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045C75A @ 0x14045C75A (sub_14045C75A.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 */

void __fastcall sub_1405B3D90(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
  {
    for ( j = 0; j < dword_140D05004; ++j )
    {
      v4 = sub_14045C75A(a1, i, j);
      if ( v4 )
        sub_14045C812(a1, i, j, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 176);
  KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
  *(_QWORD *)(a1 + 16080) = 0LL;
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
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  sub_1403606C4(v5);
}
