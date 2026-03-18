/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C000C224 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C002A02C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0043C3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C004D34C (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x1C004FCB0 (-SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C0058354 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ @ 0x1C00585A4 (-IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0165640 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0172E70 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC3A8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01D4190 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0222F18 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C02BB80C (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C02BB87C (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C02BD3B4 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C357C (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3BA8 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C62F8 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C02C9D68 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02CE778 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CECB4 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D48F4 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02DB5B0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C02E5760 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02FA214 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02FEF50 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C03016F0 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0362D5C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0377104 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C0391968 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C03AFECC (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rdi
  char IsDrtEnabled; // al
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  char *v26; // r14
  __int64 v27; // r9
  __int64 v28; // rdx
  char *v29; // rax
  _OWORD *v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS *v32; // rax
  struct DXGPROCESS *v33; // rdi
  __int64 v34; // rdi
  char *v35; // r15
  unsigned int v36; // edx
  __int64 v37; // rcx
  int updated; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct DXGPROCESS *v41; // rax
  struct CCD_BTL *v42; // rax
  struct _KTHREAD **v43; // rax
  ADAPTER_RENDER **v44; // rcx
  void *v45; // rcx
  NTSTATUS v46; // eax
  struct _KTHREAD **v47; // rax
  __int64 v48; // r12
  struct DXGDEVICE *v49; // r15
  __int64 v50; // r9
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v52; // rdi
  _QWORD *v53; // r8
  struct _KTHREAD **v54; // rax
  struct DXGDEVICE *v55; // rax
  struct DXGPROCESS *v56; // rax
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 v58; // r9
  PVOID *p_DeviceContext; // rcx
  UINT v60; // r15d
  struct _D3DDDI_ALLOCATIONLIST *v61; // r15
  unsigned int v62; // edx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v66; // rdi
  struct DXGDEVICE *Elements; // rax
  PVOID *v68; // rcx
  struct _KTHREAD **v69; // rax
  struct _KTHREAD **v70; // r15
  struct DXGDEVICE *v71; // r13
  __int64 v72; // rdi
  __int64 v73; // r12
  unsigned int v74; // esi
  unsigned int v75; // edi
  unsigned int HostProcess; // eax
  __int64 v77; // r9
  int v78; // ecx
  unsigned int v79; // r8d
  struct _EX_RUNDOWN_REF **v80; // rax
  _QWORD *v81; // r8
  __int64 v82; // rax
  struct _EX_RUNDOWN_REF **v83; // rcx
  struct _EX_RUNDOWN_REF **v84; // rax
  struct _EX_RUNDOWN_REF *v85; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  unsigned int v87; // r8d
  int v88; // edx
  int v89; // ecx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v91; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v92; // rdi
  struct DXGPROCESS *v93; // rax
  struct _FILE_OBJECT *v94; // rdi
  unsigned int v95; // edx
  int IsTargetInClientVidPnTopology; // edi
  struct _FILE_OBJECT *v97; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v99; // rax
  NTSTATUS Status; // eax
  unsigned int v101; // edx
  unsigned int MonitorHash; // eax
  int v103; // eax
  int v104; // eax
  RAPID_HPD_MANAGER *v105; // rdi
  __int64 v106; // rcx
  int v107; // edx
  __int64 v108; // rcx
  __int64 v109; // r8
  int v110; // ecx
  __int64 v111; // rdx
  int v112; // edi
  int v113; // [rsp+50h] [rbp-8B8h]
  unsigned __int8 v114[4]; // [rsp+54h] [rbp-8B4h] BYREF
  struct _EX_RUNDOWN_REF *v115; // [rsp+58h] [rbp-8B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-8A8h] BYREF
  __int64 v117; // [rsp+68h] [rbp-8A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-898h] BYREF
  __int64 v119; // [rsp+88h] [rbp-880h] BYREF
  struct _FILE_OBJECT *v120; // [rsp+90h] [rbp-878h] BYREF
  struct _EX_RUNDOWN_REF *v121; // [rsp+98h] [rbp-870h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-868h] BYREF
  struct DXGDEVICE *v123; // [rsp+B0h] [rbp-858h] BYREF
  _QWORD v124[2]; // [rsp+B8h] [rbp-850h] BYREF
  int v125; // [rsp+C8h] [rbp-840h]
  int v126; // [rsp+CCh] [rbp-83Ch]
  DXGDEVICE *v127; // [rsp+D0h] [rbp-838h] BYREF
  struct DXGDEVICE *v128; // [rsp+D8h] [rbp-830h] BYREF
  struct DXGADAPTER *v129[2]; // [rsp+E0h] [rbp-828h] BYREF
  struct DXGDEVICE *v130; // [rsp+F0h] [rbp-818h] BYREF
  __int64 v131; // [rsp+F8h] [rbp-810h] BYREF
  _BYTE v132[8]; // [rsp+100h] [rbp-808h] BYREF
  __int64 v133; // [rsp+108h] [rbp-800h]
  char v134; // [rsp+110h] [rbp-7F8h]
  struct _EX_RUNDOWN_REF *v135; // [rsp+118h] [rbp-7F0h] BYREF
  struct _EX_RUNDOWN_REF *v136; // [rsp+120h] [rbp-7E8h] BYREF
  struct _EX_RUNDOWN_REF *v137; // [rsp+128h] [rbp-7E0h] BYREF
  int v138; // [rsp+130h] [rbp-7D8h] BYREF
  struct DXGDEVICE *v139; // [rsp+138h] [rbp-7D0h] BYREF
  struct DXGDEVICE *v140; // [rsp+140h] [rbp-7C8h] BYREF
  struct DXGDEVICE *v141; // [rsp+148h] [rbp-7C0h] BYREF
  PVOID Object; // [rsp+150h] [rbp-7B8h] BYREF
  _QWORD v143[2]; // [rsp+158h] [rbp-7B0h] BYREF
  _BYTE v144[8]; // [rsp+168h] [rbp-7A0h] BYREF
  __int64 v145; // [rsp+170h] [rbp-798h]
  char v146; // [rsp+178h] [rbp-790h]
  struct _EX_RUNDOWN_REF *v147; // [rsp+180h] [rbp-788h] BYREF
  struct _EX_RUNDOWN_REF *v148; // [rsp+188h] [rbp-780h] BYREF
  __int64 v149; // [rsp+190h] [rbp-778h] BYREF
  struct _EX_RUNDOWN_REF *v150; // [rsp+198h] [rbp-770h] BYREF
  _QWORD v151[2]; // [rsp+1A0h] [rbp-768h] BYREF
  unsigned __int8 v152[16]; // [rsp+1B0h] [rbp-758h] BYREF
  __int128 v153; // [rsp+1C0h] [rbp-748h]
  __int128 v154; // [rsp+1D0h] [rbp-738h]
  __int128 v155; // [rsp+1E0h] [rbp-728h]
  __int128 v156; // [rsp+1F0h] [rbp-718h]
  __int128 v157; // [rsp+200h] [rbp-708h]
  PVOID P; // [rsp+210h] [rbp-6F8h] BYREF
  _BYTE v159[256]; // [rsp+218h] [rbp-6F0h] BYREF
  int v160; // [rsp+318h] [rbp-5F0h]
  _QWORD v161[54]; // [rsp+320h] [rbp-5E8h] BYREF
  struct _D3DKMT_RENDER v162; // [rsp+4D0h] [rbp-438h] BYREF
  __int64 v163[10]; // [rsp+640h] [rbp-2C8h] BYREF
  _QWORD v164[10]; // [rsp+690h] [rbp-278h] BYREF
  _BYTE v165[160]; // [rsp+6E0h] [rbp-228h] BYREF
  _BYTE v166[160]; // [rsp+780h] [rbp-188h] BYREF
  _BYTE v167[160]; // [rsp+820h] [rbp-E8h] BYREF

  memset(v163, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v163[1]);
  v163[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v163[3]) = 45;
  LOBYTE(v163[6]) = -1;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v113 = 0;
  v12 = *((_DWORD *)a2 + 2);
  if ( !v12 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      WdLogSingleEntry1(3LL, *((unsigned int *)a2 + 1));
      LODWORD(v11) = -1073741789;
      return (unsigned int)v11;
    }
    v13 = *((_DWORD *)a2 + 3);
    Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
    if ( Current )
    {
      if ( !v13 || (IsDrtEnabled = DxgkpIsDrtEnabled(v14), v17 = 4096, !IsDrtEnabled) )
        v17 = 0;
      *((_DWORD *)Current + 106) = v17 | *((_DWORD *)Current + 106) & 0xFFFFEFFF;
    }
LABEL_8:
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  if ( (unsigned int)(v12 - 41) <= 2 )
  {
    LODWORD(v11) = -1073741637;
    Feature_GuestAllocMapping__private_IsEnabledPreCheck();
    return (unsigned int)v11;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled(v7) )
  {
    WdLogSingleEntry1(3LL, 1731LL);
    goto LABEL_14;
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v7, v6, v8, v9) + 106) & 0x100) != 0 )
  {
    v20 = *((int *)a2 + 2);
    if ( (unsigned int)v20 > 0x29 || (v21 = 0x20020010000LL, !_bittest64(&v21, v20)) )
    {
      WdLogSingleEntry1(4LL, 427LL);
      return 3221225485LL;
    }
  }
  v23 = *((int *)a2 + 2);
  if ( (int)v23 <= 23 )
  {
    if ( (_DWORD)v23 == 23 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x30u )
      {
        WdLogSingleEntry1(3LL, 492LL);
        goto LABEL_14;
      }
      updated = DxgkpSendTestVmBusCommand(this, a2);
      goto LABEL_387;
    }
    if ( (int)v23 <= 14 )
    {
      if ( (_DWORD)v23 != 14 )
      {
        if ( (_DWORD)v23 != 1 )
        {
          if ( (_DWORD)v23 != 2 )
          {
            switch ( (_DWORD)v23 )
            {
              case 3:
                if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[11]) )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
                LODWORD(v11) = COREADAPTERACCESS::AcquireExclusive((__int64)a3);
                if ( (int)v11 >= 0 )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
                return (unsigned int)v11;
              case 4:
                if ( *((_DWORD *)a2 + 1) >= 0x10u )
                {
                  if ( (unsigned int)(*((_DWORD *)a2 + 3) - 1) <= 0x3FF )
                  {
                    g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                    return (unsigned int)v11;
                  }
                  WdLogSingleEntry1(3LL, 512LL);
                }
                else
                {
                  WdLogSingleEntry1(3LL, 503LL);
                }
                goto LABEL_14;
              case 5:
                if ( *((_DWORD *)a2 + 1) >= 0x14u )
                {
                  g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                  return (unsigned int)v11;
                }
                WdLogSingleEntry1(3LL, 526LL);
                goto LABEL_14;
            }
            if ( (_DWORD)v23 != 6 )
            {
              switch ( (_DWORD)v23 )
              {
                case 0xA:
                  if ( *((_DWORD *)a2 + 1) >= 0x10u )
                  {
                    *((_DWORD *)a2 + 3) = *((_DWORD *)this + 760);
                    return (unsigned int)v11;
                  }
                  WdLogSingleEntry1(3LL, 543LL);
                  goto LABEL_14;
                case 0xB:
                  v25 = *((_DWORD *)this + 760);
                  if ( v25 && *((unsigned int *)a2 + 1) >= 344 * (unsigned __int64)(v25 - 1) + 360 )
                  {
                    v26 = (char *)a2 + 352;
                    v27 = v25;
                    do
                    {
                      v28 = *((_QWORD *)this + 362);
                      v29 = v26 - 336;
                      v30 = (_OWORD *)(v10 + v28 + 8);
                      v31 = 2LL;
                      do
                      {
                        *(_OWORD *)v29 = *v30;
                        *((_OWORD *)v29 + 1) = v30[1];
                        *((_OWORD *)v29 + 2) = v30[2];
                        *((_OWORD *)v29 + 3) = v30[3];
                        *((_OWORD *)v29 + 4) = v30[4];
                        *((_OWORD *)v29 + 5) = v30[5];
                        *((_OWORD *)v29 + 6) = v30[6];
                        v29 += 128;
                        *((_OWORD *)v29 - 1) = v30[7];
                        v30 += 8;
                        --v31;
                      }
                      while ( v31 );
                      *(_OWORD *)v29 = *v30;
                      *((_OWORD *)v29 + 1) = v30[1];
                      *((_OWORD *)v29 + 2) = v30[2];
                      *((_OWORD *)v29 + 3) = v30[3];
                      *((_OWORD *)v29 + 4) = v30[4];
                      *(_DWORD *)v26 = *(_DWORD *)(v10 + v28 + 344);
                      v26[4] = *(_BYTE *)(v10 + v28 + 356);
                      v10 += 520LL;
                      v26 += 344;
                      --v27;
                    }
                    while ( v27 );
                    return (unsigned int)v11;
                  }
                  WdLogSingleEntry1(3LL, 562LL);
                  goto LABEL_14;
                case 0xC:
                  if ( *((_DWORD *)a2 + 1) >= 0x10u )
                  {
                    v24 = *((_QWORD *)this + 350);
                    if ( v24 )
                      *(_BYTE *)(v24 + 912) = *((_BYTE *)a2 + 12);
                    return (unsigned int)v11;
                  }
                  WdLogSingleEntry1(3LL, 581LL);
                  goto LABEL_14;
              }
              goto LABEL_321;
            }
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              WdLogSingleEntry1(3LL, 600LL);
              goto LABEL_14;
            }
            v32 = DXGPROCESS::GetCurrent((unsigned int)(v23 - 6), v23, v18, v19);
            v33 = v32;
            if ( !v32 )
            {
              v34 = 608LL;
              WdLogSingleEntry1(2LL, 608LL);
LABEL_52:
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the current DXGPROCESS",
                v34,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_14;
            }
            v35 = (char *)v32 + 216;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v35, 0LL);
            *((_QWORD *)v35 + 1) = KeGetCurrentThread();
            v127 = 0LL;
            v36 = *((_DWORD *)a2 + 3);
            if ( v36 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v130, v36, (struct _KTHREAD **)v33, &v127);
              if ( !v127 )
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"The device handle is invalid: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v11) = -1073741811;
                if ( v130 )
                {
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v130 + 2), v130);
                  LODWORD(v11) = -1073741811;
                }
                goto LABEL_59;
              }
              if ( v130 && _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v130 + 2), v130);
            }
            if ( !v127 )
            {
              v127 = (DXGDEVICE *)((*((_QWORD *)v33 + 40) - 24LL) & -(__int64)(*((_QWORD *)v33 + 40) != 0LL));
              if ( !v127 )
              {
                WdLogSingleEntry1(2LL, 635LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"The process does not have any devices",
                  635LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v11) = -1073741811;
LABEL_59:
                *((_QWORD *)v35 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v35, 0LL);
                KeLeaveCriticalRegion();
                return (unsigned int)v11;
              }
            }
            DXGDEVICE::GetContexts(v127, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
            *((_DWORD *)a2 + 3) = *(_DWORD *)(v37 + 436);
            *((_QWORD *)v35 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v35, 0LL);
            KeLeaveCriticalRegion();
LABEL_67:
            LODWORD(v11) = v113;
            return (unsigned int)v11;
          }
LABEL_80:
          LODWORD(v11) = -1073741637;
          return (unsigned int)v11;
        }
        updated = MonitorDRTTest(this, a2, (__int64)v163);
LABEL_387:
        LODWORD(v11) = updated;
        return (unsigned int)v11;
      }
      if ( *((_DWORD *)a2 + 1) < 0x14u )
      {
        WdLogSingleEntry1(3LL, 1123LL);
        goto LABEL_14;
      }
      v39 = *((_QWORD *)this + 27);
      if ( v39 )
      {
        updated = DxgkHandleThermalCoolingDrtEscape(v39, a2);
        goto LABEL_387;
      }
LABEL_86:
      LODWORD(v11) = -1073741823;
      return (unsigned int)v11;
    }
    if ( (_DWORD)v23 != 15 )
    {
      if ( (_DWORD)v23 != 16 )
      {
        if ( (_DWORD)v23 != 17 )
        {
          if ( (_DWORD)v23 == 18 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x10u )
            {
              WdLogSingleEntry1(3LL, 1092LL);
              goto LABEL_14;
            }
            v54 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v23 - 18), v23, v18, v19);
            if ( !v54 )
            {
              v34 = 1100LL;
              WdLogSingleEntry1(2LL, 1100LL);
              goto LABEL_52;
            }
            v128 = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v131, *((_DWORD *)a2 + 3), v54, &v128);
            v55 = v128;
            if ( v128 )
            {
              *((_BYTE *)v128 + 1871) = 1;
              *(_BYTE *)(*((_QWORD *)v55 + 5) + 337LL) = 1;
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the device by handle: 0x%I64x",
                *((unsigned int *)a2 + 3),
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v11) = -1073741811;
              v113 = -1073741811;
            }
            if ( !v131 )
              return (unsigned int)v11;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v131 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_67;
            v44 = (ADAPTER_RENDER **)v131;
            goto LABEL_195;
          }
          if ( (_DWORD)v23 == 19 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x10u )
              return 3221225485LL;
            if ( g_OSTestSigningEnabled )
            {
              *((_BYTE *)DXGGLOBAL_GetGlobal() + 1648) = *((_DWORD *)a2 + 3) != 0;
              return (unsigned int)v11;
            }
            goto LABEL_80;
          }
          if ( (_DWORD)v23 != 20 )
          {
            v40 = (unsigned int)(v23 - 21);
            if ( (_DWORD)v23 != 21 )
            {
              v41 = DXGPROCESS::GetCurrent(v40, v23, v18, v19);
              DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)&Event, v41);
              DXGUSERCRIT::Acquire((DXGUSERCRIT *)&Event, 0);
              v42 = CCD_BTL::Global();
              CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v42 + 8));
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)&Event);
              return (unsigned int)v11;
            }
            if ( *((_DWORD *)a2 + 1) < 0x18u )
            {
              WdLogSingleEntry1(3LL, 906LL);
              goto LABEL_14;
            }
            v43 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v40, v23, v18, v19);
            if ( !v43 )
            {
              v34 = 914LL;
              WdLogSingleEntry1(2LL, 914LL);
              goto LABEL_52;
            }
            v139 = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v123, *((_DWORD *)a2 + 3), v43, &v139);
            if ( v139 )
            {
              v45 = (void *)*((_QWORD *)a2 + 2);
              Object = 0LL;
              v46 = ObReferenceObjectByHandle(v45, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
              v11 = v46;
              v113 = v46;
              if ( v46 >= 0 )
              {
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v151, v139);
                KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
                if ( v151[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v151);
              }
              else
              {
                WdLogSingleEntry1(2LL, v46);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"hEvent is invalid, returning 0x%I64x",
                  v11,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot get the device by handle: 0x%I64x",
                *((unsigned int *)a2 + 3),
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v11) = -1073741811;
              v113 = -1073741811;
            }
            if ( !v123 )
              return (unsigned int)v11;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_67;
            v44 = (ADAPTER_RENDER **)v123;
LABEL_195:
            ADAPTER_RENDER::DestroyDeviceNoLocks(v44[2], (struct DXGDEVICE *)v44);
            goto LABEL_67;
          }
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            WdLogSingleEntry1(3LL, 814LL);
            goto LABEL_14;
          }
          v47 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v23 - 20), v23, v18, v19);
          v48 = (__int64)v47;
          if ( !v47 )
          {
            v34 = 822LL;
            WdLogSingleEntry1(2LL, 822LL);
            goto LABEL_52;
          }
          v141 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v117, *((_DWORD *)a2 + 3), v47, &v141);
          v49 = v141;
          if ( !v141 )
          {
            WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot get the device by handle: 0x%I64x",
              *((unsigned int *)a2 + 3),
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741811;
            v113 = -1073741811;
LABEL_114:
            if ( !v117 )
              return (unsigned int)v11;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v117 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_67;
            v44 = (ADAPTER_RENDER **)v117;
            goto LABEL_195;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v124, v49);
          v133 = *(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL);
          v134 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v132);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v165, (__int64)v49, 0, v50, 0);
          LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v165, 0LL);
          v113 = v11;
          if ( (int)v11 < 0 )
          {
LABEL_118:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
            if ( v134 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v132);
            if ( v124[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v124);
            goto LABEL_114;
          }
          v121 = 0LL;
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        v48,
                                                        (DXGALLOCATIONREFERENCE *)&v148,
                                                        *((_DWORD *)a2 + 4));
          DXGALLOCATIONREFERENCE::MoveAssign(&v121, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v148);
          v52 = v121;
          if ( v121 )
          {
            v53 = (_QWORD *)*((_QWORD *)v49 + 2);
            if ( *(_QWORD *)(*(_QWORD *)(v121[1].Count + 16) + 16LL) == v53[2] )
            {
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (v121[9].Count & 0x800) == 0 )
                {
                  v138 = 0;
                  v149 = 0LL;
                  LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v53[81] + 8LL) + 232LL))(
                                   v53[82],
                                   v121[3].Count,
                                   0LL,
                                   &v138,
                                   &v149,
                                   0LL);
                  v113 = v11;
                  if ( (int)v11 >= 0 )
                    LODWORD(v52[9].Count) |= 0x800u;
                  goto LABEL_125;
                }
                WdLogSingleEntry1(2LL, 870LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Allocation is already pinned",
                  870LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                if ( _bittest((const signed __int32 *)&v121[9], 0xBu) )
                {
                  (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v53[81] + 8LL) + 240LL))(
                    v53[82],
                    v121[3].Count);
                  LODWORD(v52[9].Count) &= ~0x800u;
                  goto LABEL_125;
                }
                WdLogSingleEntry1(2LL, 891LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Allocation is not pinned",
                  891LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry3(2LL, v49, v121, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                (__int64)v49,
                (__int64)v52,
                -1073741811LL,
                0LL,
                0LL);
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 4));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot get the allocation by handle: 0x%I64x",
              *((unsigned int *)a2 + 4),
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v11) = -1073741811;
          v113 = -1073741811;
LABEL_125:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v121);
          goto LABEL_118;
        }
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          WdLogSingleEntry1(3LL, 978LL);
          goto LABEL_14;
        }
        v56 = DXGPROCESS::GetCurrent((unsigned int)(v23 - 17), v23, v18, v19);
        if ( !v56 )
        {
          v34 = 986LL;
          WdLogSingleEntry1(2LL, 986LL);
          goto LABEL_52;
        }
        DeviceObject = 0LL;
        DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
          (DXGCONTEXTBYHANDLE *)&IoStatusBlock,
          *((_DWORD *)a2 + 3),
          v56,
          (struct DXGCONTEXT **)&DeviceObject,
          0,
          1);
        if ( !DeviceObject )
        {
          WdLogSingleEntry1(2LL, 996LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Cannot get the context", 996LL, 0LL, 0LL, 0LL, 0LL);
          LODWORD(v11) = -1073741811;
LABEL_155:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&IoStatusBlock);
          return (unsigned int)v11;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        NextDevice = DeviceObject->NextDevice;
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v129,
          (struct DXGDEVICE *)NextDevice);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)&DeviceObject[1].Queue.Wcb.DeviceContext);
        Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)this;
        LOBYTE(Event.Header.WaitListHead.Blink) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v166, (__int64)NextDevice, 0, v58, 0);
        LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v166, 0LL);
        if ( (int)v11 < 0 )
        {
          p_DeviceContext = &DeviceObject[1].Queue.Wcb.DeviceContext;
          *(_QWORD *)&DeviceObject[1].Queue.Wcb.NumberOfMapRegisters = 0LL;
          ExReleasePushLockExclusiveEx(p_DeviceContext, 0LL);
          KeLeaveCriticalRegion();
LABEL_158:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v166);
          if ( LOBYTE(Event.Header.WaitListHead.Blink) )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
          if ( v129[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v129);
          goto LABEL_155;
        }
        if ( *((_DWORD *)a2 + 8) > 0x10u )
        {
          WdLogSingleEntry1(2LL, 1017LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid number of allocations",
            1017LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v11) = -1073741811;
        }
        v60 = *((_DWORD *)a2 + 4);
        if ( !v60 )
        {
          WdLogSingleEntry1(2LL, 1022LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid command buffer size",
            1022LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v11) = -1073741811;
          v60 = *((_DWORD *)a2 + 4);
        }
        memset(&v162, 0, sizeof(v162));
        v162.hDevice = *((_DWORD *)a2 + 3);
        v162.AllocationCount = *((_DWORD *)a2 + 8);
        v162.CommandLength = v60;
        v162.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
        v61 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
        v162.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
        *(_DWORD *)&v162.Flags |= 0x20u;
        IsDxgmms2 = DXGADAPTER::IsDxgmms2((DXGADAPTER *)DeviceObject->NextDevice->NextDevice->NextDevice);
        v114[0] = IsDxgmms2;
        LODWORD(v120) = v62;
        P = 0LL;
        v160 = 0;
        v66 = 0LL;
        v128 = 0LL;
        if ( IsDxgmms2 )
        {
          Elements = (struct DXGDEVICE *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                           (__int64 *)&P,
                                           v62,
                                           v63,
                                           v64);
          v66 = (struct DXGALLOCATION **)Elements;
          v128 = Elements;
          if ( !Elements )
          {
            WdLogSingleEntry1(3LL, 1051LL);
            if ( P != v159 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v160 = 0;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v166);
            if ( LOBYTE(Event.Header.WaitListHead.Blink) )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
            if ( v129[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v129);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&IoStatusBlock);
            return 3221225495LL;
          }
          LODWORD(v11) = DxgkReferenceAllocationList(
                           (unsigned int *)&v120,
                           v61,
                           (struct DXGALLOCATION **)Elements,
                           (struct DXGDEVICE *)DeviceObject->NextDevice);
        }
        if ( (int)v11 >= 0 )
          LODWORD(v11) = DXGCONTEXT::Render(
                           (DXGCONTEXT *)DeviceObject,
                           &v162,
                           (struct COREDEVICEACCESS *)v166,
                           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&Event,
                           (struct DXGCONTEXT **)&DeviceObject,
                           v66,
                           0LL);
        if ( IsDxgmms2 )
          DxgkUnreferenceAllocationList((unsigned int)v120, (struct _EX_RUNDOWN_REF **)v66);
        v68 = &DeviceObject[1].Queue.Wcb.DeviceContext;
        *(_QWORD *)&DeviceObject[1].Queue.Wcb.NumberOfMapRegisters = 0LL;
        ExReleasePushLockExclusiveEx(v68, 0LL);
        KeLeaveCriticalRegion();
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        goto LABEL_158;
      }
      if ( *((_DWORD *)a2 + 1) < 0x60u )
      {
        WdLogSingleEntry1(3LL, 650LL);
        goto LABEL_14;
      }
      v69 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((unsigned int)(v23 - 16), v23, v18, v19);
      v70 = v69;
      if ( !v69 )
      {
        v34 = 658LL;
        WdLogSingleEntry1(2LL, 658LL);
        goto LABEL_52;
      }
      v140 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v119, *((_DWORD *)a2 + 3), v69, &v140);
      v71 = v140;
      if ( !v140 )
      {
        WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot get the device by handle: 0x%I64x",
          *((unsigned int *)a2 + 3),
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_191:
        LODWORD(v11) = -1073741811;
        v113 = -1073741811;
LABEL_192:
        if ( !v119 )
          return (unsigned int)v11;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v119 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
          goto LABEL_67;
        v44 = (ADAPTER_RENDER **)v119;
        goto LABEL_195;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      v125 = 0;
      v126 = 0;
      v72 = 0LL;
      v73 = *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL);
      if ( *(_BYTE *)(v73 + 209) )
      {
        *(_OWORD *)v152 = *(_OWORD *)a2;
        v153 = *((_OWORD *)a2 + 1);
        v154 = *((_OWORD *)a2 + 2);
        v155 = *((_OWORD *)a2 + 3);
        v156 = *((_OWORD *)a2 + 4);
        v157 = *((_OWORD *)a2 + 5);
        *(_DWORD *)&v152[12] = *((_DWORD *)v71 + 110);
        v74 = *(_DWORD *)&v152[12];
        v75 = *(_DWORD *)(v73 + 4432);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v70);
        if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v73 + 4344),
                    HostProcess,
                    v75,
                    v74,
                    0,
                    D3DKMT_ESCAPE_DRT_TEST,
                    0,
                    0x60u,
                    v152) < 0 )
        {
          WdLogSingleEntry1(2LL, 700LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"VmBusSendEscape failed to create standard allocation",
            700LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_191;
        }
        v125 = HIDWORD(v154);
        v126 = v155;
        v72 = v157;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v143, v71);
      v145 = *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL);
      v146 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v167, (__int64)v71, 0, v77, 0);
      LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v167, 0LL);
      v113 = v11;
      if ( (int)v11 >= 0 )
      {
        memset(v161, 0, 0x1A8uLL);
        HIDWORD(v161[0]) = *((_DWORD *)a2 + 3);
        LODWORD(v161[2]) = 4;
        v161[3] = (char *)a2 + 16;
        v78 = LODWORD(v161[0]) | 0x200;
        LODWORD(v161[0]) |= 0x200u;
        if ( *((_BYTE *)a2 + 60) )
        {
          v78 |= 1u;
          LODWORD(v161[0]) = v78;
        }
        if ( *((_BYTE *)a2 + 65) )
        {
          v78 |= 0x20u;
          LODWORD(v161[0]) = v78;
        }
        if ( *((_BYTE *)a2 + 61) )
        {
          v78 |= 0x400u;
          LODWORD(v161[0]) = v78;
        }
        if ( *((_BYTE *)a2 + 62) )
        {
          v78 |= 0x1000u;
          LODWORD(v161[0]) = v78;
        }
        if ( *((_BYTE *)a2 + 63) )
        {
          v78 |= 0x2000u;
          LODWORD(v161[0]) = v78;
        }
        if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
          LODWORD(v161[0]) = v78 | 0x8000;
        LOBYTE(v161[51]) = *((_BYTE *)a2 + 64);
        LODWORD(v161[48]) = *((_DWORD *)a2 + 14);
        HIDWORD(v161[48]) = *((_DWORD *)a2 + 17);
        HIDWORD(v161[47]) = *((_DWORD *)a2 + 10);
        LODWORD(v161[49]) = *((_DWORD *)a2 + 18);
        v161[50] = *((_QWORD *)a2 + 10);
        LODWORD(v11) = DXGDEVICE::CreateStandardAllocation(
                         v71,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v161,
                         (struct COREDEVICEACCESS *)v167);
        v113 = v11;
        if ( (int)v11 >= 0 )
        {
          v79 = HIDWORD(v161[6]);
          *((_DWORD *)a2 + 11) = HIDWORD(v161[6]);
          *((_QWORD *)a2 + 6) = v161[1];
          if ( ((_DWORD)v70[53] & 0x100) != 0 )
          {
            v135 = 0LL;
            v80 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                               (__int64)v70,
                                               (DXGALLOCATIONREFERENCE *)&v150,
                                               v79);
            DXGALLOCATIONREFERENCE::MoveAssign(&v135, v80);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v150);
            if ( v135
              && (v81 = (_QWORD *)*((_QWORD *)v71 + 2), *(_QWORD *)(*(_QWORD *)(v135[1].Count + 16) + 16LL) == v81[2]) )
            {
              v82 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v81[81] + 8LL) + 640LL))(
                      v81[82],
                      v135[3].Count,
                      0LL);
            }
            else
            {
              v82 = 0LL;
            }
            *((_QWORD *)a2 + 10) = v82;
            v83 = &v135;
          }
          else
          {
            if ( !*(_BYTE *)(v73 + 209) )
              goto LABEL_201;
            v137 = 0LL;
            v84 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                               (__int64)v70,
                                               (DXGALLOCATIONREFERENCE *)&v147,
                                               v79);
            DXGALLOCATIONREFERENCE::MoveAssign(&v137, v84);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v147);
            v85 = v137;
            if ( v137 )
            {
              HIDWORD(v137[2].Ptr) = v125;
              LOBYTE(v85[16].Count) |= 4u;
              *(_QWORD *)(v85[6].Count + 112) = v72;
              LODWORD(v85[15].Count) = v72;
            }
            v136 = 0LL;
            ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                        (__int64)v70,
                                                        (DXGRESOURCEREFERENCE *)&v115,
                                                        *((_DWORD *)a2 + 12));
            DXGRESOURCEREFERENCE::MoveAssign(&v136, ResourceSafe);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115);
            if ( v136 )
              HIDWORD(v136[2].Ptr) = v126;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v136);
            v83 = &v137;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v83);
          goto LABEL_201;
        }
        LODWORD(v11) = -1073741811;
        v113 = -1073741811;
      }
LABEL_201:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
      if ( v146 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
      if ( v143[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v143);
      goto LABEL_192;
    }
    if ( *((_DWORD *)a2 + 1) >= 0xA8u )
    {
      v87 = *((_DWORD *)a2 + 4);
      if ( v87 < *((_DWORD *)this + 760) )
      {
        v88 = *((_DWORD *)a2 + 3);
        if ( !v88 )
        {
          DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
          return (unsigned int)v11;
        }
        if ( v88 > 0 )
        {
          if ( v88 <= 3 )
          {
            DXGADAPTER::ForcePState((__int64)this, v88, v87, *((_DWORD *)a2 + 6));
            return (unsigned int)v11;
          }
          if ( v88 == 4 )
          {
            *((_DWORD *)a2 + 7) = *((_DWORD *)this + 1028);
            return (unsigned int)v11;
          }
          if ( v88 == 5 )
          {
            DXGADAPTER::QueryPStateEngineData(
              this,
              *((_DWORD *)a2 + 5),
              (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
              (unsigned int *)a2 + 4);
            return (unsigned int)v11;
          }
        }
      }
    }
    return 3221225485LL;
  }
  if ( (int)v23 > 35 )
  {
    switch ( (_DWORD)v23 )
    {
      case '$':
        updated = ForceGpupTdr(a2);
        goto LABEL_387;
      case '%':
        if ( *((_DWORD *)a2 + 1) >= 0x14u )
        {
          v111 = *(_QWORD *)(*((_QWORD *)this + 349) + 448LL);
          if ( v111 )
            v112 = *(_DWORD *)(2920LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v111 + 8) + 136);
          else
            v112 = -1;
          *((_DWORD *)a2 + 4) = v112;
          return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, 1607LL);
        goto LABEL_14;
      case '&':
        if ( *((_DWORD *)a2 + 1) >= 0x30u )
        {
          if ( *((int *)this + 673) < 2700 || !DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            WdLogSingleEntry1(2LL, 1502LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DRT Test: Test is only valid for full WDDM2.7 and above adapters.",
              1502LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
          {
            WdLogSingleEntry1(2LL, 1510LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DRT Test: Wrong value of ArgSize passed for D3DKMT_DRT_TEST_COMMAND_DISPLAY_DIAGNOSTICS_TEST.",
              1510LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v110 = *((_DWORD *)a2 + 3);
          if ( !v110 )
          {
            *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)this
                                                                                            + 349))
                                 ? 0xC00000BB
                                 : 0;
            goto LABEL_8;
          }
          if ( v110 == 1 )
          {
            DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)a2 + 4);
            IoStatusBlock.Pointer = (PVOID)0x10800000001LL;
            IoStatusBlock.Information = (ULONG_PTR)&DeviceObject;
            LODWORD(v11) = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                             *((ADAPTER_DISPLAY **)this + 349),
                             (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)&IoStatusBlock,
                             v109);
            *((_DWORD *)a2 + 11) = v11;
            if ( (int)v11 < 0 )
            {
              WdLogSingleEntry1(2LL, 1536LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DRT Test: DdiGetDisplayStateIntrusive failed.",
                1536LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            return (unsigned int)v11;
          }
          WdLogSingleEntry1(3LL, 1543LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, 1491LL);
        }
LABEL_14:
        LODWORD(v11) = -1073741811;
        return (unsigned int)v11;
      case '(':
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry1(3LL, 1623LL);
          goto LABEL_14;
        }
        DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel = *((_DWORD *)a2 + 3);
        DXGTRACKEDWORKLOAD::m_bypassPowerLevel = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 5) = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadPhysicalAdapterIndex;
        MonitorHash = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadNodeOrdinal;
        break;
      case ',':
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          WdLogSingleEntry1(3LL, 953LL);
          goto LABEL_14;
        }
        if ( !DXGPROCESS::GetCurrent((unsigned int)(v23 - 44), v23, v18, v19) )
        {
          v34 = 960LL;
          WdLogSingleEntry1(2LL, 960LL);
          goto LABEL_52;
        }
        Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)this;
        LOBYTE(Event.Header.WaitListHead.Blink) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        if ( *((_DWORD *)this + 50) == 1 )
        {
          v108 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v108 + 284);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v108 + 4292);
          *(_DWORD *)(v108 + 4292) = 0;
          if ( LOBYTE(Event.Header.WaitListHead.Blink) )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
          goto LABEL_67;
        }
        LODWORD(v11) = -1073741130;
        goto LABEL_358;
      case '-':
        if ( *((_DWORD *)a2 + 1) >= 0x40u )
        {
          v105 = (struct DXGGLOBAL *)((char *)DXGGLOBAL_GetGlobal() + 305224);
          if ( RAPID_HPD_MANAGER::IsEnabled(v105) )
          {
            if ( *((_DWORD *)a2 + 5) )
            {
              if ( *((_DWORD *)a2 + 6) )
                v107 = 2 - (*((_DWORD *)a2 + 7) != 0);
              else
                v107 = 0;
              RAPID_HPD_MANAGER::SetTestControl(v106, v107);
            }
            if ( *((_DWORD *)a2 + 3) )
              RAPID_HPD_MANAGER::ReportTriggerEvent((__int64)v105, 4u, 0LL);
            if ( *((_DWORD *)a2 + 4) )
              RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v105, 4u, 0LL);
            if ( *((_DWORD *)a2 + 8) )
              RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
                v105,
                1u,
                (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 36),
                (struct _GUID *)((char *)a2 + 40),
                0LL);
            *((_DWORD *)a2 + 14) = *((_DWORD *)v105 + 6);
            *((_DWORD *)a2 + 15) = *((_DWORD *)v105 + 7);
          }
          else
          {
            LODWORD(v11) = -1073740959;
          }
          return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, 1636LL);
        goto LABEL_14;
      case '.':
LABEL_327:
        if ( !_bittest((const signed __int32 *)this + 539, 0xBu) )
          return (unsigned int)v11;
        Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)this;
        LOBYTE(Event.Header.WaitListHead.Blink) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        if ( *((_QWORD *)this + 350) )
        {
          if ( *((_DWORD *)this + 50) == 1 )
          {
            v103 = *((_DWORD *)a2 + 2);
            if ( v103 == 30 )
            {
              v104 = ADAPTER_RENDER::EnableIommuForDrt(
                       *((ADAPTER_RENDER **)this + 350),
                       *((struct SYSMM_ADAPTER **)this + 28));
LABEL_332:
              LODWORD(v11) = v104;
              goto LABEL_358;
            }
            if ( v103 == 46 )
            {
              v104 = ADAPTER_RENDER::DisableIommuForDrt(
                       *((ADAPTER_RENDER **)this + 350),
                       *((struct SYSMM_ADAPTER **)this + 28));
              goto LABEL_332;
            }
          }
          LODWORD(v11) = 0;
        }
LABEL_358:
        if ( LOBYTE(Event.Header.WaitListHead.Blink) )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        return (unsigned int)v11;
      case '/':
        v101 = *((_DWORD *)a2 + 1);
        if ( v101 < 0x23 )
        {
          WdLogSingleEntry1(3LL, 1699LL);
          goto LABEL_14;
        }
        if ( v101 < 20 * *((_DWORD *)a2 + 7) + 35 )
        {
          WdLogSingleEntry1(3LL, 1707LL);
          goto LABEL_14;
        }
        MonitorHash = DxgkGetMonitorHash(
                        *(struct _LUID *)((char *)a2 + 12),
                        *((_DWORD *)a2 + 5),
                        (unsigned int *)a2 + 7,
                        (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 32));
        break;
      default:
LABEL_321:
        WdLogSingleEntry1(3LL, v23);
        goto LABEL_14;
    }
    *((_DWORD *)a2 + 6) = MonitorHash;
    return (unsigned int)v11;
  }
  switch ( (_DWORD)v23 )
  {
    case 0x23:
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x18u )
        {
          if ( *((_QWORD *)a2 + 2) )
            LODWORD(v11) = DxgkSetIndirectDisplayRenderAdapterByHandle(
                             *((_DWORD *)a2 + 3),
                             (struct _LUID *)a2 + 2,
                             v18,
                             v19);
          v129[0] = 0LL;
          DXGADAPTER_REFERENCE::AssignByHandle(v129, *((unsigned int *)a2 + 3), v18, v19);
          if ( v129[0] )
          {
            IoStatusBlock.Pointer = 0LL;
            ADAPTER_DISPLAY::GetPairedRenderAdapter(
              *((ADAPTER_DISPLAY **)v129[0] + 349),
              (DXGADAPTER **)&IoStatusBlock,
              0LL);
            if ( IoStatusBlock.Pointer )
              v10 = *(_QWORD *)((char *)IoStatusBlock.Pointer + 404);
            *((_QWORD *)a2 + 2) = v10;
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)&IoStatusBlock, 0LL);
          }
          DXGADAPTER_REFERENCE::Assign(v129, 0LL);
          return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, 1565LL);
        goto LABEL_14;
      }
      return 3221225506LL;
    case 0x18:
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return (unsigned int)v11;
      }
      return 3221225485LL;
    case 0x19:
      if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        return 3221225485LL;
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      DeviceObject = 0LL;
      v120 = 0LL;
      result = DxgkGetMonitorDeviceObject(
                 (const struct _LUID *)((char *)a2 + 12),
                 *((_DWORD *)a2 + 5),
                 &v120,
                 &DeviceObject);
      if ( (int)result < 0 )
        return result;
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      IoStatusBlock = 0LL;
      v99 = IoBuildDeviceIoControlRequest(
              0x232433u,
              AttachedDeviceReference,
              (char *)a2 + 24,
              4u,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v99 )
      {
        Status = IofCallDriver(AttachedDeviceReference, v99);
        if ( Status == 259 )
        {
          while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
            ;
          Status = IoStatusBlock.Status;
        }
        LODWORD(v11) = Status;
      }
      else
      {
        LODWORD(v11) = -1073741823;
      }
      ObfDereferenceObject(AttachedDeviceReference);
      v97 = v120;
      goto LABEL_290;
  }
  if ( (_DWORD)v23 != 26 )
  {
    if ( (_DWORD)v23 != 28 )
    {
      if ( (_DWORD)v23 == 29 )
      {
        updated = DrtTestSignalEventCb(this, a2, v18, v19);
        goto LABEL_387;
      }
      if ( (_DWORD)v23 != 30 )
      {
        if ( (_DWORD)v23 != 31 )
        {
          if ( (_DWORD)v23 == 34 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              v89 = *((_DWORD *)a2 + 3);
              if ( (unsigned int)(v89 - 1) <= 2 )
              {
                if ( *((int *)this + 673) >= 2600 && *((_QWORD *)this + 349) && *((_QWORD *)this + 350) )
                {
                  DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(
                                                                                  v89,
                                                                                  v23,
                                                                                  v18,
                                                                                  v19);
                  v92 = DiagnosticInfoArgs;
                  if ( DiagnosticInfoArgs )
                  {
                    LODWORD(v11) = DXGADAPTER::DdiCollectDiagnosticInfo(this, DiagnosticInfoArgs, v91);
                    DxgFreeDiagnosticInfoArgs(v92);
                  }
                  else
                  {
                    LODWORD(v11) = -1073741801;
                  }
                }
                return (unsigned int)v11;
              }
              WdLogSingleEntry1(3LL, 1464LL);
            }
            else
            {
              WdLogSingleEntry1(3LL, 1449LL);
            }
            goto LABEL_14;
          }
          goto LABEL_321;
        }
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry1(3LL, 1435LL);
          goto LABEL_14;
        }
        updated = DrtTestUpdateRegistryForNewOverride(
                    *(struct _LUID *)((char *)a2 + 12),
                    *((_DWORD *)a2 + 5),
                    *((_DWORD *)a2 + 6));
        goto LABEL_387;
      }
      goto LABEL_327;
    }
    if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
      return 3221225485LL;
    v93 = DXGPROCESS::GetCurrent((unsigned int)(v23 - 28), v23, v18, v19);
    if ( v93 )
    {
      *((_DWORD *)v93 + 106) = *((_DWORD *)v93 + 106) & 0xFFFFDFFF | (*((_BYTE *)a2 + 12) != 0 ? 0x2000 : 0);
      return (unsigned int)v11;
    }
    return 3221225506LL;
  }
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) < 0x14u )
    return 3221225485LL;
  v94 = 0LL;
  Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)this;
  LOBYTE(Event.Header.WaitListHead.Blink) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
  if ( *((_DWORD *)this + 50) != 1 )
  {
LABEL_286:
    if ( LOBYTE(Event.Header.WaitListHead.Blink) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
    if ( !v94 )
      goto LABEL_86;
    memset(v164, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v164[1]);
    v164[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v164[3]) = 45;
    LOBYTE(v164[6]) = -1;
    LODWORD(v120) = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
    LODWORD(v11) = DxgkPowerOnOffMonitor(
                     (__int64)v94,
                     1u,
                     (_DWORD *)a2 + 3,
                     (int *)&v120,
                     1,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v164);
    v97 = v94;
LABEL_290:
    ObfDereferenceObject(v97);
    return (unsigned int)v11;
  }
  v95 = *((_DWORD *)a2 + 3);
  if ( v95 == -1 )
  {
LABEL_285:
    v94 = (struct _FILE_OBJECT *)*((_QWORD *)this + 27);
    ObfReferenceObject(v94);
    goto LABEL_286;
  }
  v114[0] = 0;
  IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(this, v95, v114);
  if ( IsTargetInClientVidPnTopology >= 0 )
  {
    if ( !v114[0] )
    {
      if ( LOBYTE(Event.Header.WaitListHead.Blink) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
      return 3221225485LL;
    }
    goto LABEL_285;
  }
  if ( LOBYTE(Event.Header.WaitListHead.Blink) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
  return (unsigned int)IsTargetInClientVidPnTopology;
}
