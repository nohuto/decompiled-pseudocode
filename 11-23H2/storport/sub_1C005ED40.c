/*
 * XREFs of sub_1C005ED40 @ 0x1C005ED40
 * Callers:
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C005ED40(__int64 a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1840), &LockHandle);
  *(_DWORD *)(a1 + 1828) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
