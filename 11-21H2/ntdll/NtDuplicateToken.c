/*
 * XREFs of NtDuplicateToken @ 0x1800A48B0
 * Callers:
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     TppCritSetThread @ 0x180014EE8 (TppCritSetThread.c)
 *     RtlCheckTokenMembershipEx @ 0x180048FB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlpTpInitializeData @ 0x1800707E4 (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x18007FA90 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1800F3608 (RtlpIsAppContainer.c)
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
