/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A16D0
 * Callers:
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007E200 (RtlAdjustPrivilege.c)
 *     TppCritSetThread @ 0x18007E584 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x180082190 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180088150 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x180103EE0 (RtlpSysVolTakeOwnership.c)
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
