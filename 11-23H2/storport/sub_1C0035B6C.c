/*
 * XREFs of sub_1C0035B6C @ 0x1C0035B6C
 * Callers:
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0061A08 @ 0x1C0061A08 (sub_1C0061A08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0035B6C(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5456), &LockHandle);
  if ( *(_DWORD *)(a1 + 5464) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5328));
  --*(_DWORD *)(a1 + 5464);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
