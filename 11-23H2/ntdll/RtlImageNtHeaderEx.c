/*
 * XREFs of RtlImageNtHeaderEx @ 0x180024950
 * Callers:
 *     LdrpInitializeTls @ 0x1800042A0 (LdrpInitializeTls.c)
 *     LdrpResGetResourceDirectory @ 0x180006000 (LdrpResGetResourceDirectory.c)
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrpGetFromMUIMemCache @ 0x180022F48 (LdrpGetFromMUIMemCache.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18002B5C8 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B798 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002CB84 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrGetDllHandleByMapping @ 0x18002DCF0 (LdrGetDllHandleByMapping.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     CsrClientConnectToServer @ 0x18004B480 (CsrClientConnectToServer.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006BD80 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDF8 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007648C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007DAEC (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800895B8 (LdrpIsExecutableRelocatedImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpSetProtection @ 0x1800DC82C (LdrpSetProtection.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD320 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E0260 (LdrpLoadPatchedNtdll.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLocateMrdata @ 0x1800E1F94 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     LdrRelocateImageWithBias @ 0x1800EFA48 (LdrRelocateImageWithBias.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180102900 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x18010D1D0 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v5; // r10
  char v6; // r11
  unsigned int v7; // ecx

  result = 0LL;
  v5 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_16:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v7 = *(_DWORD *)(a2 + 60);
  if ( v6 && (v7 >= a3 || v7 >= 0xFFFFFFE7 || (unsigned __int64)v7 + 24 >= a3) )
  {
    result = 3221225595LL;
    v5 = 0LL;
    goto LABEL_18;
  }
  if ( v7 < 0x10000000 )
  {
    v5 = (_DWORD *)(a2 + v7);
    if ( (unsigned __int64)v5 >= a2 && *v5 == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = 3221225595LL;
  v5 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v5;
  return result;
}
