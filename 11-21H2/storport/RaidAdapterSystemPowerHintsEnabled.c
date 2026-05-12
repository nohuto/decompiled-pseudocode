/*
 * XREFs of RaidAdapterSystemPowerHintsEnabled @ 0x1C0038CB8
 * Callers:
 *     RaidCoalescingCallback @ 0x1C0038F90 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C003B2A0 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSystemPowerHintsEnabled(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[605] && a1[607] || a1[740] )
    return 1;
  return result;
}
