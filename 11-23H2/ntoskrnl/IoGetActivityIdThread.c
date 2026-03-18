/*
 * XREFs of IoGetActivityIdThread @ 0x14031E650
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F914 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x140786330 (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408568E0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
