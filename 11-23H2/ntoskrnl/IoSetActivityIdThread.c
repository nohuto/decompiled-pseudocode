/*
 * XREFs of IoSetActivityIdThread @ 0x14031E900
 * Callers:
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140786680 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     PiDqIrpQueryCreate @ 0x1407F9418 (PiDqIrpQueryCreate.c)
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
