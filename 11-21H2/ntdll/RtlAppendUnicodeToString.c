/*
 * XREFs of RtlAppendUnicodeToString @ 0x18004F4E0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18004C948 (LdrpFindKnownDll.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18004F360 (_GetOverlayPackageKeyForLanguage.c)
 *     _ValidateAndStandardizeOverlayPaths @ 0x1800508A0 (_ValidateAndStandardizeOverlayPaths.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180063C14 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x18008939C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E59B4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E630C (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800EC634 (LdrpMUIEtwOutput.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801018CC (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( *a1 + v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, (unsigned __int16)(2 * v3));
      *a1 += v4;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
