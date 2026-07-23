/*
 * XREFs of sub_1403C31D4 @ 0x1403C31D4
 * Callers:
 *     sub_1403C315C @ 0x1403C315C (sub_1403C315C.c)
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403C31D4()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  KIRQL OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C58CC0, &LockHandle);
  if ( qword_140C55090 )
  {
    v0 = qword_140C4F040[0];
    v1 = qword_140C4F048;
    if ( qword_140C4F048 >= (unsigned __int64)(qword_140C4F040[0] - 5120) )
    {
      if ( qword_140C55090->Header.SignalState )
        KeResetEvent(qword_140C55090);
    }
    else if ( !qword_140C55090->Header.SignalState )
    {
      KeSetEvent(qword_140C55090, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140C55088->Header.SignalState )
        KeSetEvent(qword_140C55088, 0, 0);
    }
    else if ( qword_140C55088->Header.SignalState )
    {
      KeResetEvent(qword_140C55088);
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
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
