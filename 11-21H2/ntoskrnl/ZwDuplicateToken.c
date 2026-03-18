/*
 * XREFs of ZwDuplicateToken @ 0x14041BFA0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     DifZwDuplicateTokenWrapper @ 0x14061FD90 (DifZwDuplicateTokenWrapper.c)
 *     RtlImpersonateSelfEx @ 0x1406CB908 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1409BA210 (RtlpIsAppContainer.c)
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
