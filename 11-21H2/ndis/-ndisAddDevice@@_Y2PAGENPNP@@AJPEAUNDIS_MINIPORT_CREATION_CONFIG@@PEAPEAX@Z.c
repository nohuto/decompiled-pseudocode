/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120468 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00263F8 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0027D90 (NdisConvertNdisStatusToNtStatus.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028D34 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C002BE18 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00302A4 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031264 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003232C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0032664 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032ED8 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003369C (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C00338F8 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033F94 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00340F8 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1C0034144 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00346E0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C00590A4 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C00591A8 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065E40 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006705C (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006732C (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0101140 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BE0C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C010C49C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0112FCC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C01134CC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0113BE4 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C0114F98 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C011554C (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C01155F0 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0115958 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01159F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C013279C (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  int appended; // edi
  char *DeviceExtension; // rbx
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // r13
  _DEVICE_OBJECT *v6; // rax
  BOOLEAN v7; // r12
  __int64 v8; // r8
  struct _NDIS_M_DRIVER_BLOCK *v9; // r15
  unsigned int v10; // r14d
  KIRQL v11; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r13
  unsigned int v13; // ecx
  ULONG v14; // r12d
  unsigned __int16 Flags; // ax
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
  __int64 v32; // rcx
  unsigned __int16 **v33; // r12
  __int64 v34; // rdx
  unsigned int *v35; // rcx
  __int64 v36; // rax
  void *v37; // rcx
  int v38; // eax
  Ndis::BindEngine *v39; // rcx
  KIRQL v40; // r9
  int updated; // eax
  char v42; // r15
  void *v43; // rax
  __int64 v44; // rax
  void *v45; // rcx
  KIRQL v46; // al
  __int64 v47; // rdx
  void *v49; // rcx
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // r13
  _DEVICE_OBJECT *v51; // rax
  void *v52; // rcx
  _DEVICE_OBJECT *v53; // rax
  struct _NDIS_MINIPORT_BLOCK *v54; // rax
  unsigned int *v55; // rcx
  PDEVICE_OBJECT v56; // rcx
  _UNICODE_STRING *p_DeviceName; // rdx
  unsigned int *v58; // rcx
  unsigned int *v59; // rcx
  struct _NDIS_MINIPORT_BLOCK *v60; // rdx
  _DWORD *v61; // rax
  __int128 v62; // xmm0
  void *v63; // rcx
  __int64 v64; // rax
  __int128 v65; // xmm1
  unsigned __int16 *v66; // rax
  __int128 v67; // xmm0
  _NDIS_WDF_CX_DRIVER_BLOCK *v68; // rax
  NTSTATUS v69; // eax
  _UNICODE_STRING *v70; // rcx
  NTSTATUS v71; // eax
  _DEVICE_OBJECT *v72; // rcx
  signed __int32 v73[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  char v76; // [rsp+40h] [rbp-C0h]
  char v77; // [rsp+41h] [rbp-BFh]
  char v78; // [rsp+42h] [rbp-BEh]
  char v79; // [rsp+43h] [rbp-BDh]
  char v80; // [rsp+44h] [rbp-BCh]
  char v81; // [rsp+45h] [rbp-BBh]
  struct _LIST_ENTRY *v82; // [rsp+48h] [rbp-B8h]
  char v83; // [rsp+50h] [rbp-B0h]
  PDEVICE_OBJECT SourceDevice; // [rsp+58h] [rbp-A8h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+60h] [rbp-A0h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT v87; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v89; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+A0h] [rbp-60h] BYREF
  void **v92; // [rsp+B0h] [rbp-50h]
  void **v93[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v94; // [rsp+C8h] [rbp-38h]
  struct _CONFIG_KNOB_NAMESPACE v95; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD Src[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v97; // [rsp+108h] [rbp+8h]
  __int128 v98; // [rsp+110h] [rbp+10h]
  const wchar_t *v99; // [rsp+120h] [rbp+20h]
  char *v100; // [rsp+128h] [rbp+28h]
  __int64 v101; // [rsp+130h] [rbp+30h]
  int v102; // [rsp+138h] [rbp+38h]
  __int128 v103; // [rsp+140h] [rbp+40h]
  const wchar_t *v104; // [rsp+150h] [rbp+50h]
  char *v105; // [rsp+158h] [rbp+58h]
  __int64 v106; // [rsp+160h] [rbp+60h]
  int v107; // [rsp+168h] [rbp+68h]
  __int128 v108; // [rsp+170h] [rbp+70h]
  const wchar_t *v109; // [rsp+180h] [rbp+80h]
  char *v110; // [rsp+188h] [rbp+88h]
  __int64 v111; // [rsp+190h] [rbp+90h]
  int v112; // [rsp+198h] [rbp+98h]
  __int64 v113; // [rsp+1A0h] [rbp+A0h]
  __int64 v114; // [rsp+1A8h] [rbp+A8h]
  const wchar_t *v115; // [rsp+1B0h] [rbp+B0h]
  char *v116; // [rsp+1B8h] [rbp+B8h]
  __int64 v117; // [rsp+1C0h] [rbp+C0h]
  int v118; // [rsp+1C8h] [rbp+C8h]
  __int64 v119; // [rsp+1D0h] [rbp+D0h]
  __int64 v120; // [rsp+1D8h] [rbp+D8h]
  const wchar_t *v121; // [rsp+1E0h] [rbp+E0h]
  char *v122; // [rsp+1E8h] [rbp+E8h]
  __int64 v123; // [rsp+1F0h] [rbp+F0h]
  int v124; // [rsp+1F8h] [rbp+F8h]
  __int64 v125; // [rsp+200h] [rbp+100h]
  __int64 v126; // [rsp+208h] [rbp+108h]
  const wchar_t *v127; // [rsp+210h] [rbp+110h]
  char *v128; // [rsp+218h] [rbp+118h]
  __int64 v129; // [rsp+220h] [rbp+120h]
  int v130; // [rsp+228h] [rbp+128h]
  __int128 v131; // [rsp+230h] [rbp+130h]
  const wchar_t *v132; // [rsp+240h] [rbp+140h]
  char *v133; // [rsp+248h] [rbp+148h]
  __int64 v134; // [rsp+250h] [rbp+150h]
  int v135; // [rsp+258h] [rbp+158h]
  __int128 v136; // [rsp+260h] [rbp+160h]
  const wchar_t *v137; // [rsp+270h] [rbp+170h]
  char *v138; // [rsp+278h] [rbp+178h]
  __int64 v139; // [rsp+280h] [rbp+180h]
  int v140; // [rsp+288h] [rbp+188h]
  __int128 v141; // [rsp+290h] [rbp+190h]
  const wchar_t *v142; // [rsp+2A0h] [rbp+1A0h]
  char *v143; // [rsp+2A8h] [rbp+1A8h]
  __int64 v144; // [rsp+2B0h] [rbp+1B0h]
  int v145; // [rsp+2B8h] [rbp+1B8h]
  __int128 v146; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v147; // [rsp+2D0h] [rbp+1D0h]
  char *v148; // [rsp+2D8h] [rbp+1D8h]
  __int64 v149; // [rsp+2E0h] [rbp+1E0h]
  int v150; // [rsp+2E8h] [rbp+1E8h]
  __int128 v151; // [rsp+2F0h] [rbp+1F0h]
  const wchar_t *v152; // [rsp+300h] [rbp+200h]
  char *v153; // [rsp+308h] [rbp+208h]
  __int64 v154; // [rsp+310h] [rbp+210h]
  int v155; // [rsp+318h] [rbp+218h]
  __int128 v156; // [rsp+320h] [rbp+220h]
  const wchar_t *v157; // [rsp+330h] [rbp+230h]
  char *v158; // [rsp+338h] [rbp+238h]
  __int64 v159; // [rsp+340h] [rbp+240h]
  int v160; // [rsp+348h] [rbp+248h]
  __int128 v161; // [rsp+350h] [rbp+250h]
  const wchar_t *v162; // [rsp+360h] [rbp+260h]
  char *v163; // [rsp+368h] [rbp+268h]
  __int64 v164; // [rsp+370h] [rbp+270h]
  int v165; // [rsp+378h] [rbp+278h]
  __int128 v166; // [rsp+380h] [rbp+280h]
  char v167[160]; // [rsp+390h] [rbp+290h] BYREF
  __int128 v168; // [rsp+430h] [rbp+330h] BYREF
  _LIST_ENTRY *Flink; // [rsp+440h] [rbp+340h]
  int Flink_high; // [rsp+448h] [rbp+348h]
  int v171; // [rsp+44Ch] [rbp+34Ch]
  __int128 v172; // [rsp+450h] [rbp+350h]
  __int128 v173; // [rsp+460h] [rbp+360h]
  __int128 v174; // [rsp+470h] [rbp+370h]
  char *v175; // [rsp+480h] [rbp+380h]
  char v176; // [rsp+490h] [rbp+390h] BYREF
  char v177; // [rsp+4B8h] [rbp+3B8h] BYREF
  char v178; // [rsp+500h] [rbp+400h] BYREF

  v92 = a2;
  appended = -1073741823;
  v87 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  InterfaceByInterfaceGuid = 0LL;
  v6 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  v7 = 0;
  TargetDevice = v6;
  v82 = 0LL;
  v77 = 0;
  v78 = 0;
  v80 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v76 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x44u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      v6);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = *(struct _NDIS_M_DRIVER_BLOCK **)&a1[6].Data1;
  v10 = 1;
  if ( !v9 )
  {
    appended = -1073741670;
    v42 = 0;
    goto LABEL_74;
  }
  DriverObject = v9->DriverObject;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != v9; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  v10 = 2;
  if ( i != v9 )
    goto LABEL_91;
  v10 = 3;
  if ( v9->MajorNdisVersion >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
LABEL_91:
    InterfaceByInterfaceGuid = 0LL;
    v42 = 0;
    goto LABEL_74;
  }
  v10 = 4;
  v13 = (**(unsigned __int16 **)a1[3].Data4 + 6067) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v14 = v13 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v176;
  DestinationString.Buffer = (wchar_t *)&v177;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended || (appended = RtlAppendUnicodeStringToString(&DestinationString, &String)) != 0 )
  {
LABEL_90:
    v7 = 0;
    goto LABEL_91;
  }
  Flags = v9->Flags;
  if ( (Flags & 0xC0) == 0 )
  {
    v10 = appended + 5;
    appended = IoCreateDevice(DriverObject, v14, &DestinationString, appended + 23, 0x100u, 0, &SourceDevice);
    if ( appended >= 0 )
    {
      v10 = 6;
      v16 = TargetDevice;
      SourceDevice->Flags |= 0x10u;
      v16->Flags &= ~0x80u;
      SourceDevice->Flags |= 0x2000u;
      v87 = IoAttachDeviceToDeviceStack(SourceDevice, v16);
      if ( v87 )
      {
        DeviceExtension = (char *)SourceDevice->DeviceExtension;
        ndisMInitializeMiniportBlock(v9, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v14);
        goto LABEL_16;
      }
      appended = -1073741823;
    }
    goto LABEL_90;
  }
  if ( (Flags & 0x40) != 0 )
  {
    v49 = *(void **)&a1[5].Data1;
    v89 = 0LL;
    CxBlock = v9->CxBlock;
    v76 = 1;
    appended = CxBlock->Chars.EvtCxAllocateMiniportBlock(v49, v14, (void **)&v89);
    if ( appended )
      goto LABEL_160;
    v51 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)&a1[5].Data1);
    v52 = *(void **)&a1[5].Data1;
    SourceDevice = v51;
    v53 = CxBlock->Chars.EvtCxGetNextDeviceObject(v52);
    DeviceExtension = (char *)v89;
    v87 = v53;
    ndisMInitializeMiniportBlock(v9, v89, v14);
    *((_DWORD *)DeviceExtension + 30) |= 0x80u;
    *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
    DeviceExtension[6052] = a1[5].Data4[1];
LABEL_16:
    *(struct _GUID *)(DeviceExtension + 4008) = *a1;
    EventLog = ndisAllocateEventLog(2u, 1);
    v18 = *(_GUID *)(DeviceExtension + 4008);
    v95.NamespaceType = ConfigKnobNamespaceExecutionContext;
    *((_QWORD *)DeviceExtension + 559) = EventLog;
    v95.ObjectId = v18;
    if ( DeviceExtension != (char *)-5904LL )
      KnobNamespace::KnobNamespace(
        (KnobNamespace *)DeviceExtension + 82,
        (struct _DRIVER_OBJECT *)ndisDriverObject,
        &v95);
    Src[2] = 1LL;
    v101 = 0LL;
    v106 = 0LL;
    *(_OWORD *)(DeviceExtension + 5992) = 0LL;
    v111 = 900000LL;
    *(_OWORD *)(DeviceExtension + 6008) = 0LL;
    v113 = 60000LL;
    *(_OWORD *)(DeviceExtension + 6024) = 0LL;
    *((_QWORD *)DeviceExtension + 755) = 0LL;
    *((_DWORD *)DeviceExtension + 1512) = 0;
    *((_QWORD *)DeviceExtension + 749) = 60LL;
    Src[0] = L"Flags";
    Src[1] = DeviceExtension + 5996;
    v99 = L"MaxTimeAtDispatch";
    v100 = DeviceExtension + 6000;
    v104 = L"DispatchTimeWarning";
    v105 = DeviceExtension + 6004;
    v109 = L"DispatchTimeWarningInterval";
    v110 = DeviceExtension + 6008;
    v115 = L"DpcWatchdogTimerThreshold";
    v116 = DeviceExtension + 6012;
    v117 = 80LL;
    v120 = 80LL;
    v121 = L"WorkerThreadPriority";
    v122 = DeviceExtension + 6016;
    v127 = L"MaxPacketsSendAtPassive";
    v128 = DeviceExtension + 6020;
    v132 = L"MaxPacketsSendCompleteAtPassive";
    v133 = DeviceExtension + 6028;
    v137 = L"MaxPacketsReceiveAtPassive";
    v138 = DeviceExtension + 6036;
    v142 = L"MaxPacketsReceiveCompleteAtPassive";
    v97 = 32;
    v98 = 0LL;
    v102 = 32;
    v103 = 0LL;
    v107 = 32;
    v108 = 0LL;
    v112 = 32;
    v114 = 1440000LL;
    v118 = 32;
    v119 = 1LL;
    v123 = 10LL;
    v124 = 32;
    v125 = 1LL;
    v126 = 15LL;
    v129 = 64LL;
    v130 = 32;
    v131 = 0LL;
    v134 = 64LL;
    v135 = 32;
    v136 = 0LL;
    v139 = 64LL;
    v140 = 32;
    v141 = 0LL;
    v143 = DeviceExtension + 6044;
    v145 = 32;
    v147 = L"MaxPacketsSendAtDispatch";
    v148 = DeviceExtension + 6024;
    v152 = L"MaxPacketsSendCompleteAtDispatch";
    v153 = DeviceExtension + 6032;
    v157 = L"MaxPacketsReceiveAtDispatch";
    v158 = DeviceExtension + 6040;
    v162 = L"MaxPacketsReceiveCompleteAtDispatch";
    v150 = 32;
    v155 = 32;
    v160 = 32;
    v165 = 32;
    v144 = 64LL;
    v149 = 64LL;
    v154 = 64LL;
    v159 = 64LL;
    v164 = 64LL;
    v163 = DeviceExtension + 6048;
    v146 = 0LL;
    v151 = 0LL;
    v156 = 0LL;
    v161 = 0LL;
    v166 = 0LL;
    if ( !Rtl::KArray<KnobDescriptor,1>::reserve((unsigned int *)DeviceExtension + 1494, 0xEuLL) )
    {
      appended = -1073741670;
      goto LABEL_105;
    }
    v19 = *((unsigned int *)DeviceExtension + 1495);
    if ( (unsigned int)v19 < 0xE )
      memset((void *)(*((_QWORD *)DeviceExtension + 748) + 48 * v19), 0, -48 * v19 + 672);
    *((_DWORD *)DeviceExtension + 1495) = 14;
    v20 = *((unsigned int *)DeviceExtension + 1495);
    if ( !(_DWORD)v20
      || (memmove(*((void **)DeviceExtension + 748), Src, 48 * v20), (v22 = *((_DWORD *)DeviceExtension + 1495)) == 0) )
    {
      __fastfail(5u);
    }
    KnobNamespace::AddKnobCollection(
      (KnobNamespace *)DeviceExtension + 82,
      *((const struct KnobDescriptor **)DeviceExtension + 748),
      v22,
      v21,
      0LL);
    if ( a1[5].Data4[2] )
      IsDriverVerifying = (v9->Flags >> 1) & 1;
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
              0x46u,
              (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
              DeviceExtension);
          goto LABEL_105;
        }
      }
    }
    v24 = DeviceExtension + 3792;
    ndisSetDeviceNames(
      *(PCUNICODE_STRING *)a1[3].Data4,
      (PUNICODE_STRING)DeviceExtension + 238,
      (struct _UNICODE_STRING *)DeviceExtension + 237,
      (wchar_t *)DeviceExtension + 3028);
    Pool2 = ExAllocatePool2(66LL, DestinationString.Length + 2LL, 1851868238);
    *((_QWORD *)DeviceExtension + 526) = Pool2;
    if ( !Pool2 )
    {
      appended = -1073741670;
      v10 = 1;
      goto LABEL_105;
    }
    v26 = (_UNICODE_STRING *)(DeviceExtension + 4200);
    *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
    RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
    v27 = TargetDevice;
    if ( !a1[5].Data4[2] )
    {
      *((_QWORD *)DeviceExtension + 479) = TargetDevice;
      *((_QWORD *)DeviceExtension + 478) = SourceDevice;
      TargetDevice = 0LL;
      *((_QWORD *)DeviceExtension + 480) = v87;
      v28 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
              (__int64)v93,
              (__int64)&TargetDevice);
      DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                             (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                             v29,
                             (wchar_t **)(v28 + 8));
      if ( v94 )
        wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v93[0], v93[1]);
      if ( !DevicePropertyData )
      {
        *((_QWORD *)DeviceExtension + 671) = TargetDevice;
        TargetDevice = 0LL;
      }
      v10 = 8;
      appended = IoRegisterDeviceInterface(
                   *((PDEVICE_OBJECT *)DeviceExtension + 479),
                   &GUID_DEVINTERFACE_NET,
                   (PUNICODE_STRING)((unsigned __int64)(DeviceExtension + 3792) & -(__int64)(v76 != 0)),
                   (PUNICODE_STRING)(DeviceExtension + 4152));
      if ( appended < 0 )
      {
        v55 = &WPP_RECORDER_INITIALIZED;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x47u,
            (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
            DeviceExtension);
        if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(
            (__int64)v55,
            &AddDeviceFailed,
            (const GUID *)&NDIS_PROVIDER_ID,
            appended,
            1,
            (char)DeviceExtension);
        v56 = TargetDevice;
        v42 = 0;
        TargetDevice = 0LL;
        if ( v56 )
          ExFreePoolWithTag(v56, 0);
        InterfaceByInterfaceGuid = 0LL;
        goto LABEL_73;
      }
      v31 = TargetDevice;
      v78 = 1;
      TargetDevice = 0LL;
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      v24 = DeviceExtension + 3792;
    }
    if ( !v76 && !a1[5].Data4[2] )
    {
LABEL_38:
      v10 = 7;
      appended = IoCreateSymbolicLink(*(PUNICODE_STRING *)a1[3].Data4, v26);
      if ( appended )
      {
        v59 = &WPP_RECORDER_INITIALIZED;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x4Au,
            (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
            DeviceExtension);
        if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(
            (__int64)v59,
            &AddDeviceFailed,
            (const GUID *)&NDIS_PROVIDER_ID,
            appended,
            3,
            (char)DeviceExtension);
        goto LABEL_105;
      }
      v80 = 1;
      if ( a1[5].Data4[2] )
      {
LABEL_51:
        v33 = (unsigned __int16 **)(DeviceExtension + 3856);
        v10 = 4;
        InterfaceByInterfaceGuid = 0LL;
        appended = ndisCreateAdapterInstanceName(
                     (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                     (struct _UNICODE_STRING **)DeviceExtension + 482,
                     (struct _UNICODE_STRING **)DeviceExtension + 551);
        if ( appended < 0 )
        {
LABEL_107:
          v42 = (char)InterfaceByInterfaceGuid;
LABEL_73:
          v7 = v76;
          goto LABEL_74;
        }
        v35 = &WPP_RECORDER_INITIALIZED;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qZ(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v34,
            0xDu,
            0x4Bu,
            (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
            (char)DeviceExtension,
            *v33);
        if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
          McTemplateK0z_EtwWriteTransfer((__int64)v35, &AddDevice, v8, *((const wchar_t **)*v33 + 1));
        *((_DWORD *)DeviceExtension + 1015) = 1;
        v36 = *(_QWORD *)a1[3].Data4;
        *(_QWORD *)a1[3].Data4 = 0LL;
        v37 = (void *)*((_QWORD *)DeviceExtension + 522);
        *((_QWORD *)DeviceExtension + 522) = v36;
        if ( v37 )
          ExFreePoolWithTag(v37, 0x7274534Bu);
        v38 = ndisInitializeConfiguration((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, *(const WCHAR **)a1[1].Data4);
        if ( !v38 )
        {
          Ndis::BindEngine::Initialize(
            (Ndis::BindEngine *)(DeviceExtension + 5112),
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
          {
            Ndis::BindEngine::BeginPolicyUpdates(v39);
            if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5040), DatapathPaused, PauseReason_Wdf) )
            {
              memset(v167, 0, sizeof(v167));
              if ( (unsigned __int8)byte_1C00EC66B >= 4u )
              {
                ndisGetBindLinkNameForTracing(
                  (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                  (struct NDIS_PNPTRACE_LOCALS *)v167);
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v60,
                    0x1Cu,
                    0x4Cu,
                    (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
                    *(unsigned __int16 **)&v167[8],
                    *(_QWORD *)v167);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5112), v60);
          }
          v83 = 1;
          appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( appended < 0 )
            goto LABEL_107;
          ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( !v9->AddDeviceHandler )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                1u,
                0x4Du,
                (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
                (char)v9,
                DeviceExtension);
LABEL_64:
            if ( (v9->Flags & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
            {
              v61 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
              if ( !v61 )
              {
                appended = -1073741823;
LABEL_145:
                v10 = 3;
                goto LABEL_147;
              }
              if ( *v61 > 1u )
              {
                appended = -1073741637;
                goto LABEL_145;
              }
            }
            KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
            if ( InterfaceByInterfaceGuid )
            {
              if ( InterfaceByInterfaceGuid[82].Flink == *(_LIST_ENTRY **)&a1[1].Data1 )
                goto LABEL_67;
              InterfaceByInterfaceGuid = 0LL;
            }
            appended = -1073741072;
LABEL_67:
            KeReleaseSpinLock(&ndisIfListLock, v40);
            v10 = 4;
            if ( !appended )
            {
              ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
              ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)InterfaceByInterfaceGuid, a1[4].Data4[3]);
              if ( v76 )
              {
                if ( !a1[5].Data4[0] )
                  *((_DWORD *)DeviceExtension + 142) |= 8u;
                if ( !BYTE2(InterfaceByInterfaceGuid[92].Blink) )
                {
                  appended = -1073741811;
                  goto LABEL_147;
                }
                v62 = *(_OWORD *)(DeviceExtension + 4008);
                v63 = *(void **)&a1[5].Data1;
                v171 = 0;
                Flink_high = HIDWORD(InterfaceByInterfaceGuid[35].Flink);
                Flink = InterfaceByInterfaceGuid[82].Flink;
                v64 = *((_QWORD *)DeviceExtension + 470);
                v168 = v62;
                v172 = *((_OWORD *)DeviceExtension + 237);
                v65 = *(_OWORD *)(v64 + 872);
                v66 = *v33;
                v174 = v65;
                v67 = *(_OWORD *)v66;
                v175 = DeviceExtension + 5992;
                v68 = v9->CxBlock;
                v173 = v67;
                v68->Chars.EvtCxMiniportCompleteAdd(v63, (_NDIS_WDF_COMPLETE_ADD_PARAMS *)&v168);
              }
              updated = ndisIfUpdateInterfaceOnAddDevice(
                          (struct _NDIS_IF_BLOCK *)InterfaceByInterfaceGuid,
                          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
              if ( !updated )
              {
                v81 = 1;
                updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
                if ( !updated )
                {
                  v42 = 0;
                  v78 = 0;
                  v79 = 0;
                  v80 = 0;
                  v81 = 0;
                  if ( !a1[5].Data4[2] )
                  {
                    _InterlockedOr(v73, 0);
                    SourceDevice->Flags &= ~0x80u;
                  }
                  goto LABEL_73;
                }
              }
              appended = NdisConvertNdisStatusToNtStatus(updated);
            }
LABEL_147:
            v42 = v77;
            goto LABEL_73;
          }
          v10 = 10;
          v38 = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( !v38 )
          {
            v77 = 1;
            goto LABEL_64;
          }
        }
        appended = NdisConvertNdisStatusToNtStatus(v38);
        goto LABEL_107;
      }
      *((_QWORD *)DeviceExtension + 619) = 0LL;
      v32 = *(_QWORD *)&a1[3].Data1;
      if ( v32 && *(_WORD *)v32 )
        ndisQueryDeviceFlags(*(const wchar_t **)(v32 + 8), (unsigned __int64 *)DeviceExtension + 619);
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
          goto LABEL_105;
        *((_QWORD *)DeviceExtension + 498) = DriverObject;
      }
      v10 = 4;
      appended = ndisCreateSecurityDescriptor(
                   *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                   (void **)DeviceExtension + 473,
                   5u);
      if ( appended >= 0 )
        goto LABEL_51;
LABEL_105:
      InterfaceByInterfaceGuid = 0LL;
      goto LABEL_107;
    }
    *(_QWORD *)&DeviceName.Length = 8912896LL;
    DeviceName.Buffer = (wchar_t *)&v178;
    appended = RtlUnicodeStringPrintf(&DeviceName, L"\\Device\\lwm\\NetworkInterface\\%wZ", v24);
    if ( !appended )
    {
      p_DeviceName = (_UNICODE_STRING *)(DeviceExtension + 4152);
      v10 = 7;
      if ( !v76 )
        p_DeviceName = &DeviceName;
      appended = IoCreateSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200), p_DeviceName);
      if ( !appended )
      {
        v79 = 1;
        if ( v76 )
          v26 = (_UNICODE_STRING *)(DeviceExtension + 4152);
        goto LABEL_38;
      }
      v58 = &WPP_RECORDER_INITIALIZED;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x49u,
          (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
          DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          (__int64)v58,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          2,
          (char)DeviceExtension);
LABEL_119:
      InterfaceByInterfaceGuid = v82;
      goto LABEL_107;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x48u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        DeviceExtension);
      goto LABEL_119;
    }
LABEL_160:
    InterfaceByInterfaceGuid = 0LL;
    v42 = 0;
    goto LABEL_73;
  }
  if ( (Flags & 0x80u) == 0 )
  {
    appended = -1073741811;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(DeviceObject) = v9->Flags;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x45u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (char)v9,
        DeviceObject);
    }
    goto LABEL_90;
  }
  v54 = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2(66LL, (int)v14, 2003584078);
  DeviceExtension = (char *)v54;
  if ( v54 )
  {
    ndisMInitializeMiniportBlock(v9, v54, v14);
    *((_DWORD *)DeviceExtension + 30) |= 0x100u;
    goto LABEL_16;
  }
  InterfaceByInterfaceGuid = v82;
  appended = -1073741670;
  v7 = (unsigned __int8)v82;
  v42 = (char)v82;
LABEL_74:
  if ( dword_1C00EB1D8 )
  {
    v43 = (void *)*((_QWORD *)DeviceExtension + 671);
    Exclusive[0] = v7;
    NdisTraceLoggingDeviceAdded((__int64)InterfaceByInterfaceGuid, v10, (__int64)a1, appended, v43);
  }
  if ( appended < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v83 )
      {
        Ndis::BindRegistry::Reload(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v8);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( v42 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v78 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v79 )
      {
        v69 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v69 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v69;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Eu,
              (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v80 )
      {
        v70 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v70 )
          v70 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v71 = IoDeleteSymbolicLink(v70);
        if ( v71 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v71;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x4Fu,
            (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v81 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( !v7 )
    {
      v72 = SourceDevice;
      if ( SourceDevice )
      {
        if ( v87 )
        {
          IoDetachDevice(v87);
          v72 = SourceDevice;
        }
        IoDeleteDevice(v72);
        SourceDevice = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v44 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v45 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v44;
    if ( v45 )
      ExFreePoolWithTag(v45, 0x7274534Bu);
    v46 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v46);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v47,
        9u,
        0x50u,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v92 )
      *v92 = DeviceExtension;
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x51u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
