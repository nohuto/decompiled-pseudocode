/*
 * XREFs of KiSelectActiveTimerTable @ 0x14033C110
 * Callers:
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 *     KiSetSystemTimeDpc @ 0x14039A630 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14057019C (KiAdjustTimersAfterDripsExit.c)
 *     KiTimerExpiration @ 0x14057CCC4 (KiTimerExpiration.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EDB0 (KiCalibrateTimeAdjustment.c)
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
