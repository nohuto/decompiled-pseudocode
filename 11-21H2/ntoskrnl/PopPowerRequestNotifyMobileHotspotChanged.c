/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x140989E98
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1405CA1A0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1407EDF80 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  PopAcquirePowerRequestPushLock(1);
  if ( byte_140C24511 != a1 )
  {
    byte_140C24511 = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
