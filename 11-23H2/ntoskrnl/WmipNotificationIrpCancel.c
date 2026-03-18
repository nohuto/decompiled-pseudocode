/*
 * XREFs of WmipNotificationIrpCancel @ 0x14036A1C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CBD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IofCompleteRequest @ 0x1402C9980 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x14036A22C (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&WmipCancelSpinLock, &LockHandle);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
