/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x140993D24
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140994050 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x140997EF0 (PopBlockSessionSwitch.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A44A8 (TtmNotifyLowPowerStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyCsStateExited(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-30h] BYREF
  __int128 v3; // [rsp+30h] [rbp-20h]
  __int64 v4; // [rsp+40h] [rbp-10h]
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF

  v5 = -1;
  LOBYTE(a1) = 1;
  v4 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  PopBlockSessionSwitch(a1, &v5);
  if ( TtmIsEnabled() )
  {
    TtmNotifyLowPowerStateExited(v5);
  }
  else
  {
    v2 = 5uLL;
    v3 = 0uLL;
    v4 = 0LL;
    PopInvokeWin32Callout(5, (__int64)&v2, 1, (int *)&v5);
  }
  return PopBlockSessionSwitch(0LL, &v5);
}
