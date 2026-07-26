/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0105808 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DD0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0008DDC (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0008E14 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000AFD0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015FB8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x1C0018C28 (WPP_RECORDER_SF_qqZddZD.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C0019068 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C00190CC (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0019104 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019540 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C001A8D8 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001B994 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00216DC (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C00226C0 (NdisNblTrackerRegisterComponent.c)
 *     NdisIfAddIfStackEntry @ 0x1C0022AE0 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0022F50 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00244FC (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0024878 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C002550C (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002563C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0025C08 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0025D64 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x1C005C488 (-EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x1C005DCAC (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C005DD84 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005FBBC (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0060A88 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0070DB0 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B2240 (NdisIfDeleteIfStackEntry.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0104484 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1C0105AA8 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C0106854 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C01077CC (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0109ED8 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C010A148 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AA7C (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AEF8 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C010B7CC (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BE0C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C012D690 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  struct NDIS_BIND_FILTER_LINK *v10; // r13
  struct _NDIS_FILTER_DRIVER_BLOCK *v11; // r15
  unsigned __int8 v12; // r8
  unsigned int FilterAdapterRegistry; // r14d
  __int64 Pool2; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  struct NDISWATCHDOG__ **v17; // r14
  struct Rtl::KString *v18; // rax
  void *v19; // rcx
  unsigned __int16 v20; // bx
  _WORD *v21; // rax
  struct NDISWATCHDOG__ *Watchdog; // rax
  const struct _NDIS_FILTER_BLOCK *v23; // rcx
  int v24; // edx
  struct _NDIS_FILTER_BLOCK *v25; // rcx
  KIRQL v26; // dl
  struct _NDIS_FILTER_BLOCK *v27; // r14
  struct _NDIS_FILTER_BLOCK *v28; // rbx
  KIRQL v29; // dl
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rax
  struct _NDIS_MINIPORT_BLOCK *v31; // r13
  KIRQL v32; // al
  Ndis::BindState *v33; // r12
  struct _NDIS_MINIPORT_BLOCK *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 v36; // al
  UCHAR v37; // dl
  __int64 v38; // r8
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  void *v48; // rax
  void *v49; // rcx
  void (__stdcall *v50)(PVOID); // rdx
  _NDIS_MEDIUM MediaType; // eax
  const struct _EVENT_DESCRIPTOR *v52; // rdx
  __int64 v53; // rcx
  _NET_LUID_LH *v54; // rax
  __int64 v55; // r8
  int v56; // ecx
  __int64 MiniportMediaType; // rdx
  char v58; // r12
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
  PVOID v72; // r12
  char *v73; // rbx
  NTSTATUS v74; // ebx
  struct _NDIS_MINIPORT_BLOCK *v75; // rdx
  __int64 v76; // rdx
  __int64 v78; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v80; // dl
  struct _NDIS_MINIPORT_BLOCK *v81; // rdx
  bool v82; // cf
  USHORT v83; // ax
  const struct _NDIS_FILTER_BLOCK *v84; // rcx
  int v85; // edx
  struct _NDIS_FILTER_BLOCK *v86; // rcx
  KIRQL v87; // dl
  __int64 v88; // rax
  NET_IFINDEX IfIndex; // edx
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType; // eax
  _NDIS_MEDIUM v91; // ecx
  __int64 v92; // rax
  _NDIS_MEDIUM v93; // ecx
  _NDIS_PHYSICAL_MEDIUM v94; // eax
  int v95; // [rsp+20h] [rbp-130h]
  struct _GUID *v96; // [rsp+28h] [rbp-128h]
  char v97[8]; // [rsp+38h] [rbp-118h]
  char v98[8]; // [rsp+40h] [rbp-110h]
  KIRQL NewIrql; // [rsp+D0h] [rbp-80h] BYREF
  char v100; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v101; // [rsp+D2h] [rbp-7Eh]
  char v102; // [rsp+D3h] [rbp-7Dh]
  unsigned __int8 v103; // [rsp+D4h] [rbp-7Ch]
  Ndis::BindState *v104; // [rsp+D8h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v105; // [rsp+E0h] [rbp-70h]
  int v106; // [rsp+E8h] [rbp-68h]
  int v107; // [rsp+ECh] [rbp-64h]
  int v108; // [rsp+F0h] [rbp-60h]
  int v109; // [rsp+F4h] [rbp-5Ch]
  int v110; // [rsp+F8h] [rbp-58h]
  int v111; // [rsp+FCh] [rbp-54h]
  int v112; // [rsp+100h] [rbp-50h]
  int v113; // [rsp+104h] [rbp-4Ch]
  int Data3; // [rsp+108h] [rbp-48h]
  int Data2; // [rsp+10Ch] [rbp-44h]
  _DWORD v116[4]; // [rsp+110h] [rbp-40h] BYREF
  struct _NDIS_FILTER_DRIVER_BLOCK *v117; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_BLOCK *v118; // [rsp+128h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v119; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v121; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v122[10]; // [rsp+220h] [rbp+D0h] BYREF
  wchar_t v123[88]; // [rsp+2C0h] [rbp+170h] BYREF

  v106 = a3;
  v117 = a2;
  v105 = a1;
  v118 = 0LL;
  v119 = 0LL;
  NewIrql = 0;
  v100 = 0;
  v104 = (Ndis::BindState *)a4;
  memset(&v121, 0, sizeof(v121));
  v116[0] = 0;
  v102 = 0;
  v103 = 0;
  v101 = 1;
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
  v108 = v105->InterfaceGuid.Data4[5];
  v107 = v8;
  v109 = v105->InterfaceGuid.Data4[4];
  v110 = v105->InterfaceGuid.Data4[3];
  v111 = v105->InterfaceGuid.Data4[2];
  v112 = v105->InterfaceGuid.Data4[1];
  v113 = v105->InterfaceGuid.Data4[0];
  Data3 = v105->InterfaceGuid.Data3;
  Data2 = v105->InterfaceGuid.Data2;
  v95 = Data2;
  LODWORD(v96) = Data3;
  v9 = v105;
  v10 = (struct NDIS_BIND_FILTER_LINK *)v104;
  if ( RtlStringCbPrintfW(
         v123,
         0xA8uLL,
         (wchar_t *)L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
         v105->InterfaceGuid.Data1) < 0 )
  {
    v11 = v117;
    FilterAdapterRegistry = -1073741823;
LABEL_109:
    v16 = 0LL;
    goto LABEL_85;
  }
  ndisFindAdjacentFilters(v105, (struct NDIS_BIND_FILTER_LINK *)v104, &v119, &v118);
  v11 = v117;
  if ( v117->DefaultFilterCharacteristics.MajorNdisVersion > 6u
    || v117->DefaultFilterCharacteristics.MajorNdisVersion == 6
    && v117->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
  {
    v12 = v101;
  }
  else
  {
    v12 = 0;
  }
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v117->DefaultFilterCharacteristics.ServiceName, v105, v12);
  if ( FilterAdapterRegistry )
    goto LABEL_109;
  if ( v105->MajorNdisVersion < 6u && (v105->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(v105, 1, 0x10114u, v116, 4u, 1u, 1u);
  if ( !ndisReferenceFilterDriver(v11, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_109;
  }
  Pool2 = ExAllocatePool2(64LL, 920LL, 1650869326);
  v16 = Pool2;
  if ( !Pool2 )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v11, v15, 3u);
    goto LABEL_85;
  }
  *(_QWORD *)(Pool2 + 40) = 0LL;
  v17 = (struct NDISWATCHDOG__ **)(Pool2 + 184);
  *(_QWORD *)(Pool2 + 184) = -1LL;
  *(_BYTE *)Pool2 = 5;
  *(_WORD *)(Pool2 + 2) = 920;
  *(_BYTE *)(Pool2 + 1) = 1;
  *(_QWORD *)(Pool2 + 16) = v11;
  v18 = Rtl::KString::Initialize(v123);
  v19 = *(void **)(v16 + 40);
  *(_QWORD *)(v16 + 40) = v18;
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x7274534Bu);
    v18 = *(struct Rtl::KString **)(v16 + 40);
  }
  if ( !v18 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_123;
  }
  v20 = v11->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v9->pAdapterInstanceName->Length;
  v21 = (_WORD *)ExAllocatePool2(66LL, v20 + 16LL, 1953711182);
  *(_QWORD *)(v16 + 48) = v21;
  if ( !v21 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_123;
  }
  *v21 = 0;
  *(_WORD *)(*(_QWORD *)(v16 + 48) + 2LL) = v20;
  *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) = *(_QWORD *)(v16 + 48) + 16LL;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v16 + 48), v9->pAdapterInstanceName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 45;
  **(_WORD **)(v16 + 48) += 2;
  RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v16 + 48), &v11->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 45;
  **(_WORD **)(v16 + 48) += 2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v16 + 40) - 8) >> 1));
  **(_WORD **)(v16 + 48) += 8;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v16 + 48) >> 1)) = 0;
  *(_QWORD *)(v16 + 648) = NdisNblTrackerRegisterComponent(1, v16, *(_QWORD *)(v16 + 48));
  Watchdog = (struct NDISWATCHDOG__ *)ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
    v17,
    Watchdog);
  KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 144));
  NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v16, &NewIrql);
  FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v16);
  if ( FILTER_TEST_FLAG(v23, 256) )
    FILTER_CLEAR_FLAG(v25, v24);
  FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v16, 8);
  v26 = NewIrql;
  *(_QWORD *)(v16 + 152) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v26);
  *(_BYTE *)(v16 + 64) = 0;
  ndisInitializeRef((struct _REFERENCE_EX *)(v16 + 72), 3u);
  ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v16 + 312));
  ndisCloseRef((PKSPIN_LOCK)(v16 + 312));
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v16 + 16) + 176LL)) && ndisDriverVerifierNdisFlagEnabled() )
      goto LABEL_119;
  }
  else if ( ndisDatapathVerifierMode == 2 )
  {
LABEL_119:
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v16, 512);
  }
  *(_QWORD *)(v16 + 584) = v11->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *(_QWORD *)(v16 + 592) = v11->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v16 + 608) = v11->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *(_QWORD *)(v16 + 616) = v11->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *(_QWORD *)(v16 + 600) = v11->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *(_QWORD *)(v16 + 168) = v16 + 160;
  *(_QWORD *)(v16 + 160) = v16 + 160;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v16,
                            (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v16 + 576),
                            0);
  if ( !FilterAdapterRegistry )
  {
    v27 = v119;
    *(_QWORD *)(v16 + 208) = ndisStackExpansionFallbackWorker;
    *(_QWORD *)(v16 + 192) = 0LL;
    v28 = v118;
    *(_QWORD *)(v16 + 216) = v16;
    *(_QWORD *)(v16 + 112) = v28;
    *(_QWORD *)(v16 + 120) = v27;
    if ( !v28 && !v27 && v9->HighestFilter )
    {
      FilterAdapterRegistry = -1073741823;
      goto LABEL_123;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
    if ( v27 )
      v27->LowerFilter = (_NDIS_FILTER_BLOCK *)v16;
    else
      v9->HighestFilter = (_NDIS_FILTER_BLOCK *)v16;
    if ( v28 )
      v28->HigherFilter = (_NDIS_FILTER_BLOCK *)v16;
    else
      v9->LowestFilter = (_NDIS_FILTER_BLOCK *)v16;
    v29 = NewIrql;
    *(_QWORD *)(v16 + 32) = v9;
    v9->MiniportThread = 0LL;
    KeReleaseSpinLock(&v9->Lock, v29);
    BaseMiniport = v9->BaseMiniport;
    v100 = 1;
    v31 = v9;
    if ( BaseMiniport )
      v31 = BaseMiniport;
    v32 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *(_QWORD *)(v16 + 104) = ndisGlobalFilterList;
    NewIrql = v32;
    ndisGlobalFilterList = (_NDIS_FILTER_BLOCK *)v16;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v32);
    if ( ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v16, v11) )
    {
      if ( (v11->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v11->DefaultFilterCharacteristics.ServiceName,
                                      (struct _NDIS_FILTER_BLOCK *)v16,
                                      v9)) == 0 )
      {
        v33 = v104;
        *(_BYTE *)(v16 + 64) = 1;
        *(_QWORD *)(v16 + 752) = v33;
        Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
        Ndis::BindState::AddBindContext(v33, (void *)v16);
        Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v34);
        memset(&v121, 0, sizeof(v121));
        v35 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v35 + 100) <= 6u )
        {
          v36 = *(_BYTE *)(v35 + 101);
          if ( v36 )
          {
            if ( v36 < 0x14u )
            {
              v37 = 2;
              v83 = 176;
            }
            else
            {
              if ( v36 >= 0x1Eu )
                goto LABEL_36;
              v37 = 3;
              v83 = 200;
            }
          }
          else
          {
            v37 = 1;
            v83 = 164;
          }
          v121.Header.Size = v83;
LABEL_37:
          v38 = *(_QWORD *)(v16 + 112);
          v121.Header.Revision = v37;
          v121.Header.Type = -103;
          v121.BaseMiniportIfIndex = v31->IfIndex;
          v121.BaseMiniportNetLuid.Value = v31->NetLuid.Value;
          v121.BaseMiniportName = &v31->MiniportName;
          v121.BaseMiniportInstanceName = v31->pAdapterInstanceName;
          if ( v38 )
          {
            v121.LowerIfIndex = *(_DWORD *)(v38 + 680);
            v121.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v38 + 688) + 1312LL);
          }
          else
          {
            v78 = *(_QWORD *)(v16 + 32);
            v121.LowerIfIndex = *(_DWORD *)(v78 + 4056);
            v121.LowerIfNetLuid.Value = *(_QWORD *)(v78 + 4024);
          }
          v121.FilterModuleGuidName = *(_UNICODE_STRING **)(v16 + 40);
          v121.MiniportMediaSpecificAttributes = v9->MediaSpecificAttributes;
          if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
          {
            v121.MiniportMediaType = NdisMediumWan;
          }
          else
          {
            if ( v28 )
            {
              v121.MiniportMediaType = v28->MediaType;
              PhysicalMediaType = v28->PhysicalMediaType;
              goto LABEL_42;
            }
            v121.MiniportMediaType = v9->MiniportMediaType;
          }
          PhysicalMediaType = v9->MiniportPhysicalMediumType;
LABEL_42:
          v121.MiniportPhysicalMediaType = PhysicalMediaType;
          if ( v38 )
          {
            v121.MediaConnectState = *(_DWORD *)(v38 + 380);
            v121.MediaDuplexState = *(_DWORD *)(v38 + 384);
            v121.XmitLinkSpeed = *(_QWORD *)(v38 + 392);
            v121.RcvLinkSpeed = *(_QWORD *)(v38 + 400);
            p_MiniportCurrentConfig = *(_NDIS_OFFLOAD **)(v38 + 656);
          }
          else
          {
            v121.MediaConnectState = v9->MiniportMediaConnectState;
            v121.MediaDuplexState = v9->MiniportMediaDuplexState;
            v121.XmitLinkSpeed = v9->MiniportXmitLinkSpeed;
            v121.RcvLinkSpeed = v9->MiniportRcvLinkSpeed;
            Offload = v9->Offload;
            if ( !Offload || !Offload->SupportsOffload )
            {
              v121.DefaultOffloadConfiguration = 0LL;
              goto LABEL_45;
            }
            p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
          }
          v121.DefaultOffloadConfiguration = p_MiniportCurrentConfig;
LABEL_45:
          HDSplitCurrentConfig = v121.HDSplitCurrentConfig;
          if ( v9->HDSplitCurrentConfig )
            HDSplitCurrentConfig = v9->HDSplitCurrentConfig;
          TopReceiveFilterCurrentCapabilities = v9->TopReceiveFilterCurrentCapabilities;
          v121.HDSplitCurrentConfig = HDSplitCurrentConfig;
          ReceiveFilterCapabilities = v121.ReceiveFilterCapabilities;
          if ( TopReceiveFilterCurrentCapabilities )
            ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
          TopNicSwitchCurrentCapabilities = v9->TopNicSwitchCurrentCapabilities;
          v121.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
          NicSwitchCapabilities = v121.NicSwitchCapabilities;
          if ( TopNicSwitchCurrentCapabilities )
            NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
          v121.NicSwitchCapabilities = NicSwitchCapabilities;
          if ( v37 >= 4u )
          {
            if ( v9->SriovCurrentCapabilities )
            {
              v121.SriovCapabilities = v9->SriovCurrentCapabilities;
              if ( (unsigned int)ndisIovGetNicSwitchList(v9, &v121.NicSwitchArray) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_137:
                v10 = (struct NDIS_BIND_FILTER_LINK *)v33;
                goto LABEL_123;
              }
            }
            v121.BaseMiniportIfConnectorPresent = v9->IfBlock->ifConnectorPresent;
          }
          IfBlock = v9->IfBlock;
          v121.MiniportPhysicalDeviceObject = v9->PhysicalDeviceObject;
          v121.MacAddressLength = IfBlock->ifPhysAddress.Length;
          memmove(v121.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v121.MacAddressLength);
          MediaConnectState = v121.MediaConnectState;
          *(_DWORD *)(v16 + 348) = v121.MediaDuplexState;
          *(_QWORD *)(v16 + 352) = v121.XmitLinkSpeed;
          *(_QWORD *)(v16 + 360) = v121.RcvLinkSpeed;
          *(_DWORD *)(v16 + 344) = MediaConnectState;
          if ( MediaConnectState == MediaConnectStateConnected )
          {
            v48 = ndisFilterIndicateReceiveNetBufferLists;
            v49 = ndisFilterSendNetBufferLists;
            v50 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v16);
            v48 = ndisFakeFilterReceiveHandler;
            v49 = ndisFakeFilterSendHandler;
            v50 = NdisQueryOffloadState;
          }
          *(_QWORD *)(v16 + 640) = v50;
          *(_QWORD *)(v16 + 624) = v49;
          *(_QWORD *)(v16 + 632) = v48;
          if ( (v9->MacOptions & 0x80000001) == 0x80000001 )
            MediaType = v9->MediaType;
          else
            MediaType = v121.MiniportMediaType;
          *(_DWORD *)(v16 + 336) = MediaType;
          *(_DWORD *)(v16 + 340) = v121.MiniportPhysicalMediaType;
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v16);
          if ( FilterAdapterRegistry )
            goto LABEL_137;
          if ( (byte_1C00EE583 & 1) != 0 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(_QWORD *)(v16 + 40),
              (const GUID *)(v16 + 664),
              v16 + 664,
              *(_BYTE *)(v16 + 64),
              6,
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(v53, v52, (const struct _GUID *)(v16 + 664), &v9->InterfaceGuid, v95, v96, 0);
          v121.IfIndex = *(_DWORD *)(v16 + 680);
          v54 = *(_NET_LUID_LH **)(v16 + 688);
          v103 = 1;
          v121.NetLuid = v54[164];
          FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v16, &v121);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_QWORD *)v97 = &v11->DefaultFilterCharacteristics.FriendlyName;
            WPP_RECORDER_SF_qqZddZD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11->DefaultFilterCharacteristics.MajorNdisVersion,
              v55,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v95);
          }
          if ( FilterAdapterRegistry )
          {
            v33->AllowBindDespiteMandatory = v121.Flags & 1;
            NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v16, &NewIrql);
            FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v16);
            if ( FILTER_TEST_FLAG(v84, 256) )
              FILTER_CLEAR_FLAG(v86, v85);
            FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v16, 8);
            v87 = NewIrql;
            *(_QWORD *)(v16 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v87);
            v71 = (byte_1C00EE583 & 1) == 0;
            *(_BYTE *)(v16 + 64) = 0;
            if ( !v71 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v16 + 48),
                *(_QWORD *)(v16 + 40),
                (const GUID *)(v16 + 664),
                v16 + 664,
                0,
                7,
                *(_QWORD *)(v16 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
            goto LABEL_137;
          }
          v56 = *(_DWORD *)(v16 + 336);
          MiniportMediaType = (unsigned int)v121.MiniportMediaType;
          if ( v56 == v121.MiniportMediaType || (v9->MacOptions & 0x80000001) == 0x80000001 )
          {
            v58 = v102;
          }
          else
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v98 = v121.MiniportMediaType;
              WPP_RECORDER_SF_qqLd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xDu,
                0x1Au,
                (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
                (char)v9,
                v16,
                v56,
                *(_QWORD *)v98);
              MiniportMediaType = (unsigned int)v121.MiniportMediaType;
            }
            if ( Microsoft_Windows_NDISEnableBits < 0 )
              McTemplateK0jqxjqxdd_EtwWriteTransfer(
                *(_QWORD *)(v16 + 688),
                MiniportMediaType,
                &v9->InterfaceGuid,
                (__int64)&v9->InterfaceGuid,
                v9->IfIndex,
                v9->NetLuid.Value,
                v16 + 664,
                *(_DWORD *)(v16 + 680),
                *(_QWORD *)(*(_QWORD *)(v16 + 688) + 1312LL),
                *(_DWORD *)(v16 + 336),
                MiniportMediaType);
            v58 = 1;
          }
          v59 = *(_QWORD *)(v16 + 120);
          if ( v59 )
          {
            v88 = *(_QWORD *)(v16 + 112);
            if ( v88 )
              IfIndex = *(_DWORD *)(v88 + 680);
            else
              IfIndex = v9->IfIndex;
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v59 + 680), IfIndex);
          }
          v60 = *(_QWORD *)(v16 + 112);
          if ( v60 )
            v61 = *(_DWORD *)(v60 + 680);
          else
            v61 = *(_DWORD *)(*(_QWORD *)(v16 + 32) + 4056LL);
          NdisIfAddIfStackEntry(*(_DWORD *)(v16 + 680), v61);
          v62 = *(_QWORD *)(v16 + 120);
          if ( v62 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v62 + 680), *(_DWORD *)(v16 + 680));
          v63 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          v64 = *(struct _NDIS_MINIPORT_BLOCK **)(v16 + 32);
          v65 = v63;
          NewIrql = v63;
          ndisIfUpdateFilterIfStack(v64);
          KeReleaseSpinLock(&ndisIfListLock, v65);
          v66 = *(_QWORD *)(v16 + 112);
          if ( v66 )
          {
            NDIS_ACQUIRE_FILTER_SPIN_LOCK(*(struct _NDIS_FILTER_BLOCK **)(v16 + 112), &NewIrql);
            *(_DWORD *)(v16 + 344) = *(_DWORD *)(v66 + 380);
            *(_DWORD *)(v16 + 348) = *(_DWORD *)(v66 + 384);
            *(_QWORD *)(v16 + 352) = *(_QWORD *)(v66 + 392);
            *(_QWORD *)(v16 + 360) = *(_QWORD *)(v66 + 400);
            *(_DWORD *)(v16 + 368) = *(_DWORD *)(v66 + 408);
            *(_DWORD *)(v16 + 372) = *(_DWORD *)(v66 + 412);
            ndisOpenRef((PKSPIN_LOCK)(v16 + 312));
            v67 = NewIrql;
            *(_QWORD *)(v66 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 144), v67);
          }
          else
          {
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &NewIrql);
            *(_DWORD *)(v16 + 344) = v9->MiniportMediaConnectState;
            *(_DWORD *)(v16 + 348) = v9->MiniportMediaDuplexState;
            *(_QWORD *)(v16 + 352) = v9->MiniportXmitLinkSpeed;
            *(_QWORD *)(v16 + 360) = v9->MiniportRcvLinkSpeed;
            *(_DWORD *)(v16 + 368) = v9->MiniportPauseFunctions;
            *(_DWORD *)(v16 + 372) = v9->MiniportAutoNegotiationFlags;
            ndisOpenRef((PKSPIN_LOCK)(v16 + 312));
            v80 = NewIrql;
            v9->MiniportThread = 0LL;
            KeReleaseSpinLock(&v9->Lock, v80);
          }
          *(_DWORD *)(*(_QWORD *)(v16 + 688) + 1220LL) = *(_DWORD *)(v16 + 344);
          *(_DWORD *)(*(_QWORD *)(v16 + 688) + 1224LL) = *(_DWORD *)(v16 + 348);
          *(_QWORD *)(*(_QWORD *)(v16 + 688) + 1208LL) = *(_QWORD *)(v16 + 360);
          *(_QWORD *)(*(_QWORD *)(v16 + 688) + 1200LL) = *(_QWORD *)(v16 + 352);
          ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v16);
          NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v16, &NewIrql);
          FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v16);
          FILTER_SET_FLAG(v68, 4);
          if ( v58 )
          {
            FILTER_SET_FLAG(v69, 0x8000);
            MiniportPhysicalMediaType = v121.MiniportPhysicalMediaType;
            v91 = v121.MiniportMediaType;
            ++v9->MediaChangeFilters;
            *(_DWORD *)(v16 + 340) = MiniportPhysicalMediaType;
            v92 = *(_QWORD *)(v16 + 688);
            *(_DWORD *)(v16 + 336) = v91;
            *(_DWORD *)(v92 + 564) = v91;
            *(_DWORD *)(*(_QWORD *)(v16 + 688) + 568LL) = *(_DWORD *)(v16 + 340);
          }
          v70 = NewIrql;
          *(_QWORD *)(v16 + 152) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 144), v70);
          if ( v58 )
          {
            v93 = *(_DWORD *)(v16 + 336);
            v94 = *(_DWORD *)(v16 + 340);
            v9->MediaType = v93;
            v9->PhysicalMediumType = v94;
            if ( v93 == NdisMedium802_3 )
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
          v71 = (byte_1C00EE583 & 1) == 0;
          *(_BYTE *)(v16 + 64) = 2;
          if ( !v71 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(_QWORD *)(v16 + 40),
              (const GUID *)(v16 + 664),
              v16 + 664,
              2,
              8,
              *(_QWORD *)(v16 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v16 + 48) + 8LL));
          ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v16);
          ndisReferenceMiniport(v9, 0x28u);
          if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
            v9->Miniport5HasNdis6Component = 1;
          ndisSetupWmiNode(
            v9,
            *(const struct _UNICODE_STRING **)(v16 + 48),
            v9->BindPaths->Paths[0].Length + v11->DefaultFilterCharacteristics.UniqueName.Length + 4,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
          v72 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v73 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v73,
              v11->DefaultFilterCharacteristics.UniqueName.Buffer,
              v11->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v73[v11->DefaultFilterCharacteristics.UniqueName.Length + 2],
              v9->BindPaths->Paths[0].Buffer,
              v9->BindPaths->Paths[0].Length);
            v74 = IoWMIWriteEvent(v72);
            if ( v74 < 0 )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x1Bu,
                  (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids);
              if ( (byte_1C00EE581 & 1) != 0 )
                McTemplateK0qqq_EtwWriteTransfer(
                  0LL,
                  &FilterArrivalIndicationFailed,
                  (const GUID *)(v16 + 664),
                  v74,
                  1,
                  0);
              ExFreePoolWithTag(v72, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
          v10 = (struct NDIS_BIND_FILTER_LINK *)v104;
          if ( Ndis::BindState::SetPause(v104, DatapathRunning, PauseReason_InitialPause) )
          {
            memset(v122, 0, sizeof(v122));
            if ( (unsigned __int8)byte_1C00EC66B >= 4u )
            {
              ndisGetBindLinkNameForTracing(v10, v122);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v75,
                  0x1Cu,
                  0x1Cu,
                  (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
                  v122[0].Buffer,
                  *(_QWORD *)&v122[0].Length);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v75);
          if ( v9->MajorNdisVersion < 6u && !v9->Miniport5HasNdis6Component )
            v9->Miniport5HasNdis6Component = 1;
LABEL_85:
          if ( ndisVerifierNdisDispatch
            && v16
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v16 + 16) + 16LL))
            && !*(_QWORD *)(v16 + 776)
            && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
                 v11->DriverObject,
                 v16,
                 &v11->FilterDriverContext) < 0
            && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x1Du,
              (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
              v16);
          }
          goto LABEL_86;
        }
LABEL_36:
        v121.Header.Size = 224;
        v37 = 4;
        goto LABEL_37;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v10 = (struct NDIS_BIND_FILTER_LINK *)v104;
  }
LABEL_123:
  if ( *(_QWORD *)(v16 + 752) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&v9->BindEngine);
    Ndis::BindState::RemoveBindContext(&v10->BindState, (void *)v16);
    Ndis::BindEngine::EndPolicyUpdates(&v9->BindEngine, v81);
    *(_QWORD *)(v16 + 752) = 0LL;
  }
  v82 = v100 != 0;
  v100 = -v100;
  ndisFilterAttachCleanUp(
    (_NDIS_FILTER_BLOCK *)v16,
    (struct _NDIS_MINIPORT_BLOCK *)((unsigned __int64)v9 & -(__int64)v82),
    v103);
LABEL_86:
  ndisHandleFilterHandlersChange(v9);
  if ( v121.NicSwitchArray )
  {
    ExFreePoolWithTag(v121.NicSwitchArray, 0);
    v121.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v10->BindState.AllowBindDespiteMandatory
    && (v10->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v9);
  }
  ndisDereferenceMiniport(v9, 0x27u);
  ndisDereferenceFilterDriver(v11, v76, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v97 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      (char)v11,
      (char)v9,
      *(_QWORD *)v97);
  }
  return FilterAdapterRegistry;
}
