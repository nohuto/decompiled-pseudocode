/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14041BC40
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x1405ECD20 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     PopUmpoProcessMessage @ 0x1407A6A78 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C57C (SshpAlpcProcessAlpcMessage.c)
 *     PopMonitorProcessLoop @ 0x1408602E8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
