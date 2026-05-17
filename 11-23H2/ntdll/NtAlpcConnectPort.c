/*
 * XREFs of NtAlpcConnectPort @ 0x1800A1DC0
 * Callers:
 *     RtlConnectToSm @ 0x180088F60 (RtlConnectToSm.c)
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
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
