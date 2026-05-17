/*
 * XREFs of NtOpenKeyEx @ 0x1800A33C0
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D649C (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800DAF34 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyEx()
{
  __int64 result; // rax

  result = 297LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
