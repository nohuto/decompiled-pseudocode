/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x140828DE0
 * Callers:
 *     PopLidReliabilityInit @ 0x1403C0B80 (PopLidReliabilityInit.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PdcPoLidReliabilityUpdateCallback(char a1)
{
  BOOL v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 != 0;
  _InterlockedExchange(&PopLidStateIsReliable, v2);
  return PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_RELIABILITY, 4u, &v2);
}
