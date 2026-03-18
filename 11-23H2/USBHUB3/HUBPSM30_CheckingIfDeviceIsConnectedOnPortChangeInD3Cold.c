/*
 * XREFs of HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1C0012EC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_Is30DevicePresent @ 0x1C0031228 (HUBMISC_Is30DevicePresent.c)
 */

__int64 __fastcall HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold(__int64 a1)
{
  return HUBMISC_Is30DevicePresent(*(_QWORD *)(a1 + 960));
}
