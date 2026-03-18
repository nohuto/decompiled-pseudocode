/*
 * XREFs of KiSelectActiveTimerTable @ 0x1402A8670
 * Callers:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     KiTimerExpiration @ 0x140395300 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x1403AD4F0 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056CDBC (KiAdjustTimersAfterDripsExit.c)
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  if ( !KiSerializeTimerExpiration )
    return a1 + 15360;
  if ( a2 && !*(_BYTE *)(a1 + 33) )
    return 0LL;
  return KiProcessorBlock[0] + 15360;
}
