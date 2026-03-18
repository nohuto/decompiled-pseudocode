/*
 * XREFs of ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C018C4A0 (DxgkQueryAdapterInfo.c)
 *     DxgkQueryAdapterInfoInternal @ 0x1C02D3490 (DxgkQueryAdapterInfoInternal.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372900 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00185E4 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C001A53C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C001BD80 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002B5A4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C002B654 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C002B6C0 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0049D30 (-GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C00600E0 (DxgkInvalidateDeviceState.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C015C760 (DpiQueryAdapterRegistryInfo.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C0161968 (DpiIsDriverUpdateInProgress.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C0165234 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C0167908 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D1C14 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D1E68 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01D1EC4 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C01DBB88 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01DCF70 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C01DF2B4 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01E05F4 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z @ 0x1C01E3118 (-QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01E6C1C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DpiReadBlockListInfo @ 0x1C01EEA98 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z @ 0x1C01EEB30 (-QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C022242C (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02BB8DC (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C02BBA64 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C02BBAE4 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C02BD444 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C02BD4D0 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02C322C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C02C3E88 (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C02CF35C (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02CFC0C (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02CFD08 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0324078 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C037AF98 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoImpl(const struct _D3DKMT_QUERYADAPTERINFO *a1, char a2, struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rbx
  __int128 v15; // xmm0
  size_t v16; // xmm1_8
  size_t v17; // rbx
  unsigned int v18; // eax
  unsigned int *v19; // r13
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  struct DXGADAPTER **v28; // r9
  DXGADAPTER *v29; // rsi
  __int64 v30; // rbx
  int PairingAdapters; // r14d
  struct DXGADAPTER *v32; // rbx
  struct DXGADAPTER *v33; // r14
  int v34; // eax
  bool v35; // al
  ADAPTER_DISPLAY **v36; // rbx
  signed __int64 v37; // rax
  enum _KMTQUERYADAPTERINFOTYPE v38; // r14d
  __int64 v39; // r9
  __int64 v40; // rcx
  struct DXGADAPTER *v41; // r8
  int AdapterRegistryInfo; // edi
  struct DXGADAPTER *v43; // rsi
  struct DXGADAPTER *v44; // rbx
  int *AdapterType; // rax
  int v46; // ecx
  size_t v47; // rbx
  void *v48; // rcx
  size_t v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  DXGADAPTER *v52; // rcx
  DXGADAPTER *v53; // r10
  DXGADAPTER *v54; // r11
  DXGADAPTER *v55; // rcx
  DXGADAPTER *v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rbx
  const void **v59; // rbx
  size_t v60; // r8
  struct DXGADAPTER *v61; // rbx
  int v62; // eax
  char v63; // cl
  int v64; // ecx
  bool v65; // zf
  int v66; // r8d
  DXGADAPTER *v67; // rax
  int v68; // edx
  DXGPROCESS *v69; // rsi
  int v70; // ecx
  unsigned int *v71; // rdi
  __int64 v72; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  __int64 v74; // r8
  DXGADAPTER *v75; // rbx
  char v76; // cl
  int v77; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  __int64 v79; // rcx
  unsigned int v80; // r8d
  __int64 v81; // rdx
  _DWORD *v82; // rcx
  unsigned int v83; // r8d
  struct DXGADAPTER *v84; // rbx
  __int64 v85; // r8
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  DXGADAPTER *v89; // rcx
  DXGADAPTER *v90; // rcx
  struct DXGADAPTER *v91; // rbx
  struct DXGTHREAD *Current; // rax
  const wchar_t *v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  bool v96; // zf
  DXGADAPTER *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rcx
  unsigned int v101; // r9d
  int v102; // eax
  __int64 HostSilo; // rax
  __int64 v104; // r9
  struct DXGADAPTER *v105; // r8
  int v106; // eax
  __int64 v107; // r8
  unsigned __int64 v108; // r9
  char *v109; // r8
  int v110; // eax
  __int64 v111; // rbx
  unsigned int v112; // r8d
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  struct DXGADAPTER *v116; // rax
  struct DXGADAPTER *v117; // rax
  __int64 v118; // rcx
  void *v119; // rbx
  int v120; // eax
  __int64 v121; // r8
  unsigned __int64 v122; // r9
  char *v123; // r8
  __int64 v124; // r8
  int v125; // eax
  struct DXGADAPTER *v126; // r11
  int v127; // eax
  struct DXGADAPTER *v128; // rbx
  int v129; // ecx
  __int64 v130; // rax
  ADAPTER_RENDER *v131; // rdi
  __int64 v132; // rbx
  char v133; // cl
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  __int64 v135; // rdx
  char **v136; // r8
  int v137; // eax
  ADAPTER_DISPLAY **v138; // r8
  size_t v139; // [rsp+50h] [rbp-298h]
  struct DXGADAPTER *v140; // [rsp+60h] [rbp-288h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-280h]
  size_t Size; // [rsp+78h] [rbp-270h]
  char v143; // [rsp+80h] [rbp-268h] BYREF
  char v144; // [rsp+81h] [rbp-267h]
  DXGADAPTER *v145; // [rsp+88h] [rbp-260h] BYREF
  int v146; // [rsp+90h] [rbp-258h] BYREF
  __int64 v147; // [rsp+98h] [rbp-250h]
  char v148; // [rsp+A0h] [rbp-248h]
  struct DXGPROCESS *v149; // [rsp+A8h] [rbp-240h]
  struct DXGADAPTER *v150; // [rsp+B0h] [rbp-238h] BYREF
  _D3DKMT_WDDM_1_3_CAPS v151; // [rsp+B8h] [rbp-230h] BYREF
  unsigned int v152; // [rsp+BCh] [rbp-22Ch] BYREF
  unsigned int v153; // [rsp+C0h] [rbp-228h]
  unsigned int v154; // [rsp+C4h] [rbp-224h] BYREF
  _QWORD v155[2]; // [rsp+C8h] [rbp-220h] BYREF
  struct DXGADAPTER *v156; // [rsp+D8h] [rbp-210h] BYREF
  unsigned __int64 v157; // [rsp+E8h] [rbp-200h] BYREF
  struct DXGDEVICE *v158; // [rsp+F0h] [rbp-1F8h] BYREF
  struct DXGDEVICE *v159; // [rsp+F8h] [rbp-1F0h] BYREF
  void *v160; // [rsp+100h] [rbp-1E8h]
  char v161[8]; // [rsp+108h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v162; // [rsp+110h] [rbp-1D8h]
  char v163; // [rsp+118h] [rbp-1D0h]
  int v164; // [rsp+120h] [rbp-1C8h] BYREF
  unsigned __int64 v165[2]; // [rsp+128h] [rbp-1C0h] BYREF
  _DXGKARG_QUERYADAPTERINFO v166; // [rsp+138h] [rbp-1B0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v167; // [rsp+168h] [rbp-180h] BYREF
  __int128 v168; // [rsp+198h] [rbp-150h] BYREF
  int v169; // [rsp+1A8h] [rbp-140h]
  _D3DKMT_QUERYADAPTERINFO v170; // [rsp+1B0h] [rbp-138h] BYREF
  _BYTE v171[56]; // [rsp+1C8h] [rbp-120h] BYREF
  _BYTE v172[144]; // [rsp+200h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+290h] [rbp-58h] BYREF

  v144 = a2;
  v5 = a1;
  v146 = -1;
  v6 = 0LL;
  v147 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v148 = 1;
    v146 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v148 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v146, 2015);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v149 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v149 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v93 = L"Invalid process context, returning 0x%I64x";
LABEL_277:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v93, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
      v96 = v148 == 0;
LABEL_280:
      if ( v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_295;
    }
  }
  if ( a3 && a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v93 = L"Not valid to provide pAdapter when calling from usermode, return 0x%I64x";
    goto LABEL_277;
  }
  v160 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v16;
  *(_OWORD *)Src = v15;
  if ( !*((_QWORD *)&v15 + 1) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
    if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v21, v146);
    return 3221225485LL;
  }
  v17 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
    if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v146);
    return 3221225485LL;
  }
  v18 = (Size + 7) & 0xFFFFFFF8;
  v153 = v18;
  if ( v18 < (unsigned int)Size )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 3162LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
    if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v146);
    return 3221225485LL;
  }
  v19 = (unsigned int *)operator new[](v18, 0x4B677844u, 64LL, v13);
  v165[1] = (unsigned __int64)v19;
  v160 = v19;
  if ( !v19 )
  {
    WdLogSingleEntry1(3LL, -1073741801LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
    if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v27, v146);
    return 3221225495LL;
  }
  v20 = SHIDWORD(Src[0]);
  if ( SHIDWORD(Src[0]) < 23 && SHIDWORD(Src[0]) >= 17
    || SHIDWORD(Src[0]) < 16 && SHIDWORD(Src[0]) >= 10
    || SHIDWORD(Src[0]) >= 52 && SHIDWORD(Src[0]) < 61
    || SHIDWORD(Src[0]) < 7 && SHIDWORD(Src[0]) >= 2 )
  {
LABEL_22:
    v139 = (unsigned int)Size;
    memset(v19, 0, (unsigned int)Size);
  }
  else
  {
    switch ( HIDWORD(Src[0]) )
    {
      case 1:
      case 7:
      case 9:
      case 0x10:
      case 0x17:
      case 0x19:
      case 0x1F:
      case 0x22:
      case 0x29:
      case 0x2A:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x33:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x43:
      case 0x47:
      case 0x48:
        v139 = (unsigned int)Size;
        if ( v144 )
        {
          if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) < *((_QWORD *)&v15 + 1)
            || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v19, *((const void **)&v15 + 1), v17);
        }
        else
        {
          memmove(v19, *((const void **)&v15 + 1), (unsigned int)Size);
        }
        break;
      default:
        goto LABEL_22;
    }
  }
  v145 = a3;
  if ( a3 )
    v28 = 0LL;
  else
    v28 = &v145;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v156,
    (unsigned int)Src[0],
    (struct _KTHREAD **)v149,
    v28,
    1);
  v29 = v145;
  if ( !v145 )
  {
    WdLogSingleEntry2(3LL, LODWORD(Src[0]), -1073741811LL);
    operator delete[](v19);
    v97 = v156;
    if ( !v156 )
      goto LABEL_279;
    goto LABEL_278;
  }
  LODWORD(v140) = 0;
  if ( (_DWORD)v20 == 9 )
  {
    if ( (_DWORD)v17 == 48 )
      goto LABEL_217;
    WdLogSingleEntry2(3LL, v139, -1073741811LL);
    operator delete[](v19);
    v97 = v156;
    if ( !v156 )
    {
LABEL_279:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
      v96 = v148 == 0;
      goto LABEL_280;
    }
LABEL_278:
    DXGADAPTER::ReleaseReference(v97);
    goto LABEL_279;
  }
  if ( (_DWORD)v20 != 67 )
  {
    v30 = 0LL;
    goto LABEL_56;
  }
  if ( (_DWORD)v17 != 8 )
  {
    WdLogSingleEntry2(3LL, v139, -1073741811LL);
    operator delete[](v19);
    if ( v156 )
      DXGADAPTER::ReleaseReference(v156);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
    if ( !v148 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_295:
    McTemplateK0q_EtwWriteTransfer(v94, &EventProfilerExit, v95, v146);
    return 3221225485LL;
  }
LABEL_217:
  v30 = *v19;
LABEL_56:
  v140 = 0LL;
  v150 = 0LL;
  v157 = 0LL;
  v165[0] = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v145, v30, &v140, &v157, &v150, v165, 0);
  if ( PairingAdapters < 0 && (_DWORD)v20 != 9 && (_DWORD)v20 != 67 )
  {
    v150 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v29, v30, &v140, &v157, 0LL, 0LL, 0);
  }
  if ( PairingAdapters >= 0 )
  {
    v32 = v140;
    v33 = v150;
    if ( v140 != v29 && v150 != v29 )
    {
      WdLogSingleEntry1(1LL, 3330LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter == pAdapterIn) || (pDisplayAdapter == pAdapterIn)",
        3330LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v33 && !*((_QWORD *)v33 + 349) )
    {
      WdLogSingleEntry1(1LL, 3332LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
        3332LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v32 || !*((_QWORD *)v32 + 350) )
    {
      WdLogSingleEntry1(1LL, 3334LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
        3334LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v35 = 0;
    if ( (unsigned int)v20 <= 0x1B )
    {
      v34 = 138619200;
      if ( _bittest(&v34, v20) )
        v35 = 1;
    }
    if ( v29 == v32 && *((_BYTE *)v29 + 209) || v32 && *((_BYTE *)v32 + 209) && !v35 )
    {
      if ( (unsigned int)v20 > 0x39 || (v100 = 0x210F85840908010LL, !_bittest64(&v100, v20)) )
      {
        if ( (_DWORD)v20 != 68 )
        {
          v162 = v32;
          v163 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
          if ( *((_DWORD *)v32 + 50) == 1 )
          {
            *(void **)&v170.hAdapter = Src[0];
            *(_QWORD *)&v170.PrivateDriverDataSize = Size;
            v170.pPrivateDriverData = v19;
            v102 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                     (struct DXGADAPTER *)((char *)v140 + 4344),
                     v149,
                     &v170,
                     v101);
            AdapterRegistryInfo = v102;
            if ( v102 >= 0 )
            {
              AdapterRegistryInfo = PostProcessUMDFileName(SHIDWORD(Src[0]), v19, v153);
              if ( !v163 )
                goto LABEL_314;
              goto LABEL_313;
            }
            WdLogSingleEntry3(3LL, LODWORD(Src[0]), v102, 3384LL);
          }
          else
          {
            AdapterRegistryInfo = -1073741130;
          }
          if ( !v163 )
          {
LABEL_314:
            v47 = v139;
LABEL_99:
            if ( AdapterRegistryInfo >= 0 )
            {
              v48 = Src[1];
              if ( v144 )
              {
                v49 = v139;
                if ( (char *)Src[1] + v139 > (void *)MmUserProbeAddress || (char *)Src[1] + v139 <= Src[1] )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              else
              {
                v49 = v47;
              }
              memmove(v48, v19, v49);
            }
            operator delete[](v19);
            if ( v156 && _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
            if ( v148 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v146);
            }
            return (unsigned int)AdapterRegistryInfo;
          }
LABEL_313:
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v161);
          goto LABEL_314;
        }
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v172, v32, v33);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v140 + 2), v140);
    v36 = (ADAPTER_DISPLAY **)v150;
    if ( v150 )
    {
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v150 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v36 = (ADAPTER_DISPLAY **)v150;
      if ( v37 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v150 + 2), v150);
    }
    v38 = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) != 9 && HIDWORD(Src[0]) != 67 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v171,
        v140,
        (struct DXGADAPTER *)v36);
      if ( *((_DWORD *)v145 + 50) == 1 )
      {
        v40 = *((unsigned int *)v140 + 50);
        if ( (_DWORD)v40 == 1 )
        {
          v41 = v150;
          if ( !v150 )
          {
LABEL_83:
            v38 = HIDWORD(Src[0]);
            switch ( HIDWORD(Src[0]) )
            {
              case 0:
                *(_QWORD *)&v166.Flags.0 = 0LL;
                HIDWORD(v166.hKmdProcessHandle) = 0;
                memset(&v166, 0, 24);
                v166.pOutputData = v19;
                v166.OutputDataSize = Size;
                v69 = v149;
                v70 = *((_DWORD *)v149 + 106);
                if ( (v70 & 0x100) != 0 )
                  v166.Flags.Value = (v166.Flags.Value | 1) ^ ((*(_BYTE *)&v166.Flags.0 | 1) ^ (unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 76) + 608LL) + 336LL))) & 2;
                v71 = (unsigned int *)v140;
                v72 = *((_QWORD *)v140 + 350);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v72 + 72, 0LL);
                RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v69, v71[60]);
                if ( RenderAdapterInfo )
                  v166.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 2);
                ExReleasePushLockSharedEx(v72 + 72, 0LL);
                KeLeaveCriticalRegion();
                AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v71, &v166, v74);
                goto LABEL_93;
              case 1:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_319;
                v61 = v140;
                v62 = ADAPTER_RENDER::CopyUmdFileName(
                        *((ADAPTER_RENDER **)v140 + 350),
                        (struct _D3DKMT_UMDFILENAMEINFO *)v19);
                AdapterRegistryInfo = v62;
                if ( v62 >= 0 )
                  goto LABEL_93;
                v104 = v62;
                goto LABEL_322;
              case 2:
                if ( (_DWORD)Size != 528 )
                  goto LABEL_319;
                v107 = *((_QWORD *)v140 + 350);
                if ( (*((_DWORD *)v149 + 106) & 8) != 0 )
                {
                  v19[130] = *(_DWORD *)(v107 + 600);
                  v19[131] = *(_DWORD *)(v107 + 604);
                  v108 = *(unsigned __int16 *)(v107 + 584);
                  v109 = *(char **)(v107 + 592);
                }
                else
                {
                  v19[130] = *(_DWORD *)(v107 + 576);
                  v19[131] = *(_DWORD *)(v107 + 580);
                  v108 = *(unsigned __int16 *)(v107 + 560);
                  v109 = *(char **)(v107 + 568);
                }
                v110 = RtlStringCbCopyNW((char *)v19, 0x1C0000000LL, v109, v108);
                AdapterRegistryInfo = v110;
                if ( v110 < 0 )
                {
                  v111 = v110;
                  WdLogSingleEntry1(2LL, v110);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"CopyIcdFileName failed with 0x%I64x",
                    v111,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                goto LABEL_93;
              case 3:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_319;
                v155[0] = 0LL;
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD *, _QWORD *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 648LL) + 8LL) + 80LL))(
                  *(_QWORD *)(*((_QWORD *)v140 + 350) + 656LL),
                  0LL,
                  v155,
                  v155,
                  v155,
                  v19,
                  v19 + 2,
                  v19 + 4);
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 4:
              case 0x34:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_319;
                v116 = v140;
                if ( HIDWORD(Src[0]) == 4 )
                  v116 = v145;
                v47 = v139;
                if ( v116 )
                {
                  *(_OWORD *)v19 = *(_OWORD *)((char *)v116 + 292);
                  AdapterRegistryInfo = 0;
                }
                else
                {
                  AdapterRegistryInfo = -1073741823;
                }
                break;
              case 5:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 624LL) + 8LL)
                                                                                        + 504LL))(
                                        *(_QWORD *)(*((_QWORD *)v140 + 350) + 632LL),
                                        v19);
                goto LABEL_93;
              case 6:
              case 0x35:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                v117 = v140;
                if ( HIDWORD(Src[0]) == 6 )
                  v117 = v145;
                v47 = v139;
                if ( v117 )
                {
                  v118 = *(_QWORD *)(*((_QWORD *)v117 + 27) + 64LL);
                  *v19 = *(_DWORD *)(v118 + 1144);
                  v19[1] = *(unsigned __int16 *)(v118 + 1150);
                  v19[2] = (unsigned __int16)*(_DWORD *)(v118 + 1148);
                  AdapterRegistryInfo = 0;
                }
                break;
              case 7:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                v114 = *(_QWORD *)(*((_QWORD *)v140 + 350) + 648LL);
                v115 = *((_QWORD *)v149 + 8);
                if ( v115 )
                  v6 = *(_QWORD *)(v115 + 8LL * (unsigned int)(*(_DWORD *)v114 - 1));
                AdapterRegistryInfo = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v114 + 8) + 384LL))(
                                        v6,
                                        v19);
                goto LABEL_93;
              case 8:
              case 0x36:
                if ( (_DWORD)Size != 2080 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 8 )
                  v90 = v145;
                else
                  v90 = v140;
                if ( v90 )
                  AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v90 + 27), (char *)v19);
                goto LABEL_93;
              case 0xB:
              case 0x37:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 11 )
                  v75 = v145;
                else
                  v75 = v140;
                if ( !v75 )
                  goto LABEL_93;
                v76 = 0;
                v143 = 0;
                v77 = *((_DWORD *)v75 + 109);
                if ( (v77 & 0x20) != 0 || (v77 & 4) != 0 )
                {
                  IsDriverUpdateInProgress = 0;
                }
                else
                {
                  IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v75 + 27), &v143);
                  v76 = v143;
                }
                *v19 = IsDriverUpdateInProgress;
                if ( !v76 )
                  goto LABEL_177;
                v119 = (void *)*((_QWORD *)v75 + 27);
                ObfReferenceObject(v119);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v171);
                DxgkInvalidateDeviceState((__int64)v119);
                ObfDereferenceObject(v119);
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0xC:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                *v19 = 0;
                *v19 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2156LL) >> 5) & 1;
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0xD:
              case 0x38:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 13 )
                  v67 = v145;
                else
                  v67 = v140;
                if ( v67 )
                {
                  v68 = *((_DWORD *)v67 + 673);
                  *v19 = v68;
                  if ( (*((_DWORD *)v149 + 106) & 0x100) != 0
                    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v149 + 76) + 608LL) + 392LL) <= 0x10u )
                  {
                    v120 = v68;
                    if ( v68 > 2600 )
                      v120 = 2600;
                    *v19 = v120;
                  }
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0xF:
              case 0x39:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                v43 = v140;
                v44 = v140;
                if ( HIDWORD(Src[0]) == 15 )
                  v44 = v145;
                if ( v44 )
                {
                  AdapterType = DXGADAPTER::GetAdapterType(v44, &v164);
                  v46 = *AdapterType;
                  *v19 = *AdapterType;
                  if ( v43 )
                  {
                    v46 ^= ((unsigned __int16)v46 ^ (unsigned __int16)(*((unsigned __int8 *)v43 + 212) << 8)) & 0x100;
                    *v19 = v46;
                  }
                  if ( *((_DWORD *)v44 + 760) )
                    *v19 = v46 | 0x2000;
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x10:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_319;
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v40, 0x1C0000000LL, (__int64)v41, v39) + 106) & 4) == 0 )
                  goto LABEL_235;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v171);
                AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                        v145,
                                        (__int64)lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                goto LABEL_93;
              case 0x11:
              case 0x3A:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 17 )
                  v55 = v145;
                else
                  v55 = v140;
                if ( v55 )
                {
                  DXGADAPTER::QueryWDDM1_2Caps(v55, (struct _D3DKMT_WDDM_1_2_CAPS *)v19);
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x12:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_319;
                AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                        *((ADAPTER_RENDER **)v140 + 350),
                                        (union _LARGE_INTEGER *)v19);
                goto LABEL_93;
              case 0x13:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v65 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2627LL) == 0;
                AdapterRegistryInfo = 0;
                goto LABEL_151;
              case 0x14:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v65 = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v140 + 350)) == 0;
                AdapterRegistryInfo = 0;
                goto LABEL_151;
              case 0x15:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_319;
                v61 = v140;
                if ( !(_BYTE)word_1C013049C || !*((_BYTE *)v140 + 2631) || (*((_DWORD *)v140 + 666) & 0x20) != 0 )
                {
                  AdapterRegistryInfo = -1073741637;
                  v104 = -1073741637LL;
                  goto LABEL_322;
                }
                v106 = ADAPTER_RENDER::CopyDListFileName(
                         *((ADAPTER_RENDER **)v140 + 350),
                         (unsigned __int16 *)v19,
                         (unsigned int)v41);
                AdapterRegistryInfo = v106;
                if ( v106 < 0 )
                  WdLogSingleEntry3(4LL, v19, v61, v106);
                goto LABEL_93;
              case 0x16:
              case 0x3B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 22 )
                  v52 = v145;
                else
                  v52 = v140;
                if ( v52 )
                {
                  DXGADAPTER::QueryWDDM1_3Caps(v52, (struct _D3DKMT_WDDM_1_3_CAPS *)v19);
                  if ( v53 && v54 != v53 )
                  {
                    v151.0 = 0;
                    DXGADAPTER::QueryWDDM1_3Caps(v53, &v151);
                    *v19 ^= (*v19 ^ v151.Value) & 0x20;
                  }
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x17:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_319;
                if ( !v19[1] )
                  goto LABEL_260;
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v40, 0x1C0000000LL, (__int64)v41, v39) + 106) & 4) == 0 )
                {
LABEL_235:
                  AdapterRegistryInfo = -1073741790;
                  v88 = -1073741790LL;
                  goto LABEL_236;
                }
                if ( v19[1] )
                {
                  *(_DWORD *)(*((_QWORD *)v140 + 350) + 1128LL) = v19[3];
                  AdapterRegistryInfo = 0;
                }
                else
                {
LABEL_260:
                  v91 = v140;
                  v19[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v140 + 350));
                  v19[3] = *(_DWORD *)(*((_QWORD *)v91 + 350) + 1128LL);
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x18:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                DXGADAPTER::QueryWDDM2_0Caps(v140, (struct _D3DKMT_WDDM_2_0_CAPS *)v19);
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x19:
                if ( (_DWORD)Size != 78 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(v140, *v19, (struct _DXGK_NODEMETADATA *)(v19 + 1));
                goto LABEL_93;
              case 0x1A:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_319;
                v121 = *((_QWORD *)v140 + 350);
                *(_WORD *)v19 = 0;
                v122 = *(unsigned __int16 *)(v121 + 528);
                v123 = *(char **)(v121 + 536);
                goto LABEL_383;
              case 0x1B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                if ( (*((_DWORD *)v145 + 109) & 0x200) != 0 )
                  goto LABEL_204;
                *v19 = 0;
                goto LABEL_191;
              case 0x1C:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v65 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2148LL) & 0x10) == 0;
                AdapterRegistryInfo = 0;
                goto LABEL_151;
              case 0x1D:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_319;
                v124 = *((_QWORD *)v140 + 350);
                *(_WORD *)v19 = 0;
                v122 = *(unsigned __int16 *)(v124 + 544);
                v123 = *(char **)(v124 + 552);
LABEL_383:
                v125 = RtlStringCbCopyNW((char *)v19, 0x1C0000000LL, v123, v122);
                AdapterRegistryInfo = v125;
                if ( v125 >= 0 )
                  goto LABEL_93;
                v104 = v125;
                v105 = v126;
                goto LABEL_323;
              case 0x1E:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                if ( *((int *)v140 + 606) < 0x2000 )
                  v66 = 1;
                else
                  v66 = *((_DWORD *)v140 + 72);
                *v19 = v66;
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x1F:
                if ( (_DWORD)Size != 28 )
                  goto LABEL_319;
                v79 = *v19;
                if ( *((int *)v140 + 606) < 0x2000 )
                  v80 = 1;
                else
                  v80 = *((_DWORD *)v140 + 72);
                v81 = *v19;
                if ( (unsigned int)v79 >= v80 )
                  goto LABEL_398;
                _mm_lfence();
                v82 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)v140 + 335) + 344 * v79 + 8) + 64LL);
                v19[1] = v82[281];
                v19[2] = v82[282];
                v19[3] = v82[283];
                v19[4] = v82[284];
                v19[5] = v82[285];
                v19[6] = v82[280];
                AdapterRegistryInfo = 0;
                goto LABEL_185;
              case 0x20:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                QueryDriverCapsExt(v41, (struct _D3DKMT_DRIVERCAPS_EXT *)v19);
                goto LABEL_191;
              case 0x21:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v168 = 0LL;
                v169 = 0;
                v127 = DxgkMiracastQueryMiracastSupportInternal(&v168);
                if ( v127 == -1073741637 )
                {
                  *v19 = 0;
                  goto LABEL_191;
                }
                if ( v127 >= 0 )
                {
                  *v19 = 2 - (BYTE8(v168) != 0);
                  goto LABEL_191;
                }
                AdapterRegistryInfo = v127;
                v88 = v127;
LABEL_236:
                WdLogSingleEntry1(3LL, v88);
                goto LABEL_93;
              case 0x22:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                if ( *((int *)v140 + 606) < 0x2000 )
                  v83 = 1;
                else
                  v83 = *((_DWORD *)v140 + 72);
                if ( (*((_DWORD *)v140 + 539) & 0x40) == 0 )
                  goto LABEL_449;
                v81 = *v19;
                if ( (unsigned int)v81 >= v83 )
                {
LABEL_398:
                  AdapterRegistryInfo = -1073741811;
LABEL_400:
                  WdLogSingleEntry2(3LL, v81, -1073741811LL);
                }
                else
                {
                  ADAPTER_RENDER::QueryGpuMmuCaps(
                    *((ADAPTER_RENDER **)v140 + 350),
                    v81,
                    (struct _D3DKMT_GPUMMU_CAPS *)(v19 + 1));
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x23:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v65 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2733LL) == 0;
                AdapterRegistryInfo = 0;
                goto LABEL_151;
              case 0x24:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                *v19 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 380);
                goto LABEL_191;
              case 0x25:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2734LL) != 0;
                *v19 = v6;
                goto LABEL_191;
              case 0x26:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2735LL) != 0;
                *v19 = v6;
                goto LABEL_191;
              case 0x27:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2736LL) != 0;
                *v19 = v6;
                goto LABEL_191;
              case 0x28:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2737LL) != 0;
                *v19 = v6;
                goto LABEL_191;
              case 0x29:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_319;
                AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                        v140,
                                        *v19,
                                        v19[1],
                                        *((_QWORD *)v19 + 1),
                                        *((_QWORD *)v19 + 2));
                goto LABEL_93;
              case 0x2A:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_319;
                if ( *((int *)v140 + 606) < 0x2000 )
                  v112 = 1;
                else
                  v112 = *((_DWORD *)v140 + 72);
                v113 = *v19;
                if ( (unsigned int)v113 >= v112 )
                  WdLogSingleEntry2(3LL, v113, -1073741811LL);
                else
                  (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 648LL) + 8LL) + 80LL))(
                    *(_QWORD *)(*((_QWORD *)v140 + 350) + 656LL),
                    v113,
                    v19 + 8,
                    v19 + 10,
                    v19 + 12,
                    v19 + 2,
                    v19 + 4,
                    v19 + 6);
LABEL_177:
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x2B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v140 + 350) + 16LL) + 2738LL) != 0;
                *v19 = v6;
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x2C:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_319;
                *(_BYTE *)v19 = 1;
                v128 = v140;
                if ( *((_DWORD *)v140 + 103) != 1297040209 )
                  goto LABEL_191;
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( wcsncmp(*((const wchar_t **)v140 + 201), Str2, 0x14uLL) )
                  goto LABEL_191;
                v129 = *(_DWORD *)(*((_QWORD *)v128 + 335) + 16LL);
                AdapterRegistryInfo = 0;
                v47 = v139;
                if ( (v129 & 0x10) == 0 )
                  *(_BYTE *)v19 = 0;
                break;
              case 0x2D:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v84 = v140;
                if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v140 + 350))
                  || (v87 = *(_QWORD *)(*((_QWORD *)v84 + 350) + 16LL), *(_QWORD *)(v87 + 1216))
                  && *(_BYTE *)(v87 + 2738)
                  || *(_QWORD *)(v87 + 1224) && *(_BYTE *)(v87 + 2738) )
                {
LABEL_204:
                  *v19 = 1;
                  AdapterRegistryInfo = 0;
                  goto LABEL_93;
                }
                *v19 = 0;
                goto LABEL_191;
              case 0x2E:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                if ( !v19[1] )
                {
                  v131 = (ADAPTER_RENDER *)*((_QWORD *)v140 + 350);
                  v132 = *v19;
                  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v131) && (unsigned int)v132 < 0x10 )
                    v133 = *((_BYTE *)v131 + v132 + 1112);
                  else
                    v133 = 0;
                  LOBYTE(v6) = v133 != 0;
                  v19[2] = v6;
                  goto LABEL_191;
                }
                v130 = *v19;
                AdapterRegistryInfo = 0;
                v47 = v139;
                if ( (unsigned int)v130 < 0x10 )
                  *(_BYTE *)(v130 + *((_QWORD *)v140 + 350) + 1112) = v19[2] != 0;
                break;
              case 0x2F:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_319;
                v158 = 0LL;
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v159, *v19, (struct _KTHREAD **)v149, &v158);
                if ( v158 )
                {
                  *((_BYTE *)v19 + 4) = *((_BYTE *)v158 + 1906);
                  AdapterRegistryInfo = 0;
                }
                else
                {
                  WdLogSingleEntry1(2LL, *v19);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Invalid hDevice (0x%I64x) specified",
                    *v19,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  AdapterRegistryInfo = -1073741811;
                }
                if ( !v159 )
                  goto LABEL_93;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v159 + 2), v159);
                  v38 = HIDWORD(Src[0]);
                }
                else
                {
LABEL_185:
                  v38 = HIDWORD(Src[0]);
                }
                goto LABEL_93;
              case 0x30:
                if ( (*((_DWORD *)v149 + 106) & 0x200) != 0 )
                {
                  HostSilo = PsGetHostSilo();
                  v6 = PsAttachSiloToCurrentThread(HostSilo);
                }
                AdapterRegistryInfo = DxgkpQueryRegistry(v140, v19, Size);
                if ( v6 )
                  PsAttachSiloToCurrentThread(v6);
                goto LABEL_93;
              case 0x31:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_319;
                AdapterRegistryInfo = ADAPTER_RENDER::GetKmdFileVersion(
                                        *((ADAPTER_RENDER **)v140 + 350),
                                        (union _LARGE_INTEGER *)v19);
                goto LABEL_93;
              case 0x32:
              case 0x33:
                if ( (unsigned int)Size < 8 )
                  goto LABEL_319;
                if ( HIDWORD(Src[0]) == 50 )
                  LOBYTE(v39) = 1;
                else
                  v39 = 0LL;
                AdapterRegistryInfo = DpiReadBlockListInfo(*((_QWORD *)v140 + 27), v19, (unsigned int)Size, v39);
                goto LABEL_93;
              case 0x3C:
                if ( (_DWORD)Size != 80 )
                  goto LABEL_319;
                v56 = v145;
                v57 = *((_QWORD *)v145 + 27);
                if ( !v57 )
                {
                  WdLogSingleEntry1(1LL, 3800LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pAdapterIn->GetFdo() != NULL",
                    3800LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v57 = *((_QWORD *)v56 + 27);
                }
                v58 = *(_QWORD *)(v57 + 64);
                if ( *(_QWORD *)(v58 + 4760) && (v59 = (const void **)(v58 + 4752)) != 0LL )
                {
                  memset(v19, 0, 0x50uLL);
                  if ( *(unsigned __int16 *)v59 >= 0x4Eu )
                    v60 = 78LL;
                  else
                    v60 = *(unsigned __int16 *)v59;
                  memmove(v19, v59[1], v60);
                  AdapterRegistryInfo = 0;
                }
                else
                {
                  AdapterRegistryInfo = -1073741823;
                }
                goto LABEL_93;
              case 0x3D:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::GetNodePerfData(v140, (struct _D3DKMT_NODE_PERFDATA *)v19);
                goto LABEL_93;
              case 0x3E:
                if ( (_DWORD)Size != 64 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfData(v140, (struct _D3DKMT_ADAPTER_PERFDATA *)v19);
                goto LABEL_93;
              case 0x3F:
                if ( (_DWORD)Size != 40 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfDataCaps(
                                        v140,
                                        (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v19);
                goto LABEL_93;
              case 0x40:
                if ( (_DWORD)Size != 132 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::GetGpuVersion(v140, (struct _D3DKMT_GPUVERSION *)v19);
                goto LABEL_93;
              case 0x41:
              case 0x42:
                if ( (_DWORD)Size != 0x2000 )
                  goto LABEL_319;
                AdapterRegistryInfo = -1073741823;
                if ( HIDWORD(Src[0]) == 65 )
                  v89 = v145;
                else
                  v89 = v140;
                if ( v89 )
                {
                  DXGADAPTER::GetDeviceDescriptor(v89, 0x2000u, (unsigned __int16 *)v19);
                  AdapterRegistryInfo = 0;
                }
                goto LABEL_93;
              case 0x44:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_319;
                if ( v140 )
                  v63 = *((_BYTE *)v140 + 210);
                else
                  v63 = 0;
                *(_BYTE *)v19 = v63;
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x46:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                DXGADAPTER::QueryWDDM2_7Caps(v140, (struct _D3DKMT_WDDM_2_7_CAPS *)v19);
                goto LABEL_191;
              case 0x47:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_319;
                v61 = v140;
                if ( *v19 )
                {
                  AdapterRegistryInfo = -1073741811;
                }
                else
                {
                  DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(*((_QWORD *)v140 + 350));
                  if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                  {
                    AdapterRegistryInfo = -1073741811;
                  }
                  else
                  {
                    AdapterRegistryInfo = RtlStringCbCopyNW((char *)v19 + 4, v135, v136[1], *(unsigned __int16 *)v136);
                    if ( AdapterRegistryInfo >= 0 )
                      goto LABEL_93;
                  }
                }
                v104 = AdapterRegistryInfo;
LABEL_322:
                v105 = v61;
                goto LABEL_323;
              case 0x48:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_319;
                AdapterRegistryInfo = DXGADAPTER::QueryTrackedWorkloadSupport(
                                        v140,
                                        *v19,
                                        (enum DXGK_ENGINE_TYPE)v19[1],
                                        (int *)v19 + 2);
                goto LABEL_93;
              case 0x49:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v105 = v140;
                if ( (_BYTE)word_1C013049C && *((_BYTE *)v140 + 2631) )
                {
                  *v19 = (*((_DWORD *)v140 + 666) & 0x20) == 0;
                  goto LABEL_191;
                }
                AdapterRegistryInfo = -1073741637;
                v104 = -1073741637LL;
LABEL_323:
                WdLogSingleEntry3(4LL, v19, v105, v104);
                goto LABEL_93;
              case 0x4A:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_319;
                if ( !v41 )
                {
LABEL_449:
                  AdapterRegistryInfo = -1073741811;
                  WdLogSingleEntry1(3LL, -1073741811LL);
                  goto LABEL_93;
                }
                *(_QWORD *)v19 = 0LL;
                if ( !*((_QWORD *)v41 + 350) )
                  *(_QWORD *)v19 ^= (*v19 ^ (unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(*((ADAPTER_DISPLAY **)v41 + 349))) & 1;
                goto LABEL_191;
              case 0x4B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                DXGADAPTER::QueryWDDM2_9Caps(v140, (struct _D3DKMT_WDDM_2_9_CAPS *)v19);
                AdapterRegistryInfo = 0;
                goto LABEL_93;
              case 0x4C:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_319;
                v64 = *((_DWORD *)v140 + 539);
                if ( (v64 & 0x10000) != 0 )
                {
                  *v19 = 3;
LABEL_191:
                  AdapterRegistryInfo = 0;
                  goto LABEL_93;
                }
                AdapterRegistryInfo = 0;
                if ( (v64 & 0x8000) != 0 )
                {
                  *v19 = 2;
                  goto LABEL_93;
                }
                v65 = (v64 & 0x10) == 0;
LABEL_151:
                v47 = v139;
                *v19 = !v65;
                break;
              case 0x4D:
                if ( (_DWORD)Size == 4 )
                {
                  DXGADAPTER::QueryWDDM3_0Caps(v140, (struct _D3DKMT_WDDM_3_0_CAPS *)v19);
                  AdapterRegistryInfo = 0;
LABEL_93:
                  v47 = v139;
                }
                else
                {
LABEL_319:
                  AdapterRegistryInfo = -1073741811;
                  v47 = v139;
                  WdLogSingleEntry2(3LL, v139, -1073741811LL);
                }
                break;
              default:
                AdapterRegistryInfo = -1073741811;
                v81 = SHIDWORD(Src[0]);
                goto LABEL_400;
            }
            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v171);
            goto LABEL_95;
          }
          if ( *((_DWORD *)v150 + 50) == 1 )
          {
            v41 = v150;
            goto LABEL_83;
          }
        }
      }
      AdapterRegistryInfo = -1073741130;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v171);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v172);
      goto LABEL_314;
    }
    AdapterRegistryInfo = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v172, 0LL);
    if ( AdapterRegistryInfo < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v172);
      goto LABEL_314;
    }
    if ( !v36 || !v36[349] )
    {
      WdLogSingleEntry1(1LL, 3417LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        3417LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v38 == KMTQAITYPE_CURRENTDISPLAYMODE )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v36[349], *v19);
      if ( *(_DWORD *)DisplayModeInfo )
      {
        *(_OWORD *)(v19 + 1) = *(_OWORD *)DisplayModeInfo;
        *(_OWORD *)(v19 + 5) = *((_OWORD *)DisplayModeInfo + 1);
        *(_QWORD *)(v19 + 9) = *((_QWORD *)DisplayModeInfo + 4);
        v19[11] = *((_DWORD *)DisplayModeInfo + 10);
LABEL_224:
        v47 = v139;
LABEL_95:
        if ( AdapterRegistryInfo >= 0 && (*((_DWORD *)v149 + 106) & 0x200) != 0 )
          AdapterRegistryInfo = PostProcessUMDFileName(v38, v19, Size);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v172);
        goto LABEL_99;
      }
      AdapterRegistryInfo = -1071774919;
      v138 = v36;
    }
    else
    {
      if ( v38 != (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
        goto LABEL_224;
      v154 = *v19;
      v152 = 0;
      *(_QWORD *)&v167.Type = 33LL;
      *(_QWORD *)&v167.InputDataSize = 4LL;
      *(_QWORD *)&v167.Flags.0 = 0LL;
      HIDWORD(v167.hKmdProcessHandle) = 0;
      v167.pOutputData = &v152;
      v167.OutputDataSize = 4;
      v167.pInputData = &v154;
      v137 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v36, &v167, v85);
      AdapterRegistryInfo = v137;
      if ( v137 >= 0 )
      {
        v19[1] = v152;
        goto LABEL_224;
      }
      v138 = (ADAPTER_DISPLAY **)v137;
    }
    WdLogSingleEntry2(3LL, *v19, v138);
    goto LABEL_224;
  }
  WdLogSingleEntry2(2LL, v29, v30);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v29,
    v30,
    0LL,
    0LL,
    0LL);
  operator delete[](v19);
  if ( v156 )
    DXGADAPTER::ReleaseReference(v156);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
  if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v146);
  return (unsigned int)PairingAdapters;
}
