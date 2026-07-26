/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C002F430 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00147A8 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C001834C (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     NdisInitializeTimer @ 0x1C0018B40 (NdisInitializeTimer.c)
 *     NdisWriteConfiguration @ 0x1C001AC80 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001DD6C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00226C0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C00228A8 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0023120 (WPP_RECORDER_SF_dd_ea_1C0023120.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0024040 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025AD8 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00260F4 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026240 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002639C (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002E53C (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C002EC68 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EDFC (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F1B8 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F5C4 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00330B8 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033E7C (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x1C0034420 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1C0056A5C (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0056ECC (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006332C (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0064690 (NdisWriteErrorLogEntry.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0064C50 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00696A4 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00703BC (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00715D8 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C007D41C (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008AE64 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C008BE4C (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C008C330 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008C940 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008CA38 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008CC58 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009394C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C01054B8 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B30C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BE0C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C010C02C (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C4F8 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010C570 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010D6F8 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010DFC0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0110FC8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01129CC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0112F64 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115EE8 (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011EAD4 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C0120DEC (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0121DF4 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A724 (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A768 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CF14 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C0139420 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A30C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C013EEF8 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0140B70 (-ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0149B88 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  char v8; // r13
  unsigned __int8 AttachedDevice; // bl
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // r8
  NTSTATUS v11; // eax
  int ReenumerateSelfInterface; // esi
  _NDIS_M_DRIVER_BLOCK *v13; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int v16; // r8d
  unsigned int i; // edx
  __int64 v18; // rcx
  int v19; // eax
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  int v21; // eax
  int v22; // ebx
  struct _NDIS_MINIPORT_BLOCK **p_BaseMiniport; // rdx
  unsigned __int8 v24; // bl
  _NDIS_MEDIUM MediaType; // edx
  unsigned __int8 v26; // al
  KIRQL v27; // dl
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int DefaultNicSwitch; // r14d
  unsigned int PnPFlags; // r9d
  int v34; // ecx
  unsigned int v35; // r8d
  KIRQL v36; // dl
  NTSTATUS v37; // ebx
  char v38; // r12
  NTSTATUS v39; // ebx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  struct _NDIS_IF_BLOCK *v41; // rdx
  int updated; // ebx
  int OidList; // ebx
  _NDIS_MINIPORT_OFFLOAD *v44; // rax
  struct _NDIS_M_DRIVER_BLOCK *v45; // r14
  enum Ndis::ReadBindingsOptions::Flags v46; // r8d
  struct _NDIS_MINIPORT_BLOCK *v47; // rdx
  int v48; // edx
  bool v49; // cf
  KIRQL v50; // dl
  char v51; // bl
  char v52; // r15
  char v53; // si
  char v54; // bl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v55; // rcx
  _NDIS_MINIPORT_STATS *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  void (__fastcall *DeferredContext)(void *, _NDIS_SHUTDOWN_ACTION); // rax
  _DEVICE_RESET_INTERFACE_STANDARD *v60; // rax
  unsigned int v61; // ebx
  NDIS_STATUS v62; // eax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *PciDeviceCustomProperties; // rax
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  int v66; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  unsigned __int8 v68; // al
  unsigned int PnPCapabilities; // r8d
  unsigned int v70; // edx
  unsigned __int32 v71; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  bool v73; // zf
  bool v74; // cc
  unsigned int v75; // eax
  $59B21B9036B889DF057A889162EED3F8 *v76; // rbx
  NTSTATUS v77; // ebx
  _NDIS_MINIPORT_OFFLOAD *v78; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v80; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v81; // rcx
  int v82; // edx
  int v83; // edx
  unsigned int Flags; // eax
  void (__fastcall *v85)(void *, _NDIS_PACKET **, unsigned int); // rax
  unsigned __int8 (__fastcall *v86)(_NDIS_MINIPORT_BLOCK *); // rax
  unsigned int v87; // eax
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v89; // rax
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  int v91; // edx
  struct _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  KIRQL v93; // dl
  KIRQL v94; // dl
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  char v96[8]; // [rsp+28h] [rbp-D8h]
  char v97[8]; // [rsp+30h] [rbp-D0h]
  int v98; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v99; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL NewIrql; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v101; // [rsp+42h] [rbp-BEh]
  char v102; // [rsp+43h] [rbp-BDh]
  char v103; // [rsp+44h] [rbp-BCh]
  char v104; // [rsp+45h] [rbp-BBh]
  bool v105; // [rsp+46h] [rbp-BAh]
  char v106[4]; // [rsp+48h] [rbp-B8h] BYREF
  char v107; // [rsp+4Ch] [rbp-B4h]
  char v108; // [rsp+4Dh] [rbp-B3h]
  char v109; // [rsp+4Eh] [rbp-B2h]
  char v110; // [rsp+4Fh] [rbp-B1h]
  char v111; // [rsp+50h] [rbp-B0h]
  char v112; // [rsp+51h] [rbp-AFh]
  _DEVICE_OBJECT *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v114; // [rsp+60h] [rbp-A0h]
  char v115; // [rsp+64h] [rbp-9Ch]
  char v116; // [rsp+65h] [rbp-9Bh]
  __int16 v117; // [rsp+66h] [rbp-9Ah]
  int v118; // [rsp+68h] [rbp-98h] BYREF
  int v119; // [rsp+6Ch] [rbp-94h]
  int Status; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v121; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v122; // [rsp+78h] [rbp-88h] BYREF
  int v123; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Keyword; // [rsp+B0h] [rbp-50h] BYREF
  struct _X_FILTER *v128[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v129; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v131; // [rsp+100h] [rbp+0h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v133[2]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v134; // [rsp+168h] [rbp+68h]
  char v135[160]; // [rsp+180h] [rbp+80h] BYREF
  char v136[160]; // [rsp+220h] [rbp+120h] BYREF
  char v137[160]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v138[160]; // [rsp+360h] [rbp+260h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v139; // [rsp+400h] [rbp+300h] BYREF
  _DWORD v140[6]; // [rsp+4E0h] [rbp+3E0h] BYREF
  GUID InterfaceClassGuid; // [rsp+4F8h] [rbp+3F8h] BYREF
  GUID v142; // [rsp+508h] [rbp+408h] BYREF
  _OWORD v143[3]; // [rsp+518h] [rbp+418h] BYREF
  __int64 v144; // [rsp+548h] [rbp+448h]
  int v145; // [rsp+550h] [rbp+450h]
  char v146; // [rsp+560h] [rbp+460h] BYREF

  InputBuffer = a1;
  memset(&v131, 0, sizeof(v131));
  v123 = 0;
  *(_OWORD *)v128 = 0LL;
  v129 = 0LL;
  DestinationString = 0LL;
  *(_DWORD *)v106 = 1;
  v8 = 0;
  v118 = 1;
  v122 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v121 = 0;
  NewIrql = 0;
  memset(v143, 0, sizeof(v143));
  v104 = 0;
  v110 = 0;
  v102 = 0;
  v99 = 0;
  v103 = 0;
  v108 = 0;
  v112 = 0;
  v111 = 0;
  v107 = 0;
  v105 = 0;
  LOBYTE(v119) = 0;
  v144 = 0LL;
  v145 = 0;
  memset(&v139, 0, sizeof(v139));
  v109 = 0;
  v142 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      13LL,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)this,
      &this->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  AttachedDevice = (unsigned __int8)a1->AttachedDevice;
  v101 = AttachedDevice;
  if ( !ndisReferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)a1, 2u)
    || (v104 = 1,
        DestinationString.Buffer = (wchar_t *)&v146,
        *(_DWORD *)&DestinationString.Length = 0x1000000,
        RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr),
        RtlAppendUnicodeStringToString(&DestinationString, &this->BaseName) < 0) )
  {
    v45 = (struct _NDIS_M_DRIVER_BLOCK *)a1;
    goto LABEL_101;
  }
  v11 = IoCreateSymbolicLink(&DestinationString, &this->FdoName);
  ReenumerateSelfInterface = v11;
  v105 = v11 >= 0 || v11 == -1073741771;
  this->DeviceContext = a5;
  this->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  this->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  this->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  this->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  this->EthRxIndicateHandler = (void (__fastcall *)(_X_FILTER *, void *, char *, void *, unsigned int, void *, unsigned int, unsigned int))EthFilterDprIndicateReceive;
  this->EthRxCompleteHandler = (void (__fastcall *)(_X_FILTER *))EthFilterDprIndicateReceiveComplete;
  this->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))NdisMSendComplete;
  this->SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete;
  this->TDCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int, unsigned int))NdisMTransferDataComplete;
  this->ResetCompleteHandler = (void (__fastcall *)(void *, int, unsigned __int8))NdisMResetComplete;
  this->StatusHandler = (void (__fastcall *)(void *, int, void *, unsigned int))NdisMIndicateStatus;
  this->StatusCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
  this->SendResourcesHandler = (void (__fastcall *)(void *))NdisMSendResourcesAvailable;
  this->QueryCompleteHandler = (void (__fastcall *)(void *, int))NdisMQueryInformationComplete;
  this->SetCompleteHandler = (void (__fastcall *)(void *, int))NdisMSetInformationComplete;
  this->WanSendCompleteHandler = (void (__fastcall *)(void *, void *, int))ndisMWanSendCompleteInternal;
  this->WanRcvHandler = (void (__fastcall *)(int *, void *, void *, unsigned __int8 *, unsigned int))NdisMWanIndicateReceive;
  this->WanRcvCompleteHandler = (void (__fastcall *)(void *, void *))NdisMWanIndicateReceiveComplete;
  this->NoFilter.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  this->Next.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  this->NormalTopReceive = 1;
  this->NoFilter.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  this->NoFilter.SendNetBufferListsCompleteContext = this;
  this->NoFilter.SendNetBufferListsCompleteObject = &this->Header;
  this->Next.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  this->Next.SendNetBufferListsCompleteContext = this;
  this->Next.SendNetBufferListsCompleteObject = &this->Header;
  this->NoFilter.RequestHandle = this;
  this->NoFilter.DirectRequestHandle = this;
  this->Next.RequestHandle = this;
  this->Next.DirectRequestHandle = this;
  this->TimeOfInitialization.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( AttachedDevice < 6u )
  {
    Pool2 = (_NDIS_MINIPORT_STATS *)ExAllocatePool2(64LL, 112 * ndisMaxNumberOfProcessors, 538985550);
    this->BottomIfStats = Pool2;
    if ( !Pool2 )
    {
LABEL_144:
      v45 = (struct _NDIS_M_DRIVER_BLOCK *)a1;
      goto LABEL_101;
    }
    DriverHandle = this->DriverHandle;
    this->DeferredSendHandler = ndisMDeferredSend;
    this->DisableInterruptHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
    this->EnableInterruptHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
    this->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    this->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
    this->NoFilter.ReturnNetBufferListsContext = this;
    this->NoFilter.ReturnNetBufferListsObject = &this->Header;
    this->SendHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    if ( AttachedDevice >= 4u )
    {
      if ( a1->Dpc.DeferredRoutine )
        this->InfoFlags |= 0x10u;
      this->SynchronousReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      this->MiniportReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      this->SynchronousReturnPacketContext = this->MiniportAdapterContext;
      if ( a1->Dpc.DeferredContext )
      {
        this->SendFlags |= 1u;
        this->DeferredSendHandler = ndisMDeferredSendPackets;
        DeferredContext = (void (__fastcall *)(void *, _NDIS_SHUTDOWN_ACTION))a1->Dpc.DeferredContext;
        this->InfoFlags |= 0x8000000u;
        this->WSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))DeferredContext;
      }
      if ( AttachedDevice >= 5u )
      {
        this->InfoFlags |= 0x200u;
        if ( *(_QWORD *)&a1->DeviceLock.Header.Lock )
        {
          this->Flags |= 0x20000u;
          a1[1].Dpc.ProcessorHistory = (unsigned __int64)ndisMCoOidRequestToRequest;
          this->NextCoOidRequestHandle = this;
        }
      }
    }
  }
  else
  {
    v13 = this->DriverHandle;
    this->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = v13->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    this->NoFilter.ReturnNetBufferListsContext = this->MiniportAdapterContext;
    this->NoFilter.ReturnNetBufferListsTracker = this->NblTracker;
    this->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    this->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    this->NoFilter.ReturnNetBufferListsObject = &this->Header;
    this->SynchronousReturnPacketContext = this;
    if ( *(_QWORD *)&a1[1].Dpc.TargetInfoAsUlong )
      this->Flags |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(this, MPREF_PNP_INITIALIZED);
  v110 = 1;
  if ( this->CurrentDevicePowerState == PowerDeviceUnspecified )
  {
    this->CurrentDevicePowerState = PowerDeviceD0;
    this->DriverPowerState = PowerDeviceD0;
  }
  ndisQueryPowerCapabilities(this);
  ndisMInitializeInitMode((char *)this);
  this->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                    0,
                                                    (__int64)this,
                                                    (__int64)this->pAdapterInstanceName);
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  this->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_144;
  v16 = ndisMaxNumberOfProcessors;
  v111 = 1;
  for ( i = 0; i < v16; *(_DWORD *)((char *)this->PeriodicReceivesNblCountIndex + v18) = 6 )
    v18 = i++ << 12;
  this->Flags = this->Flags & 0xDFFFFFFC | 0x20000002;
  if ( (BYTE2(a1->AttachedDevice) & 2) != 0 )
  {
    this->PnPFlags |= 0x100000u;
    if ( !ndisDriverTrackAlloc || (v73 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = this, !v73) )
      ndisMiniportTrackAlloc = 0LL;
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (this->PnPFlags & 0x100000) == 0 )
      goto LABEL_18;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_18;
  }
  this->DriverVerifyFlags |= 0x800u;
LABEL_18:
  v19 = ndisRssV2Initialize((char *)this);
  if ( v19 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v97 = v19;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        (char)this,
        *(_QWORD *)v97);
    }
    goto LABEL_144;
  }
  if ( a1[2].DeviceQueue.Lock )
  {
    if ( !this->ReenumerateSelfInterface )
    {
      ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                   this->NextDeviceObject,
                                   (PVOID *)&this->ReenumerateSelfInterface);
      if ( ReenumerateSelfInterface >= 0 )
      {
        v60 = this->ReenumerateSelfInterface;
        *((_DWORD *)&ConfigObject.Header + 1) = 0;
        *(&ConfigObject.Flags + 1) = 0;
        ConfigurationHandle = 0LL;
        v61 = (v60->SupportedResetTypes >> 1) & 1;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v97 = v60->SupportedResetTypes & 1;
          WPP_RECORDER_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)&WPP_RECORDER_INITIALIZED,
            1u,
            0x10u,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            (v60->SupportedResetTypes & 2) != 0,
            *(_QWORD *)v97);
        }
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = this;
        ConfigObject.Flags = 0;
        v62 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        Status = v62;
        if ( v62 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v96 = v62;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              1u,
              0x11u,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              *(_QWORD *)v96);
          }
        }
        else
        {
          *(_QWORD *)&Keyword.Length = 1966108LL;
          memset(&ParameterValue, 0, sizeof(ParameterValue));
          Keyword.Buffer = L"PldrCapability";
          ParameterValue.ParameterData.IntegerData = v61;
          NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
          if ( Status && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v96 = Status;
            WPP_RECORDER_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              1u,
              0x12u,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              *(_QWORD *)v96);
          }
          NdisCloseConfiguration(ConfigurationHandle);
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v97 = ReenumerateSelfInterface;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0xFu,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            (char)this,
            *(_QWORD *)v97);
        }
        ReenumerateSelfInterface = 0;
      }
    }
    AttachedDevice = v101;
  }
  this->State = NdisMiniportInitializing;
  v139.Header.Revision = 2;
  if ( AttachedDevice < 6u )
  {
    v22 = (*(__int64 (__fastcall **)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *))&a1->DeviceQueue.Type)(
            &v123,
            &v121,
            ndisMediumArray,
            15LL,
            this,
            a3);
    if ( this->BusType == PCIBus )
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(this, &this->PciDeviceCustomProperties);
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(this);
    v140[1] = this->DefaultPortSendControlState;
    v140[2] = this->DefaultPortRcvControlState;
    v140[3] = this->DefaultPortSendAuthorizationState;
    v140[4] = this->DefaultPortRcvAuthorizationState;
    AllocatedResources = this->AllocatedResources;
    v140[0] = 1311104;
    v131.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v131.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v73 = this->BusType == PCIBus;
    v131.IMDeviceInstanceContext = this->DeviceContext;
    v131.MiniportAddDeviceContext = this->AddDeviceContext;
    v131.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v140;
    v131.NetLuid.Value = this->NetLuid.Value;
    v131.IfIndex = this->IfIndex;
    if ( v73 )
    {
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(this, &this->PciDeviceCustomProperties);
      PciDeviceCustomProperties = v131.PciDeviceCustomProperties;
      if ( ReenumerateSelfInterface >= 0 )
        PciDeviceCustomProperties = &this->PciDeviceCustomProperties;
      v131.PciDeviceCustomProperties = PciDeviceCustomProperties;
    }
    if ( (this->Flags & 0x100) != 0 )
      v21 = ndisLWMInitializeHandler(this);
    else
      v21 = ndisMInvokeInitialize(this, &v131);
    v22 = v21;
    if ( this->BusType == PCIBus )
      ndisMReadPciPropertiesFromConfigSpace((char *)this);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v97 = v22;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)this,
      *(_QWORD *)v97);
  }
  if ( (byte_1C00EE582 & 8) != 0 )
  {
    v98 = v22;
    *(_DWORD *)v97 = 1;
    *(_QWORD *)v96 = this->NetLuid.Value;
    McTemplateK0jqxqq_EtwWriteTransfer();
  }
  this->Flags &= ~2u;
  if ( v22 )
  {
    this->State = NdisMiniportHalted;
    *(_QWORD *)&this->OperStatus = 2LL;
    IfBlock = this->IfBlock;
    if ( IfBlock && IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      this->IfBlock->ifOperStatusFlags = this->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(this);
    }
    if ( this->InvalidateBlockIoctlVf )
      ndisIovTeardownVf(this);
    ndisMDeregisterBugCheckHandler(this);
    *(_DWORD *)v106 = v22;
    if ( !this->TimerQueue )
    {
      if ( this->Interrupt )
        goto LABEL_329;
      if ( !this->InterruptEx )
      {
LABEL_332:
        v51 = v104;
        v45 = (struct _NDIS_M_DRIVER_BLOCK *)a1;
LABEL_100:
        v8 = 0;
        v103 = 0;
        v108 = 0;
        v107 = 0;
        v109 = 0;
        v110 = v51;
        v112 = v51;
        v111 = v51;
        goto LABEL_101;
      }
    }
    if ( !this->Interrupt )
    {
      if ( this->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          this->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)this, (ULONG_PTR)this->InterruptEx, 0LL);
      }
      if ( (this->Flags & 0x80u) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          this->pAdapterInstanceName,
          "Init failed without canceling timer");
        KeBugCheckEx(0x7Cu, 0xCuLL, (ULONG_PTR)this, (ULONG_PTR)this->TimerQueue, 0LL);
      }
      goto LABEL_332;
    }
LABEL_329:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      this->pAdapterInstanceName,
      "Init failed without deregistering interrupt",
      *(_QWORD *)v96,
      *(_QWORD *)v97,
      v98);
    KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)this, (ULONG_PTR)this->Interrupt, 0LL);
  }
  p_BaseMiniport = &this->BaseMiniport;
  v8 = 1;
  if ( (this->PnPFlags & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName(this->BindPaths->Paths, p_BaseMiniport, 1, 0x1Fu);
    BaseMiniport = this->BaseMiniport;
    if ( BaseMiniport )
      ndisDereferenceMiniportRef(BaseMiniport, 0x1Fu);
  }
  else
  {
    *p_BaseMiniport = this;
  }
  v24 = v101;
  if ( v101 < 6u )
  {
    Interrupt = this->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      this->Flags &= ~1u;
    else
      this->Flags |= 1u;
    if ( !this->ShutdownHandler )
    {
      this->ShutdownHandler = (void (__fastcall *)(void *))a1->DeviceObjectExtension;
      this->ShutdownContext = this->MiniportAdapterContext;
    }
    MediaType = *((_DWORD *)ndisMediumArray + v121);
    v139.MediaType = MediaType;
    this->MediaType = MediaType;
    this->MiniportMediaType = MediaType;
  }
  else
  {
    MediaType = this->MediaType;
  }
  this->State = NdisMiniportPaused;
  if ( (unsigned int)MediaType <= NdisMedium1394 )
  {
    v66 = 8390;
    if ( _bittest(&v66, MediaType) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x14u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          this);
      if ( (byte_1C00EE583 & 0x10) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer();
      goto LABEL_182;
    }
  }
  ndisMRegisterBugCheckHandler((char *)this);
  if ( this->MediaType != NdisMediumWan )
  {
LABEL_39:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(this, &NewIrql);
    v26 = ndisSetWakeUpTimer(this);
    v27 = NewIrql;
    v28 = (unsigned __int8)v119;
    if ( v26 )
      v28 = 1;
    this->MiniportThread = 0LL;
    v119 = v28;
    KeReleaseSpinLock(&this->Lock, v27);
    ndisMStartInitMode(this);
    if ( (unsigned int)ndisCreateNdisSupportedOidList(this) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v97 = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x15u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          (char)this,
          *(_QWORD *)v97);
      }
      if ( (byte_1C00EE582 & 0x10) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer();
      *(_DWORD *)v106 = 36;
      goto LABEL_193;
    }
    if ( v24 < 6u )
    {
      v139.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v143;
      this->GeneralAttributes = &v139;
      if ( (unsigned int)ndisGetMiniportInfo(this, &v139, (int *)v106, &v99, &v118)
        || ndisMSetGeneralAttributes(this, this->GeneralAttributes) )
      {
        goto LABEL_334;
      }
      Offload = this->Offload;
      if ( !Offload )
      {
LABEL_47:
        if ( (this->Flags & 0x180) != 0
          || (v31 = ndisCheckNetworkInterfaceDataMismatch(this, this->GeneralAttributes),
              !(unsigned int)NdisConvertNtStatusToNdisStatus(v31)) )
        {
          DefaultNicSwitch = ndisIovCreateDefaultNicSwitch(this);
          if ( !DefaultNicSwitch )
          {
            ndisMNotifyMachineName(this);
            PnPFlags = this->PnPFlags;
            if ( (PnPFlags & 0x8001) != 0 )
            {
              v34 = DefaultNicSwitch + 1;
            }
            else
            {
              v35 = this->PnPFlags;
              v34 = 1;
              if ( (this->DriverHandle->Flags & 1) == 0 )
                goto LABEL_56;
            }
            v35 = this->PnPFlags;
            if ( this->MediaType < (unsigned int)NdisMediumMax )
            {
              if ( v118 )
                v35 = PnPFlags & 0xFFFFFFFE;
              else
                v35 = v34 | PnPFlags;
              this->PnPFlags = v35;
            }
LABEL_56:
            if ( ((v35 & 0x200000) != 0 && ndisAoAcCapable || (this->FilterPnPFlags & 0x200) != 0)
              && (unsigned int)(this->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
              && (this->PMAdminConfig.Value & 0xC) == 0 )
            {
              DisableMagicPacketKeyword(this);
            }
            NdisInitializeTimer(&this->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, this);
            KeInitializeEvent(&this->WaitWakeIrpCompleted, NotificationEvent, 1u);
            ndisUpdatePMCurrentCapabilities(this);
            if ( (this->PnPFlags & 1) != 0 )
            {
              v68 = ndisCheckMiniportWakeUpCapable(this);
              PnPCapabilities = this->PnPCapabilities;
              if ( (PnPCapabilities & 8) == 0 )
              {
                v70 = this->PnPFlags | 0x20;
                v71 = this->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2;
                this->PnPFlags = v70;
                if ( v71 <= 2 )
                  this->PMCurrentParameters.WakeUpFlags |= 1u;
                if ( (PnPCapabilities & 0x10) == 0 && v68 )
                {
                  MinPatternWakeUp = this->PMAdvertisedCapabilities.MinPatternWakeUp;
                  if ( (unsigned int)(MinPatternWakeUp - 2) <= 1 || MinPatternWakeUp == NdisDeviceStateD3 )
                  {
                    v70 |= 0x40u;
                    this->PnPFlags = v70;
                  }
                  if ( (unsigned int)(this->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
                  {
                    this->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
                    v73 = this->MajorNdisVersion == 6;
                    v74 = this->MajorNdisVersion <= 6u;
                    this->PnPFlags = v70 | 0x40;
                    if ( !v74 || v73 && this->MinorNdisVersion >= 0x14u )
                    {
                      DefaultNicSwitch = ndisAddWoLMagicPacket(this);
                      if ( DefaultNicSwitch )
                      {
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        {
                          *(_DWORD *)v97 = DefaultNicSwitch;
                          WPP_RECORDER_SF_qL(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            2u,
                            1u,
                            0x16u,
                            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                            (char)this,
                            *(_QWORD *)v97);
                        }
                      }
                    }
                  }
                }
                if ( (this->Flags & 0x80u) == 0 )
                {
                  v75 = this->PnPFlags;
                  if ( (v75 & 0x40) != 0 )
                  {
                    if ( !this->WaitWakeIrp )
                    {
                      this->PnPFlags = v75 & 0xFFFFFBFF;
                      DefaultNicSwitch = ndisRequestWaitWake(this, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                    }
                  }
                  else
                  {
                    ndisCancelWaitWake(this);
                  }
                }
              }
            }
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(this, &NewIrql);
            if ( this->MediaConnectState == MediaConnectStateDisconnected )
              ndisSetMediaDisconnectTimer(this);
            v36 = NewIrql;
            this->MiniportThread = 0LL;
            KeReleaseSpinLock(&this->Lock, v36);
            this->D0CompleteSignalWorkItem.WorkItem.Context = this;
            this->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
            this->DevicePowerOnWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerOn;
            this->DevicePowerOnWorkItem.Workitem.Parameter = &this->DevicePowerOnWorkItem;
            this->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
            this->DevicePowerDownWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerDown;
            this->DevicePowerDownWorkItem.Workitem.Parameter = &this->DevicePowerDownWorkItem;
            this->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
            if ( (this->PMAdvertisedCapabilities.Flags & 6) != 0 )
              ndisSelectiveSuspendInitialize(this);
            if ( (this->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (this->FilterPnPFlags & 0x200) != 0 )
            {
              ndisAoAcInitialize(this);
              ndisReadModernStandyWoLMagicPacketKeywords(this);
              ndisMRegisterPDCTaskClient(this);
              ndisMInitializePDCTaskClient((char *)this);
            }
            if ( this->MediaType )
            {
              if ( nullCreateFilter(v128) )
                goto LABEL_67;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0x18u,
                  (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                  this);
              *(_DWORD *)v106 = 30;
              v99 = 1;
              if ( (byte_1C00EE582 & 0x10) != 0 )
              {
                v98 = 30;
                *(_DWORD *)v97 = 6;
LABEL_238:
                *(_QWORD *)v96 = this->NetLuid.Value;
                McTemplateK0jqxqq_EtwWriteTransfer();
              }
            }
            else
            {
              if ( EthCreateFilter(
                     this->GeneralAttributes->MaxMulticastListSize,
                     this->GeneralAttributes->CurrentMacAddress,
                     v128) )
              {
LABEL_67:
                v128[0]->Miniport = this;
                goto LABEL_68;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0x17u,
                  (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                  this);
              *(_DWORD *)v106 = 9;
              v99 = 1;
              if ( (byte_1C00EE582 & 0x10) != 0 )
              {
                v98 = 9;
                *(_DWORD *)v97 = 4;
                goto LABEL_238;
              }
            }
LABEL_68:
            if ( this->MiniportMediaType == NdisMediumNative802_11 && v24 >= 6u )
            {
              v76 = &this->600;
              if ( !nullCreateFilter((struct _X_FILTER **)&this->600) )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x19u,
                    (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                    this);
                v76->Reserved1 = 0LL;
                *(_DWORD *)v106 = 30;
                v99 = 1;
                if ( (byte_1C00EE582 & 0x10) != 0 )
                {
                  McTemplateK0jqxqq_EtwWriteTransfer();
LABEL_247:
                  v45 = (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer;
                  goto LABEL_101;
                }
LABEL_193:
                v45 = (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer;
                goto LABEL_194;
              }
              *(_QWORD *)(v76->Reserved1 + 296) = this;
            }
            if ( this->MediaType == NdisMedium802_3 )
              this->CheckPacketFilters = 1;
            if ( (this->Flags & 0x180) == 0 )
            {
              v37 = IoWMIRegistrationControl(this->DeviceObject, 1u);
              if ( v37 < 0 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v97 = v37;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x1Au,
                    (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                    (char)this,
                    *(_QWORD *)v97);
                }
                if ( (byte_1C00EE582 & 0x10) != 0 )
                {
                  v98 = v37;
                  *(_DWORD *)v97 = 8;
                  *(_QWORD *)v96 = this->NetLuid.Value;
                  McTemplateK0jqxqq_EtwWriteTransfer();
                }
                *(_DWORD *)v106 = 31;
                v99 = 1;
                goto LABEL_254;
              }
              v108 = 1;
            }
            if ( !v99 )
            {
              v73 = (this->Flags & 0x100) == 0;
              *(_DWORD *)v106 = 1;
              if ( v73 )
              {
                v38 = 0;
                v39 = IoRegisterDeviceInterface(
                        this->PhysicalDeviceObject,
                        &InterfaceClassGuid,
                        &this->BaseName,
                        &this->SymbolicLinkName);
                if ( v39 < 0 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    *(_DWORD *)v97 = v39;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      1u,
                      0x1Cu,
                      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                      (char)this,
                      *(_QWORD *)v97);
                  }
                  if ( (byte_1C00EE582 & 0x10) != 0 )
                    McTemplateK0jqxqq_EtwWriteTransfer();
                  *(_DWORD *)v106 = 35;
                  goto LABEL_262;
                }
                SriovCurrentCapabilities = this->SriovCurrentCapabilities;
                v103 = 1;
                if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
                {
                  v77 = IoRegisterDeviceInterface(
                          this->PhysicalDeviceObject,
                          &v142,
                          0LL,
                          &this->DevinterfaceVirtSymbolicLinkName);
                  if ( DefaultNicSwitch < 0 )
                  {
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      *(_DWORD *)v97 = v77;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Du,
                        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                        (char)this,
                        *(_QWORD *)v97);
                    }
                    if ( (byte_1C00EE582 & 0x10) != 0 )
                      McTemplateK0jqxqq_EtwWriteTransfer();
                    *(_DWORD *)v106 = 34;
                    v99 = 1;
LABEL_262:
                    v45 = (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer;
                    goto LABEL_195;
                  }
                  v109 = 1;
                }
                this->DeviceObject->Flags &= ~0x80u;
              }
              GeneralAttributes = this->GeneralAttributes;
              if ( GeneralAttributes && (v41 = this->IfBlock) != 0LL )
              {
                updated = ndisIfUpdateInterfaceOnInitialize(this, v41, GeneralAttributes);
                if ( !updated )
                {
                  v73 = (this->PnPFlags & 0x200000) == 0;
                  v107 = 1;
                  if ( !v73 )
                    this->PhysicalPerformanceCounters = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePool2(
                                                                                                 64LL,
                                                                                                 32LL,
                                                                                                 2002994254);
                  if ( !this->OidList )
                  {
                    v133[0] = 0LL;
                    v133[1] = this;
                    v134 = 0LL;
                    OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v133);
                    if ( OidList )
                    {
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        *(_DWORD *)v97 = OidList;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x1Fu,
                          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                          (char)this,
                          *(_QWORD *)v97);
                      }
                      if ( (byte_1C00EE582 & 0x10) != 0 )
                        McTemplateK0jqxqq_EtwWriteTransfer();
                    }
                  }
                  v44 = this->Offload;
                  if ( v44 )
                  {
                    if ( v44->SupportsOffload == 1 )
                    {
                      v44->SupportsTopOffload = 1;
                      v78 = this->Offload;
                      p_TopCapabilities = &v78->TopCapabilities;
                      v78 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v78 + 8);
                      *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v78->SupportsOffload;
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v78->MiniportCurrentConfig.Checksum.IPv4Transmit + 4);
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v78->MiniportCurrentConfig.Checksum.IPv6Transmit + 4);
                      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4
                                                                              + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v78->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                      *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v78->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                      *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_OWORD *)&v78->MiniportCurrentConfig.IPsecV1.IPv4AH;
                      *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v78->MiniportCurrentConfig.LsoV2.IPv4.MinSegmentCount;
                      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
                      v80 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)((char *)&v78->MiniportCurrentConfig.LsoV2.IPv6
                                                                                   + 12);
                      v78 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v78 + 128);
                      p_TopCapabilities[-1].UdpSegmentation.IPv6 = v80;
                      *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v78->SupportsOffload;
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v78->MiniportCurrentConfig.Checksum.IPv4Transmit + 4);
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v78->MiniportCurrentConfig.Checksum.IPv6Transmit + 4);
                      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4
                                                                              + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v78->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                      *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v78->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                      *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_QWORD *)&v78->MiniportCurrentConfig.IPsecV1.IPv4AH;
                      ndisMergeOffloadCapsAndRegistry(this, &this->Offload->TopCapabilities);
                      v44 = this->Offload;
                    }
                    if ( v44->SupportsTcpConnectionOffload == 1 )
                    {
                      v44->SupportsTopTcpConnectionOffload = 1;
                      v81 = this->Offload;
                      *(_OWORD *)&v81->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v81->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
                      v81->TopTcpConnectionOffloadCapabilities.Flags = v81->MiniportTcpConnectionOffloadCurrentConfig.Flags;
                    }
                  }
                  v45 = (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer;
                  if ( ndisQueueMiniportOnDriver(this, (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer) )
                  {
                    v38 = 1;
                    ndisSetDeviceInterfaceState(this, 1u);
                    if ( (int)Ndis::BindRegistry::Reload(this, 0LL, v46) < 0 )
                    {
                      *(_DWORD *)v106 = 39;
                      v99 = 1;
                      goto LABEL_195;
                    }
                    ndisPcwNotifyMiniportCreation(this);
                    Ndis::BindEngine::BeginPolicyUpdates(&this->BindEngine);
                    if ( Ndis::BindState::SetBinding(
                           &this->Bindings.Miniport,
                           BindingDisabled,
                           Reason_MiniportDeviceNotStarted) )
                    {
                      memset(v135, 0, sizeof(v135));
                      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v135);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v82,
                            0x1Cu,
                            0x20u,
                            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                            *(unsigned __int16 **)&v135[8],
                            *(_QWORD *)v135);
                      }
                    }
                    if ( Ndis::BindState::SetPause(&this->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
                    {
                      memset(v136, 0, sizeof(v136));
                      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v136);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v83,
                            0x1Cu,
                            0x21u,
                            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                            *(unsigned __int16 **)&v136[8],
                            *(_QWORD *)v136);
                      }
                    }
                    if ( Ndis::BindState::SetPause(
                           &this->Bindings.Miniport,
                           DatapathRunning,
                           PauseReason_RemovingMiniport) )
                    {
                      memset(v137, 0, sizeof(v137));
                      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v137);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            (int)v47,
                            0x1Cu,
                            0x22u,
                            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                            *(unsigned __int16 **)&v137[8],
                            *(_QWORD *)v137);
                      }
                    }
                    if ( (this->Flags & 0x10000) == 0
                      && Ndis::BindState::SetBinding(
                           &this->Bindings.Miniport,
                           BindingDisabled,
                           Reason_DefaultPortNotActive) )
                    {
                      memset(v138, 0, sizeof(v138));
                      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v138);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            (int)v47,
                            0x1Cu,
                            0x23u,
                            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                            *(unsigned __int16 **)&v138[8],
                            *(_QWORD *)v138);
                      }
                    }
                    Ndis::BindEngine::EndPolicyUpdates(&this->BindEngine, v47);
                    Ndis::BindEngine::ApplyBindChanges(&this->BindEngine, RunSynchronous, 0);
                    if ( (this->Flags & 0x100) == 0 )
                    {
                      v122 = (_BYTE)ndisAcOnLine == 1;
                      ndisNotifyMiniports(this, v48, &v122);
                    }
                    v49 = v101 < 6u;
                    this->EthDB = v128[0];
                    if ( v49 )
                    {
                      this->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
                      Flags = this->Flags;
                      if ( (Flags & 0x40000) != 0 )
                      {
                        v85 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
                      }
                      else
                      {
                        if ( (Flags & 0x40) != 0 )
                        {
                          this->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                          this->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                          v86 = ndisMDeferredSendPacketsSG;
                          if ( !v45->MiniportDriverCharacteristics.ShutdownHandlerEx )
                            v86 = ndisMDeferredSendSG;
                          this->DeferredSendHandler = v86;
                          goto LABEL_97;
                        }
                        v85 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
                      }
                      this->FinalSendPacketsHandler = v85;
                      this->NextSendPacketsHandler = v85;
                    }
                    else
                    {
                      this->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                      this->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                    }
LABEL_97:
                    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(this, &NewIrql);
                    ndisMSetIndicatePacketHandler(this);
                    v50 = NewIrql;
                    this->MiniportThread = 0LL;
                    KeReleaseSpinLock(&this->Lock, v50);
                    if ( ((this->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (this->FilterPnPFlags & 0x200) != 0)
                      && this->PhysicalMediumType == NdisPhysicalMedium802_3 )
                    {
                      v73 = this->PMHardwareCapabilities.Header.Revision == 2;
                      InputBuffer = this->PhysicalDeviceObject;
                      v117 = 0;
                      v114 = 4;
                      v115 = 1;
                      if ( !v73
                        || (this->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
                        || this->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
                        || this->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
                        || (unsigned int)(this->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
                        || (this->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
                        || (v87 = this->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v116 = 1, (_BYTE)v87 != 3) )
                      {
                        v116 = 0;
                      }
                      ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
                    }
                    ndisPktMonMiniportRegister(this);
                    v51 = 0;
                    *(_DWORD *)v106 = 0;
                    v104 = 0;
                    v105 = 0;
                    goto LABEL_100;
                  }
LABEL_101:
                  v38 = 0;
                  if ( !*(_DWORD *)v106 )
                    goto LABEL_102;
                  goto LABEL_195;
                }
              }
              else
              {
                updated = -1073741823;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v97 = updated;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x1Eu,
                  (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                  (char)this,
                  *(_QWORD *)v97);
              }
              if ( (byte_1C00EE582 & 0x10) != 0 )
                McTemplateK0jqxqq_EtwWriteTransfer();
              *(_DWORD *)v106 = 32;
              v99 = 1;
              goto LABEL_193;
            }
LABEL_254:
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v97 = v99;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                1u,
                0x1Bu,
                (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
                (char)this,
                *(_QWORD *)v97);
            }
            OutputBufferLength[0] = *(_DWORD *)v106;
            NdisWriteErrorLogEntry(
              this,
              0xC000138D,
              2u,
              4278255360LL,
              *(_QWORD *)OutputBufferLength,
              *(_QWORD *)v96,
              *(_QWORD *)v97,
              v98);
            goto LABEL_247;
          }
        }
LABEL_334:
        v45 = (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer;
        goto LABEL_101;
      }
      v30 = ndisMSetOffloadAttributes(this, &Offload->MiniportInitialConfig, &Offload->MiniportInitialConfig, 0LL, 0LL);
    }
    else
    {
      v29 = v118;
      if ( this->MP6SupportPM )
        v29 = 0;
      v118 = v29;
      v30 = 0;
    }
    if ( v30 )
      goto LABEL_334;
    goto LABEL_47;
  }
  if ( v24 <= 4u )
  {
    if ( (this->Flags & 0x20000) == 0 )
      this->DeferredSendHandler = ndisMStartWanSends;
    goto LABEL_39;
  }
  if ( (this->Flags & 0x20000) != 0 )
    goto LABEL_39;
LABEL_182:
  *(_DWORD *)v106 = 32;
  v99 = 1;
  v45 = (struct _NDIS_M_DRIVER_BLOCK *)a1;
LABEL_194:
  v38 = v102;
LABEL_195:
  Ndis::BindRegistry::Reload(this, 0LL, (enum Ndis::ReadBindingsOptions::Flags)GeneralAttributes);
  ndisNotifyBindFailureOnUnboundProtocols(this);
LABEL_102:
  if ( v107 )
  {
    *(_QWORD *)&this->OperStatus = 2LL;
    v89 = this->IfBlock;
    if ( v89->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v89->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      this->IfBlock->ifOperStatusFlags = this->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(this);
    }
    PhysicalPerformanceCounters = this->PhysicalPerformanceCounters;
    if ( PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
      this->PhysicalPerformanceCounters = 0LL;
    }
  }
  v52 = v108;
  if ( v108 )
  {
    IoWMIRegistrationControl(this->DeviceObject, 2u);
    v52 = 0;
  }
  v53 = v103;
  if ( v103 )
  {
    IoSetDeviceInterfaceState(&this->DevinterfaceNetSymbolicLinkName, 0);
    v53 = 0;
  }
  v54 = v109;
  if ( v109 )
  {
    IoSetDeviceInterfaceState(&this->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&this->DevinterfaceVirtSymbolicLinkName);
    this->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v54 = 0;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch(this);
    v49 = (_BYTE)v119 != 0;
    LOBYTE(v119) = -(char)v119;
    v91 = (v53 != 0 ? 0x40 : 0) | (v52 != 0 ? 130 : 128) | (v49 ? 8 : 0) | (v54 != 0 ? 0x100 : 0);
    v49 = v103 != 0;
    v103 = -v103;
    ndisMCommonHaltMiniport(this, (v49 ? 4 : 0) | v91);
    ndisMDeregisterBugCheckHandler(this);
  }
  if ( v112 )
  {
    if ( (this->Flags & 0x40) != 0 )
    {
      MiniportSGDmaBlock = this->MiniportSGDmaBlock;
      if ( MiniportSGDmaBlock )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0x24u,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            this);
          MiniportSGDmaBlock = this->MiniportSGDmaBlock;
        }
        ndisDereferenceDmaAdapter(MiniportSGDmaBlock);
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(this, &NewIrql);
    if ( this->MiniportSGDmaBlock )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v93 = NewIrql;
      this->MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      this->MiniportThread = 0LL;
      KeReleaseSpinLock(&this->Lock, v93);
      if ( !ndisWaitForKernelObject(&Event, 30000LL) )
        goto LABEL_112;
    }
    else
    {
      v94 = NewIrql;
      this->MiniportThread = 0LL;
      KeReleaseSpinLock(&this->Lock, v94);
    }
    this->Flags &= ~0x40u;
  }
LABEL_112:
  if ( v38 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x25u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        this);
    ndisDeQueueMiniportOnDriver(this, v45);
  }
  if ( v105 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v110 )
    ndisDereferenceMiniportRef(this, 0x18u);
  if ( v104 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x26u,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        this);
    ndisDereferenceDriver(v45, 0, 2u);
  }
  v55 = this->GeneralAttributes;
  if ( v55 )
  {
    if ( v101 >= 6u )
      ExFreePoolWithTag(v55, 0);
    this->GeneralAttributes = 0LL;
  }
  if ( v111 )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)this->PeriodicReceivesNblCountIndex, 0x527374uLL);
    this->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v97 = *(_DWORD *)v106;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x27u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)this,
      *(_QWORD *)v97);
  }
  return *(unsigned int *)v106;
}
