/*
 * XREFs of NtInitializeNlsFiles @ 0x1800A6100
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x180083E50 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

__int64 NtInitializeNlsFiles()
{
  __int64 result; // rax

  result = 261LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
