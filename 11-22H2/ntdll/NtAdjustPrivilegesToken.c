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

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
