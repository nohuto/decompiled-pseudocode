/*
 * XREFs of UsbhIdleIrpRetryTimer @ 0x1C0057300
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhIdleIrpRetryTimer(__int64 a1, _LIST_ENTRY *a2, __int64 a3, _LIST_ENTRY *a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (_LIST_ENTRY *)UsbhPdoIdleCC_Worker, 0, a4, 0, 1766871891);
}
