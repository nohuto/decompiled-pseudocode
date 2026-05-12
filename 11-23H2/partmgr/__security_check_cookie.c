/*
 * XREFs of __security_check_cookie @ 0x1C000B3D0
 * Callers:
 *     ?Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z @ 0x1C00050EC (-Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005DCC (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@U6@U6@U6@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@3433888888@Z @ 0x1C0005EA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_tlgWrapperBy.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@34338@Z @ 0x1C0007148 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_ea_1C0007148.c)
 *     McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer @ 0x1C0007BB4 (McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qb.c)
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1C0008F54 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x1C0009094 (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1C0009410 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z @ 0x1C0009E60 (-ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x1C0009EE8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?PmPowerContextInitialization@@YAJPEAU_DISK_POWER_CONTEXT@@W4_DISK_DEVICEPOWER_TYPE@@@Z @ 0x1C000AA10 (-PmPowerContextInitialization@@YAJPEAU_DISK_POWER_CONTEXT@@W4_DISK_DEVICEPOWER_TYPE@@@Z.c)
 *     ?PmQueryDWORDValueKey@@YAJPEAXPEBGPEAK@Z @ 0x1C000AE24 (-PmQueryDWORDValueKey@@YAJPEAXPEBGPEAK@Z.c)
 *     __GSHandlerCheckCommon @ 0x1C000B4AC (__GSHandlerCheckCommon.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 *     McTemplateK0pxxu_EtwWriteTransfer @ 0x1C000CA94 (McTemplateK0pxxu_EtwWriteTransfer.c)
 *     McTemplateK0pxxxquu_EtwWriteTransfer @ 0x1C000CB2E (McTemplateK0pxxxquu_EtwWriteTransfer.c)
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 *     ?PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000EA40 (-PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C000EFC4 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C000F038 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     PartitionOverlapIo @ 0x1C000F0C0 (PartitionOverlapIo.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x1C000F3E0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C000F484 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6A.c)
 *     ?PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z @ 0x1C000F5EC (-PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z.c)
 *     McTemplateK0xxx_EtwWriteTransfer @ 0x1C000FBA4 (McTemplateK0xxx_EtwWriteTransfer.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0010F18 (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C001145C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 *     PmUpdateAttributes @ 0x1C001CAC8 (PmUpdateAttributes.c)
 *     ?PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z @ 0x1C001D710 (-PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z.c)
 *     PmEtwControlComplete @ 0x1C001E574 (PmEtwControlComplete.c)
 *     PmEtwControlStart @ 0x1C001E5EC (PmEtwControlStart.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_INFO@@@Z @ 0x1C001F668 (-PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_I.c)
 *     ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4 (-PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmReadSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAPEAU_DISK_SNAPSHOT_DATA@@PEAK@Z @ 0x1C001FF7C (-PmReadSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAPEAU_DISK_SN.c)
 *     ?PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z @ 0x1C00211F0 (-PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     ?PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z @ 0x1C0021DEC (-PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z.c)
 *     PmSetInitialDiskAttributes @ 0x1C0021F84 (PmSetInitialDiskAttributes.c)
 *     ?PmSetVolumeManagerAltitude@@YAJPEAU_VOLUME_MANAGER@@@Z @ 0x1C0022F08 (-PmSetVolumeManagerAltitude@@YAJPEAU_VOLUME_MANAGER@@@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0023238 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6 (PmIoctlPassThroughQuerySectorWriteAta.c)
 *     PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976 (PmIoctlPassThroughQuerySectorWriteScsi.c)
 *     ?PmReadPartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_PARTITION_ATTRIBUTES_TABLE@@PEAK@Z @ 0x1C0024CC0 (-PmReadPartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_PARTITION_ATTRIBUTES_TABLE@@PEA.c)
 *     ?PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z @ 0x1C0024E3C (-PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z.c)
 *     PmSetPartition @ 0x1C0024FD8 (PmSetPartition.c)
 *     PartitionIoctlManageBypassIo @ 0x1C0025198 (PartitionIoctlManageBypassIo.c)
 *     PmIoctlSetClusterInfo @ 0x1C0025E84 (PmIoctlSetClusterInfo.c)
 *     ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38 (-PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z.c)
 *     ?PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C002734C (-PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564 (-PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmWriteSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C00278F0 (-PmWriteSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAU_DISK_SNAP.c)
 *     ?PmQueryGlobalSettings@@YAJPEAU_CONTROL_EXTENSION@@@Z @ 0x1C002A404 (-PmQueryGlobalSettings@@YAJPEAU_CONTROL_EXTENSION@@@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
