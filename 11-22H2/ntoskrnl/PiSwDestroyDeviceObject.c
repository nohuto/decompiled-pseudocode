/*
 * XREFs of PiSwDestroyDeviceObject @ 0x14096725C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14081B050 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x14086A324 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140967CA4 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
