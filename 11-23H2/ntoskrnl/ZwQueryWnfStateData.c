/*
 * XREFs of ZwQueryWnfStateData @ 0x14041DB20
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B0FA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409C86BC (RtlpFcNotifyFeatureUsageTarget.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27C54 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
