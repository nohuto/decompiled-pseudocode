/*
 * XREFs of NtOpenProcessToken @ 0x1800A6640
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800114D8 (RtlpGetDefaultsSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x180082430 (RtlAdjustPrivilege.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 303LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
