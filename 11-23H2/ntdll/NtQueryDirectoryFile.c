/*
 * XREFs of NtQueryDirectoryFile @ 0x1800A1550
 * Callers:
 *     LdrpCnvrtShortToLongFileName @ 0x1800ECC7C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FCA58 (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
