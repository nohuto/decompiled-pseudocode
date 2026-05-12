/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0024800
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C003A560 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003D090 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
