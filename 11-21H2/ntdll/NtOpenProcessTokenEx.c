/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A4670
 * Callers:
 *     TppCritSetThread @ 0x180014EE8 (TppCritSetThread.c)
 *     RtlCheckTokenMembershipEx @ 0x180048FB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007FA90 (RtlImpersonateSelfEx.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E5ABC (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800F3608 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x180102E40 (RtlpSysVolTakeOwnership.c)
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
