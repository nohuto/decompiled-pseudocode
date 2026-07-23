/*
 * XREFs of sub_1405C6870 @ 0x1405C6870
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1405C68A8 @ 0x1405C68A8 (sub_1405C68A8.c)
 */

void __fastcall __noreturn sub_1405C6870(__int64 a1, ULONG a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
  sub_1405C68A8(a2);
}
