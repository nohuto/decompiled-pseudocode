/*
 * XREFs of sub_1C0019194 @ 0x1C0019194
 * Callers:
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0019194(__int64 a1, char a2)
{
  char v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v4 = *(_BYTE *)(a1 + 448);
  *(_BYTE *)(a1 + 448) = v4 ^ (v4 ^ (2 * a2)) & 2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (v4 & 2) != 0;
}
