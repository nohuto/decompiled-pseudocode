/*
 * XREFs of sub_1405B81F0 @ 0x1405B81F0
 * Callers:
 *     sub_1405A70EC @ 0x1405A70EC (sub_1405A70EC.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS __fastcall sub_1405B81F0(__int64 a1, LARGE_INTEGER *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  struct _KPRCB *v6; // r10
  __int64 v7; // r8
  bool v8; // zf
  void *v9; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r8
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15680), &LockHandle);
  if ( *(_QWORD *)(a1 + 16896) < 0x420uLL )
  {
    v9 = (void *)(a1 + 15752);
    KeResetEvent((PRKEVENT)(a1 + 15752));
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
          v8 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return KeWaitForSingleObject(v9, WrFreePage, 0, 0, a2);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = dword_140D06B08;
    v5 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = *((_QWORD *)v6 + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = (result & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= result;
          if ( v8 )
            result = sub_140418E4C((__int64)v6);
        }
      }
    }
    __writecr8(v5);
  }
  return result;
}
