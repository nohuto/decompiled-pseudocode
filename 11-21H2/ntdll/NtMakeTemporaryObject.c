/*
 * XREFs of NtMakeTemporaryObject @ 0x1800A6320
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 NtMakeTemporaryObject()
{
  __int64 result; // rax

  result = 278LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
