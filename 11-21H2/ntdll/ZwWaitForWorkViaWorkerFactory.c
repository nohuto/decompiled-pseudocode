/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1800A7C40
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForWorkViaWorkerFactory()
{
  __int64 result; // rax

  result = 479LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
