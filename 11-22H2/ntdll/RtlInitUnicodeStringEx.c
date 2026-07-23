/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18001AEA0
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x18000973C (RtlDoesFileExists_UEx.c)
 *     RtlpComputeLangListCheckSum @ 0x1800137EC (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_UEx @ 0x1800195A0 (RtlGetFullPathName_UEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002C594 (LdrpFindKnownDll.c)
 *     LdrpHpatAllocationOptOut @ 0x18002CC20 (LdrpHpatAllocationOptOut.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     CompatCachepLookupCdb @ 0x180073C0C (CompatCachepLookupCdb.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     RtlDosSearchPath_U @ 0x180078A30 (RtlDosSearchPath_U.c)
 *     RtlIsDosDeviceName_U @ 0x18007B210 (RtlIsDosDeviceName_U.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x180086920 (LdrGetKnownDllSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800DF14C (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE200 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EE3E0 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x18012723C (SbpResolveBasedOnName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
