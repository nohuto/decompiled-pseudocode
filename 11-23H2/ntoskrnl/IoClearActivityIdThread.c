/*
 * XREFs of IoClearActivityIdThread @ 0x14031E690
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140786490 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1407F9148 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
