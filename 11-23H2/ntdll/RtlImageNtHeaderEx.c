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
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x18010D1A0 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v5; // r10
  char v6; // r11
  unsigned int v7; // ecx

  result = 0;
  v5 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage != 23117 )
  {
LABEL_16:
    result = -1073741701;
    goto LABEL_18;
  }
  v7 = *((_DWORD *)BaseOfImage + 15);
  if ( v6 && (v7 >= Size || v7 >= 0xFFFFFFE7 || (unsigned __int64)v7 + 24 >= Size) )
  {
    result = -1073741701;
    v5 = 0LL;
    goto LABEL_18;
  }
  if ( v7 < 0x10000000 )
  {
    v5 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
    if ( v5 >= BaseOfImage && v5->Signature == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = -1073741701;
  v5 = 0LL;
LABEL_18:
  if ( result >= 0 )
    *OutHeaders = v5;
  return result;
}
