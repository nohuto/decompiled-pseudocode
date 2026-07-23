/*
 * XREFs of NtOpenProcessToken @ 0x1800A34C0
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180068BBC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x18007E200 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800854DC (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 305;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
