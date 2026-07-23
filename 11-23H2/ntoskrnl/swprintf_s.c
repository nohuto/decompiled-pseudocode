/*
 * XREFs of swprintf_s @ 0x1403DE5A0
 * Callers:
 *     HalpExtBuildResourceIdString @ 0x140378FB8 (HalpExtBuildResourceIdString.c)
 *     RtlIpv6AddressToStringExW @ 0x1403A3E80 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1403A3F60 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1403B5DA0 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1403BF880 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1403BF950 (RtlIpv4AddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140671CF4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x140797E34 (_PnpSetPropertyWorker.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1407BFDD4 (SiGetBootDeviceName.c)
 *     BiAddStoreFromFile @ 0x140802938 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 *     CmpRestampVersion @ 0x14080C230 (CmpRestampVersion.c)
 *     ExpTranslateEfiPath @ 0x14083E820 (ExpTranslateEfiPath.c)
 *     CmSetAcpiHwProfile @ 0x14084A614 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DDC4 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1408801B0 (_CmCreateOrdinalInstanceKey.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0C20 (PopPotsLogPowerTransitionReliability.c)
 *     SddlpUuidToString @ 0x1409D2D58 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1409FBEEC (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC3F8 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409FC8AC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409FCCD0 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409FD400 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FEB30 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FECC0 (NtDeleteDriverEntry.c)
 *     CmpAddAcpiAliasEntry @ 0x140A101F0 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140A10464 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A10C70 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140A10F4C (CmpMoveBiosAliasTable.c)
 *     BiUnloadHiveByName @ 0x140A5D84C (BiUnloadHiveByName.c)
 *     BiCreateBootEntry @ 0x140A5DCDC (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140A5F684 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140A60704 (SiGetBiosSystemPartition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B35D5C (PopPotsLogDirtyPowerTransition.c)
 *     CreateMiniNtBootKey @ 0x140B90794 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403DE5D0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
