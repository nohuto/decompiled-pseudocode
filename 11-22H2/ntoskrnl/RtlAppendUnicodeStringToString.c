/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140208A00
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF0FC (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FAB0 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14063112C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140670D88 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671134 (AdtpFormatPrefix.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     MiGenerateSystemImageNames @ 0x1407046F4 (MiGenerateSystemImageNames.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 *     IoQueryDeviceDescription @ 0x1407CEA00 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CEB14 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEFB8 (pIoQueryBusDescription.c)
 *     IopBootLog @ 0x1407E3A4C (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3BD4 (SepAddTokenOriginClaim.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF528 (RtlpGetPolicyValueForSystemCapability.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140813EF8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 *     IopGetRootDeviceId @ 0x140837008 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084F3B0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084F51C (AslRegistryBuildUserPath.c)
 *     CmpStartCLFSLog @ 0x140873508 (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x14087F8E8 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x1409456F4 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140946694 (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409591E8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970100 (PiDrvDbMountNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971148 (PiDrvDbResolveSystemFilePath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDDA8 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A186B8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A188B8 (CmVirtualKCBToRealPath.c)
 *     SdbResolveDatabaseEx @ 0x140A527E0 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x140A5B1E0 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B4F0 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140A5B754 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140A5B944 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BFEC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C088 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140B5D228 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B72B88 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B95930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // esi
  wchar_t *v4; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( Destination->Length + Length <= Destination->MaximumLength )
  {
    v4 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
    memmove(v4, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v4[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
