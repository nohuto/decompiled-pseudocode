/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18001ACC0
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x18000951C (RtlDoesFileExists_UEx.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_UEx @ 0x180019390 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002C3C4 (LdrpFindKnownDll.c)
 *     LdrpHpatAllocationOptOut @ 0x18002CA50 (LdrpHpatAllocationOptOut.c)
 *     WerpGlobalFlagsForProcess @ 0x1800519C4 (WerpGlobalFlagsForProcess.c)
 *     CompatCachepLookupCdb @ 0x18007427C (CompatCachepLookupCdb.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     RtlDosSearchPath_U @ 0x1800790A0 (RtlDosSearchPath_U.c)
 *     RtlIsDosDeviceName_U @ 0x18007B880 (RtlIsDosDeviceName_U.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x180087120 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0478 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EF7F0 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x1801286EC (SbpResolveBasedOnName.c)
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
