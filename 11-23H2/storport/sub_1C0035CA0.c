/*
 * XREFs of sub_1C0035CA0 @ 0x1C0035CA0
 * Callers:
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0035CA0(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5456), &LockHandle);
  if ( !*(_DWORD *)(a1 + 5464) )
    KeSetCoalescableTimer((PKTIMER)(a1 + 5328), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5392));
  ++*(_DWORD *)(a1 + 5464);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
