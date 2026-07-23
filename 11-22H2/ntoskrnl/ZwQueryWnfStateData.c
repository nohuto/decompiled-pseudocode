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

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
