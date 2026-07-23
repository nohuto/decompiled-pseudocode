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

NTSTATUS __cdecl NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
