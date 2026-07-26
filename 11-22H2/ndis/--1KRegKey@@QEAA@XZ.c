/*
 * XREFs of ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B7BD4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C3C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C0118F48 (ndisIfReadHiddenFlag.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011909C (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119240 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C011B904 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C011BAC4 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011BF1C (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C598 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7F8 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C011CA60 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CF24 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C011D054 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C011D2A4 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8F0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB6C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B950 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C012BED8 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C012BF90 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135A30 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C013A1A0 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A518 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C013A7C0 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C013AFF8 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C013B188 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B31C (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C013B4AC (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x1C013CAB8 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C013CDE8 (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF64 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C013D150 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2E0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     GetModuleServiceName @ 0x1C0141548 (GetModuleServiceName.c)
 *     ndisBindBuilderLoadSettings @ 0x1C0160358 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KRegKey::~KRegKey(KRegKey *this)
{
  void *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
    ZwClose(m_ptr);
}
