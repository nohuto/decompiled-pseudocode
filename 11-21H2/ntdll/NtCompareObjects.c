/*
 * XREFs of NtCompareObjects @ 0x1800A5400
 * Callers:
 *     RtlIsCurrentThread @ 0x180001F70 (RtlIsCurrentThread.c)
 *     RtlIsCurrentProcess @ 0x180074370 (RtlIsCurrentProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareObjects()
{
  __int64 result; // rax

  result = 157LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
