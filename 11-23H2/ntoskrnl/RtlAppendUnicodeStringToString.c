/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140208A00
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF96C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14063160C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067081C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140671268 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671614 (AdtpFormatPrefix.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 *     MiGenerateSystemImageNames @ 0x140704854 (MiGenerateSystemImageNames.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     IoQueryDeviceDescription @ 0x1407CE740 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CE854 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CECF8 (pIoQueryBusDescription.c)
 *     IopBootLog @ 0x1407E379C (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3924 (SepAddTokenOriginClaim.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF278 (RtlpGetPolicyValueForSystemCapability.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x140811130 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408133F0 (PiDrvDbQuerySystemPathWin32.c)
 *     IopGetRootDeviceId @ 0x1408357B8 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084E830 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E99C (AslRegistryBuildUserPath.c)
 *     CmpStartCLFSLog @ 0x140873278 (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873584 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x14087F658 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x140945844 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x1409467E4 (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959338 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970250 (PiDrvDbMountNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971298 (PiDrvDbResolveSystemFilePath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDEF8 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A188B8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A18AB8 (CmVirtualKCBToRealPath.c)
 *     SdbResolveDatabaseEx @ 0x140A52A20 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x140A5B420 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B730 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140A5B994 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140A5BB84 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5C22C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C2C8 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A740F4 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
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
