/*
 * XREFs of ZwQueryWnfStateData @ 0x14041D460
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1030 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409C876C (RtlpFcNotifyFeatureUsageTarget.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27D04 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
