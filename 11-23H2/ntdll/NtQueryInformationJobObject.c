/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A3920
 * Callers:
 *     TppJobpRundownJob @ 0x180050DF0 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x1800F2470 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 340LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
