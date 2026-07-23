/*
 * XREFs of sub_140229F30 @ 0x140229F30
 * Callers:
 *     CcCopyWriteWontFlush @ 0x140229E10 (CcCopyWriteWontFlush.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_140229F30(__int64 a1, char a2)
{
  bool v2; // bl
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      v2 = (*(_DWORD *)(v6 + 152) & 0x40000000) != 0;
  }
  if ( !v4 )
  {
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
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return v2;
}
