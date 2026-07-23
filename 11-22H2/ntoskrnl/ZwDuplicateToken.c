/*
 * XREFs of ZwDuplicateToken @ 0x14041AEE0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1405EFD40 (DifZwDuplicateTokenWrapper.c)
 *     RtlImpersonateSelfEx @ 0x1407D32DC (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1409BD33C (RtlpIsAppContainer.c)
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
