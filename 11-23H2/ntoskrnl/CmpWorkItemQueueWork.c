/*
 * XREFs of CmpWorkItemQueueWork @ 0x14037459C
 * Callers:
 *     CmpNotifyMachineHiveLoaded @ 0x1403743E4 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419A58 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x140419D60 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x140419DB0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x140419E00 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617134 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x140617290 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1406172B0 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E160 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080E75C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27C54 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
