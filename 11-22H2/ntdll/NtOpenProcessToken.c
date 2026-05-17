/*
 * XREFs of NtOpenProcessToken @ 0x1800A1400
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180068BDC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x18007DB90 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800E84C8 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 305LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
