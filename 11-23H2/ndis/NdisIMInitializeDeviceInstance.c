/*
 * XREFs of NdisIMInitializeDeviceInstance @ 0x1C0063E40
 * Callers:
 *     <none>
 * Callees:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0063E60 (NdisIMInitializeDeviceInstanceEx.c)
 */

NDIS_STATUS __fastcall NdisIMInitializeDeviceInstance(void *a1, UNICODE_STRING *a2)
{
  return NdisIMInitializeDeviceInstanceEx(a1, a2, 0LL);
}
