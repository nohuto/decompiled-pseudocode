/*
 * XREFs of NtDuplicateToken @ 0x1800A16F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlpTpInitializeData @ 0x18004D8F0 (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x1800796B0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007E584 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x1800F4480 (RtlpIsAppContainer.c)
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
