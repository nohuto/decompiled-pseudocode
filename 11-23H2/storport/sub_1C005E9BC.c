/*
 * XREFs of sub_1C005E9BC @ 0x1C005E9BC
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C005E9BC(__int64 a1, IRP *a2)
{
  PIO_SECURITY_CONTEXT SecurityContext; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  *(_BYTE *)(a1 + 448) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  BYTE3(SecurityContext->SecurityQos) = 1;
  return sub_1C0003440(a2, 0, 0);
}
