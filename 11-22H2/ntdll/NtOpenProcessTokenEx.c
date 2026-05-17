/*
 * XREFs of NtOpenProcessTokenEx @ 0x18009F3F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180079040 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E494C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800F3070 (RtlpIsAppContainer.c)
 *     RtlpSysVolTakeOwnership @ 0x180102AD0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
