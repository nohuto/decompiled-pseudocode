/*
 * XREFs of RtlImageNtHeaderEx @ 0x180024AA0
 * Callers:
 *     LdrpInitializeTls @ 0x180004220 (LdrpInitializeTls.c)
 *     LdrpResGetResourceDirectory @ 0x180005C20 (LdrpResGetResourceDirectory.c)
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B440 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpProcessMappedModule @ 0x18002B594 (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18002B798 (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B968 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18002CD54 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrGetDllHandleByMapping @ 0x18002DEC0 (LdrGetDllHandleByMapping.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     CsrClientConnectToServer @ 0x18004B5E0 (CsrClientConnectToServer.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006BD84 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDFC (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180075E1C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D47C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpIsExecutableRelocatedImage @ 0x180088DB8 (LdrpIsExecutableRelocatedImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpSetProtection @ 0x1800DCE7C (LdrpSetProtection.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD970 (LdrpInitializeExceptionTable.c)
 *     LdrpLoadPatchedNtdll @ 0x1800DEF34 (LdrpLoadPatchedNtdll.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E02B4 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLocateMrdata @ 0x1800E0C64 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     LdrRelocateImageWithBias @ 0x1800EE638 (LdrRelocateImageWithBias.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1801014F0 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x18010BD30 (RtlImageNtHeaderEx_ExceptionFilter.c)
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
