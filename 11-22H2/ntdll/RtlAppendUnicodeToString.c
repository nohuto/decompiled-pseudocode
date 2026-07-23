/*
 * XREFs of RtlAppendUnicodeToString @ 0x18000B5F0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000AFE8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     _ValidateAndStandardizeOverlayPaths @ 0x18000B338 (_ValidateAndStandardizeOverlayPaths.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B474 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002C594 (LdrpFindKnownDll.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085244 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E4844 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E5180 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800E84C8 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800EBEFC (LdrpMUIEtwOutput.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801015CC (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  wchar_t *v5; // rsi

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( Destination->Length + v4 <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, (unsigned __int16)(2 * v3));
      Destination->Length += v4;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)v4 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
