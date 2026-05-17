/*
 * XREFs of NtOpenKeyEx @ 0x1800A1300
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6B3C (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800DB584 (LdrpIsCODServiceEnabled.c)
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
