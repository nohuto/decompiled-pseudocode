/*
 * XREFs of _wcsicmp @ 0x180090EB0
 * Callers:
 *     RtlpHashStringToAtom @ 0x180003AC0 (RtlpHashStringToAtom.c)
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180008020 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlGetFileMUIPath @ 0x180009560 (RtlGetFileMUIPath.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180010228 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpLangNameInMultiSzString @ 0x1800102C0 (RtlpLangNameInMultiSzString.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013A08 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x180016748 (RtlpMuiRegGetStringIndexInPool.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrRscIsTypeExist @ 0x180029080 (LdrRscIsTypeExist.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007AE4C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E5F84 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800E6060 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E6318 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E67D0 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6D28 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18011228C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180112668 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180113644 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PsspWalkHandleTable @ 0x18012AE84 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r9
  signed __int64 v3; // r8
  unsigned __int16 v4; // dx
  wchar_t v5; // cx

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3) + 32;
    if ( (unsigned __int16)(*(const wchar_t *)((char *)v2 + v3) - 65) > 0x19u )
      v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2 + 32;
    if ( (unsigned __int16)(*v2 - 65) > 0x19u )
      v5 = *v2;
    ++v2;
  }
  while ( v4 && v4 == v5 );
  return v4 - v5;
}
