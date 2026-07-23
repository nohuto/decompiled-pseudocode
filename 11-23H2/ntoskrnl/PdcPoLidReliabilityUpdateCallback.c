/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x140823760
 * Callers:
 *     PopLidReliabilityInit @ 0x140389F8C (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
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
