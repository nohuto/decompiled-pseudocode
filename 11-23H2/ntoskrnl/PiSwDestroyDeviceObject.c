/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1409671AC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140818AD0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140869E54 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140967BF4 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
