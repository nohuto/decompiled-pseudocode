/*
 * XREFs of StorPortPauseDeviceVrfy @ 0x1C00956E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 */

char __fastcall StorPortPauseDeviceVrfy(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  return StorPortPauseDevice(a1, a2, a3, a4, a5);
}
