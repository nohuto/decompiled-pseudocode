/*
 * XREFs of KiEpfHandleNotification @ 0x140579500
 * Callers:
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057947C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140579524 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
