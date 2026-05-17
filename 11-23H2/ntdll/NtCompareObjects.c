/*
 * XREFs of NtCompareObjects @ 0x1800A2240
 * Callers:
 *     RtlIsCurrentThread @ 0x180002000 (RtlIsCurrentThread.c)
 *     RtlIsCurrentProcess @ 0x18006C250 (RtlIsCurrentProcess.c)
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
