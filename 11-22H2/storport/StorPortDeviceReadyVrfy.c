/*
 * XREFs of StorPortDeviceReadyVrfy @ 0x1C00B11B0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 */

char __fastcall StorPortDeviceReadyVrfy(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return StorPortDeviceReady(a1, a2, a3, a4);
}
