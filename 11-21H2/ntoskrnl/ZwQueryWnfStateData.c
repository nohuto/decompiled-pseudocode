/*
 * XREFs of ZwQueryWnfStateData @ 0x14041E4C0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140923614 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409BEEA8 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
