/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x14024FBE0
 * Callers:
 *     IoAttachDevice @ 0x140935E60 (IoAttachDevice.c)
 * Callees:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return sub_14024FC04(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
