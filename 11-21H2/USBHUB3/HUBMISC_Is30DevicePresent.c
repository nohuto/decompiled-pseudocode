/*
 * XREFs of HUBMISC_Is30DevicePresent @ 0x1C002E5B4
 * Callers:
 *     HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1C0011D60 (HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_Is30DevicePresent(__int64 a1)
{
  __int16 v1; // ax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 184);
  if ( (v1 & 1) != 0 )
    return 3089LL;
  v2 = (((v1 & 0x1E0) - 192) & 0xFF7F) == 0;
  result = 3005LL;
  if ( v2 )
    return 3089LL;
  return result;
}
