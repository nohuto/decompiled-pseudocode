/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x14035F2A0
 * Callers:
 *     IoAttachDevice @ 0x140946CB0 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
