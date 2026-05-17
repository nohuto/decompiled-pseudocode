/*
 * XREFs of NtDuplicateToken @ 0x18009F630
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlpTpInitializeData @ 0x18004DA50 (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x180079040 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x1800F3070 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
