/*
 * XREFs of sub_1C000F724 @ 0x1C000F724
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 *     sub_1C004EF10 @ 0x1C004EF10 (sub_1C004EF10.c)
 *     sub_1C004F710 @ 0x1C004F710 (sub_1C004F710.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C000F724(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) == 0 && (*(_DWORD *)(a1 + 456) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 984));
    *(_BYTE *)(a1 + 449) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
