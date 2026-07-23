/*
 * XREFs of ZwQueryInformationToken @ 0x14041BB80
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_140624EA0 @ 0x140624EA0 (sub_140624EA0.c)
 *     sub_140642A44 @ 0x140642A44 (sub_140642A44.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TokenHandle, *(_QWORD *)&TokenInformationClass);
}
