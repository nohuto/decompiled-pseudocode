/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01165CC (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006BD4 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0006BE0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006C24 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000A4B0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00157C8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018FD8 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x1C0019250 (NdisIfAddIfStackEntry.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019684 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B0B0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001B5C0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C001C510 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C6B0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001D650 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x1C0020CD0 (WPP_RECORDER_SF_qqZddZD.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C0022428 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0022E2C (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C00233A4 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C002442C (WPP_RECORDER_SF_qqZ.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C002455C (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024614 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024BB8 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0024D14 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C0025218 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E37C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x1C0061710 (-EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0062FDC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x1C006307C (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0063154 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064B38 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0065A08 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C00761D4 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B7440 (NdisIfDeleteIfStackEntry.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C010FBDC (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0111394 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0111B00 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ndisPktMonFilterRegister @ 0x1C0111CA4 (ndisPktMonFilterRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C01126D0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C0113880 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C01161A0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C011701C (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C011711C (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1C011752C (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0117798 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120720 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C01394AC (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AAA8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  struct _NDIS_MINIPORT_BLOCK *v9; // rsi
  struct _NDIS_FILTER_DRIVER_BLOCK *v10; // r15
  unsigned __int8 v11; // r8
  unsigned int FilterAdapterRegistry; // r14d
  __int64 Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  struct NDISWATCHDOG__ **v16; // r14
  struct Rtl::KString *v17; // rax
  void *v18; // rcx
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  const struct _NDIS_FILTER_BLOCK *v22; // rcx
  int v23; // edx
  struct _NDIS_FILTER_BLOCK *v24; // rcx
  KIRQL v25; // dl
  struct _NDIS_FILTER_BLOCK *v26; // rbx
  struct _NDIS_FILTER_BLOCK *v27; // r13
  KIRQL v28; // dl
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rax
  struct _NDIS_MINIPORT_BLOCK *v30; // rbx
  KIRQL v31; // al
  Ndis::BindState *v32; // r14
  struct _NDIS_MINIPORT_BLOCK *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // al
  UCHAR v36; // dl
  __int64 v37; // r8
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  char v39; // r13
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  void (__stdcall *v48)(PVOID); // rax
  void *v49; // rcx
  void *v50; // rdx
  _NDIS_MEDIUM MediaType; // eax
  const struct _EVENT_DESCRIPTOR *v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r12
  _NET_LUID_LH *v55; // rax
  __int64 v56; // r8
  int v57; // ecx
  __int64 MiniportMediaType; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  NET_IFINDEX v61; // edx
  __int64 v62; // rax
  KIRQL v63; // al
  struct _NDIS_MINIPORT_BLOCK *v64; // rcx
  KIRQL v65; // bl
  __int64 v66; // rbx
  KIRQL v67; // dl
  struct _NDIS_FILTER_BLOCK *v68; // rcx
  struct _NDIS_FILTER_BLOCK *v69; // rcx
  KIRQL v70; // dl
  bool v71; // zf
  PVOID v72; // rdi
  char *v73; // rbx
  __int64 v74; // rcx
  NTSTATUS v75; // ebx
  struct NDIS_BIND_FILTER_LINK *v76; // rbx
  struct _NDIS_MINIPORT_BLOCK *v77; // rdx
  __int64 v78; // rdx
  __int64 v80; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v82; // dl
  char v83; // r12
  struct _NDIS_MINIPORT_BLOCK *v84; // rdx
  USHORT v85; // ax
  const struct _NDIS_FILTER_BLOCK *v86; // rcx
  int v87; // edx
  struct _NDIS_FILTER_BLOCK *v88; // rcx
  KIRQL v89; // dl
  __int64 v90; // r8
  __int64 v91; // rax
  NET_IFINDEX IfIndex; // edx
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType; // eax
  _NDIS_MEDIUM v94; // ecx
  __int64 v95; // rax
  _NDIS_MEDIUM v96; // ecx
  _NDIS_PHYSICAL_MEDIUM v97; // eax
  Ndis::BindState *v98; // r13
  bool v99; // cf
  __int64 v100; // rbx
  int v101; // [rsp+20h] [rbp-130h]
  struct _GUID *v102; // [rsp+28h] [rbp-128h]
  char v103[8]; // [rsp+38h] [rbp-118h]
  char v104[8]; // [rsp+40h] [rbp-110h]
  KIRQL NewIrql; // [rsp+D0h] [rbp-80h] BYREF
  unsigned __int8 v106; // [rsp+D1h] [rbp-7Fh]
  char v107; // [rsp+D2h] [rbp-7Eh]
  unsigned __int8 v108; // [rsp+D3h] [rbp-7Dh]
  char v109; // [rsp+D5h] [rbp-7Bh]
  Ndis::BindState *v110; // [rsp+D8h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v111; // [rsp+E0h] [rbp-70h]
  int v112; // [rsp+E8h] [rbp-68h]
  int v113; // [rsp+ECh] [rbp-64h]
  int v114; // [rsp+F0h] [rbp-60h]
  int v115; // [rsp+F4h] [rbp-5Ch]
  int v116; // [rsp+F8h] [rbp-58h]
  int v117; // [rsp+FCh] [rbp-54h]
  int v118; // [rsp+100h] [rbp-50h]
  int v119; // [rsp+104h] [rbp-4Ch]
  int Data3; // [rsp+108h] [rbp-48h]
  int Data2; // [rsp+10Ch] [rbp-44h]
  int v122; // [rsp+110h] [rbp-40h] BYREF
  char v123[8]; // [rsp+118h] [rbp-38h]
  struct _NDIS_FILTER_DRIVER_BLOCK *v124; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_BLOCK *v125; // [rsp+128h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v126; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v128; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v129[10]; // [rsp+220h] [rbp+D0h] BYREF
  wchar_t v130[88]; // [rsp+2C0h] [rbp+170h] BYREF

  v112 = a3;
  v124 = a2;
  v111 = a1;
  *(_QWORD *)v123 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  NewIrql = 0;
  v109 = 0;
  v107 = 0;
  v110 = (Ndis::BindState *)a4;
  memset(&v128, 0, sizeof(v128));
  v122 = 0;
  v106 = 0;
  v108 = 1;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(a2, 0) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, v7, 0);
    return 3221291010LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      (char)a2,
      (char)a1,
      &a2->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v8 = a4->BindDriver._p->_t.Guid.Data4[7];
  v114 = v111->InterfaceGuid.Data4[5];
  v113 = v8;
  v115 = v111->InterfaceGuid.Data4[4];
  v116 = v111->InterfaceGuid.Data4[3];
  v117 = v111->InterfaceGuid.Data4[2];
  v118 = v111->InterfaceGuid.Data4[1];
  v119 = v111->InterfaceGuid.Data4[0];
  Data3 = v111->InterfaceGuid.Data3;
  Data2 = v111->InterfaceGuid.Data2;
  v101 = Data2;
  LODWORD(v102) = Data3;
  v9 = v111;
  if ( RtlStringCbPrintfW(
         v130,
         0xA8uLL,
         (wchar_t *)L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
         v111->InterfaceGuid.Data1) < 0 )
  {
    v10 = v124;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_84;
  }
  ndisFindAdjacentFilters(v111, (struct NDIS_BIND_FILTER_LINK *)v110, &v126, &v125);
  v10 = v124;
  if ( v124->DefaultFilterCharacteristics.MajorNdisVersion > 6u
    || v124->DefaultFilterCharacteristics.MajorNdisVersion == 6
    && v124->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
  {
    v11 = v108;
  }
  else
  {
    v11 = 0;
  }
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v124->DefaultFilterCharacteristics.ServiceName, v111, v11);
  if ( FilterAdapterRegistry )
  {
    v15 = 0LL;
    goto LABEL_105;
  }
  if ( v111->MajorNdisVersion < 6u && (v111->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(v111, 1, 0x10114u, &v122, 4u, 1u, 1u);
  if ( !ndisReferenceFilterDriver(v10, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_84;
  }
  Pool2 = ExAllocatePool2(64LL, 928LL, 1650869326);
  *(_QWORD *)v123 = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v10, v14, 3u);
    goto LABEL_84;
  }
  *(_QWORD *)(Pool2 + 40) = 0LL;
  v16 = (struct NDISWATCHDOG__ **)(Pool2 + 184);
  *(_QWORD *)(Pool2 + 184) = -1LL;
  *(_DWORD *)Pool2 = 60817669;
  *(_QWORD *)(Pool2 + 16) = v10;
  v109 = 1;
  v17 = Rtl::KString::Initialize(v130);
  v18 = *(void **)(v15 + 40);
  *(_QWORD *)(v15 + 40) = v17;
  if ( v18 )
    ExFreePoolWithTag(v18, 0x7274534Bu);
  if ( !*(_QWORD *)(v15 + 40) )
  {
    FilterAdapterRegistry = -1073741670;
LABEL_117:
    v98 = v110;
LABEL_118:
    v83 = v106;
    goto LABEL_119;
  }
  v19 = v10->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v9->pAdapterInstanceName->Length;
  v20 = (_WORD *)ExAllocatePool2(66LL, v19 + 16LL, 1953711182);
  *(_QWORD *)(v15 + 48) = v20;
  if ( !v20 )
  {
    v98 = v110;
    FilterAdapterRegistry = -1073741670;
    v83 = 0;
    goto LABEL_119;
  }
  *v20 = 0;
  *(_WORD *)(*(_QWORD *)(v15 + 48) + 2LL) = v19;
  *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) = *(_QWORD *)(v15 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), v9->pAdapterInstanceName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v15 + 48), &v10->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 45;
  **(_WORD **)(v15 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v15 + 40) - 8) >> 1));
  **(_WORD **)(v15 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v15 + 48) >> 1)) = 0;
  *(_QWORD *)(v15 + 648) = NdisNblTrackerRegisterComponent(1, v15, *(_QWORD *)(v15 + 48));
  Watchdog = (struct NDISWATCHDOG__ *)ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
    v16,
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v15 + 144));
  NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v15, &NewIrql);
  FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v15);
  if ( FILTER_TEST_FLAG(v22, 256) )
    FILTER_CLEAR_FLAG(v24, v23);
  FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v15, 8);
  v25 = NewIrql;
  *(_QWORD *)(v15 + 152) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v25);
  *(_BYTE *)(v15 + 64) = 0;
  ndisInitializeRef((struct _REFERENCE_EX *)(v15 + 72), 3u);
  ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v15 + 312));
  ndisCloseRef((PKSPIN_LOCK)(v15 + 312));
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v15 + 16) + 176LL)) && ndisDriverVerifierNdisFlagEnabled() )
      goto LABEL_125;
  }
  else if ( ndisDatapathVerifierMode == 2 )
  {
LABEL_125:
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v15, 512);
  }
  *(_QWORD *)(v15 + 584) = v10->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v15 + 592) = v10->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v15 + 608) = v10->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v15 + 616) = v10->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v15 + 600) = v10->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v15 + 168) = v15 + 160;
  *(_QWORD *)(v15 + 160) = v15 + 160;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v15,
                            (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v15 + 576),
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_105;
  v26 = v126;
  *(_QWORD *)(v15 + 192) = 0LL;
  v27 = v125;
  *(_QWORD *)(v15 + 208) = ndisStackExpansionFallbackWorker;
  *(_QWORD *)(v15 + 216) = v15;
  *(_QWORD *)(v15 + 112) = v27;
  *(_QWORD *)(v15 + 120) = v26;
  if ( !v27 && !v26 && v9->HighestFilter )
    goto LABEL_126;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
  if ( v26 )
    v26->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
  else
    v9->HighestFilter = (_NDIS_FILTER_BLOCK *)v15;
  if ( v27 )
    v27->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
  else
    v9->LowestFilter = (_NDIS_FILTER_BLOCK *)v15;
  v28 = NewIrql;
  *(_QWORD *)(v15 + 32) = v9;
  v9->MiniportThread = 0LL;
  KeReleaseSpinLock(&v9->Lock, v28);
  BaseMiniport = v9->BaseMiniport;
  v107 = 1;
  v30 = v9;
  if ( BaseMiniport )
    v30 = BaseMiniport;
  v31 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  *(_QWORD *)(v15 + 104) = ndisGlobalFilterList;
  NewIrql = v31;
  ndisGlobalFilterList = (_NDIS_FILTER_BLOCK *)v15;
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v31);
  if ( !ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v15, v10) )
  {
    FilterAdapterRegistry = -1073676286;
    goto LABEL_117;
  }
  if ( (v10->Bind._p->_t.FilterBindFlags & 2) != 0 )
  {
    FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                              &v10->DefaultFilterCharacteristics.ServiceName,
                              (struct _NDIS_FILTER_BLOCK *)v15,
                              v9);
    if ( FilterAdapterRegistry )
      goto LABEL_105;
  }
  v32 = v110;
  *(_BYTE *)(v15 + 64) = 1;
  *(_QWORD *)(v15 + 752) = v32;
  Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
  Ndis::BindState::AddBindContext(v32, (void *)v15);
  Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v33);
  memset(&v128, 0, sizeof(v128));
  v34 = *(_QWORD *)(v15 + 16);
  if ( *(_BYTE *)(v34 + 100) > 6u )
    goto LABEL_36;
  v35 = *(_BYTE *)(v34 + 101);
  if ( v35 )
  {
    if ( v35 < 0x14u )
    {
      v36 = 2;
      v85 = 176;
    }
    else
    {
      if ( v35 >= 0x1Eu )
      {
LABEL_36:
        v128.Header.Size = 224;
        v36 = 4;
        goto LABEL_37;
      }
      v36 = 3;
      v85 = 200;
    }
  }
  else
  {
    v36 = 1;
    v85 = 164;
  }
  v128.Header.Size = v85;
LABEL_37:
  v37 = *(_QWORD *)(v15 + 112);
  v128.Header.Revision = v36;
  v128.Header.Type = -103;
  v128.BaseMiniportIfIndex = v30->IfIndex;
  v128.BaseMiniportNetLuid.Value = v30->NetLuid.Value;
  v128.BaseMiniportName = &v30->MiniportName;
  v128.BaseMiniportInstanceName = v30->pAdapterInstanceName;
  if ( v37 )
  {
    v128.LowerIfIndex = *(_DWORD *)(v37 + 680);
    v128.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v37 + 688) + 1312LL);
  }
  else
  {
    v80 = *(_QWORD *)(v15 + 32);
    v128.LowerIfIndex = *(_DWORD *)(v80 + 4056);
    v128.LowerIfNetLuid.Value = *(_QWORD *)(v80 + 4024);
  }
  v128.FilterModuleGuidName = *(_UNICODE_STRING **)(v15 + 40);
  v128.MiniportMediaSpecificAttributes = v9->MediaSpecificAttributes;
  if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
  {
    v128.MiniportMediaType = NdisMediumWan;
  }
  else
  {
    if ( v27 )
    {
      v128.MiniportMediaType = v27->MediaType;
      PhysicalMediaType = v27->PhysicalMediaType;
      goto LABEL_42;
    }
    v128.MiniportMediaType = v9->MiniportMediaType;
  }
  PhysicalMediaType = v9->MiniportPhysicalMediumType;
LABEL_42:
  v39 = 0;
  v128.MiniportPhysicalMediaType = PhysicalMediaType;
  if ( v37 )
  {
    v128.MediaConnectState = *(_DWORD *)(v37 + 380);
    v128.MediaDuplexState = *(_DWORD *)(v37 + 384);
    v128.XmitLinkSpeed = *(_QWORD *)(v37 + 392);
    v128.RcvLinkSpeed = *(_QWORD *)(v37 + 400);
    p_MiniportCurrentConfig = *(_NDIS_OFFLOAD **)(v37 + 656);
LABEL_44:
    v128.DefaultOffloadConfiguration = p_MiniportCurrentConfig;
    goto LABEL_45;
  }
  v128.MediaConnectState = v9->MiniportMediaConnectState;
  v128.MediaDuplexState = v9->MiniportMediaDuplexState;
  v128.XmitLinkSpeed = v9->MiniportXmitLinkSpeed;
  v128.RcvLinkSpeed = v9->MiniportRcvLinkSpeed;
  Offload = v9->Offload;
  if ( Offload && Offload->SupportsOffload )
  {
    p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
    goto LABEL_44;
  }
  v128.DefaultOffloadConfiguration = 0LL;
LABEL_45:
  HDSplitCurrentConfig = v128.HDSplitCurrentConfig;
  if ( v9->HDSplitCurrentConfig )
    HDSplitCurrentConfig = v9->HDSplitCurrentConfig;
  TopReceiveFilterCurrentCapabilities = v9->TopReceiveFilterCurrentCapabilities;
  v128.HDSplitCurrentConfig = HDSplitCurrentConfig;
  ReceiveFilterCapabilities = v128.ReceiveFilterCapabilities;
  if ( TopReceiveFilterCurrentCapabilities )
    ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
  TopNicSwitchCurrentCapabilities = v9->TopNicSwitchCurrentCapabilities;
  v128.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
  NicSwitchCapabilities = v128.NicSwitchCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
    NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
  v128.NicSwitchCapabilities = NicSwitchCapabilities;
  if ( v36 >= 4u )
  {
    if ( v9->SriovCurrentCapabilities )
    {
      v128.SriovCapabilities = v9->SriovCurrentCapabilities;
      if ( (unsigned int)ndisIovGetNicSwitchList(v9, &v128.NicSwitchArray) )
      {
LABEL_126:
        FilterAdapterRegistry = -1073741823;
        goto LABEL_117;
      }
    }
    v128.BaseMiniportIfConnectorPresent = v9->IfBlock->ifConnectorPresent;
  }
  IfBlock = v9->IfBlock;
  v128.MiniportPhysicalDeviceObject = v9->PhysicalDeviceObject;
  v128.MacAddressLength = IfBlock->ifPhysAddress.Length;
  memmove(v128.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v128.MacAddressLength);
  MediaConnectState = v128.MediaConnectState;
  *(_DWORD *)(v15 + 348) = v128.MediaDuplexState;
  *(_QWORD *)(v15 + 352) = v128.XmitLinkSpeed;
  *(_QWORD *)(v15 + 360) = v128.RcvLinkSpeed;
  *(_DWORD *)(v15 + 344) = MediaConnectState;
  if ( MediaConnectState == MediaConnectStateConnected )
  {
    v48 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
    v49 = ndisFilterIndicateReceiveNetBufferLists;
    v50 = ndisFilterSendNetBufferLists;
  }
  else
  {
    ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v15);
    v48 = NdisQueryOffloadState;
    v49 = ndisFakeFilterReceiveHandler;
    v50 = ndisFakeFilterSendHandler;
  }
  *(_QWORD *)(v15 + 624) = v50;
  *(_QWORD *)(v15 + 632) = v49;
  *(_QWORD *)(v15 + 640) = v48;
  if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
    MediaType = v9->MediaType;
  else
    MediaType = v128.MiniportMediaType;
  *(_DWORD *)(v15 + 336) = MediaType;
  *(_DWORD *)(v15 + 340) = v128.MiniportPhysicalMediaType;
  FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v15);
  if ( !FilterAdapterRegistry )
  {
    v54 = (const GUID *)(v15 + 664);
    if ( (byte_1C00F7643 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        *(_QWORD *)(v15 + 32) + 4008LL,
        *(_QWORD *)(v15 + 40),
        (const GUID *)(v15 + 664),
        v15 + 664,
        *(_BYTE *)(v15 + 64),
        6,
        *(_QWORD *)(v15 + 32) + 4008LL,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3856LL) + 8LL),
        *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
        *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(v53, v52, (const struct _GUID *)(v15 + 664), &v9->InterfaceGuid, v101, v102, 0);
    v128.IfIndex = *(_DWORD *)(v15 + 680);
    v55 = *(_NET_LUID_LH **)(v15 + 688);
    v106 = 1;
    v128.NetLuid = v55[164];
    FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v15, &v128);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_QWORD *)v103 = &v10->DefaultFilterCharacteristics.FriendlyName;
      WPP_RECORDER_SF_qqZddZD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10->DefaultFilterCharacteristics.MajorNdisVersion,
        v56,
        (__int64)&WPP_RECORDER_INITIALIZED,
        v101);
    }
    if ( FilterAdapterRegistry )
    {
      v98 = v110;
      v110->AllowBindDespiteMandatory = v128.Flags & 1;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v15, &NewIrql);
      FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v15);
      if ( FILTER_TEST_FLAG(v86, 256) )
        FILTER_CLEAR_FLAG(v88, v87);
      FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v15, 8);
      v89 = NewIrql;
      *(_QWORD *)(v15 + 152) = v90;
      KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v89);
      v71 = (byte_1C00F7643 & 1) == 0;
      *(_BYTE *)(v15 + 64) = 0;
      if ( !v71 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          *(_QWORD *)(v15 + 48),
          *(_QWORD *)(v15 + 40),
          (const GUID *)(v15 + 664),
          v15 + 664,
          0,
          7,
          *(_QWORD *)(v15 + 32) + 4008LL,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3856LL) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
      goto LABEL_118;
    }
    v57 = *(_DWORD *)(v15 + 336);
    MiniportMediaType = (unsigned int)v128.MiniportMediaType;
    if ( v57 != v128.MiniportMediaType && (v9->MacOptions & 0x80000001) != 0x80000001 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v104 = v128.MiniportMediaType;
        WPP_RECORDER_SF_qqDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x1Au,
          (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
          (char)v9,
          v15,
          v57,
          *(_QWORD *)v104);
        MiniportMediaType = (unsigned int)v128.MiniportMediaType;
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
        McTemplateK0jqxjqxdd_EtwWriteTransfer(
          *(_QWORD *)(v15 + 688),
          MiniportMediaType,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          v15 + 664,
          *(_DWORD *)(v15 + 680),
          *(_QWORD *)(*(_QWORD *)(v15 + 688) + 1312LL),
          *(_DWORD *)(v15 + 336),
          MiniportMediaType);
      v39 = 1;
    }
    v59 = *(_QWORD *)(v15 + 120);
    if ( v59 )
    {
      v91 = *(_QWORD *)(v15 + 112);
      if ( v91 )
        IfIndex = *(_DWORD *)(v91 + 680);
      else
        IfIndex = v9->IfIndex;
      NdisIfDeleteIfStackEntry(*(_DWORD *)(v59 + 680), IfIndex);
    }
    v60 = *(_QWORD *)(v15 + 112);
    if ( v60 )
      v61 = *(_DWORD *)(v60 + 680);
    else
      v61 = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4056LL);
    NdisIfAddIfStackEntry(*(_DWORD *)(v15 + 680), v61);
    v62 = *(_QWORD *)(v15 + 120);
    if ( v62 )
      NdisIfAddIfStackEntry(*(_DWORD *)(v62 + 680), *(_DWORD *)(v15 + 680));
    v63 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v64 = *(struct _NDIS_MINIPORT_BLOCK **)(v15 + 32);
    v65 = v63;
    NewIrql = v63;
    ndisIfUpdateFilterIfStack(v64);
    KeReleaseSpinLock(&ndisIfListLock, v65);
    v66 = *(_QWORD *)(v15 + 112);
    if ( v66 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(*(struct _NDIS_FILTER_BLOCK **)(v15 + 112), &NewIrql);
      *(_DWORD *)(v15 + 344) = *(_DWORD *)(v66 + 380);
      *(_DWORD *)(v15 + 348) = *(_DWORD *)(v66 + 384);
      *(_QWORD *)(v15 + 352) = *(_QWORD *)(v66 + 392);
      *(_QWORD *)(v15 + 360) = *(_QWORD *)(v66 + 400);
      *(_DWORD *)(v15 + 368) = *(_DWORD *)(v66 + 408);
      *(_DWORD *)(v15 + 372) = *(_DWORD *)(v66 + 412);
      ndisOpenRef((PKSPIN_LOCK)(v15 + 312));
      v67 = NewIrql;
      *(_QWORD *)(v66 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 144), v67);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
      *(_DWORD *)(v15 + 344) = v9->MiniportMediaConnectState;
      *(_DWORD *)(v15 + 348) = v9->MiniportMediaDuplexState;
      *(_QWORD *)(v15 + 352) = v9->MiniportXmitLinkSpeed;
      *(_QWORD *)(v15 + 360) = v9->MiniportRcvLinkSpeed;
      *(_DWORD *)(v15 + 368) = v9->MiniportPauseFunctions;
      *(_DWORD *)(v15 + 372) = v9->MiniportAutoNegotiationFlags;
      ndisOpenRef((PKSPIN_LOCK)(v15 + 312));
      v82 = NewIrql;
      v9->MiniportThread = 0LL;
      KeReleaseSpinLock(&v9->Lock, v82);
    }
    *(_DWORD *)(*(_QWORD *)(v15 + 688) + 1220LL) = *(_DWORD *)(v15 + 344);
    *(_DWORD *)(*(_QWORD *)(v15 + 688) + 1224LL) = *(_DWORD *)(v15 + 348);
    *(_QWORD *)(*(_QWORD *)(v15 + 688) + 1208LL) = *(_QWORD *)(v15 + 360);
    *(_QWORD *)(*(_QWORD *)(v15 + 688) + 1200LL) = *(_QWORD *)(v15 + 352);
    ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v15);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v15, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v15);
    FILTER_SET_FLAG(v68, 4);
    if ( v39 )
    {
      FILTER_SET_FLAG(v69, 0x8000);
      MiniportPhysicalMediaType = v128.MiniportPhysicalMediaType;
      v94 = v128.MiniportMediaType;
      ++v9->MediaChangeFilters;
      *(_DWORD *)(v15 + 340) = MiniportPhysicalMediaType;
      v95 = *(_QWORD *)(v15 + 688);
      *(_DWORD *)(v15 + 336) = v94;
      *(_DWORD *)(v95 + 564) = v94;
      *(_DWORD *)(*(_QWORD *)(v15 + 688) + 568LL) = *(_DWORD *)(v15 + 340);
    }
    v70 = NewIrql;
    *(_QWORD *)(v15 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 144), v70);
    if ( v39 )
    {
      v96 = *(_DWORD *)(v15 + 336);
      v97 = *(_DWORD *)(v15 + 340);
      v9->MediaType = v96;
      v9->PhysicalMediumType = v97;
      if ( v96 == NdisMedium802_3 )
      {
        if ( EthInitializeFilter(
               v9->TopFilterRestartAttributes.MaxMulticastListSize,
               v9->IfBlock->ifPhysAddress.Address,
               v9->EthDB) )
        {
          v9->EthDB->Miniport = v9;
        }
      }
    }
    v71 = (byte_1C00F7643 & 1) == 0;
    *(_BYTE *)(v15 + 64) = 2;
    if ( !v71 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        *(_QWORD *)(v15 + 48),
        *(_QWORD *)(v15 + 40),
        (const GUID *)(v15 + 664),
        v15 + 664,
        2,
        8,
        *(_QWORD *)(v15 + 32) + 4008LL,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 3856LL) + 8LL),
        *(const wchar_t **)(*(_QWORD *)(v15 + 40) + 8LL),
        *(const wchar_t **)(*(_QWORD *)(v15 + 48) + 8LL));
    ndisPktMonFilterRegister(v15);
    ndisReferenceMiniport(v9, 0x28u);
    if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
      v9->Miniport5HasNdis6Component = 1;
    ndisSetupWmiNode(
      v9,
      *(const struct _UNICODE_STRING **)(v15 + 48),
      v9->BindPaths->Paths[0].Length + v10->DefaultFilterCharacteristics.UniqueName.Length + 4,
      (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
      (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
    v72 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v73 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
      memmove(
        v73,
        v10->DefaultFilterCharacteristics.UniqueName.Buffer,
        v10->DefaultFilterCharacteristics.UniqueName.Length);
      memmove(
        &v73[v10->DefaultFilterCharacteristics.UniqueName.Length + 2],
        v9->BindPaths->Paths[0].Buffer,
        v9->BindPaths->Paths[0].Length);
      v75 = IoWMIWriteEvent(v72);
      if ( v75 < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x1Bu,
            (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids);
        if ( (byte_1C00F7641 & 1) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v74, &FilterArrivalIndicationFailed, v54, v75, 1, 0);
        ExFreePoolWithTag(v72, 0);
      }
    }
    Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
    v76 = (struct NDIS_BIND_FILTER_LINK *)v110;
    if ( Ndis::BindState::SetPause(v110, DatapathRunning, PauseReason_InitialPause) )
    {
      memset(v129, 0, sizeof(v129));
      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v76, v129);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v77,
            0x1Cu,
            0x1Cu,
            (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
            v129[0].Buffer,
            *(_QWORD *)&v129[0].Length);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v77);
    if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
      v9->Miniport5HasNdis6Component = 1;
LABEL_84:
    if ( ndisVerifierNdisDispatch )
    {
      v100 = *(_QWORD *)v123;
      if ( *(_QWORD *)v123 )
      {
        if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(*(_QWORD *)v123 + 16LL) + 16LL))
          && !*(_QWORD *)(v100 + 776)
          && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
               v10->DriverObject,
               v100,
               &v10->FilterDriverContext) < 0
          && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Du,
            (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
            v100);
        }
      }
    }
    goto LABEL_85;
  }
LABEL_105:
  v83 = 0;
  if ( !v109 )
    goto LABEL_84;
  v98 = v110;
LABEL_119:
  if ( *(_QWORD *)(v15 + 752) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
    Ndis::BindState::RemoveBindContext(v98, (void *)v15);
    Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v84);
    *(_QWORD *)(v15 + 752) = 0LL;
  }
  v99 = v107 != 0;
  v107 = -v107;
  ndisFilterAttachCleanUp(
    (_NDIS_FILTER_BLOCK *)v15,
    (struct _NDIS_MINIPORT_BLOCK *)((unsigned __int64)v9 & -(__int64)v99),
    v83);
LABEL_85:
  ndisHandleFilterHandlersChange(v9);
  if ( v128.NicSwitchArray )
  {
    ExFreePoolWithTag(v128.NicSwitchArray, 0);
    v128.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v110->AllowBindDespiteMandatory
    && (*((_DWORD *)v110[1].m_AdditionalContext + 10) & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v9);
  }
  ndisDereferenceMiniport(v9, 0x27u);
  ndisDereferenceFilterDriver(v10, v78, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v103 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      (char)v10,
      (char)v9,
      *(_QWORD *)v103);
  }
  return FilterAdapterRegistry;
}
