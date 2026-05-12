/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0024B84
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0038F90 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 4) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
