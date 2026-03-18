/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1402DFA30
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14064C4AC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14064C858 (AdtpFormatPrefix.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140660F7C (RtlpGetPolicyValueForSystemCapability.c)
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x14067B1DC (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     CmpNameFromAttributes @ 0x14067DB18 (CmpNameFromAttributes.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     IopSymlinkRememberJunction @ 0x1406B9BC0 (IopSymlinkRememberJunction.c)
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1406DE008 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpQueryNameString @ 0x140742C78 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MiGenerateSystemImageNames @ 0x140760554 (MiGenerateSystemImageNames.c)
 *     CmRealKCBToVirtualPath @ 0x14077CB98 (CmRealKCBToVirtualPath.c)
 *     VrpBuildKeyPath @ 0x14077FB68 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14080CD20 (CmpStartCLFSLog.c)
 *     IopGetRootDeviceId @ 0x14081F468 (IopGetRootDeviceId.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x140843AA4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140843B58 (AslRegistryBuildUserPath.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140947628 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbMountNode @ 0x14095C12C (PiDrvDbMountNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14095D038 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14095DC2C (PiDrvDbResolveSystemFilePath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAE18 (RtlpConstructCrossVmObjectPath.c)
 *     SepAddTokenOriginClaim @ 0x1409CC540 (SepAddTokenOriginClaim.c)
 *     SdbResolveDatabaseEx @ 0x140A139FC (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x140A1B9F0 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A1BCE4 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140A1BF48 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A1C7F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A1C88C (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B12AF0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140B13B7C (CmpAddDriverToList.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B4FF80 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
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
