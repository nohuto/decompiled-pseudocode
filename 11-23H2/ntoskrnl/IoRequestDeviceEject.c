/*
 * XREFs of IoRequestDeviceEject @ 0x140560470
 * Callers:
 *     PipProcessStartPhase2 @ 0x140791088 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14096F608 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140560490 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
