/*
 * XREFs of swprintf_s @ 0x1403DE3C0
 * Callers:
 *     HalpExtBuildResourceIdString @ 0x140378E18 (HalpExtBuildResourceIdString.c)
 *     RtlIpv6AddressToStringExW @ 0x1403A3CA0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1403A3D80 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1403B5BC0 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1403BF6A0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1403BF770 (RtlIpv4AddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1406717A4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x140797C44 (_PnpSetPropertyWorker.c)
 *     SeGetTokenDeviceMap @ 0x1407AF750 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1407BFB04 (SiGetBootDeviceName.c)
 *     BiAddStoreFromFile @ 0x140802668 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 *     CmpRestampVersion @ 0x14080BF60 (CmpRestampVersion.c)
 *     ExpTranslateEfiPath @ 0x14083E520 (ExpTranslateEfiPath.c)
 *     CmSetAcpiHwProfile @ 0x14084A314 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DB84 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087FF70 (_CmCreateOrdinalInstanceKey.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0A20 (PopPotsLogPowerTransitionReliability.c)
 *     SddlpUuidToString @ 0x1409D2B58 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1409FBC5C (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC168 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1409FC61C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1409FCA40 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1409FD170 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD900 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FE8A0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FEA30 (NtDeleteDriverEntry.c)
 *     CmpAddAcpiAliasEntry @ 0x140A0FF40 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A109C0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140A10C9C (CmpMoveBiosAliasTable.c)
 *     BiUnloadHiveByName @ 0x140A5D59C (BiUnloadHiveByName.c)
 *     BiCreateBootEntry @ 0x140A5DA2C (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140A5F3D4 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140A60454 (SiGetBiosSystemPartition.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B35D5C (PopPotsLogDirtyPowerTransition.c)
 *     CreateMiniNtBootKey @ 0x140B90794 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403DE3F0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
