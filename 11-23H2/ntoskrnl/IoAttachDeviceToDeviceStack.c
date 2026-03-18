/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14035F8D0
 * Callers:
 *     HalpAddDevice @ 0x140834C20 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140ADF23C (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F914 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
