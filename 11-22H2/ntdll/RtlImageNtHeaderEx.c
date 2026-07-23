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
