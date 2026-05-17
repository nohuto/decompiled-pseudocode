/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180047F30
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_UEx @ 0x180043A20 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800448E4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlIsDosDeviceName_U @ 0x18004AA60 (RtlIsDosDeviceName_U.c)
 *     LdrpFindKnownDll @ 0x18004C948 (LdrpFindKnownDll.c)
 *     RtlDosSearchPath_U @ 0x1800606F0 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_UEx @ 0x180063E54 (RtlDoesFileExists_UEx.c)
 *     CompatCachepLookupCdb @ 0x18007AEC0 (CompatCachepLookupCdb.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     LdrGetKnownDllSectionHandle @ 0x18008AA50 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0834 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ED690 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EEB28 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x1801257CC (SbpResolveBasedOnName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !a2 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    *(_WORD *)a1 = v3;
    *(_WORD *)(a1 + 2) = v3 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
