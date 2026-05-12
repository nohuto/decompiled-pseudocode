/*
 * XREFs of RaidAdapterSystemPowerHintsEnabled @ 0x1C002484A
 * Callers:
 *     RaidCoalescingCallback @ 0x1C003A560 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003D090 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSystemPowerHintsEnabled(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[613] && a1[615] || a1[749] )
    return 1;
  return result;
}
