/*
 * XREFs of IoGetActivityIdThread @ 0x14031E8E0
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035FAB4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x140786520 (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140856B20 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
