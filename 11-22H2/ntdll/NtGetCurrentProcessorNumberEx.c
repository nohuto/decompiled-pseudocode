/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x1800A0D40
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A3CB0 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCurrentProcessorNumberEx()
{
  __int64 result; // rax

  result = 251LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
