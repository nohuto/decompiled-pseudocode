/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14041B820
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041980C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x1405ED8A0 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     PopUmpoProcessMessages @ 0x1407A6E58 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084D6A0 (SshpAlpcMessageCallback.c)
 *     SshpAlpcSendMessage @ 0x14084DA40 (SshpAlpcSendMessage.c)
 *     PopMonitorProcessLoop @ 0x140860448 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
