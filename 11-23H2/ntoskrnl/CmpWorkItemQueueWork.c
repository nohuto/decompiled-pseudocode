/*
 * XREFs of CmpWorkItemQueueWork @ 0x14037473C
 * Callers:
 *     CmpNotifyMachineHiveLoaded @ 0x140374584 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x14041A0F0 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x14041A140 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x14041A190 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617684 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1406177E0 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140617800 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E430 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080EA2C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27F04 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
