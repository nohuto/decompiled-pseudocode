/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18009F610
 * Callers:
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007DB90 (RtlAdjustPrivilege.c)
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x180081B20 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180087950 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x180102AD0 (RtlpSysVolTakeOwnership.c)
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
