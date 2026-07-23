/*
 * XREFs of sub_140596204 @ 0x140596204
 * Callers:
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140596204()
{
  __int64 ClearBitsAndSet; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  BitMapHeader.SizeOfBitMap = 16;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  BitMapHeader.Buffer = (PULONG)&dword_140C53258;
  KeAcquireInStackQueuedSpinLock(&qword_140C53250, &LockHandle);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
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
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= v5;
        if ( v6 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140C53248 + 8 * ClearBitsAndSet;
}
