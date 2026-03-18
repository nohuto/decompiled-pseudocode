/*
 * XREFs of UsbhSS_WakeIrpRetryTimer @ 0x1C0058140
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_WakeIrpRetryTimer(__int64 a1, _LIST_ENTRY *a2, __int64 a3, _LIST_ENTRY *a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (_LIST_ENTRY *)UsbhSS_PdoWakeWorker, 0, a4, 0, 2001752915);
}
