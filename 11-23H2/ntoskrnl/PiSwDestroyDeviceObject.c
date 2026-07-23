/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1409673AC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140818DA0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x14086A094 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140967DF4 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
