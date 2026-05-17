/*
 * XREFs of RtlImageNtHeaderEx @ 0x18003CF10
 * Callers:
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1800349A0 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x180034CF4 (LdrpValidateEntrySection.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     LdrpGetFromMUIMemCache @ 0x18003AC48 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18004D268 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     LdrGetDllHandleByMapping @ 0x180050C70 (LdrGetDllHandleByMapping.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x180052FA8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180053020 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpResGetResourceDirectory @ 0x1800654F0 (LdrpResGetResourceDirectory.c)
 *     CsrClientConnectToServer @ 0x1800794A0 (CsrClientConnectToServer.c)
 *     LdrpInitializeTls @ 0x18007A64C (LdrpInitializeTls.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007B978 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpSetProtection @ 0x180088FC8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x18008B610 (LdrRelocateImageWithBias.c)
 *     LdrpIsExecutableRelocatedImage @ 0x18008E310 (LdrpIsExecutableRelocatedImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpInitializeExceptionTable @ 0x1800DD1F0 (LdrpInitializeExceptionTable.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E061C (LdrpLoadPatchedNtdll.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLocateMrdata @ 0x1800E2008 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1801017F0 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x18010BB60 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  char v7; // cl
  unsigned __int64 v8; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_16:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v8 = *(unsigned int *)(a2 + 60);
  if ( v7 && (v8 >= a3 || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v8);
    if ( a2 + v8 >= a2 && *v6 == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
