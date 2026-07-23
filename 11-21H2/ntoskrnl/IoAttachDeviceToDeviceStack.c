/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14024FBC0
 * Callers:
 *     sub_14081E300 @ 0x14081E300 (sub_14081E300.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 * Callees:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)sub_14024FC04(SourceDevice, TargetDevice, 0LL);
}
