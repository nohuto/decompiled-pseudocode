/*
 * XREFs of NtAlpcConnectPort @ 0x1800A4F80
 * Callers:
 *     RtlConnectToSm @ 0x18008DBB0 (RtlConnectToSm.c)
 *     SendMessageToWERService @ 0x1800E88CC (SendMessageToWERService.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 121LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
