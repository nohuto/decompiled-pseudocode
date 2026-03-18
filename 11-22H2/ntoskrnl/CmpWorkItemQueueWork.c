/*
 * XREFs of CmpWorkItemQueueWork @ 0x140374BF0
 * Callers:
 *     CmpNotifyMachineHiveLoaded @ 0x140374A38 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1404193A8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x1404196B0 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x140419700 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x140419750 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1406171A4 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x140617300 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140617320 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408106E0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140810CDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27D04 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
