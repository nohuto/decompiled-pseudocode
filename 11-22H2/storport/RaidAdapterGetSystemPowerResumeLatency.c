/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024824
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C003A560 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003D090 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
