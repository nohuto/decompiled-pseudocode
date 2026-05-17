/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x1800A5F80
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800A8E20 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCurrentProcessorNumber()
{
  __int64 result; // rax

  result = 249LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
