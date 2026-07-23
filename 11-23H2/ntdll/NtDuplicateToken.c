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
