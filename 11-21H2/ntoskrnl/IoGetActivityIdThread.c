/*
 * XREFs of IoGetActivityIdThread @ 0x1402E0960
 * Callers:
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
