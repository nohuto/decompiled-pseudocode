/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002AF64 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C1F0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0006480 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C0025380 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026C28 (WPP_RECORDER_SF_qZ.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028AA0 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002B688 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C002B7A0 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C002B7B8 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002B804 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C002ED48 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C00318D4 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031DE4 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034254 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034770 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F98 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1C003547C (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1C0035A54 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0036098 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C005E2F4 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E37C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C005E3F8 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B0FC (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C334 (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C680 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C6E0 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C01161A0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0117874 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C0118D90 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0118E34 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0119CC4 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C0119E6C (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C011ABFC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C011BC08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C011F4B0 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120720 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABE8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C013E37C (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  int appended; // edi
  _DEVICE_OBJECT *v4; // r12
  char *DeviceExtension; // rbx
  _DEVICE_OBJECT *v6; // rax
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // r13
  __int64 v8; // r8
  __int64 v9; // r15
  unsigned int v10; // r14d
  KIRQL v11; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r13
  unsigned int v13; // ecx
  ULONG v14; // r12d
  __int16 v15; // ax
  PDEVICE_OBJECT v16; // rdx
  __int64 EventLog; // rax
  _GUID v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int8 (*v21)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r9
  unsigned int v22; // eax
  LOGICAL IsDriverVerifying; // eax
  char *v24; // rdi
  __int64 Pool2; // rax
  _UNICODE_STRING *v26; // r12
  _DEVICE_OBJECT *v27; // r13
  __int64 v28; // rax
  const struct _DEVPROPKEY *v29; // rdx
  int DevicePropertyData; // edi
  PDEVICE_OBJECT v31; // rcx
  int v32; // eax
  bool v33; // zf
  __int64 v34; // rcx
  unsigned __int16 **v35; // r12
  __int64 v36; // rdx
  unsigned int *v37; // rcx
  __int64 v38; // rax
  void *v39; // rcx
  int v40; // eax
  Ndis::BindEngine *v41; // rcx
  int v42; // eax
  KIRQL v43; // r9
  int v44; // eax
  int updated; // eax
  char v46; // r15
  __int64 v47; // rax
  void *v48; // rcx
  KIRQL v49; // al
  __int64 v50; // rdx
  struct _NDIS_MINIPORT_BLOCK *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r13
  _DEVICE_OBJECT *v55; // rax
  __int64 v56; // rcx
  _DEVICE_OBJECT *v57; // rax
  unsigned int *v58; // rcx
  PDEVICE_OBJECT v59; // rcx
  _UNICODE_STRING *p_DeviceName; // rdx
  unsigned int *v61; // rcx
  unsigned int *v62; // rcx
  struct _NDIS_MINIPORT_BLOCK *v63; // rdx
  _DWORD *v64; // rax
  __int128 v65; // xmm0
  __int64 v66; // rcx
  __int64 v67; // rax
  __int128 v68; // xmm1
  unsigned __int16 *v69; // rax
  __int128 v70; // xmm0
  __int64 v71; // rax
  NTSTATUS v72; // eax
  _UNICODE_STRING *v73; // rcx
  NTSTATUS v74; // eax
  signed __int32 v75[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  char v79; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v80; // [rsp+48h] [rbp-B8h]
  char v81; // [rsp+50h] [rbp-B0h]
  char v82; // [rsp+51h] [rbp-AFh]
  char v83; // [rsp+52h] [rbp-AEh]
  char v84; // [rsp+53h] [rbp-ADh]
  char v85; // [rsp+54h] [rbp-ACh]
  struct _LIST_ENTRY *v86; // [rsp+58h] [rbp-A8h]
  char v87; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT SourceDevice; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+70h] [rbp-90h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v92; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING String; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+A8h] [rbp-58h] BYREF
  void **v95; // [rsp+B8h] [rbp-48h]
  struct _CONFIG_KNOB_NAMESPACE v96; // [rsp+C0h] [rbp-40h] BYREF
  void **v97[2]; // [rsp+D8h] [rbp-28h] BYREF
  char v98; // [rsp+E8h] [rbp-18h]
  _QWORD Src[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v100; // [rsp+108h] [rbp+8h]
  __int128 v101; // [rsp+110h] [rbp+10h]
  const wchar_t *v102; // [rsp+120h] [rbp+20h]
  char *v103; // [rsp+128h] [rbp+28h]
  __int64 v104; // [rsp+130h] [rbp+30h]
  int v105; // [rsp+138h] [rbp+38h]
  __int128 v106; // [rsp+140h] [rbp+40h]
  const wchar_t *v107; // [rsp+150h] [rbp+50h]
  char *v108; // [rsp+158h] [rbp+58h]
  __int64 v109; // [rsp+160h] [rbp+60h]
  int v110; // [rsp+168h] [rbp+68h]
  __int128 v111; // [rsp+170h] [rbp+70h]
  const wchar_t *v112; // [rsp+180h] [rbp+80h]
  char *v113; // [rsp+188h] [rbp+88h]
  __int64 v114; // [rsp+190h] [rbp+90h]
  int v115; // [rsp+198h] [rbp+98h]
  __int64 v116; // [rsp+1A0h] [rbp+A0h]
  __int64 v117; // [rsp+1A8h] [rbp+A8h]
  const wchar_t *v118; // [rsp+1B0h] [rbp+B0h]
  char *v119; // [rsp+1B8h] [rbp+B8h]
  __int64 v120; // [rsp+1C0h] [rbp+C0h]
  int v121; // [rsp+1C8h] [rbp+C8h]
  __int64 v122; // [rsp+1D0h] [rbp+D0h]
  __int64 v123; // [rsp+1D8h] [rbp+D8h]
  const wchar_t *v124; // [rsp+1E0h] [rbp+E0h]
  char *v125; // [rsp+1E8h] [rbp+E8h]
  __int64 v126; // [rsp+1F0h] [rbp+F0h]
  int v127; // [rsp+1F8h] [rbp+F8h]
  __int64 v128; // [rsp+200h] [rbp+100h]
  __int64 v129; // [rsp+208h] [rbp+108h]
  const wchar_t *v130; // [rsp+210h] [rbp+110h]
  char *v131; // [rsp+218h] [rbp+118h]
  __int64 v132; // [rsp+220h] [rbp+120h]
  int v133; // [rsp+228h] [rbp+128h]
  __int128 v134; // [rsp+230h] [rbp+130h]
  const wchar_t *v135; // [rsp+240h] [rbp+140h]
  char *v136; // [rsp+248h] [rbp+148h]
  __int64 v137; // [rsp+250h] [rbp+150h]
  int v138; // [rsp+258h] [rbp+158h]
  __int128 v139; // [rsp+260h] [rbp+160h]
  const wchar_t *v140; // [rsp+270h] [rbp+170h]
  char *v141; // [rsp+278h] [rbp+178h]
  __int64 v142; // [rsp+280h] [rbp+180h]
  int v143; // [rsp+288h] [rbp+188h]
  __int128 v144; // [rsp+290h] [rbp+190h]
  const wchar_t *v145; // [rsp+2A0h] [rbp+1A0h]
  char *v146; // [rsp+2A8h] [rbp+1A8h]
  __int64 v147; // [rsp+2B0h] [rbp+1B0h]
  int v148; // [rsp+2B8h] [rbp+1B8h]
  __int128 v149; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v150; // [rsp+2D0h] [rbp+1D0h]
  char *v151; // [rsp+2D8h] [rbp+1D8h]
  __int64 v152; // [rsp+2E0h] [rbp+1E0h]
  int v153; // [rsp+2E8h] [rbp+1E8h]
  __int128 v154; // [rsp+2F0h] [rbp+1F0h]
  const wchar_t *v155; // [rsp+300h] [rbp+200h]
  char *v156; // [rsp+308h] [rbp+208h]
  __int64 v157; // [rsp+310h] [rbp+210h]
  int v158; // [rsp+318h] [rbp+218h]
  __int128 v159; // [rsp+320h] [rbp+220h]
  const wchar_t *v160; // [rsp+330h] [rbp+230h]
  char *v161; // [rsp+338h] [rbp+238h]
  __int64 v162; // [rsp+340h] [rbp+240h]
  int v163; // [rsp+348h] [rbp+248h]
  __int128 v164; // [rsp+350h] [rbp+250h]
  const wchar_t *v165; // [rsp+360h] [rbp+260h]
  char *v166; // [rsp+368h] [rbp+268h]
  __int64 v167; // [rsp+370h] [rbp+270h]
  int v168; // [rsp+378h] [rbp+278h]
  __int128 v169; // [rsp+380h] [rbp+280h]
  char v170[160]; // [rsp+390h] [rbp+290h] BYREF
  _OWORD v171[6]; // [rsp+430h] [rbp+330h] BYREF
  char v172; // [rsp+490h] [rbp+390h] BYREF
  char v173; // [rsp+4B8h] [rbp+3B8h] BYREF
  char v174; // [rsp+500h] [rbp+400h] BYREF

  v95 = a2;
  appended = -1073741823;
  v4 = 0LL;
  v80 = 0LL;
  SourceDevice = 0LL;
  DeviceExtension = 0LL;
  v6 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  InterfaceByInterfaceGuid = 0LL;
  TargetDevice = v6;
  v86 = 0LL;
  v79 = 0;
  v81 = 0;
  v85 = 0;
  v83 = 0;
  v82 = 0;
  v84 = 0;
  v87 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x44u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      v6);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = *(_QWORD *)&a1[6].Data1;
  if ( a1[5].Data4[1] != *(_BYTE *)(v9 + 26) >> 7 )
    __int2c();
  v10 = 1;
  if ( !v9 )
  {
    appended = -1073741670;
    goto LABEL_93;
  }
  DriverObject = *(PDRIVER_OBJECT *)(v9 + 40);
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != (struct _NDIS_M_DRIVER_BLOCK *)v9; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  v10 = 2;
  if ( i != (struct _NDIS_M_DRIVER_BLOCK *)v9 )
    goto LABEL_97;
  v10 = 3;
  if ( *(_BYTE *)(v9 + 24) >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
LABEL_97:
    InterfaceByInterfaceGuid = 0LL;
    v46 = 0;
    goto LABEL_79;
  }
  v10 = 4;
  v13 = (**(unsigned __int16 **)a1[3].Data4 + 6091) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v14 = v13 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v172;
  DestinationString.Buffer = (wchar_t *)&v173;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended || (appended = RtlAppendUnicodeStringToString(&DestinationString, &String)) != 0 )
  {
LABEL_96:
    v4 = 0LL;
    goto LABEL_97;
  }
  v15 = *(_WORD *)(v9 + 26);
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x40) == 0 )
    {
      v10 = 5;
      appended = IoCreateDevice(DriverObject, v14, &DestinationString, 0x17u, 0x100u, 0, &SourceDevice);
      if ( appended >= 0 )
      {
        v10 = 6;
        v16 = TargetDevice;
        v85 = 1;
        SourceDevice->Flags |= 0x10u;
        v16->Flags &= ~0x80u;
        SourceDevice->Flags |= 0x2000u;
        v80 = IoAttachDeviceToDeviceStack(SourceDevice, v16);
        if ( v80 )
        {
          DeviceExtension = (char *)SourceDevice->DeviceExtension;
          ndisMInitializeMiniportBlock(
            (struct _NDIS_M_DRIVER_BLOCK *)v9,
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
            v14);
          goto LABEL_19;
        }
        appended = -1073741823;
        v4 = 0LL;
        goto LABEL_97;
      }
      goto LABEL_96;
    }
    v53 = *(_QWORD *)&a1[5].Data1;
    v92 = 0LL;
    v54 = *(_QWORD *)(v9 + 360);
    appended = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _NDIS_MINIPORT_BLOCK **))(v54 + 104))(v53, v14, &v92);
    if ( !appended )
    {
      v55 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_QWORD))(v54 + 64))(*(_QWORD *)&a1[5].Data1);
      v56 = *(_QWORD *)&a1[5].Data1;
      SourceDevice = v55;
      v57 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(v54 + 72))(v56);
      DeviceExtension = (char *)v92;
      v80 = v57;
      ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, v92, v14);
      *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
LABEL_19:
      if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
        *((_DWORD *)DeviceExtension + 30) |= 0x80u;
      *(struct _GUID *)(DeviceExtension + 4008) = *a1;
      EventLog = ndisAllocateEventLog(2u, 1);
      v18 = *(_GUID *)(DeviceExtension + 4008);
      v96.NamespaceType = ConfigKnobNamespaceExecutionContext;
      *((_QWORD *)DeviceExtension + 559) = EventLog;
      v96.ObjectId = v18;
      if ( DeviceExtension != (char *)-5912LL )
        KnobNamespace::KnobNamespace(
          (KnobNamespace *)(DeviceExtension + 5912),
          (struct _DRIVER_OBJECT *)ndisDriverObject,
          &v96);
      Src[2] = 1LL;
      v104 = 0LL;
      v109 = 0LL;
      *((_OWORD *)DeviceExtension + 375) = 0LL;
      v114 = 900000LL;
      *((_OWORD *)DeviceExtension + 376) = 0LL;
      v116 = 60000LL;
      *((_OWORD *)DeviceExtension + 377) = 0LL;
      *((_QWORD *)DeviceExtension + 756) = 0LL;
      *((_DWORD *)DeviceExtension + 1514) = 0;
      *((_QWORD *)DeviceExtension + 750) = 60LL;
      Src[0] = L"Flags";
      Src[1] = DeviceExtension + 6004;
      v102 = L"MaxTimeAtDispatch";
      v103 = DeviceExtension + 6008;
      v107 = L"DispatchTimeWarning";
      v108 = DeviceExtension + 6012;
      v112 = L"DispatchTimeWarningInterval";
      v113 = DeviceExtension + 6016;
      v118 = L"DpcWatchdogTimerThreshold";
      v119 = DeviceExtension + 6020;
      v120 = 80LL;
      v123 = 80LL;
      v124 = L"WorkerThreadPriority";
      v125 = DeviceExtension + 6024;
      v130 = L"MaxPacketsSendAtPassive";
      v131 = DeviceExtension + 6028;
      v135 = L"MaxPacketsSendCompleteAtPassive";
      v136 = DeviceExtension + 6036;
      v140 = L"MaxPacketsReceiveAtPassive";
      v141 = DeviceExtension + 6044;
      v145 = L"MaxPacketsReceiveCompleteAtPassive";
      v100 = 32;
      v101 = 0LL;
      v105 = 32;
      v106 = 0LL;
      v110 = 32;
      v111 = 0LL;
      v115 = 32;
      v117 = 1440000LL;
      v121 = 32;
      v122 = 1LL;
      v126 = 10LL;
      v127 = 32;
      v128 = 1LL;
      v129 = 15LL;
      v132 = 64LL;
      v133 = 32;
      v134 = 0LL;
      v137 = 64LL;
      v138 = 32;
      v139 = 0LL;
      v142 = 64LL;
      v143 = 32;
      v144 = 0LL;
      v146 = DeviceExtension + 6052;
      v148 = 32;
      v150 = L"MaxPacketsSendAtDispatch";
      v151 = DeviceExtension + 6032;
      v155 = L"MaxPacketsSendCompleteAtDispatch";
      v156 = DeviceExtension + 6040;
      v160 = L"MaxPacketsReceiveAtDispatch";
      v161 = DeviceExtension + 6048;
      v165 = L"MaxPacketsReceiveCompleteAtDispatch";
      v153 = 32;
      v158 = 32;
      v163 = 32;
      v168 = 32;
      v147 = 64LL;
      v152 = 64LL;
      v157 = 64LL;
      v162 = 64LL;
      v167 = 64LL;
      v166 = DeviceExtension + 6056;
      v149 = 0LL;
      v154 = 0LL;
      v159 = 0LL;
      v164 = 0LL;
      v169 = 0LL;
      if ( Rtl::KArray<KnobDescriptor,1>::reserve((unsigned int *)DeviceExtension + 1496, 0xEuLL) )
      {
        v19 = *((unsigned int *)DeviceExtension + 1497);
        if ( (unsigned int)v19 < 0xE )
          memset((void *)(*((_QWORD *)DeviceExtension + 749) + 48 * v19), 0, -48 * v19 + 672);
        *((_DWORD *)DeviceExtension + 1497) = 14;
        v20 = *((unsigned int *)DeviceExtension + 1497);
        if ( !(_DWORD)v20
          || (memmove(*((void **)DeviceExtension + 749), Src, 48 * v20), (v22 = *((_DWORD *)DeviceExtension + 1497)) == 0) )
        {
          __fastfail(5u);
        }
        KnobNamespace::AddKnobCollection(
          (KnobNamespace *)(DeviceExtension + 5912),
          *((const struct KnobDescriptor **)DeviceExtension + 749),
          v22,
          v21,
          0LL);
        if ( (*((_DWORD *)DeviceExtension + 30) & 0x100) != 0 )
          IsDriverVerifying = (*(unsigned __int16 *)(v9 + 26) >> 1) & 1;
        else
          IsDriverVerifying = MmIsDriverVerifying(DriverObject);
        if ( ndisVerifierNdisDispatch )
        {
          if ( IsDriverVerifying )
          {
            v10 = 1;
            appended = (*((__int64 (__fastcall **)(PDEVICE_OBJECT, char *, char *, char *))ndisVerifierNdisDispatch + 1))(
                         SourceDevice,
                         DeviceExtension,
                         DeviceExtension + 24,
                         DeviceExtension + 4960);
            if ( appended < 0 )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xDu,
                  0x45u,
                  (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                  DeviceExtension);
              goto LABEL_106;
            }
          }
        }
        v24 = DeviceExtension + 3792;
        ndisSetDeviceNames(
          *(PCUNICODE_STRING *)a1[3].Data4,
          (PUNICODE_STRING)DeviceExtension + 238,
          (struct _UNICODE_STRING *)DeviceExtension + 237,
          (wchar_t *)DeviceExtension + 3040);
        Pool2 = ExAllocatePool2(66LL, DestinationString.Length + 2LL, 1851868238);
        *((_QWORD *)DeviceExtension + 526) = Pool2;
        if ( Pool2 )
        {
          v26 = (_UNICODE_STRING *)(DeviceExtension + 4200);
          *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
          RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
          v27 = TargetDevice;
          if ( (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0 )
          {
            *((_QWORD *)DeviceExtension + 479) = TargetDevice;
            *((_QWORD *)DeviceExtension + 478) = SourceDevice;
            *((_QWORD *)DeviceExtension + 480) = v80;
            TargetDevice = 0LL;
            v28 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
                    (__int64)v97,
                    (__int64)&TargetDevice);
            DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                                   (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                                   v29,
                                   (wchar_t **)(v28 + 8));
            if ( v98 )
              wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(
                v97[0],
                v97[1]);
            if ( !DevicePropertyData )
            {
              *((_QWORD *)DeviceExtension + 671) = TargetDevice;
              TargetDevice = 0LL;
            }
            v10 = 8;
            appended = IoRegisterDeviceInterface(
                         *((PDEVICE_OBJECT *)DeviceExtension + 479),
                         &GUID_DEVINTERFACE_NET,
                         (PUNICODE_STRING)((unsigned __int64)(DeviceExtension + 3792) & -(__int64)(DeviceExtension[120] < 0)),
                         (PUNICODE_STRING)(DeviceExtension + 4152));
            if ( appended < 0 )
            {
              v58 = &WPP_RECORDER_INITIALIZED;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0xDu,
                  0x46u,
                  (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                  DeviceExtension);
              if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
                McTemplateK0qqq_EtwWriteTransfer(
                  (__int64)v58,
                  &AddDeviceFailed,
                  (const GUID *)&NDIS_PROVIDER_ID,
                  appended,
                  1,
                  (char)DeviceExtension);
              v59 = TargetDevice;
              v46 = 0;
              TargetDevice = 0LL;
              if ( v59 )
                ExFreePoolWithTag(v59, 0);
              InterfaceByInterfaceGuid = 0LL;
              goto LABEL_78;
            }
            v31 = TargetDevice;
            v81 = 1;
            TargetDevice = 0LL;
            if ( v31 )
              ExFreePoolWithTag(v31, 0);
            v24 = DeviceExtension + 3792;
          }
          if ( (*((_DWORD *)DeviceExtension + 30) & 0x180) == 0 )
            goto LABEL_42;
          *(_QWORD *)&DeviceName.Length = 8912896LL;
          DeviceName.Buffer = (wchar_t *)&v174;
          appended = RtlUnicodeStringPrintf(&DeviceName, L"\\Device\\lwm\\NetworkInterface\\%wZ", v24);
          if ( appended )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            {
              InterfaceByInterfaceGuid = 0LL;
              v46 = 0;
              goto LABEL_78;
            }
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x47u,
              (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
              DeviceExtension);
          }
          else
          {
            p_DeviceName = (_UNICODE_STRING *)(DeviceExtension + 4152);
            v10 = 7;
            if ( (*((_DWORD *)DeviceExtension + 30) & 0x180) != 0x80 )
              p_DeviceName = &DeviceName;
            appended = IoCreateSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200), p_DeviceName);
            if ( !appended )
            {
              v82 = 1;
LABEL_42:
              v32 = *((_DWORD *)DeviceExtension + 30);
              if ( (v32 & 0x80u) != 0 && (v32 & 0x100) == 0 )
                v26 = (_UNICODE_STRING *)(DeviceExtension + 4152);
              v10 = 7;
              appended = IoCreateSymbolicLink(*(PUNICODE_STRING *)a1[3].Data4, v26);
              if ( appended )
              {
                v62 = &WPP_RECORDER_INITIALIZED;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0xDu,
                    0x49u,
                    (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                    DeviceExtension);
                if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
                  McTemplateK0qqq_EtwWriteTransfer(
                    (__int64)v62,
                    &AddDeviceFailed,
                    (const GUID *)&NDIS_PROVIDER_ID,
                    appended,
                    3,
                    (char)DeviceExtension);
                goto LABEL_106;
              }
              v33 = (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0;
              v83 = 1;
              if ( !v33 )
              {
LABEL_56:
                v35 = (unsigned __int16 **)(DeviceExtension + 3856);
                v10 = 4;
                InterfaceByInterfaceGuid = 0LL;
                appended = ndisCreateAdapterInstanceName(
                             (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                             (struct _UNICODE_STRING **)DeviceExtension + 482,
                             (struct _UNICODE_STRING **)DeviceExtension + 551);
                if ( appended < 0 )
                {
LABEL_108:
                  v46 = (char)InterfaceByInterfaceGuid;
LABEL_78:
                  v4 = v80;
                  goto LABEL_79;
                }
                v37 = &WPP_RECORDER_INITIALIZED;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qZ(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v36,
                    0xDu,
                    0x4Au,
                    (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                    (char)DeviceExtension,
                    *v35);
                if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
                  McTemplateK0z_EtwWriteTransfer((__int64)v37, &AddDevice, v8, *((const wchar_t **)*v35 + 1));
                *((_DWORD *)DeviceExtension + 1015) = 1;
                v38 = *(_QWORD *)a1[3].Data4;
                *(_QWORD *)a1[3].Data4 = 0LL;
                v39 = (void *)*((_QWORD *)DeviceExtension + 522);
                *((_QWORD *)DeviceExtension + 522) = v38;
                if ( v39 )
                  ExFreePoolWithTag(v39, 0x7274534Bu);
                v40 = ndisInitializeConfiguration(
                        (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                        *(const WCHAR **)a1[1].Data4);
                if ( !v40 )
                {
                  Ndis::BindEngine::Initialize(
                    (Ndis::BindEngine *)(DeviceExtension + 5112),
                    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                  v42 = *((_DWORD *)DeviceExtension + 30);
                  if ( (v42 & 0x80u) != 0 && (v42 & 0x100) == 0 )
                  {
                    Ndis::BindEngine::BeginPolicyUpdates(v41);
                    if ( Ndis::BindState::SetPause(
                           (Ndis::BindState *)(DeviceExtension + 5040),
                           DatapathPaused,
                           PauseReason_Wdf) )
                    {
                      memset(v170, 0, sizeof(v170));
                      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(
                          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                          (struct NDIS_PNPTRACE_LOCALS *)v170);
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            (int)v63,
                            0x1Cu,
                            0x4Bu,
                            (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                            *(unsigned __int16 **)&v170[8],
                            *(_QWORD *)v170);
                      }
                    }
                    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5112), v63);
                  }
                  v87 = 1;
                  appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                  if ( appended < 0 )
                    goto LABEL_108;
                  ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                  if ( !*(_QWORD *)(v9 + 776) )
                  {
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_qq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        1u,
                        0x4Cu,
                        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                        v9,
                        DeviceExtension);
LABEL_69:
                    if ( (*(_BYTE *)(v9 + 26) & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
                    {
                      v64 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
                      if ( !v64 )
                      {
                        appended = -1073741823;
LABEL_152:
                        v10 = 3;
                        goto LABEL_154;
                      }
                      if ( *v64 > 1u )
                      {
                        appended = -1073741637;
                        goto LABEL_152;
                      }
                    }
                    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
                    if ( InterfaceByInterfaceGuid )
                    {
                      if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)&a1[1].Data1 )
                        goto LABEL_72;
                      InterfaceByInterfaceGuid = 0LL;
                    }
                    appended = -1073741072;
LABEL_72:
                    KeReleaseSpinLock(&ndisIfListLock, v43);
                    v10 = 4;
                    if ( !appended )
                    {
                      ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
                      ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)InterfaceByInterfaceGuid, a1[4].Data4[3]);
                      v44 = *((_DWORD *)DeviceExtension + 30);
                      if ( (v44 & 0x80u) != 0 && (v44 & 0x100) == 0 )
                      {
                        if ( !a1[5].Data4[0] )
                          *((_DWORD *)DeviceExtension + 142) |= 8u;
                        if ( !BYTE2(InterfaceByInterfaceGuid[92].Blink) )
                        {
                          appended = -1073741811;
                          goto LABEL_154;
                        }
                        memset(v171, 0, 0x58uLL);
                        v65 = *(_OWORD *)(DeviceExtension + 4008);
                        v66 = *(_QWORD *)&a1[5].Data1;
                        DWORD2(v171[1]) = HIDWORD(InterfaceByInterfaceGuid[35].Flink);
                        *(_QWORD *)&v171[1] = InterfaceByInterfaceGuid[82].Flink;
                        v67 = *((_QWORD *)DeviceExtension + 470);
                        v171[0] = v65;
                        v171[2] = *((_OWORD *)DeviceExtension + 237);
                        v68 = *(_OWORD *)(v67 + 872);
                        v69 = *v35;
                        v171[4] = v68;
                        v70 = *(_OWORD *)v69;
                        *(_QWORD *)&v171[5] = DeviceExtension + 6000;
                        v71 = *(_QWORD *)(v9 + 360);
                        v171[3] = v70;
                        (*(void (__fastcall **)(__int64, _OWORD *))(v71 + 112))(v66, v171);
                      }
                      updated = ndisIfUpdateInterfaceOnAddDevice(
                                  (struct _NDIS_IF_BLOCK *)InterfaceByInterfaceGuid,
                                  (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                      if ( !updated )
                      {
                        v84 = 1;
                        updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                        if ( !updated )
                        {
                          v33 = (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0;
                          v46 = 0;
                          v81 = 0;
                          v82 = 0;
                          v83 = 0;
                          v85 = 0;
                          v84 = 0;
                          if ( v33 )
                          {
                            _InterlockedOr(v75, 0);
                            SourceDevice->Flags &= ~0x80u;
                          }
                          goto LABEL_78;
                        }
                      }
                      appended = NdisConvertNdisStatusToNtStatus(updated);
                    }
LABEL_154:
                    v46 = v79;
                    goto LABEL_78;
                  }
                  v10 = 10;
                  v40 = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                  if ( !v40 )
                  {
                    v79 = 1;
                    goto LABEL_69;
                  }
                }
                appended = NdisConvertNdisStatusToNtStatus(v40);
                goto LABEL_108;
              }
              *((_QWORD *)DeviceExtension + 619) = 0LL;
              v34 = *(_QWORD *)&a1[3].Data1;
              if ( v34 && *(_WORD *)v34 )
                ndisQueryDeviceFlags(*(const wchar_t **)(v34 + 8), (unsigned __int64 *)DeviceExtension + 619);
              if ( a1[4].Data4[0] )
                *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
              if ( a1[4].Data4[1] )
                *((_DWORD *)DeviceExtension + 31) |= 2u;
              if ( a1[4].Data4[2] )
                *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
              if ( a1[4].Data4[0] )
              {
                DriverObject = 0LL;
                v10 = 4;
                appended = ndisQueryReferenceBusInterface(v27, (PVOID *)&DriverObject);
                if ( appended < 0 )
                  goto LABEL_106;
                *((_QWORD *)DeviceExtension + 498) = DriverObject;
              }
              v10 = 4;
              appended = ndisCreateSecurityDescriptor(
                           *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                           (void **)DeviceExtension + 473,
                           5u);
              if ( appended >= 0 )
                goto LABEL_56;
LABEL_106:
              InterfaceByInterfaceGuid = 0LL;
              goto LABEL_108;
            }
            v61 = &WPP_RECORDER_INITIALIZED;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xDu,
                0x48u,
                (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
                DeviceExtension);
            if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
              McTemplateK0qqq_EtwWriteTransfer(
                (__int64)v61,
                &AddDeviceFailed,
                (const GUID *)&NDIS_PROVIDER_ID,
                appended,
                2,
                (char)DeviceExtension);
          }
          InterfaceByInterfaceGuid = v86;
          goto LABEL_108;
        }
        v10 = 1;
      }
      appended = -1073741670;
      goto LABEL_106;
    }
    InterfaceByInterfaceGuid = 0LL;
    v4 = 0LL;
LABEL_93:
    v46 = 0;
    goto LABEL_79;
  }
  v52 = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2(66LL, (int)v14, 2003584078);
  DeviceExtension = (char *)v52;
  if ( v52 )
  {
    ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, v52, v14);
    *((_DWORD *)DeviceExtension + 30) |= 0x100u;
    goto LABEL_19;
  }
  InterfaceByInterfaceGuid = v86;
  appended = -1073741670;
  v4 = (_DEVICE_OBJECT *)v86;
  v46 = (char)v86;
LABEL_79:
  if ( dword_1C00F4210 )
  {
    Exclusive[0] = (*((_DWORD *)DeviceExtension + 30) & 0x80) != 0;
    *(_QWORD *)DeviceCharacteristics = *((_QWORD *)DeviceExtension + 671);
    NdisTraceLoggingDeviceAdded((__int64)InterfaceByInterfaceGuid, v10, (__int64)a1, appended);
  }
  if ( appended < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v87 )
      {
        Ndis::BindRegistry::Reload(
          (Ndis::BindRegistry *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v8);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( v46 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v81 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v82 )
      {
        v72 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v72 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v72;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Du,
              (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v83 )
      {
        v73 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v73 )
          v73 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v74 = IoDeleteSymbolicLink(v73);
        if ( v74 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v74;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x4Eu,
            (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v84 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( v85 )
    {
      if ( v4 )
        IoDetachDevice(v4);
      IoDeleteDevice(SourceDevice);
      SourceDevice = 0LL;
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v47 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v48 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v47;
    if ( v48 )
      ExFreePoolWithTag(v48, 0x7274534Bu);
    v49 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v49);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v50,
        9u,
        0x4Fu,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v95 )
      *v95 = DeviceExtension;
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x50u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
