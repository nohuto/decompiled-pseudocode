/*
 * XREFs of NtOpenKeyEx @ 0x1800A6540
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6AD8 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800DB1A0 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyEx()
{
  __int64 result; // rax

  result = 295LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
