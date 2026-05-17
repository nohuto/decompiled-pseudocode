/*
 * XREFs of _wcsicmp @ 0x1800956E0
 * Callers:
 *     LdrRscIsTypeExist @ 0x180036140 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18004AA90 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x18004BFA4 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlpAddNeutralsToMergedList @ 0x18004C2E4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpLangNameInMultiSzString @ 0x18004C8DC (RtlpLangNameInMultiSzString.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180050610 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180050DFC (LdrpVerifyAlternateResourceModuleEx.c)
 *     PsspWalkHandleTable @ 0x180061930 (PsspWalkHandleTable.c)
 *     RtlpHashStringToAtom @ 0x1800629D0 (RtlpHashStringToAtom.c)
 *     RtlGetFileMUIPath @ 0x1800634A0 (RtlGetFileMUIPath.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrRemoveLoadAsDataTable @ 0x180067870 (LdrRemoveLoadAsDataTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E5DC4 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800E5EA0 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E6168 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E6638 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6B9C (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18011098C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180110D60 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180111D58 (RtlpMuiRegLangInfoMatchesSpec.c)
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
