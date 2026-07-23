/*
 * XREFs of IoSetDeviceToVerify @ 0x140417C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  *((_QWORD *)Thread + 163) = DeviceObject;
}
