/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14035FA70
 * Callers:
 *     HalpAddDevice @ 0x140834F20 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140ADF22C (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035FAB4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
