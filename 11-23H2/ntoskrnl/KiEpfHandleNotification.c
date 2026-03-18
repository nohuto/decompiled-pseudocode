/*
 * XREFs of KiEpfHandleNotification @ 0x140579010
 * Callers:
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x140578F8C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140579034 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
