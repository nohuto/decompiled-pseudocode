/*
 * XREFs of _wcsicmp @ 0x1800906B0
 * Callers:
 *     RtlpHashStringToAtom @ 0x180003960 (RtlpHashStringToAtom.c)
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180007C40 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180010438 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpLangNameInMultiSzString @ 0x1800104D0 (RtlpLangNameInMultiSzString.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013C18 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x180016958 (RtlpMuiRegGetStringIndexInPool.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrRscIsTypeExist @ 0x180029250 (LdrRscIsTypeExist.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007A7DC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E4C54 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800E4D30 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800E4FE8 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E54A0 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E59F8 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180110E0C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1801111E8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1801121C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PsspWalkHandleTable @ 0x180129A04 (PsspWalkHandleTable.c)
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
