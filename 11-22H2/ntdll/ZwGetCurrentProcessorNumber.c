/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x1800A0D20
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800A3C60 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCurrentProcessorNumber()
{
  __int64 result; // rax

  result = 250LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
