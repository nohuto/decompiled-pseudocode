/*
 * XREFs of sub_140953508 @ 0x140953508
 * Callers:
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_140953CF8 @ 0x140953CF8 (sub_140953CF8.c)
 */

void __fastcall sub_140953508(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  sub_140953CF8(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
