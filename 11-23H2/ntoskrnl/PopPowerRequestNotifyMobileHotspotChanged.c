/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x140981908
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140587870 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085580C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140C3F361 != a1 )
  {
    byte_140C3F361 = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
