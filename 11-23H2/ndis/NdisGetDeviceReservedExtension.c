/*
 * XREFs of NdisGetDeviceReservedExtension @ 0x1C002A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall NdisGetDeviceReservedExtension(PDEVICE_OBJECT DeviceObject)
{
  return (PVOID)*((_QWORD *)DeviceObject->DeviceExtension + 5);
}
