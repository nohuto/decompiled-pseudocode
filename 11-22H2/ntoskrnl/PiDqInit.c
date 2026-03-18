/*
 * XREFs of PiDqInit @ 0x140B431C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDqObjectManagerInit @ 0x140814CC0 (PiDqObjectManagerInit.c)
 */

__int64 PiDqInit()
{
  __int64 result; // rax

  PiDqObjectManagerInit(&PiDqDeviceManager, 1);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceManager, 3);
  PiDqObjectManagerInit(&PiDqDeviceInterfaceClassManager, 4);
  PiDqObjectManagerInit(&PiDqDeviceContainerManager, 5);
  PiDqObjectManagerInit(&PiDqDeviceInstallerClassManager, 2);
  PiDqObjectManagerInit(&PiDqDevicePanelManager, 6);
  result = 0LL;
  PiDqSequenceNumber = 0LL;
  return result;
}
