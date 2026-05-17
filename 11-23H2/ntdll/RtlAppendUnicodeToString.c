/*
 * XREFs of RtlAppendUnicodeToString @ 0x18000B3D0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000ADC8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     _ValidateAndStandardizeOverlayPaths @ 0x18000B118 (_ValidateAndStandardizeOverlayPaths.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B254 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BBE8 (RtlpGetTokenNamedObjectPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002C3C4 (LdrpFindKnownDll.c)
 *     WerpGlobalFlagsForProcess @ 0x1800519C4 (WerpGlobalFlagsForProcess.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085A44 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180086520 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E5B74 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E64B0 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800ED230 (LdrpMUIEtwOutput.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801029DC (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E928 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  void *v5; // rsi

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
