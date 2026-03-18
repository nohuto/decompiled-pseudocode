/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14041C8E0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x14061D840 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     PopUmpoProcessMessages @ 0x1407EFAD0 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x14081AE90 (SshpAlpcMessageCallback.c)
 *     SshpAlpcSendMessage @ 0x14081B360 (SshpAlpcSendMessage.c)
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
