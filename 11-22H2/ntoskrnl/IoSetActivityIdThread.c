/*
 * XREFs of IoSetActivityIdThread @ 0x14031E490
 * Callers:
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407869A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x140786D70 (PnpDeviceEventWorker.c)
 *     PiDqIrpQueryCreate @ 0x1407F97F8 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall IoSetActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
