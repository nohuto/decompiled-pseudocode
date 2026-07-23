/*
 * XREFs of sub_1405595B8 @ 0x1405595B8
 * Callers:
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 *     IoUnregisterIoTracking @ 0x140937F70 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14055712C @ 0x14055712C (sub_14055712C.c)
 */

__int64 __fastcall sub_1405595B8(char a1)
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C46FC8, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_140D018A4 )
    dword_140D018A0 &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_140D018A8 )
    dword_140D018A0 &= ~2u;
  if ( !dword_140D018A0 )
    sub_14055712C(2, 0, 1);
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
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return 0LL;
}
