/*
 * XREFs of sub_1405CFED4 @ 0x1405CFED4
 * Callers:
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 *     PoSetSystemWakeDevice @ 0x1405C6AF0 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405CFED4(PVOID Object)
{
  unsigned int v2; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v4; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 544040269LL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C23760, &LockHandle);
    if ( qword_140C23740 && (unsigned int)dword_140C2376C <= 1 )
    {
      ObfReferenceObjectWithTag(Object, 0x67446F50u);
      Pool2[2] = Object;
      v4 = (_QWORD *)qword_140C237A8;
      if ( *(PVOID **)qword_140C237A8 != &qword_140C237A0 )
        __fastfail(3u);
      *Pool2 = &qword_140C237A0;
      Pool2[1] = v4;
      *v4 = Pool2;
      qword_140C237A8 = (__int64)Pool2;
      Pool2 = 0LL;
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
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
