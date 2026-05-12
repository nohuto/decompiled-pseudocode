/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024BA8
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0038F90 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
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
