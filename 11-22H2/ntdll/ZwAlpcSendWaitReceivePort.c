/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18009FF60
 * Callers:
 *     CsrClientCallServer @ 0x1800747C0 (CsrClientCallServer.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008269C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x1800886B0 (RtlSendMsgToSm.c)
 *     SendMessageToWERService @ 0x1800E775C (SendMessageToWERService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 140LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
