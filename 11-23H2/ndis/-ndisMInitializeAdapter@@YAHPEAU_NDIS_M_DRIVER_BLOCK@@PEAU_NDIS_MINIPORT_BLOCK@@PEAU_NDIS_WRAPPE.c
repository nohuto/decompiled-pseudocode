/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C002DC90 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014350 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016508 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0018750 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     NdisInitializeTimer @ 0x1C0018C70 (NdisInitializeTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B240 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C001B418 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C190 (NdisConvertNtStatusToNdisStatus.c)
 *     NdisWriteConfiguration @ 0x1C001C950 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0022A20 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024C18 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025324 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00254AC (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002560C (WPP_RECORDER_SF_dd_ea_1C002560C.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C640 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CA48 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002CCF4 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002D1E8 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E4E8 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EBE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002ED50 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C003538C (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x1C0035F7C (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1C005BD98 (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C220 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006834C (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0069690 (NdisWriteErrorLogEntry.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EE0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EA80 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00757E0 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0076A24 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AC8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C0082974 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C0090B14 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0091AAC (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0091F90 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092970 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092A68 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092C9C (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009998C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C0110B34 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0111FD8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115920 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0116160 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116BFC (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C01171F8 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01177E4 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0117890 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119200 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A678 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPktMonMiniportRegister @ 0x1C011B78C (ndisPktMonMiniportRegister.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C011BBC8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4A8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01206E0 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01214B0 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01215DC (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A78C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C012CB7C (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012D874 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01363CC (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136410 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138CE8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABC8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D48 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C014B820 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C014D90C (-ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0155AE4 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  _DEVICE_OBJECT *v7; // r13
  char v8; // bl
  char v9; // r15
  char v10; // r12
  char v11; // si
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v12; // r8
  NTSTATUS v13; // eax
  int PciDeviceCustomProperties; // esi
  bool v15; // cf
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDIS_NBL_TRACKER_HANDLE__ **p_NblTracker; // rbx
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int v20; // r8d
  unsigned int i; // edx
  __int64 v22; // rcx
  int v23; // eax
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _NET_LUID_LH *p_NetLuid; // r12
  unsigned int *p_IfIndex; // r13
  int v27; // eax
  __int64 v28; // rcx
  int v29; // ebx
  struct _NDIS_MINIPORT_BLOCK **p_BaseMiniport; // rbx
  unsigned __int8 v31; // r14
  _NDIS_MEDIUM MediaType; // eax
  unsigned __int8 v33; // al
  KIRQL v34; // dl
  int v35; // ecx
  __int64 v36; // rcx
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **p_GeneralAttributes; // r15
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int DefaultNicSwitch; // r14d
  unsigned int PnPFlags; // r9d
  int v43; // ecx
  unsigned int v44; // r8d
  KIRQL v45; // dl
  __int64 v46; // rcx
  __int64 v47; // rcx
  NTSTATUS v48; // ebx
  NTSTATUS v49; // ebx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  struct _NDIS_IF_BLOCK *v51; // rdx
  int updated; // ebx
  __int64 v53; // rcx
  int OidList; // ebx
  _NDIS_MINIPORT_OFFLOAD *v55; // rax
  enum Ndis::ReadBindingsOptions::Flags v56; // r8d
  struct _NDIS_MINIPORT_BLOCK *v57; // rdx
  int v58; // edx
  KIRQL v59; // dl
  char v60; // si
  char v61; // r14
  char v62; // si
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NDIS_MINIPORT_STATS *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *v66; // rcx
  unsigned __int8 v67; // dl
  void (__fastcall *DeferredContext)(void *, _NDIS_PACKET **, unsigned int); // rax
  int ReenumerateSelfInterface; // eax
  int v70; // edx
  _DEVICE_RESET_INTERFACE_STANDARD *v71; // rax
  unsigned int v72; // ebx
  NDIS_STATUS v73; // eax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *p_PciDeviceCustomProperties; // rax
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  _NDIS_MEDIUM v76; // edx
  __int64 v77; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  unsigned __int8 v79; // al
  unsigned int PnPCapabilities; // r8d
  unsigned int v81; // edx
  unsigned __int32 v82; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  bool v84; // zf
  bool v85; // cc
  unsigned int v86; // eax
  $CE8CB132C0A5B3727E623C8BBCD36F7D *v87; // rbx
  NTSTATUS v88; // eax
  char v89; // bl
  _NDIS_MINIPORT_OFFLOAD *v90; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v92; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v93; // rax
  _NDIS_MINIPORT_OFFLOAD *v94; // rcx
  int v95; // edx
  int v96; // edx
  unsigned int Flags; // eax
  void (__fastcall *v98)(void *, _NDIS_PACKET **, unsigned int); // rax
  unsigned __int8 (__fastcall *v99)(_NDIS_MINIPORT_BLOCK *); // rax
  unsigned int v100; // eax
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v102; // rax
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  KIRQL v104; // dl
  KIRQL v105; // dl
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  char v107[8]; // [rsp+28h] [rbp-D8h]
  char v108[8]; // [rsp+30h] [rbp-D0h]
  char v109; // [rsp+40h] [rbp-C0h]
  char v110; // [rsp+41h] [rbp-BFh]
  char v111; // [rsp+42h] [rbp-BEh]
  char v112; // [rsp+43h] [rbp-BDh]
  unsigned __int8 v113; // [rsp+45h] [rbp-BBh] BYREF
  KIRQL NewIrql; // [rsp+46h] [rbp-BAh] BYREF
  unsigned __int8 AttachedDevice; // [rsp+47h] [rbp-B9h]
  char v116; // [rsp+48h] [rbp-B8h]
  bool v117; // [rsp+49h] [rbp-B7h]
  char v118[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  char v119; // [rsp+50h] [rbp-B0h]
  char v120; // [rsp+51h] [rbp-AFh]
  char v121; // [rsp+52h] [rbp-AEh]
  char v122; // [rsp+53h] [rbp-ADh]
  _DEVICE_OBJECT *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v124; // [rsp+60h] [rbp-A0h]
  char v125; // [rsp+64h] [rbp-9Ch]
  char v126; // [rsp+65h] [rbp-9Bh]
  __int16 v127; // [rsp+66h] [rbp-9Ah]
  int v128; // [rsp+68h] [rbp-98h] BYREF
  int v129; // [rsp+6Ch] [rbp-94h]
  int Status; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v131; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v132; // [rsp+78h] [rbp-88h] BYREF
  int v133; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Keyword; // [rsp+B0h] [rbp-50h] BYREF
  struct _X_FILTER *v138[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v139; // [rsp+D0h] [rbp-30h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v141; // [rsp+100h] [rbp+0h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v143[2]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v144; // [rsp+168h] [rbp+68h]
  char v145[160]; // [rsp+180h] [rbp+80h] BYREF
  char v146[160]; // [rsp+220h] [rbp+120h] BYREF
  char v147[160]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v148[160]; // [rsp+360h] [rbp+260h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v149; // [rsp+400h] [rbp+300h] BYREF
  _DWORD v150[6]; // [rsp+4E0h] [rbp+3E0h] BYREF
  GUID InterfaceClassGuid; // [rsp+4F8h] [rbp+3F8h] BYREF
  GUID v152; // [rsp+508h] [rbp+408h] BYREF
  _OWORD v153[3]; // [rsp+518h] [rbp+418h] BYREF
  __int64 v154; // [rsp+548h] [rbp+448h]
  int v155; // [rsp+550h] [rbp+450h]
  char v156; // [rsp+560h] [rbp+460h] BYREF

  InputBuffer = a1;
  v7 = a1;
  memset(&v141, 0, sizeof(v141));
  v8 = 0;
  v133 = 0;
  *(_OWORD *)v138 = 0LL;
  v139 = 0LL;
  *(_DWORD *)v118 = 1;
  DestinationString = 0LL;
  v128 = 1;
  v132 = 0;
  v9 = 0;
  v131 = 0;
  v10 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  NewIrql = 0;
  v11 = 0;
  v116 = 0;
  memset(v153, 0, sizeof(v153));
  v120 = 0;
  v119 = 0;
  v113 = 0;
  v109 = 0;
  v112 = 0;
  v122 = 0;
  v121 = 0;
  v110 = 0;
  v117 = 0;
  LOBYTE(v129) = 0;
  v154 = 0LL;
  v155 = 0;
  memset(&v149, 0, sizeof(v149));
  v111 = 0;
  v152 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      13LL,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  AttachedDevice = (unsigned __int8)v7->AttachedDevice;
  if ( !ndisReferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)v7, 2u) )
  {
    v61 = 0;
    goto LABEL_102;
  }
  v116 = 1;
  DestinationString.Buffer = (wchar_t *)&v156;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, &a2->BaseName) < 0 )
    goto LABEL_334;
  v13 = IoCreateSymbolicLink(&DestinationString, &a2->FdoName);
  PciDeviceCustomProperties = v13;
  v117 = v13 >= 0 || v13 == -1073741771;
  v15 = AttachedDevice < 6u;
  a2->DeviceContext = a5;
  a2->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->EthRxIndicateHandler = (void (__fastcall *)(_X_FILTER *, void *, char *, void *, unsigned int, void *, unsigned int, unsigned int))EthFilterDprIndicateReceive;
  a2->EthRxCompleteHandler = (void (__fastcall *)(_X_FILTER *))EthFilterDprIndicateReceiveComplete;
  a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))NdisMSendComplete;
  a2->SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete;
  a2->TDCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int, unsigned int))NdisMTransferDataComplete;
  a2->ResetCompleteHandler = (void (__fastcall *)(void *, int, unsigned __int8))NdisMResetComplete;
  a2->StatusHandler = (void (__fastcall *)(void *, int, void *, unsigned int))NdisMIndicateStatus;
  a2->StatusCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
  a2->SendResourcesHandler = (void (__fastcall *)(void *))NdisMSendResourcesAvailable;
  a2->QueryCompleteHandler = (void (__fastcall *)(void *, int))NdisMQueryInformationComplete;
  a2->SetCompleteHandler = (void (__fastcall *)(void *, int))NdisMSetInformationComplete;
  a2->WanSendCompleteHandler = (void (__fastcall *)(void *, void *, int))ndisMWanSendCompleteInternal;
  a2->WanRcvHandler = (void (__fastcall *)(int *, void *, void *, unsigned __int8 *, unsigned int))NdisMWanIndicateReceive;
  a2->WanRcvCompleteHandler = (void (__fastcall *)(void *, void *))NdisMWanIndicateReceiveComplete;
  a2->NoFilter.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->Next.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->NormalTopReceive = 1;
  a2->NoFilter.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->NoFilter.SendNetBufferListsCompleteContext = a2;
  a2->NoFilter.SendNetBufferListsCompleteObject = &a2->Header;
  a2->Next.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->Next.SendNetBufferListsCompleteContext = a2;
  a2->Next.SendNetBufferListsCompleteObject = &a2->Header;
  a2->NoFilter.RequestHandle = a2;
  a2->NoFilter.DirectRequestHandle = a2;
  a2->Next.RequestHandle = a2;
  a2->Next.DirectRequestHandle = a2;
  a2->TimeOfInitialization.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( !v15 )
  {
    DriverHandle = a2->DriverHandle;
    p_NblTracker = &a2->NblTracker;
    a2->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsContext = a2->MiniportAdapterContext;
    a2->NoFilter.ReturnNetBufferListsTracker = a2->NblTracker;
    a2->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a2->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SynchronousReturnPacketContext = a2;
    if ( *(_QWORD *)&v7[1].Dpc.TargetInfoAsUlong )
      a2->Flags |= 0x20000u;
    goto LABEL_10;
  }
  Pool2 = (_NDIS_MINIPORT_STATS *)ExAllocatePool2(64LL, 112 * ndisMaxNumberOfProcessors, 538985550);
  a2->BottomIfStats = Pool2;
  if ( !Pool2 )
  {
    v11 = 0;
LABEL_334:
    v61 = 0;
    goto LABEL_102;
  }
  v66 = a2->DriverHandle;
  v67 = AttachedDevice;
  a2->DeferredSendHandler = ndisMDeferredSend;
  a2->DisableInterruptHandler = v66->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
  a2->EnableInterruptHandler = v66->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
  a2->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
  a2->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
  a2->NoFilter.ReturnNetBufferListsContext = a2;
  a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
  a2->SendHandler = v66->MiniportCharacteristics.Ndis50Chars.SendHandler;
  if ( v67 >= 4u )
  {
    if ( v7->Dpc.DeferredRoutine )
      a2->InfoFlags |= 0x10u;
    a2->SynchronousReturnPacketHandler = v66->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    a2->MiniportReturnPacketHandler = v66->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    a2->SynchronousReturnPacketContext = a2->MiniportAdapterContext;
    if ( v7->Dpc.DeferredContext )
    {
      a2->SendFlags |= 1u;
      a2->DeferredSendHandler = ndisMDeferredSendPackets;
      DeferredContext = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))v7->Dpc.DeferredContext;
      a2->InfoFlags |= 0x8000000u;
      a2->WSendPacketsHandler = DeferredContext;
    }
    if ( v67 >= 5u )
    {
      a2->InfoFlags |= 0x200u;
      if ( *(_QWORD *)&v7->DeviceLock.Header.Lock )
      {
        a2->Flags |= 0x20000u;
        v7[1].Dpc.ProcessorHistory = (unsigned __int64)ndisMCoOidRequestToRequest;
        a2->NextCoOidRequestHandle = a2;
      }
    }
  }
  p_NblTracker = &a2->NblTracker;
LABEL_10:
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v120 = 1;
  if ( a2->CurrentDevicePowerState == PowerDeviceUnspecified )
  {
    a2->CurrentDevicePowerState = PowerDeviceD0;
    a2->DriverPowerState = PowerDeviceD0;
  }
  ndisQueryPowerCapabilities(a2);
  ndisMInitializeInitMode((char *)a2);
  *p_NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                 0,
                                                 (__int64)a2,
                                                 (__int64)a2->pAdapterInstanceName);
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  v8 = 0;
  a2->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_100;
  v20 = ndisMaxNumberOfProcessors;
  v121 = 1;
  for ( i = 0; i < v20; *(_DWORD *)((char *)a2->PeriodicReceivesNblCountIndex + v22) = 6 )
    v22 = i++ << 12;
  a2->Flags = a2->Flags & 0xDFFFFFFC | 0x20000002;
  if ( (BYTE2(v7->AttachedDevice) & 2) != 0 )
  {
    a2->PnPFlags |= 0x100000u;
    if ( !ndisDriverTrackAlloc || (v84 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = a2, !v84) )
      ndisMiniportTrackAlloc = 0LL;
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_18;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_18;
  }
  a2->DriverVerifyFlags |= 0x800u;
LABEL_18:
  v23 = ndisRssV2Initialize((char *)a2);
  if ( v23 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v108 = v23;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a2,
        *(_QWORD *)v108);
    }
    goto LABEL_100;
  }
  v9 = 0;
  if ( v7[2].DeviceQueue.Lock && !a2->ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                 a2->NextDeviceObject,
                                 (PVOID *)&a2->ReenumerateSelfInterface);
    PciDeviceCustomProperties = ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface >= 0 )
    {
      v71 = a2->ReenumerateSelfInterface;
      *((_DWORD *)&ConfigObject.Header + 1) = 0;
      *(&ConfigObject.Flags + 1) = 0;
      ConfigurationHandle = 0LL;
      v72 = (v71->SupportedResetTypes >> 1) & 1;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v108 = v71->SupportedResetTypes & 1;
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v70,
          1u,
          0x10u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          (v71->SupportedResetTypes & 2) != 0,
          *(_QWORD *)v108);
      }
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = a2;
      ConfigObject.Flags = 0;
      v73 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v73;
      if ( v73 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v107 = v73;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x11u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            *(_QWORD *)v107);
        }
      }
      else
      {
        *(_QWORD *)&Keyword.Length = 1966108LL;
        memset(&ParameterValue, 0, sizeof(ParameterValue));
        Keyword.Buffer = L"PldrCapability";
        ParameterValue.ParameterData.IntegerData = v72;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v107 = Status;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x12u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            *(_QWORD *)v107);
        }
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v108 = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          (char)a2,
          *(_QWORD *)v108);
      }
      PciDeviceCustomProperties = 0;
    }
  }
  v15 = AttachedDevice < 6u;
  a2->State = NdisMiniportInitializing;
  v149.Header.Revision = 2;
  if ( v15 )
  {
    v29 = (*(__int64 (__fastcall **)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *))&v7->DeviceQueue.Type)(
            &v133,
            &v131,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( a2->BusType == PCIBus )
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
    p_NetLuid = &a2->NetLuid;
    p_IfIndex = &a2->IfIndex;
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v150[1] = a2->DefaultPortSendControlState;
    v150[2] = a2->DefaultPortRcvControlState;
    v150[3] = a2->DefaultPortSendAuthorizationState;
    v150[4] = a2->DefaultPortRcvAuthorizationState;
    AllocatedResources = a2->AllocatedResources;
    v150[0] = 1311104;
    v141.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v141.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v84 = a2->BusType == PCIBus;
    p_NetLuid = &a2->NetLuid;
    p_IfIndex = &a2->IfIndex;
    v141.IMDeviceInstanceContext = a2->DeviceContext;
    v141.MiniportAddDeviceContext = a2->AddDeviceContext;
    v141.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v150;
    v141.NetLuid.Value = a2->NetLuid.Value;
    v141.IfIndex = a2->IfIndex;
    if ( v84 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
      p_PciDeviceCustomProperties = v141.PciDeviceCustomProperties;
      if ( PciDeviceCustomProperties >= 0 )
        p_PciDeviceCustomProperties = &a2->PciDeviceCustomProperties;
      v141.PciDeviceCustomProperties = p_PciDeviceCustomProperties;
    }
    if ( (a2->Flags & 0x100) != 0 )
      v27 = ndisLWMInitializeHandler(a2);
    else
      v27 = ndisMInvokeInitialize(a2, &v141);
    v29 = v27;
    if ( a2->BusType == PCIBus )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v108 = v29;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a2,
      *(_QWORD *)v108);
  }
  if ( (byte_1C00F7642 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v28,
      (const EVENT_DESCRIPTOR *)"0'",
      &a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      *p_IfIndex,
      p_NetLuid->Value,
      1,
      v29);
  a2->Flags &= ~2u;
  if ( v29 )
  {
    a2->State = NdisMiniportHalted;
    *(_QWORD *)&a2->OperStatus = 2LL;
    IfBlock = a2->IfBlock;
    if ( IfBlock && IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( a2->InvalidateBlockIoctlVf )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    *(_DWORD *)v118 = v29;
    if ( !a2->TimerQueue )
    {
      if ( a2->Interrupt )
        goto LABEL_327;
      if ( !a2->InterruptEx )
      {
LABEL_330:
        v60 = v116;
        v7 = InputBuffer;
LABEL_99:
        v8 = 0;
        v119 = 0;
        v10 = 0;
        v120 = v60;
        v122 = v60;
        v121 = v60;
LABEL_100:
        v61 = 0;
LABEL_101:
        v11 = 0;
        goto LABEL_102;
      }
    }
    if ( !a2->Interrupt )
    {
      if ( a2->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->InterruptEx, 0LL);
      }
      if ( (a2->Flags & 0x80u) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without canceling timer");
        KeBugCheckEx(0x7Cu, 0xCuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->TimerQueue, 0LL);
      }
      goto LABEL_330;
    }
LABEL_327:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a2->pAdapterInstanceName,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->Interrupt, 0LL);
  }
  p_BaseMiniport = &a2->BaseMiniport;
  v9 = 1;
  if ( (a2->PnPFlags & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName(a2->BindPaths->Paths, &a2->BaseMiniport, 1, 0x1Fu);
    if ( *p_BaseMiniport )
      ndisDereferenceMiniportRef(*p_BaseMiniport, 0x1Fu);
  }
  else
  {
    *p_BaseMiniport = a2;
  }
  v31 = AttachedDevice;
  if ( AttachedDevice < 6u )
  {
    Interrupt = a2->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
    {
      a2->Flags &= ~1u;
    }
    else
    {
      LODWORD(v12) = 1;
      a2->Flags |= 1u;
    }
    if ( !a2->ShutdownHandler )
    {
      a2->ShutdownHandler = (void (__fastcall *)(void *))InputBuffer->DeviceObjectExtension;
      a2->ShutdownContext = a2->MiniportAdapterContext;
    }
    v76 = *((_DWORD *)ndisMediumArray + v131);
    v149.MediaType = v76;
    a2->MediaType = v76;
    a2->MiniportMediaType = v76;
  }
  MediaType = a2->MediaType;
  a2->State = NdisMiniportPaused;
  if ( (unsigned int)MediaType <= NdisMedium1394 )
  {
    v77 = 8390LL;
    if ( _bittest((const int *)&v77, MediaType) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x14u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          a2);
      if ( (byte_1C00F7643 & 0x10) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          v77,
          (__int64)&UnsupportedMiniportMediaType,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          *p_IfIndex,
          p_NetLuid->Value,
          a2->MediaType);
      goto LABEL_183;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( a2->MediaType == NdisMediumWan )
  {
    if ( v31 <= 4u )
    {
      if ( (a2->Flags & 0x20000) == 0 )
        a2->DeferredSendHandler = ndisMStartWanSends;
    }
    else if ( (a2->Flags & 0x20000) == 0 )
    {
LABEL_183:
      *(_DWORD *)v118 = 32;
      v113 = 1;
LABEL_185:
      v8 = 0;
      v7 = InputBuffer;
      v10 = 0;
      goto LABEL_100;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
  v33 = ndisSetWakeUpTimer(a2);
  v34 = NewIrql;
  v35 = (unsigned __int8)v129;
  if ( v33 )
    v35 = 1;
  a2->MiniportThread = 0LL;
  v129 = v35;
  KeReleaseSpinLock(&a2->Lock, v34);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v108 = PciDeviceCustomProperties;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x15u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a2,
        *(_QWORD *)v108);
    }
    if ( (byte_1C00F7642 & 0x10) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v36,
        &InitializeAdapterFailed,
        &a2->InterfaceGuid,
        (__int64)&a2->InterfaceGuid,
        *p_IfIndex,
        p_NetLuid->Value,
        2,
        PciDeviceCustomProperties);
    *(_DWORD *)v118 = 36;
    goto LABEL_185;
  }
  p_GeneralAttributes = &a2->GeneralAttributes;
  if ( v31 >= 6u )
  {
    v38 = v128;
    if ( a2->MP6SupportPM )
      v38 = 0;
    v128 = v38;
    v39 = 0;
    goto LABEL_45;
  }
  v149.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v153;
  *p_GeneralAttributes = &v149;
  v11 = 0;
  if ( !(unsigned int)ndisGetMiniportInfo(a2, &v149, (int *)v118, &v113, &v128)
    && !ndisMSetGeneralAttributes(a2, *p_GeneralAttributes) )
  {
    Offload = a2->Offload;
    if ( !Offload )
    {
LABEL_46:
      if ( (a2->Flags & 0x180) != 0
        || (v40 = ndisCheckNetworkInterfaceDataMismatch(a2, *p_GeneralAttributes),
            !(unsigned int)NdisConvertNtStatusToNdisStatus(v40)) )
      {
        DefaultNicSwitch = ndisIovCreateDefaultNicSwitch(a2);
        if ( !DefaultNicSwitch )
        {
          ndisMNotifyMachineName(a2);
          PnPFlags = a2->PnPFlags;
          if ( (PnPFlags & 0x8001) != 0 )
          {
            v43 = DefaultNicSwitch + 1;
          }
          else
          {
            v44 = a2->PnPFlags;
            v43 = 1;
            if ( (a2->DriverHandle->Flags & 1) == 0 )
              goto LABEL_55;
          }
          v44 = a2->PnPFlags;
          if ( a2->MediaType < (unsigned int)NdisMediumMax )
          {
            if ( v128 )
              v44 = PnPFlags & 0xFFFFFFFE;
            else
              v44 = v43 | PnPFlags;
            a2->PnPFlags = v44;
          }
LABEL_55:
          if ( ((v44 & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
            && (unsigned int)(a2->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
            && (a2->PMAdminConfig.Value & 0xC) == 0 )
          {
            DisableMagicPacketKeyword(a2);
          }
          NdisInitializeTimer(&a2->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, a2);
          KeInitializeEvent(&a2->WaitWakeIrpCompleted, NotificationEvent, 1u);
          ndisUpdatePMCurrentCapabilities(a2);
          if ( (a2->PnPFlags & 1) != 0 )
          {
            v79 = ndisCheckMiniportWakeUpCapable(a2);
            PnPCapabilities = a2->PnPCapabilities;
            if ( (PnPCapabilities & 8) == 0 )
            {
              v81 = a2->PnPFlags | 0x20;
              v82 = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2;
              a2->PnPFlags = v81;
              if ( v82 <= 2 )
                a2->PMCurrentParameters.WakeUpFlags |= 1u;
              if ( (PnPCapabilities & 0x10) == 0 && v79 )
              {
                MinPatternWakeUp = a2->PMAdvertisedCapabilities.MinPatternWakeUp;
                if ( (unsigned int)(MinPatternWakeUp - 2) <= 1 || MinPatternWakeUp == NdisDeviceStateD3 )
                {
                  v81 |= 0x40u;
                  a2->PnPFlags = v81;
                }
                if ( (unsigned int)(a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
                {
                  a2->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
                  v84 = a2->MajorNdisVersion == 6;
                  v85 = a2->MajorNdisVersion <= 6u;
                  a2->PnPFlags = v81 | 0x40;
                  if ( !v85 || v84 && a2->MinorNdisVersion >= 0x14u )
                  {
                    DefaultNicSwitch = ndisAddWoLMagicPacket(a2);
                    if ( DefaultNicSwitch )
                    {
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        *(_DWORD *)v108 = DefaultNicSwitch;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x16u,
                          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                          (char)a2,
                          *(_QWORD *)v108);
                      }
                    }
                  }
                }
              }
              if ( (a2->Flags & 0x80u) == 0 )
              {
                v86 = a2->PnPFlags;
                if ( (v86 & 0x40) != 0 )
                {
                  if ( !a2->WaitWakeIrp )
                  {
                    a2->PnPFlags = v86 & 0xFFFFFBFF;
                    DefaultNicSwitch = ndisRequestWaitWake(a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                  }
                }
                else
                {
                  ndisCancelWaitWake(a2);
                }
              }
            }
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
          if ( a2->MediaConnectState == MediaConnectStateDisconnected )
            ndisSetMediaDisconnectTimer(a2);
          v45 = NewIrql;
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(&a2->Lock, v45);
          a2->D0CompleteSignalWorkItem.WorkItem.Context = a2;
          a2->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
          a2->DevicePowerOnWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerOn;
          a2->DevicePowerOnWorkItem.Workitem.Parameter = &a2->DevicePowerOnWorkItem;
          a2->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
          a2->DevicePowerDownWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerDown;
          a2->DevicePowerDownWorkItem.Workitem.Parameter = &a2->DevicePowerDownWorkItem;
          a2->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
          if ( (a2->PMAdvertisedCapabilities.Flags & 6) != 0 )
            ndisSelectiveSuspendInitialize(a2);
          if ( (a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0 )
          {
            ndisAoAcInitialize(a2);
            ndisReadModernStandyWoLMagicPacketKeywords(a2);
            ndisMRegisterPDCTaskClient(a2);
            ndisMInitializePDCTaskClient((char *)a2);
          }
          if ( a2->MediaType )
          {
            if ( nullCreateFilter(v138) )
              goto LABEL_66;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                1u,
                0x18u,
                (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                a2);
            *(_DWORD *)v118 = 30;
            v113 = 1;
            if ( (byte_1C00F7642 & 0x10) != 0 )
              McTemplateK0jqxqq_EtwWriteTransfer(
                30LL,
                &InitializeAdapterFailed,
                &a2->InterfaceGuid,
                (__int64)&a2->InterfaceGuid,
                *p_IfIndex,
                p_NetLuid->Value,
                6,
                30);
          }
          else
          {
            if ( EthCreateFilter(
                   (*p_GeneralAttributes)->MaxMulticastListSize,
                   (*p_GeneralAttributes)->CurrentMacAddress,
                   v138) )
            {
LABEL_66:
              v138[0]->Miniport = a2;
              goto LABEL_67;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                1u,
                0x17u,
                (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                a2);
            *(_DWORD *)v118 = 9;
            v113 = 1;
            if ( (byte_1C00F7642 & 0x10) != 0 )
              McTemplateK0jqxqq_EtwWriteTransfer(
                9LL,
                &InitializeAdapterFailed,
                &a2->InterfaceGuid,
                (__int64)&a2->InterfaceGuid,
                *p_IfIndex,
                p_NetLuid->Value,
                4,
                9);
          }
LABEL_67:
          if ( a2->MiniportMediaType == NdisMediumNative802_11 && AttachedDevice >= 6u )
          {
            v87 = &a2->600;
            if ( !nullCreateFilter((struct _X_FILTER **)&a2->600) )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0x19u,
                  (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                  a2);
              v87->Reserved1 = 0LL;
              *(_DWORD *)v118 = 30;
              v113 = 1;
              if ( (byte_1C00F7642 & 0x10) != 0 )
                McTemplateK0jqxqq_EtwWriteTransfer(
                  30LL,
                  &InitializeAdapterFailed,
                  &a2->InterfaceGuid,
                  (__int64)&a2->InterfaceGuid,
                  *p_IfIndex,
                  p_NetLuid->Value,
                  7,
                  30);
              goto LABEL_184;
            }
            *(_QWORD *)(v87->Reserved1 + 296) = a2;
          }
          v46 = 1LL;
          if ( a2->MediaType == NdisMedium802_3 )
            a2->CheckPacketFilters = 1;
          if ( (a2->Flags & 0x180) == 0 )
          {
            v48 = IoWMIRegistrationControl(a2->DeviceObject, 1u);
            if ( v48 < 0 )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v108 = v48;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0x1Au,
                  (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                  (char)a2,
                  *(_QWORD *)v108);
              }
              if ( (byte_1C00F7642 & 0x10) != 0 )
                McTemplateK0jqxqq_EtwWriteTransfer(
                  v47,
                  &InitializeAdapterFailed,
                  &a2->InterfaceGuid,
                  (__int64)&a2->InterfaceGuid,
                  *p_IfIndex,
                  p_NetLuid->Value,
                  8,
                  v48);
              *(_DWORD *)v118 = 31;
              v113 = 1;
              goto LABEL_250;
            }
            v46 = 1LL;
            v112 = 1;
          }
          if ( !v113 )
          {
            v84 = (a2->Flags & 0x100) == 0;
            *(_DWORD *)v118 = 1;
            if ( !v84 )
              goto LABEL_78;
            v49 = IoRegisterDeviceInterface(
                    a2->PhysicalDeviceObject,
                    &InterfaceClassGuid,
                    &a2->BaseName,
                    &a2->SymbolicLinkName);
            if ( v49 >= 0 )
            {
              SriovCurrentCapabilities = a2->SriovCurrentCapabilities;
              v109 = 1;
              if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
              {
                v88 = IoRegisterDeviceInterface(
                        a2->PhysicalDeviceObject,
                        &v152,
                        0LL,
                        &a2->DevinterfaceVirtSymbolicLinkName);
                v46 = 0LL;
                v89 = v88;
                if ( DefaultNicSwitch < 0 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    *(_DWORD *)v108 = v88;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      1u,
                      0x1Du,
                      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                      (char)a2,
                      *(_QWORD *)v108);
                  }
                  if ( (byte_1C00F7642 & 0x10) != 0 )
                    McTemplateK0jqxqq_EtwWriteTransfer(
                      0LL,
                      &InitializeAdapterFailed,
                      &a2->InterfaceGuid,
                      (__int64)&a2->InterfaceGuid,
                      *p_IfIndex,
                      p_NetLuid->Value,
                      0,
                      v89);
                  v7 = InputBuffer;
                  v9 = 1;
                  v8 = 0;
                  v10 = v112;
                  v113 = 1;
                  v61 = 1;
                  *(_DWORD *)v118 = 34;
                  goto LABEL_101;
                }
                v111 = 1;
              }
              a2->DeviceObject->Flags &= ~0x80u;
LABEL_78:
              v12 = *p_GeneralAttributes;
              v9 = 0;
              if ( v12 && (v51 = a2->IfBlock) != 0LL )
              {
                updated = ndisIfUpdateInterfaceOnInitialize(a2, v51, v12);
                if ( !updated )
                {
                  v110 = 1;
                  if ( (a2->PnPFlags & 0x200000) != 0 )
                    a2->PhysicalPerformanceCounters = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePool2(
                                                                                               64LL,
                                                                                               32LL,
                                                                                               2002994254);
                  if ( !a2->OidList )
                  {
                    v143[0] = 0LL;
                    v143[1] = a2;
                    v144 = 0LL;
                    OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v143);
                    if ( OidList )
                    {
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        *(_DWORD *)v108 = OidList;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x1Fu,
                          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                          (char)a2,
                          *(_QWORD *)v108);
                      }
                      if ( (byte_1C00F7642 & 0x10) != 0 )
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          v53,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          *p_IfIndex,
                          p_NetLuid->Value,
                          12,
                          OidList);
                    }
                  }
                  v55 = a2->Offload;
                  if ( v55 )
                  {
                    if ( v55->SupportsOffload == 1 )
                    {
                      v55->SupportsTopOffload = 1;
                      v90 = a2->Offload;
                      p_TopCapabilities = &v90->TopCapabilities;
                      v90 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v90 + 8);
                      *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v90->SupportsOffload;
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v90->MiniportCurrentConfig.Checksum.IPv4Transmit + 4);
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v90->MiniportCurrentConfig.Checksum.IPv6Transmit + 4);
                      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4
                                                                              + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v90->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                      *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v90->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                      *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_OWORD *)&v90->MiniportCurrentConfig.IPsecV1.IPv4AH;
                      *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v90->MiniportCurrentConfig.LsoV2.IPv4.MinSegmentCount;
                      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
                      v92 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)((char *)&v90->MiniportCurrentConfig.LsoV2.IPv6
                                                                                   + 12);
                      v90 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v90 + 128);
                      p_TopCapabilities[-1].UdpSegmentation.IPv6 = v92;
                      *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v90->SupportsOffload;
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v90->MiniportCurrentConfig.Checksum.IPv4Transmit + 4);
                      *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v90->MiniportCurrentConfig.Checksum.IPv6Transmit + 4);
                      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4
                                                                              + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v90->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                      *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v90->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                      *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_QWORD *)&v90->MiniportCurrentConfig.IPsecV1.IPv4AH;
                      ndisMergeOffloadCapsAndRegistry(a2, &a2->Offload->TopCapabilities);
                    }
                    v93 = a2->Offload;
                    if ( v93->SupportsTcpConnectionOffload == 1 )
                    {
                      v93->SupportsTopTcpConnectionOffload = 1;
                      v94 = a2->Offload;
                      *(_OWORD *)&v94->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v94->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
                      v94->TopTcpConnectionOffloadCapabilities.Flags = v94->MiniportTcpConnectionOffloadCurrentConfig.Flags;
                    }
                  }
                  v7 = InputBuffer;
                  if ( !ndisQueueMiniportOnDriver(a2, (struct _NDIS_M_DRIVER_BLOCK *)InputBuffer) )
                    goto LABEL_315;
                  v119 = 1;
                  ndisSetDeviceInterfaceState(a2, 1u);
                  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v56) >= 0 )
                  {
                    ndisPcwNotifyMiniportCreation(a2);
                    Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
                    if ( Ndis::BindState::SetBinding(
                           &a2->Bindings.Miniport,
                           BindingDisabled,
                           Reason_MiniportDeviceNotStarted) )
                    {
                      memset(v145, 0, sizeof(v145));
                      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v145);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v95,
                            0x1Cu,
                            0x20u,
                            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                            *(unsigned __int16 **)&v145[8],
                            *(_QWORD *)v145);
                      }
                    }
                    if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
                    {
                      memset(v146, 0, sizeof(v146));
                      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v146);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v96,
                            0x1Cu,
                            0x21u,
                            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                            *(unsigned __int16 **)&v146[8],
                            *(_QWORD *)v146);
                      }
                    }
                    if ( Ndis::BindState::SetPause(
                           &a2->Bindings.Miniport,
                           DatapathRunning,
                           PauseReason_RemovingMiniport) )
                    {
                      memset(v147, 0, sizeof(v147));
                      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v147);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            (int)v57,
                            0x1Cu,
                            0x22u,
                            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                            *(unsigned __int16 **)&v147[8],
                            *(_QWORD *)v147);
                      }
                    }
                    if ( (a2->Flags & 0x10000) == 0
                      && Ndis::BindState::SetBinding(
                           &a2->Bindings.Miniport,
                           BindingDisabled,
                           Reason_DefaultPortNotActive) )
                    {
                      memset(v148, 0, sizeof(v148));
                      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v148);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            (int)v57,
                            0x1Cu,
                            0x23u,
                            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                            *(unsigned __int16 **)&v148[8],
                            *(_QWORD *)v148);
                      }
                    }
                    Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine, v57);
                    Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
                    if ( (a2->Flags & 0x100) == 0 )
                    {
                      v132 = (_BYTE)ndisAcOnLine == 1;
                      ndisNotifyMiniports(a2, v58, &v132);
                    }
                    v15 = AttachedDevice < 6u;
                    a2->EthDB = v138[0];
                    if ( v15 )
                    {
                      a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
                      Flags = a2->Flags;
                      if ( (Flags & 0x40000) != 0 )
                      {
                        v98 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
                      }
                      else
                      {
                        if ( (Flags & 0x40) != 0 )
                        {
                          a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                          a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                          v99 = ndisMDeferredSendPacketsSG;
                          if ( !v7->Dpc.DeferredContext )
                            v99 = ndisMDeferredSendSG;
                          a2->DeferredSendHandler = v99;
                          goto LABEL_96;
                        }
                        v98 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
                      }
                      a2->FinalSendPacketsHandler = v98;
                      a2->NextSendPacketsHandler = v98;
                    }
                    else
                    {
                      a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                      a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                    }
LABEL_96:
                    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
                    ndisMSetIndicatePacketHandler(a2);
                    v59 = NewIrql;
                    a2->MiniportThread = 0LL;
                    KeReleaseSpinLock(&a2->Lock, v59);
                    if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
                      && a2->PhysicalMediumType == NdisPhysicalMedium802_3 )
                    {
                      v84 = a2->PMHardwareCapabilities.Header.Revision == 2;
                      InputBuffer = a2->PhysicalDeviceObject;
                      v127 = 0;
                      v124 = 4;
                      v125 = 1;
                      if ( !v84
                        || (a2->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
                        || a2->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
                        || a2->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
                        || (unsigned int)(a2->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
                        || (a2->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
                        || (v100 = a2->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v126 = 1, (_BYTE)v100 != 3) )
                      {
                        v126 = 0;
                      }
                      ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
                    }
                    ndisPktMonMiniportRegister(a2);
                    *(_DWORD *)v118 = 0;
                    v60 = 0;
                    v116 = 0;
                    v117 = 0;
                    goto LABEL_99;
                  }
                  *(_DWORD *)v118 = 39;
LABEL_314:
                  v113 = 1;
LABEL_315:
                  v9 = 1;
                  v8 = v111;
                  v10 = v112;
                  v61 = v109;
                  v11 = v110;
                  goto LABEL_102;
                }
              }
              else
              {
                updated = -1073741823;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v108 = updated;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x1Eu,
                  (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                  (char)a2,
                  *(_QWORD *)v108);
              }
              if ( (byte_1C00F7642 & 0x10) != 0 )
                McTemplateK0jqxqq_EtwWriteTransfer(
                  v46,
                  &InitializeAdapterFailed,
                  &a2->InterfaceGuid,
                  (__int64)&a2->InterfaceGuid,
                  *p_IfIndex,
                  p_NetLuid->Value,
                  11,
                  updated);
              v7 = InputBuffer;
              *(_DWORD *)v118 = 32;
              goto LABEL_314;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v108 = v49;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x1Cu,
                (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
                (char)a2,
                *(_QWORD *)v108);
            }
            if ( (byte_1C00F7642 & 0x10) != 0 )
              McTemplateK0jqxqq_EtwWriteTransfer(
                v46,
                &InitializeAdapterFailed,
                &a2->InterfaceGuid,
                (__int64)&a2->InterfaceGuid,
                *p_IfIndex,
                p_NetLuid->Value,
                10,
                v49);
            *(_DWORD *)v118 = 35;
LABEL_254:
            v7 = InputBuffer;
            v9 = 1;
            v8 = 0;
            v10 = v112;
            goto LABEL_100;
          }
LABEL_250:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v108 = v113;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              1u,
              0x1Bu,
              (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
              (char)a2,
              *(_QWORD *)v108);
          }
          OutputBufferLength[0] = *(_DWORD *)v118;
          NdisWriteErrorLogEntry(a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
          goto LABEL_254;
        }
      }
LABEL_184:
      v9 = 1;
      goto LABEL_185;
    }
    v39 = ndisMSetOffloadAttributes(a2, &Offload->MiniportInitialConfig, &Offload->MiniportInitialConfig, 0LL, 0LL);
LABEL_45:
    if ( v39 )
      goto LABEL_184;
    goto LABEL_46;
  }
  v7 = InputBuffer;
  v8 = 0;
  v9 = 1;
  v10 = 0;
  v61 = 0;
LABEL_102:
  if ( *(_DWORD *)v118 )
  {
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v12);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
  }
  if ( v11 )
  {
    *(_QWORD *)&a2->OperStatus = 2LL;
    v102 = a2->IfBlock;
    if ( v102->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v102->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    PhysicalPerformanceCounters = a2->PhysicalPerformanceCounters;
    if ( PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
      a2->PhysicalPerformanceCounters = 0LL;
    }
  }
  if ( v10 )
  {
    IoWMIRegistrationControl(a2->DeviceObject, 2u);
    v10 = 0;
  }
  v62 = v61;
  if ( v61 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceNetSymbolicLinkName, 0);
    v62 = 0;
  }
  if ( v8 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a2->DevinterfaceVirtSymbolicLinkName);
    a2->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v8 = 0;
  }
  if ( v9 )
  {
    ndisIovDeleteDefaultNicSwitch(a2);
    v15 = (_BYTE)v129 != 0;
    LOBYTE(v129) = -(char)v129;
    ndisMCommonHaltMiniport(
      a2,
      (v61 != 0 ? 4 : 0) | (v62 != 0 ? 0x40 : 0) | (v10 != 0 ? 130 : 128) | (v15 ? 8 : 0) | (v8 != 0 ? 0x100 : 0));
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v122 )
  {
    if ( (a2->Flags & 0x40) != 0 && a2->MiniportSGDmaBlock )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x24u,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          a2);
      ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    if ( a2->MiniportSGDmaBlock )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v104 = NewIrql;
      a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v104);
      if ( !ndisWaitForKernelObject(&Event, 30000LL) )
        goto LABEL_114;
    }
    else
    {
      v105 = NewIrql;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v105);
    }
    a2->Flags &= ~0x40u;
  }
LABEL_114:
  if ( v119 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x25u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        a2);
    ndisDeQueueMiniportOnDriver(a2, (struct _NDIS_M_DRIVER_BLOCK *)v7);
  }
  if ( v117 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v120 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v116 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x26u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        a2);
    ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)v7, 0, 2u);
  }
  GeneralAttributes = a2->GeneralAttributes;
  if ( GeneralAttributes )
  {
    if ( AttachedDevice >= 6u )
      ExFreePoolWithTag(GeneralAttributes, 0);
    a2->GeneralAttributes = 0LL;
  }
  if ( v121 )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)a2->PeriodicReceivesNblCountIndex, 0x527374uLL);
    a2->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v108 = *(_DWORD *)v118;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x27u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a2,
      *(_QWORD *)v108);
  }
  return *(unsigned int *)v118;
}
