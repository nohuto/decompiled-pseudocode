/*
 * XREFs of ZwQueryInformationToken @ 0x14041B180
 * Callers:
 *     RtlCheckTokenCapability @ 0x140370630 (RtlCheckTokenCapability.c)
 *     DifZwQueryInformationTokenWrapper @ 0x1405F4BF0 (DifZwQueryInformationTokenWrapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FA40 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FAAD0 (RtlFormatCurrentUserKeyPath.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC7E4 (ExpFirmwareAccessAppContainerCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
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
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass);
}
