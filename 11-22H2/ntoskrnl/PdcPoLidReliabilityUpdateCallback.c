/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x1408243C0
 * Callers:
 *     PopLidReliabilityInit @ 0x140387B08 (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 */

void __fastcall PdcPoLidReliabilityUpdateCallback(char a1)
{
  BOOL v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 != 0;
  _InterlockedExchange(&PopLidStateIsReliable, v2);
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_RELIABILITY, 4u, &v2);
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (16 * a1)) & 0x10;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
}
