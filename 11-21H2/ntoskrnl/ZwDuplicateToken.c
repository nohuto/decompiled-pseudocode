/*
 * XREFs of ZwDuplicateToken @ 0x14041BFA0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     sub_14061FD90 @ 0x14061FD90 (sub_14061FD90.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_1409BA210 @ 0x1409BA210 (sub_1409BA210.c)
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
  return sub_140433F80(ExistingTokenHandle, *(_QWORD *)&DesiredAccess);
}
