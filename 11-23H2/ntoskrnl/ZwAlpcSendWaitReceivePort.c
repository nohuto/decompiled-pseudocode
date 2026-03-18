/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14041BEE0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x140419F14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x1405ED810 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     PopUmpoProcessMessages @ 0x1407A6948 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14084C440 (SshpAlpcMessageCallback.c)
 *     SshpAlpcSendMessage @ 0x14084C7E0 (SshpAlpcSendMessage.c)
 *     PopMonitorProcessLoop @ 0x1408602E8 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
