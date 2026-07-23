/*
 * XREFs of sub_14053A314 @ 0x14053A314
 * Callers:
 *     CcRegisterExternalCache @ 0x1403A12A0 (CcRegisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403A1330 @ 0x1403A1330 (sub_1403A1330.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14053A314(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *((_QWORD *)qword_140D06C40 + 1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 704), &LockHandle);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v3 == v2 + 32 )
    KeBugCheckEx(0x34u, 0x32D0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = v3 - 576;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 1232)) <= 1 )
    __fastfail(0xEu);
  if ( v4 && _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a1 + 48) = v2;
  *(_QWORD *)(a1 + 56) = v4;
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
  return sub_1403A1330(a1, v4 + 1248);
}
