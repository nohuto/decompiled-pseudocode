/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x18009FCA0
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1800475D4 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     <none>
 */

__int64 NtAllocateVirtualMemoryEx()
{
  __int64 result; // rax

  result = 118LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
