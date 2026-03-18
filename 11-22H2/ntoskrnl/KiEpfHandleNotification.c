/*
 * XREFs of KiEpfHandleNotification @ 0x1405790A0
 * Callers:
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057901C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405790C4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
