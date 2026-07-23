/*
 * XREFs of HalGetAdapter @ 0x1409084A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140845CD8 @ 0x140845CD8 (sub_140845CD8.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)sub_140845CD8((__int64)DeviceDescription, 0LL, NumberOfMapRegisters);
}
