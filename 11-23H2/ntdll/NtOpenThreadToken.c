/*
 * XREFs of NtOpenThreadToken @ 0x1800A1330
 * Callers:
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077D08 (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlAdjustPrivilege @ 0x18007E200 (RtlAdjustPrivilege.c)
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
