/*
 * XREFs of IoRequestDeviceEject @ 0x14055FE50
 * Callers:
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
