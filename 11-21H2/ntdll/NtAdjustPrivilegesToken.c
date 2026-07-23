/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A4890
 * Callers:
 *     TppCritSetThread @ 0x180014EE8 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x180082430 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180086900 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x18008CC60 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x180102E40 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
