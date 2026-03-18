/*
 * XREFs of DxgkEscape @ 0x1C0179FA0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036CA90 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0043CBC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0043CF4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0062FBC (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0179890 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02BC3EC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02BEFB0 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C02C1004 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02C1E48 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C02C9588 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CEE60 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C02D4E4C (DxgkWriteUserModeDiagEntry.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02E51C4 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C02EB624 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C03061E4 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0307154 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030728C (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030735C (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C03081F8 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C03083C4 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0308988 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0308C20 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C0308DB4 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0308DE0 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C030BE44 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C0325238 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0325334 (OutputDuplGetDiagnosticBuffer.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0377104 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C038EE10 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C039AABC (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03AFB4C (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v12; // rbx
  DXGPROCESS *v13; // r15
  struct _D3DKMT_DISPLAYMODELIST *v14; // r12
  char CurrentThreadPreviousMode; // al
  __int64 v16; // r9
  D3DKMT_ESCAPETYPE Type; // edx
  UINT PrivateDriverDataSize; // eax
  UINT v19; // ecx
  size_t v20; // rbx
  char v21; // r14
  size_t v22; // r8
  void *pPrivateDriverData; // rdx
  char *v24; // rax
  D3DKMT_ESCAPETYPE v25; // ecx
  DXGADAPTER *v26; // rbx
  D3DKMT_HANDLE hAdapter; // ecx
  D3DKMT_HANDLE v28; // ebx
  D3DKMT_HANDLE v29; // r14d
  __int64 v30; // r9
  unsigned int v31; // edx
  DXGADAPTER **v32; // rbx
  D3DKMT_HANDLE hDevice; // ecx
  __int64 v34; // rax
  __int64 v35; // r10
  unsigned int v36; // r8d
  D3DKMT_HANDLE hContext; // ecx
  DXGCONTEXT *v38; // r15
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  char *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _DWORD *v45; // r10
  enum _D3DKMT_ESCAPETYPE v46; // r15d
  UINT Value; // r14d
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int8 v51; // al
  DXGADAPTER *v52; // rdx
  UINT v53; // ecx
  DXGPROCESS *v54; // r15
  struct DXGGLOBAL *v55; // rax
  struct _D3DKMT_DISPLAYMODELIST *v56; // r14
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rsi
  DXGGLOBAL *v60; // rax
  __int64 v61; // rax
  char v62; // r9
  char v63; // bl
  size_t v64; // r8
  void *v65; // rcx
  char *v66; // rdx
  DXGCONTEXT *v67; // rsi
  DXGGLOBAL **v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v72; // rax
  __int64 v73; // r10
  unsigned int v74; // edx
  DXGCONTEXT **v75; // rax
  unsigned int v76; // ebx
  __int64 v77; // r8
  char v78; // r14
  struct DXGTHREAD *Current; // rax
  __int64 v80; // rcx
  bool v81; // sf
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // eax
  size_t v88; // r9
  void *v89; // rcx
  char *v90; // r8
  unsigned __int64 Width; // rdx
  __int64 v92; // r8
  __int64 v93; // rax
  char *v94; // r8
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // r8
  struct DXGPROCESS *v100; // rax
  unsigned int DiagnosticsBuffer; // eax
  char *v102; // r8
  DXGGLOBAL *Global; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r15
  __int64 v107; // r8
  unsigned int v108; // ecx
  DXGADAPTER **v109; // rbx
  unsigned __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned int v112; // esi
  size_t v113; // r8
  void *v114; // rcx
  char *v115; // r9
  __int64 v116; // rcx
  __int64 v117; // r8
  struct DXGADAPTER *v118; // r14
  struct _D3DKMT_DISPLAYMODELIST *v119; // r10
  void *v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  void *v123; // r9
  unsigned int v124; // r12d
  unsigned int v125; // r14d
  unsigned int v126; // ebx
  unsigned int HostProcess; // eax
  int v128; // eax
  unsigned __int64 v129; // rdx
  DXGADAPTER *v130; // rcx
  __int64 v131; // rcx
  __int64 v132; // r8
  D3DDDI_RATIONAL *p_RefreshRate; // rbx
  _QWORD *v134; // r8
  DXGCONTEXT *v135; // rax
  UINT ModeCount; // eax
  __int64 v137; // rcx
  __int64 v138; // rcx
  const wchar_t *v139; // r9
  DXGADAPTER *v140; // rcx
  ADAPTER_DISPLAY *v141; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGCONTEXT *v143; // rax
  char v144; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v146; // rdx
  unsigned int v147; // r8d
  signed int Height; // eax
  UINT v149; // r10d
  signed int v150; // eax
  D3DKMT_DISPLAYMODE *pModeList; // r9
  __int64 v152; // r8
  const wchar_t *v153; // r9
  __int64 v154; // rax
  unsigned int v155; // eax
  char v156; // [rsp+50h] [rbp-558h]
  char v157; // [rsp+51h] [rbp-557h]
  int v158; // [rsp+58h] [rbp-550h] BYREF
  __int64 v159; // [rsp+60h] [rbp-548h]
  char v160; // [rsp+68h] [rbp-540h]
  DXGCONTEXT *v161; // [rsp+70h] [rbp-538h]
  struct _D3DKMT_DISPLAYMODELIST *v162; // [rsp+78h] [rbp-530h]
  unsigned __int64 v163; // [rsp+80h] [rbp-528h] BYREF
  char v164; // [rsp+88h] [rbp-520h]
  struct DXGADAPTER *v165; // [rsp+90h] [rbp-518h]
  _D3DKMT_ESCAPE v166; // [rsp+98h] [rbp-510h] BYREF
  void *v167[2]; // [rsp+B8h] [rbp-4F0h] BYREF
  unsigned __int64 v168; // [rsp+C8h] [rbp-4E0h] BYREF
  unsigned __int8 v169[8]; // [rsp+D0h] [rbp-4D8h] BYREF
  char v170[8]; // [rsp+D8h] [rbp-4D0h] BYREF
  DXGADAPTER *v171; // [rsp+E0h] [rbp-4C8h]
  char v172; // [rsp+E8h] [rbp-4C0h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v173; // [rsp+F0h] [rbp-4B8h]
  DXGADAPTER *v174; // [rsp+F8h] [rbp-4B0h] BYREF
  DXGPROCESS *v175; // [rsp+100h] [rbp-4A8h]
  DXGCONTEXT *v176; // [rsp+108h] [rbp-4A0h]
  DXGADAPTER *v177; // [rsp+110h] [rbp-498h]
  union _LARGE_INTEGER Interval; // [rsp+118h] [rbp-490h] BYREF
  __int64 v179; // [rsp+120h] [rbp-488h]
  _DXGKARG_ESCAPE v180; // [rsp+128h] [rbp-480h] BYREF
  int v181; // [rsp+158h] [rbp-450h] BYREF
  _BYTE v182[24]; // [rsp+160h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v183; // [rsp+178h] [rbp-430h] BYREF
  struct _DXGKARG_ESCAPE v184; // [rsp+1A8h] [rbp-400h] BYREF
  _BYTE v185[24]; // [rsp+1D8h] [rbp-3D0h] BYREF
  _BYTE v186[64]; // [rsp+1F0h] [rbp-3B8h] BYREF
  _BYTE v187[8]; // [rsp+230h] [rbp-378h] BYREF
  _BYTE v188[16]; // [rsp+238h] [rbp-370h] BYREF
  unsigned int *v189; // [rsp+248h] [rbp-360h]
  _BYTE v190[16]; // [rsp+278h] [rbp-330h] BYREF
  DXGADAPTER *v191; // [rsp+288h] [rbp-320h]
  char v192; // [rsp+290h] [rbp-318h]
  __int64 v193; // [rsp+298h] [rbp-310h]
  _DWORD v194[3]; // [rsp+2C0h] [rbp-2E8h] BYREF
  __int128 v195; // [rsp+2CCh] [rbp-2DCh]
  __int128 v196; // [rsp+2DCh] [rbp-2CCh]
  int v197; // [rsp+2ECh] [rbp-2BCh]
  _DWORD v198[2]; // [rsp+2F0h] [rbp-2B8h] BYREF
  __int128 v199; // [rsp+2F8h] [rbp-2B0h]
  __int128 v200; // [rsp+308h] [rbp-2A0h]
  __int64 v201; // [rsp+318h] [rbp-290h]
  _QWORD v202[10]; // [rsp+320h] [rbp-288h] BYREF
  _BYTE v203[512]; // [rsp+370h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v158 = -1;
  v4 = 0LL;
  v159 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v160 = 1;
    v158 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v160 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v158, 2016);
  v5 = 0LL;
  v179 = 0LL;
  v161 = 0LL;
  v176 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = (DXGPROCESS *)*((_QWORD *)Current + 3), (v175 = v13) == 0LL) )
  {
    v13 = v12;
    v175 = v12;
  }
  v14 = (struct _D3DKMT_DISPLAYMODELIST *)v203;
  v162 = (struct _D3DKMT_DISPLAYMODELIST *)v203;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  if ( CurrentThreadPreviousMode != 1 )
    CurrentThreadPreviousMode = 0;
  v157 = CurrentThreadPreviousMode;
  if ( !v13 )
  {
    LODWORD(v41) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v41;
    goto LABEL_669;
  }
  if ( CurrentThreadPreviousMode )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v166 = *v3;
  }
  else
  {
    v166 = *v3;
  }
  Type = v166.Type;
  if ( v166.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v13 + 11) + 424LL))() )
    {
LABEL_193:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
      if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225506LL;
      goto LABEL_344;
    }
    Type = v166.Type;
  }
  else if ( v166.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v76 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)v13 + 11) + 416LL))(&v166);
LABEL_155:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 )
      return v76;
    v80 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v81 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_188:
    if ( v81 )
      McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v77, v158);
    return v76;
  }
  if ( Type >= D3DKMT_ESCAPE_VIDMM
    && (Type == D3DKMT_ESCAPE_VIDMM
     || Type == D3DKMT_ESCAPE_VIDSCH
     || Type > D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD && Type <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION) )
  {
    if ( !InternalEscapeEnabled() )
    {
      WdLogSingleEntry1(3LL, v166.Type);
      goto LABEL_193;
    }
    Type = v166.Type;
  }
  PrivateDriverDataSize = v166.PrivateDriverDataSize;
  if ( Type == D3DKMT_ESCAPE_VIDMM && v166.PrivateDriverDataSize < 0x440 )
  {
LABEL_211:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_678;
    goto LABEL_677;
  }
  *(_OWORD *)v167 = 0LL;
  if ( Type == D3DKMT_ESCAPE_VIDSCH && v166.PrivateDriverDataSize <= 0x30 )
  {
    v19 = 48;
    goto LABEL_19;
  }
  v19 = v166.PrivateDriverDataSize;
  if ( v166.PrivateDriverDataSize <= 0x200 )
  {
LABEL_19:
    v20 = v19;
    goto LABEL_20;
  }
  v20 = v166.PrivateDriverDataSize;
  v14 = (struct _D3DKMT_DISPLAYMODELIST *)operator new[](v166.PrivateDriverDataSize, 0x4B677844u, 258LL, v16);
  v162 = v14;
  v167[0] = v14;
  PrivateDriverDataSize = v166.PrivateDriverDataSize;
  Type = v166.Type;
LABEL_20:
  if ( !v14 )
  {
    WdLogSingleEntry2(6LL, v20, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating private driver data (size 0x%I64x), returning 0x%I64x",
      v20,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v84, v158);
    return 3221225495LL;
  }
  if ( Type == D3DKMT_ESCAPE_VIDSCH )
  {
    memset(v14, 0, v20);
    PrivateDriverDataSize = v166.PrivateDriverDataSize;
  }
  v21 = v157;
  if ( v157 )
  {
    v22 = PrivateDriverDataSize;
    pPrivateDriverData = v166.pPrivateDriverData;
    v24 = (char *)v166.pPrivateDriverData + PrivateDriverDataSize;
    if ( v24 < v166.pPrivateDriverData || (unsigned __int64)v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, pPrivateDriverData, v22);
  }
  else
  {
    memmove(v14, v166.pPrivateDriverData, PrivateDriverDataSize);
  }
  v25 = v166.Type;
  if ( (*(_BYTE *)&v166.Flags.0 & 0x40) != 0 && (v166.Type || !v166.hAdapter || (*(_BYTE *)&v166.Flags.0 & 1) != 0) )
  {
    WdLogSingleEntry1(3LL, 1373LL);
    goto LABEL_210;
  }
  if ( v166.Type >= D3DKMT_ESCAPE_VIDMM && v166.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v166.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      v76 = DxgkpProcessBddFallbackRequest();
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
      goto LABEL_155;
    }
    switch ( v166.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        VidPnSourceId = v14->VidPnSourceId;
        if ( v14->VidPnSourceId == 5 )
        {
          v76 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v14);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          goto LABEL_155;
        }
        if ( VidPnSourceId == 6 )
        {
          v76 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v14);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          goto LABEL_155;
        }
        if ( VidPnSourceId == 13 )
        {
          v76 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v14);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          goto LABEL_155;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v166.PrivateDriverDataSize < 0xC
          || v166.PrivateDriverDataSize < v14->ModeCount
          || v14->VidPnSourceId != 1484026436 )
        {
          WdLogSingleEntry1(3LL, v166.Type);
          goto LABEL_210;
        }
        if ( v14->pModeList[0].Width - 41 <= 2 )
          goto LABEL_237;
        if ( !InternalEscapeEnabled() )
        {
          WdLogSingleEntry1(3LL, v166.Type);
LABEL_233:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
          if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225506LL;
LABEL_344:
          McTemplateK0q_EtwWriteTransfer(v82, &EventProfilerExit, v83, v158);
          return 3221225506LL;
        }
        v25 = v166.Type;
LABEL_237:
        Width = (int)v14->pModeList[0].Width;
        if ( !(_DWORD)Width && !v166.hAdapter
          || (unsigned int)Width <= 0x2B && (v92 = 0x81093482000LL, _bittest64(&v92, Width)) )
        {
          v76 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v14, 0LL);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          goto LABEL_155;
        }
        if ( (unsigned int)Width <= 0x2F )
        {
          v93 = 0xA60800000000LL;
          if ( _bittest64(&v93, Width) )
          {
            v76 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v14, 0LL);
            if ( (v76 & 0x80000000) == 0 )
            {
              if ( v157 )
              {
                v88 = v166.PrivateDriverDataSize;
                v89 = v166.pPrivateDriverData;
                v94 = (char *)v166.pPrivateDriverData + v166.PrivateDriverDataSize;
                if ( (unsigned __int64)v94 > MmUserProbeAddress || v94 <= v166.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_287:
                memmove(v89, v14, v88);
              }
              else
              {
LABEL_224:
                memmove(v166.pPrivateDriverData, v14, v166.PrivateDriverDataSize);
              }
            }
LABEL_225:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
            if ( !v160 )
              return v76;
            v81 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
            goto LABEL_188;
          }
        }
        break;
      case D3DKMT_ESCAPE_DIAGNOSTICS:
      case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
        LOBYTE(v4) = v166.Type == D3DKMT_ESCAPE_DIAGNOSTICS;
        DiagnosticsBuffer = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)v14, v166.PrivateDriverDataSize, v4);
        v76 = DiagnosticsBuffer;
        if ( (int)(DiagnosticsBuffer + 0x80000000) >= 0 && DiagnosticsBuffer != -2147483643 )
          goto LABEL_225;
        if ( !v157 )
          goto LABEL_224;
        v88 = v166.PrivateDriverDataSize;
        v89 = v166.pPrivateDriverData;
        v102 = (char *)v166.pPrivateDriverData + v166.PrivateDriverDataSize;
        if ( (unsigned __int64)v102 > MmUserProbeAddress || v102 <= v166.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_287;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v166.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v87 = DxgkHandleIndirectEscape(v166.PrivateDriverDataSize, v14);
        else
          v87 = DxgkHandleMiracastEscape(v166.PrivateDriverDataSize, v14);
        v76 = v87;
        if ( (int)(v87 + 0x80000000) >= 0 && v87 != -2147483643 )
          goto LABEL_225;
        if ( !v157 )
          goto LABEL_224;
        v88 = v166.PrivateDriverDataSize;
        v89 = v166.pPrivateDriverData;
        v90 = (char *)v166.pPrivateDriverData + v166.PrivateDriverDataSize;
        if ( (unsigned __int64)v90 > MmUserProbeAddress || v90 <= v166.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_287;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_233;
        if ( v166.PrivateDriverDataSize != 1 )
          goto LABEL_210;
        byte_1C013049B = v14->VidPnSourceId;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_275:
          McTemplateK0q_EtwWriteTransfer(v96, &EventProfilerExit, v97, v158);
        return 0LL;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v166.PrivateDriverDataSize != 24 )
          goto LABEL_210;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v158);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_233;
        if ( v166.PrivateDriverDataSize != 200 )
          goto LABEL_210;
        v100 = DXGPROCESS::GetCurrent();
        if ( !v100 )
        {
          WdLogSingleEntry1(2LL, 1577LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 1577LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_210;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v185, v100);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v185, 1u);
        memset(v202, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v202[1]);
        v202[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v202[3]) = 46;
        LOBYTE(v202[6]) = -1;
        v76 = DxgkEnableDisableTargetAsHMD(
                (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v14,
                v14->pModeList[4].Format,
                v14->pModeList[4].IntegerRefreshRate,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v202);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v185);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        goto LABEL_155;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v166.PrivateDriverDataSize != 16 )
          goto LABEL_210;
        v176 = 0LL;
        DxgkLogCodePointPacket(
          v14->VidPnSourceId,
          v14->ModeCount,
          v14->pModeList[0].Width,
          v14->pModeList[0].Height,
          0LL);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          goto LABEL_275;
        return 0LL;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v166.PrivateDriverDataSize < 0x30 || v166.PrivateDriverDataSize < v14->ModeCount )
          goto LABEL_210;
        v76 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        goto LABEL_155;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        v76 = DxgkPrepareCcdDatabaseForAccess();
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        goto LABEL_155;
      default:
        break;
    }
  }
  v26 = 0LL;
  v177 = 0LL;
  v174 = 0LL;
  if ( v25 == D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v168);
    }
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v104, &EventProfilerExit, v105, v158);
    return 3221226021LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v182, v13);
  hAdapter = v166.hAdapter;
  if ( v166.hAdapter )
  {
    v28 = (v166.hAdapter >> 6) & 0xFFFFFF;
    v29 = v166.hAdapter >> 30;
    if ( (*((_DWORD *)v13 + 106) & 0x100) == 0 )
    {
      if ( v28 < *((_DWORD *)v13 + 74) )
      {
        v30 = *((_QWORD *)v13 + 35);
        v31 = *(_DWORD *)(v30 + 16LL * v28 + 8);
        if ( v29 == ((v31 >> 5) & 3) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
        {
          v32 = (DXGADAPTER **)(v30 + 16LL * v28);
          if ( (v31 & 0x1F) == 1 )
          {
            v26 = *v32;
LABEL_41:
            v21 = v157;
            v177 = v26;
            goto LABEL_42;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          hAdapter = v166.hAdapter;
        }
      }
      v26 = 0LL;
      goto LABEL_41;
    }
    v106 = *((_QWORD *)v13 + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v106 + 248));
    if ( v28 < *(_DWORD *)(v106 + 296) )
    {
      v107 = *(_QWORD *)(v106 + 280);
      v108 = *(_DWORD *)(v107 + 16LL * v28 + 8);
      if ( v29 == ((v108 >> 5) & 3) && (v108 & 0x2000) == 0 && (v108 & 0x1F) != 0 )
      {
        v109 = (DXGADAPTER **)(v107 + 16LL * v28);
        if ( (v108 & 0x1F) == 1 )
        {
          v26 = *v109;
          goto LABEL_303;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = 0LL;
LABEL_303:
    ExReleasePushLockSharedEx(v106 + 248, 0LL);
    KeLeaveCriticalRegion();
    hAdapter = v166.hAdapter;
    v13 = v175;
    goto LABEL_41;
  }
LABEL_42:
  if ( !v26 )
  {
    LODWORD(v41) = -1073741811;
    WdLogSingleEntry2(3LL, hAdapter, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v41;
    goto LABEL_669;
  }
  hDevice = v166.hDevice;
  if ( v166.hDevice )
  {
    v34 = (v166.hDevice >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *((_DWORD *)v13 + 74) )
    {
      v35 = *((_QWORD *)v13 + 35);
      v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
      if ( v166.hDevice >> 30 == ((v36 >> 5) & 3) && (v36 & 0x2000) == 0 && (v36 & 0x1F) != 0 )
      {
        if ( (v36 & 0x1F) == 3 )
        {
          v5 = *(_QWORD *)(v35 + 16LL * (unsigned int)v34);
          goto LABEL_51;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        hDevice = v166.hDevice;
      }
    }
    v5 = 0LL;
LABEL_51:
    v179 = v5;
    if ( !v5 || v26 != *(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v26 != *(DXGADAPTER **)(v5 + 1848) )
    {
      WdLogSingleEntry2(3LL, v26, hDevice);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
      goto LABEL_210;
    }
  }
  hContext = v166.hContext;
  if ( v166.hContext )
  {
    v72 = (v166.hContext >> 6) & 0xFFFFFF;
    if ( (unsigned int)v72 < *((_DWORD *)v13 + 74) )
    {
      v73 = *((_QWORD *)v13 + 35);
      v74 = *(_DWORD *)(v73 + 16 * v72 + 8);
      if ( v166.hContext >> 30 == ((v74 >> 5) & 3) && (v74 & 0x2000) == 0 && (v74 & 0x1F) != 0 )
      {
        v75 = (DXGCONTEXT **)(v73 + 16LL * (unsigned int)v72);
        if ( (v74 & 0x1F) == 7 )
        {
          v38 = *v75;
          v161 = *v75;
LABEL_150:
          v176 = v38;
          if ( !v38 || !v5 || v5 != *((_QWORD *)v38 + 2) )
          {
            WdLogSingleEntry3(3LL, v26, v5, hContext);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
            goto LABEL_210;
          }
          goto LABEL_55;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        hContext = v166.hContext;
      }
    }
    v161 = 0LL;
    v38 = 0LL;
    goto LABEL_150;
  }
  v38 = v161;
LABEL_55:
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
    v26 = *(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL);
    v177 = v26;
  }
  if ( v38 )
    _InterlockedIncrement64((volatile signed __int64 *)v38 + 4);
  _InterlockedIncrement64((volatile signed __int64 *)v26 + 3);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
  if ( *((_DWORD *)v26 + 492) >= 0x5023u )
  {
    if ( (*(_BYTE *)&v166.Flags.0 & 0x10) != 0 || (v166.Flags.Value & 0xFFFFFF00) != 0 )
    {
      WdLogSingleEntry1(3LL, v26);
      goto LABEL_210;
    }
    if ( (*(_BYTE *)&v166.Flags.0 & 0x20) != 0 )
    {
      WdLogSingleEntry2(3LL, v26, 1767LL);
LABEL_210:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
      goto LABEL_211;
    }
  }
  v165 = v26;
  v163 = 0LL;
  LODWORD(v41) = DxgkpGetPairingAdapters(v26, 0, &v174, &v163, 0LL, 0LL, 0);
  if ( (int)v41 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v174 + 2), v174);
  if ( v166.Type != D3DKMT_ESCAPE_VIDMM )
  {
    if ( v166.Type == D3DKMT_ESCAPE_DRT_TEST )
    {
      v110 = (int)v162->pModeList[0].Width;
      if ( (unsigned int)v110 <= 0x2E )
      {
        v111 = 0x512744204000LL;
        if ( _bittest64(&v111, v110) )
        {
          if ( (_DWORD)v110 == 33 || (_DWORD)v110 == 32 )
          {
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_HoldAdapterLockEscape__private_reporting,
              0x120A358u,
              v39,
              v40,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
              0);
            v112 = -1073741823;
          }
          else
          {
            v112 = DxgkDrtTestEscape(v26, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v162, 0LL);
            if ( (v112 & 0x80000000) == 0 )
            {
              if ( v21 )
              {
                v113 = v166.PrivateDriverDataSize;
                v114 = v166.pPrivateDriverData;
                v115 = (char *)v166.pPrivateDriverData + v166.PrivateDriverDataSize;
                if ( (unsigned __int64)v115 > MmUserProbeAddress || v115 <= v166.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v114, v162, v113);
              }
              else
              {
                memmove(v166.pPrivateDriverData, v162, v166.PrivateDriverDataSize);
              }
            }
          }
          if ( v38 )
            DXGCONTEXT::ReleaseReference(v38);
          if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
          DXGADAPTER::ReleaseReference(v26);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
          if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v116, &EventProfilerExit, v117, v158);
          return v112;
        }
      }
    }
LABEL_65:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v187, v26, 0LL);
    COREACCESS::COREACCESS((COREACCESS *)v186, 0LL);
    LODWORD(v173) = 0;
    v171 = v26;
    v156 = 0;
    v172 = 0;
    v46 = v166.Type;
    if ( v166.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
    {
      COREACCESS::AcquireShared((COREACCESS *)v186, v42);
      Value = v166.Flags.Value;
      v46 = v166.Type;
    }
    else
    {
      Value = v166.Flags.Value;
      if ( (*(_BYTE *)&v166.Flags.0 & 1) != 0 )
      {
        v78 = 0;
        if ( v166.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v166.Type == D3DKMT_ESCAPE_VIDSCH && *v45 == 3 )
          v78 = 1;
        if ( *((char **)v26 + 350) != v42 )
          v78 = 1;
        LODWORD(v41) = COREADAPTERACCESS::AcquireExclusive((__int64)v187);
        if ( (int)v41 < 0 )
        {
          v63 = 0;
          goto LABEL_160;
        }
        if ( !v78 )
        {
          v43 = *((_QWORD *)v26 + 350);
          if ( v43 )
            ADAPTER_RENDER::FlushScheduler(v43, 2LL, 0xFFFFFFFFLL);
        }
        v50 = 1LL;
        LODWORD(v173) = 1;
        Value = v166.Flags.Value;
        v46 = v166.Type;
LABEL_82:
        if ( v166.hDevice )
        {
          if ( *(_DWORD *)(v5 + 576) != 1 )
          {
            LODWORD(v41) = -1073741130;
            v63 = v172;
            goto LABEL_160;
          }
          Value = v166.Flags.Value;
          v46 = v166.Type;
          v156 = v172;
        }
        v51 = 1;
        v169[0] = 1;
        if ( v46 == D3DKMT_ESCAPE_DRIVERPRIVATE && (Value & 0x40) != 0 )
        {
          if ( !v174 )
          {
LABEL_390:
            LODWORD(v41) = -1073741811;
            v63 = v156;
            goto LABEL_160;
          }
          v56 = v162;
          LODWORD(v41) = DxgkpDriverKnownEscape(v175, v174, v162, v166.PrivateDriverDataSize, v169);
          if ( (int)v41 < 0 )
            goto LABEL_111;
          Value = v166.Flags.Value;
          v46 = v166.Type;
          v51 = v169[0];
          v50 = (unsigned int)v173;
        }
        v52 = v174;
        if ( v174 && *((_BYTE *)v174 + 209) )
        {
          if ( (v26 = v174, v177 = v174, v46 == D3DKMT_ESCAPE_DRIVERPRIVATE) && v51
            || (unsigned int)v46 <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION
            && (v43 = 805306378LL, _bittest((const int *)&v43, v46)) )
          {
            v173 = (DXGADAPTER *)((char *)v174 + 4344);
            if ( v161 )
              v124 = *((_DWORD *)v161 + 7);
            else
              v124 = 0;
            if ( v5 )
              v125 = *(_DWORD *)(v5 + 440);
            else
              v125 = 0;
            v126 = *((_DWORD *)v174 + 1108);
            HostProcess = DXGPROCESS::GetHostProcess(v175);
            v128 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                     v173,
                     HostProcess,
                     v126,
                     v125,
                     v124,
                     v46,
                     v166.Flags,
                     v166.PrivateDriverDataSize,
                     (unsigned __int8 *)v162);
            v41 = v128;
            if ( v128 < 0 )
            {
              WdLogSingleEntry1(2LL, v128);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Paravirtualized escape failed: 0x%I64x",
                v41,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_664;
          }
        }
        if ( v46 == D3DKMT_ESCAPE_DRIVERPRIVATE )
        {
          memset(&v180, 0, sizeof(v180));
          if ( v51 )
          {
            if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))v26 + 73) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
            {
              WdLogSingleEntry2(3LL, v26, -1073741637LL);
              LODWORD(v41) = -1073741637;
              v63 = v156;
              goto LABEL_160;
            }
            v53 = v166.PrivateDriverDataSize;
            if ( !v166.PrivateDriverDataSize || !v166.pPrivateDriverData )
            {
              LODWORD(v41) = -1073741811;
              WdLogSingleEntry3(3LL, v166.PrivateDriverDataSize, v166.pPrivateDriverData, -1073741811LL);
              v63 = v156;
              goto LABEL_160;
            }
            if ( v5 )
              v180.hDevice = *(HANDLE *)(v5 + 584);
            if ( v161 )
              v180.hContext = (HANDLE)*((_QWORD *)v161 + 23);
            else
              v180.hContext = 0LL;
            v180.Flags.Value = Value;
            if ( (*((_DWORD *)v26 + 109) & 8) == 0 && *((_DWORD *)v26 + 103) == 4098 )
            {
              if ( !(unsigned int)IsAMDDriverEscapeAllowed(v162, v166.PrivateDriverDataSize) )
              {
                LODWORD(v41) = -1073741637;
                v63 = v156;
                goto LABEL_160;
              }
              v53 = v166.PrivateDriverDataSize;
              LOBYTE(Value) = v166.Flags.0;
            }
            if ( (Value & 0x80u) != 0 )
            {
              WdLogSingleEntry1(2LL, -1073741637LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Driver Common Escape is block for (0x%I64x)",
                -1073741637LL,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v41) = -1073741637;
LABEL_664:
              v56 = v162;
              goto LABEL_111;
            }
            v54 = v175;
            if ( (*((_DWORD *)v175 + 106) & 0x100) == 0 )
            {
              v55 = DXGGLOBAL_GetGlobal();
              if ( !*((_BYTE *)v55 + 1723)
                || !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                      (struct DXGGLOBAL *)((char *)v55 + 1716),
                      v26) )
              {
                v53 = v166.PrivateDriverDataSize;
LABEL_104:
                v180.Flags.Value = v4 | v180.Flags.Value & 0xFFFFFFDF;
                v180.PrivateDriverDataSize = v53;
                v56 = v162;
                v180.pPrivateDriverData = v162;
                v57 = *((_QWORD *)v26 + 350);
                if ( v57 )
                {
                  v58 = v57 + 72;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v58, 0LL);
                  v59 = *((unsigned int *)v26 + 60);
                  v60 = DXGGLOBAL_GetGlobal();
                  if ( (unsigned int)v59 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v60) )
                  {
                    _mm_lfence();
                    v61 = *(_QWORD *)(*((_QWORD *)v54 + 6) + 8 * v59);
                    if ( v61 )
                      v180.hKmdProcessHandle = *(HANDLE *)(v61 + 16);
                    v156 = v172;
                  }
                  ExReleasePushLockSharedEx(v58, 0LL);
                  KeLeaveCriticalRegion();
                  v56 = v162;
                }
                LODWORD(v41) = DXGADAPTER::DdiEscape(v26, &v180);
LABEL_111:
                v62 = v157;
LABEL_112:
                v63 = v156;
LABEL_113:
                if ( (int)v41 < 0 )
                  goto LABEL_160;
                goto LABEL_114;
              }
              v53 = v166.PrivateDriverDataSize;
            }
            LODWORD(v4) = 32;
            goto LABEL_104;
          }
          v56 = v162;
LABEL_638:
          v63 = v156;
          LODWORD(v41) = 0;
          v62 = v157;
LABEL_114:
          if ( v62 )
          {
            v64 = v166.PrivateDriverDataSize;
            v65 = v166.pPrivateDriverData;
            v66 = (char *)v166.pPrivateDriverData + v166.PrivateDriverDataSize;
            if ( (unsigned __int64)v66 > MmUserProbeAddress || v66 <= v166.pPrivateDriverData )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v65, v56, v64);
            v67 = v161;
LABEL_119:
            if ( v63 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
            COREACCESS::~COREACCESS((COREACCESS *)v186);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
            if ( v67 )
              DXGCONTEXT::ReleaseReference(v67);
            if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
            v68 = (DXGGLOBAL **)v165;
            if ( v165 && _InterlockedExchangeAdd64((volatile signed __int64 *)v165 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v68[2], (struct DXGADAPTER *)v68);
            if ( v167[0] )
              operator delete[](v167[0]);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
            if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
              return (unsigned int)v41;
LABEL_669:
            McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v158);
            return (unsigned int)v41;
          }
          memmove(v166.pPrivateDriverData, v56, v166.PrivateDriverDataSize);
LABEL_160:
          v67 = v161;
          goto LABEL_119;
        }
        switch ( v46 )
        {
          case D3DKMT_ESCAPE_VIDMM:
            if ( v174 )
            {
              if ( v5 )
                v4 = *(_QWORD *)(v5 + 760);
              v56 = v162;
              if ( v162->VidPnSourceId != 16 )
              {
                LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _D3DKMT_DISPLAYMODELIST *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v174 + 350) + 648LL) + 8LL) + 40LL))(
                                 *(_QWORD *)(*((_QWORD *)v174 + 350) + 656LL),
                                 v4,
                                 v162,
                                 v50);
                goto LABEL_111;
              }
              p_RefreshRate = &v162->pModeList[0].RefreshRate;
              LODWORD(v41) = DxgkpEscapeVidMmDelayExecution(
                               (struct DXGDEVICE *)v5,
                               v162->pModeList[0].Height,
                               v162->pModeList[0].Width,
                               v162->pModeList[0].Format,
                               (unsigned __int64 *)&v162->pModeList[0].RefreshRate);
              v62 = v157;
              if ( (int)v41 < 0 )
                goto LABEL_112;
              v175 = (DXGPROCESS *)v166.pPrivateDriverData;
              if ( !v157 )
              {
                *((D3DDDI_RATIONAL *)v166.pPrivateDriverData + 3) = *p_RefreshRate;
                goto LABEL_112;
              }
              v134 = (char *)v166.pPrivateDriverData + 24;
              if ( (char *)v166.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                v134 = (_QWORD *)MmUserProbeAddress;
              *v134 = *p_RefreshRate;
              v63 = v156;
              goto LABEL_113;
            }
            WdLogSingleEntry2(2LL, v26, -1073741637LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Try to call D3DKMT_ESCAPE_VIDMM on a display only adapter 0x%I64x (Status = 0x%I64x)!",
              (__int64)v26,
              -1073741637LL,
              0LL,
              0LL,
              0LL);
            if ( v156 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
            COREACCESS::~COREACCESS((COREACCESS *)v186);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
            if ( v161 )
              DXGCONTEXT::ReleaseReference(v161);
            if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_429;
            goto LABEL_428;
          case D3DKMT_ESCAPE_TDRDBGCTRL:
            if ( !v166.pPrivateDriverData )
            {
              LODWORD(v41) = TdrDbgCtrl(0LL, v174, v44, v50);
              goto LABEL_664;
            }
            if ( v166.PrivateDriverDataSize < 4 )
              goto LABEL_390;
            v56 = v162;
            switch ( v162->VidPnSourceId )
            {
              case 0u:
                LODWORD(v41) = TdrDbgCtrl(0LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 1u:
                LODWORD(v41) = TdrDbgCtrl(2LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 2u:
                LODWORD(v41) = TdrDbgCtrl(1LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 3u:
                LODWORD(v41) = TdrDbgCtrl(3LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 4u:
              case 5u:
                if ( !v174 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v43, 0LL) + 24) = 0LL;
                  LODWORD(v41) = -1073741637;
                  v63 = v156;
                  goto LABEL_160;
                }
                if ( *((_BYTE *)v174 + 209) )
                {
                  LODWORD(v41) = -1073741637;
                  v63 = v156;
                  goto LABEL_160;
                }
                LODWORD(v41) = TdrDbgCtrl(4LL, v174, v166.PrivateDriverDataSize, v50);
                if ( (int)v41 >= 0 )
                {
                  v137 = *(_QWORD *)(*((_QWORD *)v174 + 350) + 632LL);
                  v199 = 0LL;
                  v200 = 0LL;
                  v201 = 0LL;
                  v198[0] = 2;
                  v198[1] = v56->VidPnSourceId;
                  LODWORD(v41) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v174 + 350) + 624LL)
                                                                                          + 8LL)
                                                                              + 64LL))(
                                   v137,
                                   v198);
                }
                goto LABEL_111;
              case 6u:
                LODWORD(v41) = TdrDbgCtrl(5LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 7u:
                LODWORD(v41) = TdrDbgCtrl(6LL, v174, v166.PrivateDriverDataSize, v50);
                goto LABEL_111;
              case 8u:
                if ( v166.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v41) = -1073741811;
                  v63 = v156;
                  goto LABEL_160;
                }
                if ( !v174 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v43, 0LL) + 24) = v26;
                  LODWORD(v41) = -1073741637;
                  v63 = v156;
                  goto LABEL_160;
                }
                if ( *((_BYTE *)v174 + 209) )
                {
                  LODWORD(v41) = -1073741637;
                  v63 = v156;
                  goto LABEL_160;
                }
                LODWORD(v41) = TdrDbgCtrl(4LL, v174, v166.PrivateDriverDataSize, v50);
                if ( (int)v41 >= 0 )
                {
                  v138 = *(_QWORD *)(*((_QWORD *)v174 + 350) + 632LL);
                  v195 = 0LL;
                  v196 = 0LL;
                  v197 = 0;
                  v194[0] = 2;
                  v194[1] = v56->VidPnSourceId;
                  v194[2] = v56->ModeCount;
                  LODWORD(v41) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v174 + 350) + 624LL)
                                                                                          + 8LL)
                                                                              + 64LL))(
                                   v138,
                                   v194);
                }
                break;
              default:
                goto LABEL_390;
            }
            goto LABEL_111;
          case D3DKMT_ESCAPE_VIDSCH:
            if ( !v174 )
            {
              WdLogSingleEntry2(2LL, v26, -1073741637LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Try to call D3DKMT_ESCAPE_VIDSCH on a display only adapter 0x%I64x (Status = 0x%I64x)!",
                (__int64)v26,
                -1073741637LL,
                0LL,
                0LL,
                0LL);
              if ( v156 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              v135 = v161;
              if ( !v161 )
                goto LABEL_446;
              goto LABEL_445;
            }
            if ( *((_BYTE *)v174 + 209) )
            {
              if ( !v156 )
                goto LABEL_452;
              goto LABEL_451;
            }
            v56 = v162;
            if ( v162->VidPnSourceId == 2 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            if ( v162->VidPnSourceId != 3 )
            {
              LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v174 + 350) + 624LL) + 8LL)
                                                                                                 + 64LL))(
                               *(_QWORD *)(*((_QWORD *)v174 + 350) + 632LL),
                               v162);
              goto LABEL_111;
            }
            if ( !(_DWORD)v50 )
              goto LABEL_390;
            ModeCount = 5000000;
            if ( v162->ModeCount < 0x4C4B40 )
              ModeCount = v162->ModeCount;
            Interval.QuadPart = -(__int64)ModeCount;
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(v41) = 0;
            v63 = v156;
            v62 = v157;
            goto LABEL_114;
          case D3DKMT_ESCAPE_DEVICE:
            if ( v166.PrivateDriverDataSize < 0xC || !v5 )
              goto LABEL_390;
            v56 = v162;
            LODWORD(v41) = DXGDEVICE::Escape((DXGDEVICE *)v5, (struct _D3DKMT_DEVICE_ESCAPE *)v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_DMM:
            if ( *((_QWORD *)v26 + 349) )
            {
              if ( v166.PrivateDriverDataSize >= 0x80 )
              {
                v56 = v162;
                v129 = *(_QWORD *)&v162->pModeList[0].Width;
                if ( v129 <= 0x19000 && (v166.PrivateDriverDataSize == v129 + 127 || !v129) )
                {
                  LODWORD(v41) = DmmEscape(v26, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v162);
                  goto LABEL_111;
                }
              }
              goto LABEL_390;
            }
            WdLogSingleEntry2(2LL, v26, -1073741637LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Try to call D3DKMT_ESCAPE_DMM on a render only adapter 0x%I64x (Status = 0x%I64x)!",
              (__int64)v26,
              -1073741637LL,
              0LL,
              0LL,
              0LL);
            if ( v156 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
            COREACCESS::~COREACCESS((COREACCESS *)v186);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
            if ( v161 )
              DXGCONTEXT::ReleaseReference(v161);
            if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
            v130 = v165;
            if ( !v165 )
              goto LABEL_418;
            goto LABEL_417;
          case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
            if ( v166.PrivateDriverDataSize < 8 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            LODWORD(v41) = DxgDbgTakeSnapshot(&v162->ModeCount, v166.PrivateDriverDataSize - 4, (unsigned int *)v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_DRT_TEST:
            v56 = v162;
            LODWORD(v41) = DxgkDrtTestEscape(
                             v26,
                             (struct _D3DKMT_DRT_ESCAPE_HEAD *)v162,
                             (struct COREADAPTERACCESS *)v187);
            goto LABEL_111;
          case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
            if ( !*((_QWORD *)v26 + 349) )
            {
              WdLogSingleEntry2(2LL, v26, -1073741637LL);
              v139 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
              goto LABEL_501;
            }
            if ( v166.PrivateDriverDataSize < 0x18 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            if ( v166.PrivateDriverDataSize != v162->VidPnSourceId )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            LODWORD(v41) = OutputDuplGetDebugInfo(v26, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
            if ( !*((_QWORD *)v26 + 349) )
            {
              WdLogSingleEntry2(2LL, v26, -1073741637LL);
              v139 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS on a render only adapter 0x%I64x (Status = 0x%I64x)!";
              goto LABEL_501;
            }
            if ( v166.PrivateDriverDataSize < 8 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            if ( v166.PrivateDriverDataSize != v162->ModeCount + 8LL )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            LODWORD(v41) = OutputDuplGetDiagnosticBuffer(v26, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_BDD_PNP:
            if ( (*((_DWORD *)v26 + 109) & 0x20) == 0 || DXGADAPTER::IsBddFallbackDriver(v26) )
            {
              LODWORD(v41) = -1071775742;
              v63 = v156;
              goto LABEL_160;
            }
            *((_DWORD *)&v184.Flags + 1) = 0;
            memset(&v184.PrivateDriverDataSize + 1, 0, 20);
            v184.hDevice = 0LL;
            v184.Flags.Value = Value;
            v184.PrivateDriverDataSize = v166.PrivateDriverDataSize;
            v56 = v162;
            v184.pPrivateDriverData = v162;
            LODWORD(v41) = DXGADAPTER::DdiEscape(v140, &v184);
            goto LABEL_111;
          case D3DKMT_ESCAPE_BDD_FALLBACK:
            if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
            {
              WdLogSingleEntry1(1LL, 2584LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pBddAdapter->IsBddFallbackDriver()",
                2584LL,
                0LL,
                0LL,
                0LL,
                0LL);
              Value = v166.Flags.Value;
            }
            *((_DWORD *)&v183.Flags + 1) = 0;
            memset(&v183.PrivateDriverDataSize + 1, 0, 20);
            v183.hDevice = 0LL;
            v183.Flags.Value = Value;
            v183.PrivateDriverDataSize = v166.PrivateDriverDataSize;
            v56 = v162;
            v183.pPrivateDriverData = v162;
            LODWORD(v41) = DXGADAPTER::DdiEscape(0LL, &v183);
            goto LABEL_111;
          case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
            if ( v166.PrivateDriverDataSize != 8 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            if ( !v162->VidPnSourceId )
            {
              *((_BYTE *)DXGGLOBAL_GetGlobal() + 1376) = v56->ModeCount != 0;
              LODWORD(v41) = 0;
              v63 = v156;
              v62 = v157;
              goto LABEL_114;
            }
            if ( v162->VidPnSourceId != 15 )
            {
              WdLogSingleEntry1(1LL, (int)v162->VidPnSourceId);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"%I64d is not an escape type that needs (de)activation",
                (int)v56->VidPnSourceId,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v41) = -1073741811;
              goto LABEL_111;
            }
            v141 = (ADAPTER_DISPLAY *)*((_QWORD *)v26 + 349);
            if ( v141 )
            {
              LODWORD(v41) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v141, v162->ModeCount);
              goto LABEL_111;
            }
            WdLogSingleEntry2(2LL, v26, -1073741637LL);
            v139 = L"Try to activate D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
            goto LABEL_501;
          case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
            if ( !*((_QWORD *)v26 + 349) )
            {
              WdLogSingleEntry2(2LL, v26, -1073741637LL);
              v139 = L"Try to call D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
LABEL_501:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v139, (__int64)v26, -1073741637LL, 0LL, 0LL, 0LL);
              goto LABEL_503;
            }
            if ( v166.PrivateDriverDataSize < 8 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            if ( v166.PrivateDriverDataSize < 44 * (unsigned __int64)v162->ModeCount + 8 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            LODWORD(v41) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(*((ADAPTER_DISPLAY **)v26 + 349), v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_WHQL_INFO:
            if ( v166.PrivateDriverDataSize < 4 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            v56 = v162;
            v162->VidPnSourceId = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 27) + 64LL) + 2720LL);
            LODWORD(v41) = 0;
            v63 = v156;
            v62 = v157;
            goto LABEL_114;
          case D3DKMT_ESCAPE_BRIGHTNESS:
            if ( (Value & 1) == 0 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            if ( v166.PrivateDriverDataSize < 0x60C )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            if ( DXGPROCESS::IsRemoteConnection(v175) )
            {
              LODWORD(v41) = -1073741790;
              WdLogSingleEntry2(3LL, v26, -1073741790LL);
              goto LABEL_664;
            }
            v56 = v162;
            LODWORD(v41) = DpiBrightnessEscape(
                             *((struct _DEVICE_OBJECT **)v26 + 27),
                             (struct _D3DKMT_BRIGHTNESS_INFO *)v162);
            goto LABEL_111;
          case D3DKMT_ESCAPE_EDID_CACHE:
            if ( v166.PrivateDriverDataSize < 4 )
              goto LABEL_390;
            v56 = v162;
            if ( v166.PrivateDriverDataSize != v162->VidPnSourceId + 4LL )
              goto LABEL_390;
            if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
              LODWORD(v41) = (*(__int64 (__fastcall **)(PVOID, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache
                                                                                                + 16LL))(
                               DxgMonitor::EDIDCACHE::s_pEdidCache,
                               v56);
            else
              memset(v56, 0, v166.PrivateDriverDataSize);
            goto LABEL_111;
          case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
            if ( v166.PrivateDriverDataSize < 8 )
            {
              if ( v156 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              if ( v161 )
                DXGCONTEXT::ReleaseReference(v161);
              if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                goto LABEL_561;
              goto LABEL_560;
            }
            if ( v174 )
            {
              if ( v5 )
              {
                v144 = 0;
                if ( (qword_1C012F870 & 0x461C8ED7) != 0
                  && (qword_1C012F878 & 0xFFFFFFFFB9E37128uLL) == 0
                  && (qword_1C012F870 & 0x4000) != 0 )
                {
                  while ( 1 )
                  {
                    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v52);
                    if ( v147 >= NumDifferentPhysicalAdapters )
                      goto LABEL_583;
                    if ( *(_QWORD *)(344LL * v147
                                   + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 2800) + 16LL) + 2680LL)
                                   + 40) )
                      break;
                    v52 = v174;
                  }
                  v144 = 1;
                }
LABEL_583:
                *(_BYTE *)(v5 + 1864) = v144;
                v56 = v162;
                LOBYTE(v162->VidPnSourceId) = v144;
                v56->ModeCount = 0;
                LODWORD(v41) = 0;
                v63 = v156;
                v62 = v157;
                goto LABEL_114;
              }
              if ( v156 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              if ( v161 )
                DXGCONTEXT::ReleaseReference(v161);
              goto LABEL_561;
            }
            if ( v156 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
            COREACCESS::~COREACCESS((COREACCESS *)v186);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
            v143 = v161;
            if ( !v161 )
              goto LABEL_568;
            goto LABEL_567;
          case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
            if ( v166.PrivateDriverDataSize != 32 )
            {
              LODWORD(v41) = -1073741811;
              v63 = v156;
              goto LABEL_160;
            }
            if ( DXGADAPTER::IsDiagnosticAllowed(v26) )
            {
              v56 = v162;
              DxgkGetAdapterMiracastInfo(*((_QWORD *)v26 + 27), (__int64)v162);
              LODWORD(v41) = 0;
              v63 = v156;
              v62 = v157;
              goto LABEL_114;
            }
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            WdLogSingleEntry2(3LL, v26, CurrentProcessSessionId);
            LODWORD(v41) = -1073741790;
            v63 = v156;
            goto LABEL_160;
          case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
            if ( v166.PrivateDriverDataSize < 0x20 )
            {
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            v56 = v162;
            Height = v162->pModeList[0].Height;
            if ( Height > 1 )
              goto LABEL_593;
            if ( *v162 )
            {
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            if ( !Height )
              *(_OWORD *)&v162->pModeList[0].Format = 0LL;
            v149 = v56->pModeList[0].Width;
            if ( v149 - 1000 > 1 )
              goto LABEL_593;
            if ( !v52 )
            {
              WdLogSingleEntry1(2LL, 2874LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION for VidMm option must supply a render adapter",
                2874LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_503;
            }
            LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD, _QWORD, D3DDDIFORMAT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 350) + 648LL) + 8LL) + 1112LL))(
                             *(_QWORD *)(*((_QWORD *)v52 + 350) + 656LL),
                             v175,
                             v56->pModeList[0].Height,
                             v149,
                             &v56->pModeList[0].Format);
            goto LABEL_111;
          case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
            if ( v166.PrivateDriverDataSize < 0x20 )
            {
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            v56 = v162;
            v150 = v162->ModeCount;
            if ( v150 > 1 )
            {
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            pModeList = v162->pModeList;
            if ( !v150 )
            {
              *(_OWORD *)&pModeList->Width = 0LL;
              v56->pModeList[0].RefreshRate = 0LL;
            }
            v152 = v56->VidPnSourceId;
            if ( (unsigned int)(v152 - 1000) > 1 )
            {
LABEL_593:
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            if ( !v52 )
            {
              WdLogSingleEntry1(2LL, 2924LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION for VidMm option must supply a render adapter",
                2924LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_503;
            }
            if ( !*((_BYTE *)v52 + 209) )
            {
              LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, D3DKMT_DISPLAYMODE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 350) + 648LL) + 8LL) + 1120LL))(
                               *(_QWORD *)(*((_QWORD *)v52 + 350) + 656LL),
                               v56->ModeCount,
                               v152,
                               pModeList);
              goto LABEL_111;
            }
            goto LABEL_503;
          case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
            if ( v166.PrivateDriverDataSize != 4 )
            {
              WdLogSingleEntry1(2LL, v166.PrivateDriverDataSize);
              v153 = L"Supplied Buffer size for D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE (0x%I64x) was not the correct size";
              goto LABEL_617;
            }
            if ( *((_QWORD *)v26 + 350) )
            {
              WdLogSingleEntry1(3LL, v26);
              if ( !v156 )
                goto LABEL_587;
              goto LABEL_586;
            }
            v154 = *((_QWORD *)v26 + 349);
            v56 = v162;
            v63 = v156;
            if ( !*(_QWORD *)(v154 + 448) )
            {
              LODWORD(v41) = -1073741811;
              goto LABEL_160;
            }
            *(_DWORD *)(v154 + 456) = v162->VidPnSourceId;
            LODWORD(v41) = 0;
            v62 = v157;
            goto LABEL_114;
          case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
            if ( DXGADAPTER::IsFullWDDMAdapter(v26) )
            {
              v56 = v162;
              LODWORD(v41) = ADAPTER_DISPLAY::ReportDisplayState(
                               *((ADAPTER_DISPLAY **)v26 + 349),
                               (struct _D3DKMT_DXGK_DIAGNOSTICS *)v162,
                               v166.PrivateDriverDataSize);
              goto LABEL_111;
            }
            WdLogSingleEntry1(3LL, v26);
            if ( !v156 )
              goto LABEL_587;
            goto LABEL_586;
          case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
            if ( !v166.PrivateDriverDataSize )
            {
              WdLogSingleEntry1(2LL, 0LL);
              v153 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_IOMMU_STATUS (0x%I64x) was to small";
              goto LABEL_617;
            }
            if ( !v174 )
            {
              WdLogSingleEntry1(2LL, 2995LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"D3DKMT_ESCAPE_QUERY_IOMMU_STATUS must supply a render adapter",
                2995LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_503;
            }
            if ( *((_BYTE *)v174 + 209) )
              goto LABEL_503;
            LOBYTE(v155) = *(_DWORD *)(*((_QWORD *)v174 + 28) + 84LL) != 0;
            goto LABEL_636;
          case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS|D3DKMT_ESCAPE_TDRDBGCTRL:
            if ( !v166.PrivateDriverDataSize )
            {
              WdLogSingleEntry1(2LL, 0LL);
              v153 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS (0x%I64x) was to small";
LABEL_617:
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)v153,
                v166.PrivateDriverDataSize,
                0LL,
                0LL,
                0LL,
                0LL);
              if ( v156 )
LABEL_586:
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
LABEL_587:
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              v143 = v161;
              if ( v161 )
LABEL_567:
                DXGCONTEXT::ReleaseReference(v143);
LABEL_568:
              if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_560:
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
LABEL_561:
              if ( v165 )
                DXGADAPTER::ReleaseReference(v165);
              goto LABEL_210;
            }
            if ( v174 )
            {
              if ( !*((_BYTE *)v174 + 209) )
              {
                v155 = ((2 * (*(_DWORD *)(*((_QWORD *)v174 + 28) + 80LL) & 1)) | (unsigned int)(*(_DWORD *)(*((_QWORD *)v174 + 28) + 84LL) != 0)) >> 1;
LABEL_636:
                v56 = v162;
                LOBYTE(v162->VidPnSourceId) = v155;
                goto LABEL_638;
              }
              if ( v156 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              if ( v161 )
                DXGCONTEXT::ReleaseReference(v161);
              if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
              if ( v165 )
                DXGADAPTER::ReleaseReference(v165);
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
              if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                return 3221225659LL;
            }
            else
            {
              WdLogSingleEntry1(2LL, 3026LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS must supply a render adapter",
                3026LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_503:
              if ( v156 )
LABEL_451:
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
LABEL_452:
              COREACCESS::~COREACCESS((COREACCESS *)v186);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v187);
              v135 = v161;
              if ( v161 )
LABEL_445:
                DXGCONTEXT::ReleaseReference(v135);
LABEL_446:
              if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_428:
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
LABEL_429:
              v130 = v165;
              if ( v165 )
LABEL_417:
                DXGADAPTER::ReleaseReference(v130);
LABEL_418:
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
              if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                return 3221225659LL;
            }
            McTemplateK0q_EtwWriteTransfer(v131, &EventProfilerExit, v132, v158);
            return 3221225659LL;
          default:
            LODWORD(v41) = -1073741811;
            WdLogSingleEntry1(3LL, v46);
            goto LABEL_664;
        }
      }
      if ( v166.Type == D3DKMT_ESCAPE_DRT_TEST )
      {
        if ( v45[2] == 23 && (unsigned int)(v45[3] - 2) <= 1 )
          v164 = 1;
        else
          v164 = (char)v42;
      }
      else
      {
        v164 = 0;
      }
      if ( v166.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
      {
        v43 = (unsigned int)*DXGADAPTER::GetAdapterType(v26, &v181);
        if ( (v43 & 0x10) != 0 || (Value & 0x80u) != 0 || *((_DWORD *)v26 + 492) >= 0x5023u && (Value & 8) != 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v170);
          if ( *((_DWORD *)v26 + 50) != 1 )
          {
            LODWORD(v41) = -1073741130;
            v63 = v172;
            goto LABEL_160;
          }
          Value = v166.Flags.Value;
          v46 = v166.Type;
          v156 = v172;
          goto LABEL_365;
        }
      }
      if ( !v164 )
      {
        if ( v192 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v190, 0LL, 0LL);
        v43 = (__int64)v191;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v191 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v191 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v48, (const EVENT_DESCRIPTOR *)"g", v49, 72);
            KeWaitForSingleObject((char *)v191 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v191, 0LL);
          v43 = (__int64)v191;
        }
        v193 = 0LL;
        v192 = 1;
        if ( *(_DWORD *)(v43 + 200) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v190);
          LODWORD(v41) = -1073741130;
          v63 = v172;
          goto LABEL_160;
        }
        if ( v189 != (unsigned int *)v191 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v188, 0LL);
          v43 = v189[50];
          if ( (_DWORD)v43 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v188);
            COREACCESS::Release((COREACCESS *)v190);
            LODWORD(v41) = -1073741130;
            v63 = v172;
            goto LABEL_160;
          }
        }
        v187[1] = 1;
        LODWORD(v41) = 0;
        Value = v166.Flags.Value;
        v46 = v166.Type;
        v156 = v172;
        v50 = 0LL;
        goto LABEL_82;
      }
    }
LABEL_365:
    v50 = (unsigned int)v173;
    goto LABEL_82;
  }
  v118 = v174;
  if ( !v174 )
  {
    WdLogSingleEntry1(3LL, 1933LL);
    if ( v38 )
      DXGCONTEXT::ReleaseReference(v38);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReference(v26);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_678;
LABEL_677:
    McTemplateK0q_EtwWriteTransfer(v85, &EventProfilerExit, v86, v158);
LABEL_678:
    LODWORD(v41) = -1073741811;
    return (unsigned int)v41;
  }
  v119 = v162;
  if ( v162->VidPnSourceId == 9 )
  {
    if ( v162->pModeList[0].Format == D3DDDIFMT_UNKNOWN )
    {
      if ( !(unsigned __int8)DxgkpIsDrtEnabled((unsigned int)(v166.Type - 1)) )
      {
        WdLogSingleEntry1(3LL, 1913LL);
        if ( v38 )
          DXGCONTEXT::ReleaseReference(v38);
        if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
        DXGADAPTER::ReleaseReference(v26);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225506LL;
        goto LABEL_344;
      }
      v119 = v162;
    }
    v120 = *(void **)&v119->pModeList[0].Width;
    *(_QWORD *)&v119->pModeList[0].Width = 0LL;
    v112 = DxgEscapeSuspendResumeProcess(&v166, v119, v118, v120, 1, v119->pModeList[0].Format != D3DDDIFMT_UNKNOWN);
    if ( v38 )
      DXGCONTEXT::ReleaseReference(v38);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReference(v26);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v112;
  }
  else
  {
    if ( v162->VidPnSourceId != 10 )
      goto LABEL_65;
    v123 = *(void **)&v162->pModeList[0].Width;
    *(_QWORD *)&v162->pModeList[0].Width = 0LL;
    v112 = DxgEscapeSuspendResumeProcess(&v166, v119, v118, v123, 0, 0);
    if ( v38 )
      DXGCONTEXT::ReleaseReference(v38);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReference(v26);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v167);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v112;
  }
  McTemplateK0q_EtwWriteTransfer(v121, &EventProfilerExit, v122, v158);
  return v112;
}
