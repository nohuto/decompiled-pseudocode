/*
 * XREFs of sub_14036A5FC @ 0x14036A5FC
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EFDAC @ 0x1407EFDAC (sub_1407EFDAC.c)
 *     sub_1407EFF80 @ 0x1407EFF80 (sub_1407EFF80.c)
 */

__int64 __fastcall sub_14036A5FC(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  sub_140753094(a1);
  v2 = sub_1407EFF80(*v1);
  if ( v2 )
  {
    v3 = v1[2];
    KeAcquireInStackQueuedSpinLock(&qword_140C24278, &LockHandle);
    *(_DWORD *)(v2 + 24) = v3;
    sub_14036A48C((_BYTE *)v2, 0LL);
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
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    sub_14036AAC4(&unk_140C24440, 0LL);
  }
  return sub_1407EFDAC();
}
