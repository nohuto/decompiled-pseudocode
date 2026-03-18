/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140208A00
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF78C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FA40 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x1406310BC (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1406702CC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140670D18 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1406710C4 (AdtpFormatPrefix.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 *     MiGenerateSystemImageNames @ 0x140704644 (MiGenerateSystemImageNames.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     IoQueryDeviceDescription @ 0x1407CE470 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1407CE584 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEA28 (pIoQueryBusDescription.c)
 *     IopBootLog @ 0x1407E34CC (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3654 (SepAddTokenOriginClaim.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EEFA8 (RtlpGetPolicyValueForSystemCapability.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x140810E60 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140811978 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140813120 (PiDrvDbQuerySystemPathWin32.c)
 *     IopGetRootDeviceId @ 0x1408354B8 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084E530 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E69C (AslRegistryBuildUserPath.c)
 *     CmpStartCLFSLog @ 0x140873038 (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873344 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopSymlinkRememberJunction @ 0x14087F418 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x1409465E4 (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959138 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpLogVetoInformation @ 0x1409643E0 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970050 (PiDrvDbMountNode.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971098 (PiDrvDbResolveSystemFilePath.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDCF8 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A18608 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A18808 (CmVirtualKCBToRealPath.c)
 *     SdbResolveDatabaseEx @ 0x140A52770 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x140A5B170 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B480 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140A5B6E4 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140A5B8D4 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BF7C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C018 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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
