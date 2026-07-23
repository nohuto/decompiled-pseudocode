/*
 * XREFs of IoAttachDeviceByPointer @ 0x140557420
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 */

NTSTATUS __stdcall IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return sub_14024FC04((__int64)SourceDevice, TargetDevice, 0LL) == 0LL ? 0xC000000E : 0;
}
