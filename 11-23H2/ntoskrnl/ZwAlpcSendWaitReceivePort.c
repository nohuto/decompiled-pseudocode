/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14041C270
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D430 (PopUmpoSendPowerMessage.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041A2A4 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x1405EDD80 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     PopUmpoProcessMessages @ 0x1407A6B38 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084C740 (SshpAlpcMessageCallback.c)
 *     SshpAlpcSendMessage @ 0x14084CAE0 (SshpAlpcSendMessage.c)
 *     PopMonitorProcessLoop @ 0x140860528 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
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
