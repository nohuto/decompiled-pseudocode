/*
 * XREFs of swprintf_s @ 0x1403E5D20
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14023FDF0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14023FEC0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x140252690 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1402527A0 (RtlIpv6AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403BE424 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x1403DE770 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14064D1D4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SiGetBootDeviceName @ 0x1406BAFD4 (SiGetBootDeviceName.c)
 *     RtlStringFromGUIDEx @ 0x1407454A8 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x140768894 (PnpInitializeNotifyEntry.c)
 *     _PnpSetPropertyWorker @ 0x140772790 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140772E98 (_CmCreateOrdinalInstanceKey.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1407FE3D8 (PopPotsLogPowerTransitionReliability.c)
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     BiUnloadHiveByName @ 0x1408073EC (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x14081210C (BiAddStoreFromFile.c)
 *     CmpRestampVersion @ 0x140834B5C (CmpRestampVersion.c)
 *     CmSetAcpiHwProfile @ 0x140837F88 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085EDEC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x14091D950 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14091E3D0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x14091E6AC (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x1409CFFF0 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1409FBB20 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC108 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409FC5BC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409FC9E0 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409FD4A0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1409FE5F4 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1409FF390 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FF520 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x140A1EE84 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140A215D4 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140A22650 (SiGetBiosSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140B4B5E0 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B53288 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x1403E5D50 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
