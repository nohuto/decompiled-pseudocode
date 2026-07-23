/*
 * XREFs of ZwAlpcCancelMessage @ 0x14041BFF0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6C68 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C87C (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
