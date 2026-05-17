/*
 * XREFs of NtOpenThreadToken @ 0x1800A44F0
 * Callers:
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800542D4 (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlpTpRevertCapture @ 0x180070858 (RtlpTpRevertCapture.c)
 *     RtlAdjustPrivilege @ 0x180082430 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
