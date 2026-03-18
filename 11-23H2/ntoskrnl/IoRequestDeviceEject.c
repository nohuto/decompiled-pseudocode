/*
 * XREFs of IoRequestDeviceEject @ 0x14055FDB0
 * Callers:
 *     PipProcessStartPhase2 @ 0x140790E98 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14096F408 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14055FDD0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
