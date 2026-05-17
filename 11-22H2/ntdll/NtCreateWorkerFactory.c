/*
 * XREFs of NtCreateWorkerFactory @ 0x1800A0840
 * Callers:
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWorkerFactory()
{
  __int64 result; // rax

  result = 211LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
