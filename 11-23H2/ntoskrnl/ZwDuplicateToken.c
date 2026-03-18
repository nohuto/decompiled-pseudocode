/*
 * XREFs of ZwDuplicateToken @ 0x14041B5A0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D1F0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140370630 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1405EFCB0 (DifZwDuplicateTokenWrapper.c)
 *     RtlImpersonateSelfEx @ 0x1407D2D5C (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1409BD28C (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess);
}
