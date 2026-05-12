/*
 * XREFs of sub_1C000B604 @ 0x1C000B604
 * Callers:
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C004EDF0 @ 0x1C004EDF0 (sub_1C004EDF0.c)
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 *     sub_1C004F920 @ 0x1C004F920 (sub_1C004F920.c)
 *     sub_1C004FCC0 @ 0x1C004FCC0 (sub_1C004FCC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C000B604(__int64 a1, char a2)
{
  char v2; // r8
  int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 3280);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = v2 != 0 ? 1 : 4;
  v6 = v2 != 0 ? 0xFFFFFF06 : 0;
  v7 = v2 != 0 ? 500 : 2000;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 984), (LARGE_INTEGER)(-10000 * v7), v7, v6 + 300, (PKDPC)(a1 + 1048));
    *(_DWORD *)(*(_QWORD *)(a1 + 504) + 4LL) = v5;
    *(_BYTE *)(a1 + 449) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
