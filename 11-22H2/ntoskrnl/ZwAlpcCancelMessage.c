/*
 * XREFs of ZwAlpcCancelMessage @ 0x14041B5A0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6F88 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084D7DC (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
