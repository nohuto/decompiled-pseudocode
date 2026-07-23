/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1800A2020
 * Callers:
 *     CsrClientCallServer @ 0x180074E30 (CsrClientCallServer.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180082D0C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180088EB0 (RtlSendMsgToSm.c)
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
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
  NTSTATUS result; // eax

  result = 140;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
