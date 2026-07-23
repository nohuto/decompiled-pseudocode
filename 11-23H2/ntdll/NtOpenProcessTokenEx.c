/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A14B0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800796B0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007E584 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E5C7C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800F4480 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x180103EE0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
