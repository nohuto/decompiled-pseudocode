/*
 * XREFs of ZwDuplicateToken @ 0x14041B930
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1403707D0 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1405F0220 (DifZwDuplicateTokenWrapper.c)
 *     RtlImpersonateSelfEx @ 0x1407D302C (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1409BD48C (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
