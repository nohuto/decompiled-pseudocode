/*
 * XREFs of ZwQueryWnfStateData @ 0x14041DEB0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409C88BC (RtlpFcNotifyFeatureUsageTarget.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27F04 (CmFcpManagerPublishChangeNotifications.c)
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
