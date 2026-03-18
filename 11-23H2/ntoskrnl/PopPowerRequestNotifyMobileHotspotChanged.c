/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x140981708
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140587380 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408554C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085550C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140C3F4E1 != a1 )
  {
    byte_140C3F4E1 = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
