/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1C001BAD0 (DpiGetSysMmAdapterFromDevice.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0026B38 (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C0026BE4 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C0026C3C (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01A9544 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01F6F60 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C01FD7E8 (DpiGetAdapterInfo.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1C01FEB2C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C01FEBC0 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C01FECB8 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01FFDE0 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?InitializeCABCState@DXGADAPTER@@AEAAJXZ @ 0x1C01FFE80 (-InitializeCABCState@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C01FFF5C (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201B24 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201EB4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C02023F0 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0202464 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0203160 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C02181B8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0218DF4 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219344 (-CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x1C021BF94 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021C024 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C02B9E28 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ @ 0x1C03474E8 (-AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  __int64 v6; // r9
  struct _ERESOURCE *v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v11; // r9
  struct _ERESOURCE *v12; // rax
  NTSTATUS v13; // eax
  int v14; // ebx
  _BYTE *DeviceExtension; // rax
  int AdapterInfo; // eax
  struct _LUID *v17; // rdx
  __int64 RenderCore; // rdi
  int (__fastcall *v19)(_QWORD, __int128 *); // rax
  int v20; // eax
  const struct _GUID *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned __int8 v31; // r8
  __int64 v32; // r8
  int v33; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // eax
  int *v37; // rdi
  __int64 v38; // rcx
  int PnpRegistryValue; // eax
  __int64 v40; // r9
  int v41; // ecx
  char v42; // al
  __int64 v43; // r15
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // rdx
  char v48; // r13
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r9
  UINT PhysicalAdapterCapsSizeFromDdiVersion; // r15d
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // al
  int v59; // eax
  int v60; // ecx
  struct _DXGK_ADAPTER_CAPS *v61; // r13
  char v62; // r8
  char v63; // r8
  char v64; // r8
  char v65; // cl
  int v66; // edx
  char v67; // dl
  char v68; // r9
  char v69; // dl
  char v70; // cl
  unsigned int v71; // ecx
  unsigned int v72; // edx
  unsigned int v73; // edi
  DXGGLOBAL *v74; // rax
  int v75; // eax
  __int64 v76; // rax
  __int64 result; // rax
  __int64 *v78; // r15
  __int64 v79; // rax
  char *v80; // rbx
  int DisplayCore; // eax
  __int64 v82; // rax
  char v83; // cl
  char v84; // dl
  int v85; // eax
  char v86; // al
  __int64 v87; // rdx
  DXGADAPTER *v88; // rcx
  int v89; // eax
  bool IsBddFallbackDriver; // cf
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // eax
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // eax
  DXGADAPTER *v103; // rcx
  __int64 v104; // r14
  __int64 v105; // rbx
  struct DXGGLOBAL *v106; // rax
  DXGGLOBAL *v107; // rax
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // r15
  unsigned int v111; // edx
  int v112; // eax
  __int64 v113; // r9
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v117; // r12
  __int64 v118; // rbx
  const wchar_t *v119; // r9
  unsigned int v120; // eax
  __int64 v121; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v123; // rax
  DXGGLOBAL *v124; // rax
  __int64 v125; // rdi
  const wchar_t *v126; // r9
  int v127; // eax
  const wchar_t *v128; // r9
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v130; // eax
  __int64 v131; // rbx
  const wchar_t *v132; // r9
  int v133; // eax
  const wchar_t *v134; // r9
  int v135; // eax
  char v136; // al
  int v137; // ecx
  struct DXGGLOBAL *v138; // rax
  int v139; // eax
  int v140; // eax
  struct DXGGLOBAL *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // [rsp+28h] [rbp-D8h]
  char IsAdapterSessionized; // [rsp+50h] [rbp-B0h]
  unsigned int v145; // [rsp+54h] [rbp-ACh]
  unsigned int v146; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v147; // [rsp+5Ch] [rbp-A4h] BYREF
  int v148; // [rsp+60h] [rbp-A0h] BYREF
  int v149; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v150; // [rsp+68h] [rbp-98h]
  __int64 v151; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v152; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v153[4]; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGK_ADAPTER_CAPS *v154; // [rsp+B8h] [rbp-48h] BYREF
  char v155; // [rsp+C0h] [rbp-40h]
  __int64 v156; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v157; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v158; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v159[2]; // [rsp+110h] [rbp+10h] BYREF

  v154 = a3;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 6772LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      6772LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v7 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL, v6);
  *((_QWORD *)this + 21) = v7;
  if ( !v7 )
    goto LABEL_231;
  v8 = ExInitializeResourceLite(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
LABEL_234:
    WdLogSingleEntry2(3LL, this, v9);
    return (unsigned int)v9;
  }
  *((_QWORD *)this + 27) = DeviceObject;
  *((_QWORD *)this + 28) = DpiGetSysMmAdapterFromDevice();
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 29) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  LODWORD(v9) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4436));
  if ( (int)v9 < 0 )
  {
    v125 = 6822LL;
    WdLogSingleEntry1(6LL, 6822LL);
    v126 = L"ZwAllocateLocallyUniqueId failed";
LABEL_236:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v126, v125, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v9;
  }
  v12 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL, v11);
  *((_QWORD *)this + 34) = v12;
  if ( !v12 )
  {
LABEL_231:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return 3221225495LL;
  }
  v13 = ExInitializeResourceLite(v12);
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_234;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v14 = 0;
  *((_QWORD *)this + 5) = -1LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v149 = 0;
  if ( DeviceExtension[481] )
  {
    v127 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v149);
    RenderCore = v127;
    if ( v127 < 0 )
    {
      WdLogSingleEntry2(2LL, v127, 6869LL);
      v128 = L"InitializeParavirtualizedAdapter failed: 0x%I64x";
      v143 = 6869LL;
LABEL_242:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v128, RenderCore, v143, 0LL, 0LL, 0LL);
      return (unsigned int)RenderCore;
    }
    v14 = v149;
  }
  else
  {
    AdapterInfo = DpiGetAdapterInfo(
                    (__int64)DeviceObject,
                    (_DWORD *)this + 372,
                    (_QWORD *)this + 35,
                    (DXGADAPTER *)((char *)this + 1976));
    LODWORD(RenderCore) = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(3LL, this, AdapterInfo);
      return (unsigned int)RenderCore;
    }
  }
  *(_QWORD *)v159 = 0LL;
  v19 = (int (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 257);
  v158 = 0LL;
  if ( v19 && v19(*((_QWORD *)this + 248), &v158) >= 0 )
  {
    *((_QWORD *)this + 568) = *((_QWORD *)&v158 + 1);
    *((_DWORD *)this + 1138) = v159[0];
  }
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v17, v159, 0LL);
  if ( IsAdapterSessionized )
  {
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 976LL),
                                       v159[0]);
    if ( !SessionDataForSpecifiedSession
      || (v130 = DXGSESSIONDATA::AcquireSessionAdapterOrdinal(SessionDataForSpecifiedSession),
          *((_DWORD *)this + 61) = v130,
          v130 == -1) )
    {
      WdLogSingleEntry2(2LL, v159[0], -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Exceeded the maximum number of sessionized adapter in session 0x%I64x, returning 0x%I64x.",
        v159[0],
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  v20 = DXGGLOBAL::AcquireAdapterOrdinal(*((struct _RTL_BITMAP **)this + 2), IsAdapterSessionized);
  *((_DWORD *)this + 60) = v20;
  if ( v20 == -1 )
    return 3221225495LL;
  v24 = *((_DWORD *)this + 109);
  if ( (v24 & 0x200) != 0 )
  {
    *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) = 1;
    v24 = *((_DWORD *)this + 109);
  }
  if ( (v24 & 8) != 0 && (v24 & 0x10) != 0 )
  {
    WdLogSingleEntry1(1LL, 6940LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!(IsSoftGPU() && IsWarpAdapter())",
      6940LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + 56) )
  {
    v131 = 6947LL;
    WdLogSingleEntry1(2LL, 6947LL);
    v132 = L"Miniport did not provide required DDIs";
LABEL_255:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v132, v131, 0LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 73) )
    *((_QWORD *)this + 73) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 134) )
    *((_QWORD *)this + 134) = W32kStub_GreSfmOpenTokenEvent;
  v25 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v21, v22, v23, (char *)this + 1784);
  v28 = v25;
  if ( v25 < 0 )
  {
    v29 = WdLogNewEntry5_WdTrace(v27, v26);
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = v28;
LABEL_24:
    memset((char *)this + 1784, 0, 0xB8uLL);
    goto LABEL_25;
  }
  if ( *((_WORD *)this + 893) < 4u )
    goto LABEL_24;
LABEL_25:
  v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  v150 = v30;
  *((_DWORD *)this + 492) = v30;
  if ( v30 < 0x7000 )
  {
    if ( v30 < 0x6002 )
      goto LABEL_30;
  }
  else
  {
    if ( !*((_DWORD *)this + 386) )
      goto LABEL_30;
    if ( *((_DWORD *)this + 387) )
    {
      v31 = 0;
LABEL_29:
      DXGADAPTER::SetModeBehavior(this, v26, v31);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 386) && *((_DWORD *)this + 387) )
  {
    v31 = 1;
    goto LABEL_29;
  }
LABEL_30:
  if ( v30 - 20480 <= 5 )
  {
    v118 = 7022LL;
    WdLogSingleEntry1(2LL, 7022LL);
    v119 = L"Cannot load an M1 threshold driver on later builds.";
    goto LABEL_189;
  }
  *(_QWORD *)&v152.InputDataSize = 0LL;
  v152.pOutputData = (char *)this + 2088;
  *(_QWORD *)&v152.Type = 1LL;
  *(_OWORD *)&v152.OutputDataSize = 0LL;
  v152.pInputData = 0LL;
  v152.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v30);
  if ( !v152.OutputDataSize )
    return 3221225485LL;
  v33 = DXGADAPTER::DdiQueryAdapterInfo(this, &v152, v32);
  v34 = 0;
  RenderCore = v33;
  if ( v33 < 0 )
  {
    WdLogSingleEntry1(2LL, v33);
    v128 = L"Miniport failed DdiQueryAdapterInfo(DXGKQAITYPE_DRIVERCAPS) with status 0x%I64x";
    v143 = 0LL;
    goto LABEL_242;
  }
  v35 = *((_DWORD *)this + 606);
  if ( v35 > 9472 )
  {
    if ( *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
    {
      WdLogSingleEntry1(2LL, *((int *)this + 606));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Miniport returned incorrect WDDMVersion: 0x%I64x",
        *((int *)this + 606),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
LABEL_35:
    v36 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v35);
    v37 = (int *)((char *)this + 2692);
    *((_DWORD *)this + 673) = v36;
    if ( v36 >= 2600 )
      goto LABEL_36;
    goto LABEL_55;
  }
  if ( v35 >= 4864 )
    goto LABEL_35;
  if ( *((_QWORD *)this + 103) )
  {
    v37 = (int *)((char *)this + 2692);
    *((_DWORD *)this + 673) = 1300;
  }
  else if ( v35 == 4608 )
  {
    v37 = (int *)((char *)this + 2692);
    *((_DWORD *)this + 673) = 1200;
  }
  else if ( *((_QWORD *)this + 99) && (*((_DWORD *)this + 535) & 4) != 0 )
  {
    v37 = (int *)((char *)this + 2692);
    *((_DWORD *)this + 673) = 1105;
  }
  else
  {
    v37 = (int *)((char *)this + 2692);
    *((_DWORD *)this + 673) = 1000;
  }
LABEL_55:
  *((_DWORD *)this + 666) &= ~8u;
LABEL_36:
  v38 = *((_QWORD *)this + 27);
  v148 = v34;
  PnpRegistryValue = DpiReadPnpRegistryValue(v38, L"ACGSupported", (char *)&v148, 4u, 2u);
  v41 = v148;
  if ( PnpRegistryValue < 0 )
    v41 = 0;
  v148 = v41;
  if ( v41 || (v42 = 0, *v37 >= 2200) )
    v42 = 1;
  *((_BYTE *)this + 212) = v42;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 539) &= 0xFFFFD3FF;
    *((_DWORD *)this + 666) &= 0xFFFFFFEB;
    *((_BYTE *)this + 2628) = 0;
    *((_BYTE *)this + 2656) = 1;
    *((_BYTE *)this + 2630) = 1;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 535) &= ~0x100000u;
  }
  else if ( g_bCreateParavirtualizedGpu )
  {
    if ( v30 >= 0x5023 )
    {
      v133 = *((_DWORD *)this + 109);
      if ( (v133 & 4) == 0 && (v133 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 539) |= 0x400u;
    }
  }
  v145 = *((_DWORD *)this + 72);
  v43 = v145;
  v156 = v145;
  v44 = 344LL * v145;
  if ( !is_mul_ok(v145, 0x158uLL) )
    v44 = -1LL;
  v45 = operator new[](v44, 0x4B677844u, 64LL, v40);
  v47 = 0LL;
  *((_QWORD *)this + 335) = v45;
  if ( !v45 )
  {
    WdLogSingleEntry1(6LL, 7150LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGK_PHYSICALADAPTERINFO",
      7150LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v48 = 0;
  if ( *((int *)this + 606) < 0x2000 || v30 < 0x5005 )
    goto LABEL_58;
  *((_DWORD *)this + 672) = 0;
  v49 = 0;
  v147 = 0;
  if ( v145 )
  {
    PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(v30);
    while ( 1 )
    {
      *(_QWORD *)&v157.Flags.0 = v50;
      HIDWORD(v157.hKmdProcessHandle) = v50;
      *(_QWORD *)&v157.Type = 15LL;
      *(_QWORD *)&v157.InputDataSize = 4LL;
      v157.pOutputData = (void *)(v51 + 344LL * (unsigned int)v46);
      v157.pInputData = &v147;
      v157.OutputDataSize = PhysicalAdapterCapsSizeFromDdiVersion;
      v53 = DXGADAPTER::DdiQueryAdapterInfo(this, &v157, v46);
      if ( v53 < 0 )
      {
        WdLogSingleEntry1(4LL, v53);
        v48 = 1;
        goto LABEL_173;
      }
      if ( v30 >= 0xC003 )
      {
        v108 = *((_QWORD *)this + 335);
        if ( (*(_DWORD *)(344LL * v147 + v108 + 16) & 0x20) != 0 )
        {
          if ( *(_DWORD *)(344LL * v147 + v108 + 24) >= (unsigned int)*(unsigned __int16 *)(344LL * v147 + v108) )
          {
            WdLogSingleEntry3(
              2LL,
              this,
              *(unsigned int *)(344LL * v147 + v108 + 24),
              *(unsigned __int16 *)(344LL * v147 + v108));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: VirtualCopyEngineSupported but node index is invalid (VirtualCopyIndex:%u, NumEx"
                        "ecutionNodes:%u)",
              (__int64)this,
              *(unsigned int *)(344LL * v147 + *((_QWORD *)this + 335) + 24),
              *(unsigned __int16 *)(344LL * v147 + *((_QWORD *)this + 335)),
              0LL,
              0LL);
            return 3221225485LL;
          }
          if ( (*((_DWORD *)this + 539) & 0x2000) == 0 )
          {
            WdLogSingleEntry2(2LL, this, 7203LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: IoMmuSecureModeRequired must be set for a device exposing a virtual copy engine",
              (__int64)this,
              7203LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
      }
      v51 = *((_QWORD *)this + 335);
      v49 = *(unsigned __int16 *)(344LL * v147++ + v51) + *((_DWORD *)this + 672);
      v46 = v147;
      *((_DWORD *)this + 672) = v49;
      if ( (unsigned int)v46 >= v145 )
        break;
      v50 = 0LL;
    }
  }
  if ( *v37 <= 2400 && v49 > 0x40 )
  {
    WdLogSingleEntry3(2LL, this, 64LL, v49);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: Exceeded maximum number of %I64d nodes on pre-WDDM 2.5 adapter. Total node count: %I64d",
      (__int64)this,
      64LL,
      *((unsigned int *)this + 672),
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)this + 538) & 1) == 0 )
  {
    WdLogSingleEntry2(2LL, this, 7225LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: SchedulingCaps.MultiEngineAware is not set by WDDMv2 driver",
      (__int64)this,
      7225LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_173:
  if ( (*((_DWORD *)this + 539) & 0x800) != 0 )
  {
    v146 = 0;
    if ( v145 )
    {
      while ( 1 )
      {
        v151 = 0LL;
        v152.pInputData = &v146;
        v152.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v152.pOutputData = &v151;
        v152.InputDataSize = 4;
        v152.OutputDataSize = 8;
        v109 = DXGADAPTER::DdiQueryAdapterInfo(this, &v152, v46);
        v110 = v109;
        if ( v109 < 0 )
          break;
        if ( (v151 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(2LL, v151);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Frame buffer reserve size must be a multiple of PAGE_SIZE. Size=%I64u",
            v151,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_QWORD *)(344LL * v146 + *((_QWORD *)this + 335) + 56) = v151;
        v111 = v146;
        v46 = *(_QWORD *)(344LL * v146 + *((_QWORD *)this + 335) + 56);
        if ( v46 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v146, v46);
          if ( (int)result < 0 )
            return result;
          v111 = v146;
        }
        v146 = v111 + 1;
        if ( v111 + 1 >= v145 )
          goto LABEL_179;
      }
      WdLogSingleEntry1(2LL, v109);
      v134 = L"Failed to query frame buffer save area size. Status 0x%I64x";
      goto LABEL_292;
    }
LABEL_179:
    v152.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
    v152.InputDataSize = 0;
    v152.pOutputData = v153;
    v152.pInputData = 0LL;
    *(_OWORD *)v153 = 0LL;
    v152.OutputDataSize = 16;
    v112 = DXGADAPTER::DdiQueryAdapterInfo(this, &v152, v46);
    v110 = v112;
    if ( v112 < 0 )
    {
      WdLogSingleEntry1(2LL, v112);
      v134 = L"Failed to query number of hardware reserved ranges. Status 0x%I64x";
LABEL_292:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v134, v110, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v110;
    }
    if ( v153[0] )
    {
      v114 = 16LL * v153[0];
      if ( !is_mul_ok(v153[0], 0x10uLL) )
        v114 = -1LL;
      v115 = operator new[](v114, 0x4B677844u, 256LL, v113);
      v117 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)v115;
      if ( !v115 )
      {
        WdLogSingleEntry1(2LL, v153[0]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to allocate array for hardware reserved ranges. ArraySize=%u",
          v153[0],
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v110;
      }
      *(_QWORD *)&v153[2] = v115;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v152, v116) < 0 )
      {
        WdLogSingleEntry1(1LL, 7294LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 7294LL, 0LL, 0LL, 0LL, 0LL);
      }
      LODWORD(v110) = DXGADAPTER::CreatePhysicalObjectsForHardwareReservedRanges(this, v117, v153[0]);
      operator delete[](v117);
      if ( (int)v110 < 0 )
        return (unsigned int)v110;
      v30 = v150;
    }
  }
  if ( v48 )
  {
    v43 = v156;
    v47 = 0LL;
LABEL_58:
    if ( v145 )
    {
      do
      {
        *(_WORD *)(v47 + *((_QWORD *)this + 335)) = *((_WORD *)this + 1082);
        v47 += 344LL;
        *(_DWORD *)(*((_QWORD *)this + 335) + v47 - 328) ^= (*(_DWORD *)(*((_QWORD *)this + 335) + v47 - 328) ^ (*((_DWORD *)this + 539) >> 7)) & 1;
        *(_DWORD *)(*((_QWORD *)this + 335) + v47 - 328) ^= (*(_DWORD *)(*((_QWORD *)this + 335) + v47 - 328) ^ (*((_DWORD *)this + 539) >> 5)) & 2;
        *(_WORD *)(*((_QWORD *)this + 335) + v47 - 342) = *((_WORD *)this + 1080);
        *(_QWORD *)(*((_QWORD *)this + 335) + v47 - 336) = *((_QWORD *)this + 27);
        --v43;
      }
      while ( v43 );
    }
  }
  if ( *v37 >= 2400 )
  {
    if ( *((_DWORD *)this + 666) >= 0x80u )
    {
      v118 = 7335LL;
      WdLogSingleEntry1(2LL, 7335LL);
      v119 = L"Driver should not set MiscCaps.Reserved bits";
      goto LABEL_189;
    }
    *((_BYTE *)this + 2746) = *((_BYTE *)this + 2664) & 1;
  }
  v54 = *((_DWORD *)this + 666);
  if ( (v54 & 0x10) != 0 && !*((_QWORD *)this + 174) )
  {
    v118 = 7346LL;
    WdLogSingleEntry1(2LL, 7346LL);
    v119 = L"Driver sets IndependentVidPnVSyncControl cap but does not support DxgkDdiControlInterrupt3, returning failure";
    goto LABEL_189;
  }
  if ( *((_BYTE *)this + 2892) )
    *((_DWORD *)this + 666) = v54 & 0xFFFFFFEF;
  if ( v30 < 0x3001 )
  {
    *((_DWORD *)this + 606) = 4096;
  }
  else
  {
    v55 = *((_DWORD *)this + 606);
    if ( v55 != 4608
      && v55 != 9984
      && v55 != 12288
      && v55 != 4096
      && v55 != 4864
      && v55 != 0x2000
      && v55 != 8448
      && v55 != 8704
      && v55 != 8960
      && v55 != 9216
      && v55 != 9472
      && v55 != 9728
      && v55 != 10240
      && v55 != 10496 )
    {
      WdLogSingleEntry1(2LL, *((int *)this + 606));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Miniport returned unknown WDDM version 0x%I64x",
        *((int *)this + 606),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225561LL;
    }
  }
  if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 920) || (v58 = 1, (*((_DWORD *)this + 109) & 8) != 0) )
    v58 = 0;
  *((_BYTE *)this + 2704) = v58;
  if ( v58 )
  {
    v135 = *((_DWORD *)this + 606);
    if ( v135 >= 4608 )
    {
      if ( v135 >= 4864 )
      {
        if ( v135 >= 0x2000 )
          goto LABEL_72;
        goto LABEL_327;
      }
    }
    else if ( *((_DWORD *)this + 654)
           || *((_DWORD *)this + 655)
           || *((_BYTE *)this + 2624)
           || *((_BYTE *)this + 2625)
           || *((_BYTE *)this + 2626)
           || (*((_DWORD *)this + 535) & 0x10000000) != 0
           || (*((_DWORD *)this + 538) & 0x14) != 0
           || *((_BYTE *)this + 2627)
           || *((_BYTE *)this + 2629)
           || *((_BYTE *)this + 2630) )
    {
      v118 = 7428LL;
      WdLogSingleEntry1(2LL, 7428LL);
      v119 = L"Driver reports WDDM version less than 1.2 but implements some WDDM 1.2 features.";
      goto LABEL_189;
    }
    if ( (*((_DWORD *)this + 537) & 0x10) != 0
      || (*((_DWORD *)this + 539) & 0x10) != 0
      || *((_BYTE *)this + 2631)
      || *((_DWORD *)this + 658) )
    {
      v118 = 7443LL;
      WdLogSingleEntry1(2LL, 7443LL);
      v119 = L"Driver reports WDDM version less than 1.3 but implements some WDDM 1.3 features.";
      goto LABEL_189;
    }
LABEL_327:
    if ( *((_BYTE *)this + 2636) )
    {
      v118 = 7471LL;
      WdLogSingleEntry1(2LL, 7471LL);
      v119 = L"Pre-WDDM 2.0 driver should not set the HybridIntegrated cap.";
      goto LABEL_189;
    }
  }
LABEL_72:
  v59 = *((_DWORD *)this + 539);
  v60 = v59 & 0x8010;
  if ( (v59 & 0x10000) != 0 )
  {
    if ( v60 != 32784 )
    {
      v118 = 7485LL;
      WdLogSingleEntry1(2LL, 7485LL);
      v119 = L"Driver reports CrossAdapterResourceScanout but does not report lower tier support.";
      goto LABEL_189;
    }
  }
  else if ( v60 == 0x8000 )
  {
    v118 = 7493LL;
    WdLogSingleEntry1(2LL, 7493LL);
    v119 = L"Driver reports CrossAdapterResourceTexture but does not report lower tier support.";
LABEL_189:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v119, v118, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( v30 < 0x4000 )
  {
    v59 &= ~0x10u;
    *((_BYTE *)this + 2631) = 0;
    *((_DWORD *)this + 539) = v59;
  }
  else if ( v30 >= 0x5011 )
  {
    goto LABEL_76;
  }
  if ( (*((_DWORD *)this + 109) & 1) != 0 && (v59 & 0x10) != 0 && (*((_DWORD *)this + 109) & 0x1000) != 0 )
    *((_BYTE *)this + 2636) = 1;
LABEL_76:
  v61 = v154;
  *(_BYTE *)v154 ^= (*(_BYTE *)v154 ^ (4 * *((_BYTE *)this + 2624))) & 4;
  v62 = *(_BYTE *)v61 & 0xF7 | (*((_BYTE *)this + 2630) != 0 ? 8 : 0);
  *(_BYTE *)v61 = v62;
  v63 = (v62 ^ (32 * (*((_DWORD *)this + 539) >> 4))) & 0x20 ^ v62;
  *(_BYTE *)v61 = v63;
  v64 = (v63 ^ (*((_BYTE *)this + 2631) << 6)) & 0x40 ^ v63;
  *(_BYTE *)v61 = v64;
  LOBYTE(v56) = v64 & 0xEF;
  *((_DWORD *)v61 + 1) = *((_DWORD *)this + 531);
  *((_BYTE *)v61 + 1) ^= (*((_BYTE *)v61 + 1) ^ *((_BYTE *)this + 2636)) & 1;
  v65 = *((_BYTE *)v61 + 1);
  *((_DWORD *)v61 + 2) = *((_DWORD *)this + 606);
  v66 = *((_DWORD *)this + 666) >> 3;
  *(_BYTE *)v61 = v56;
  v67 = v65 ^ (v65 ^ (32 * v66)) & 0x20;
  *((_BYTE *)v61 + 1) = v67;
  if ( v30 >= 0x5021 )
  {
    LOBYTE(v56) = v56 | (16 * (*((_BYTE *)this + 2656) & 1));
    *(_BYTE *)v61 = v56;
  }
  if ( !*((_BYTE *)this + 209) )
  {
    v68 = v56 & 0x40;
    if ( (v56 & 0x40) != 0 )
    {
      if ( v30 < 0x5005 && (*((_DWORD *)this + 386) || *((_DWORD *)this + 387)) )
      {
        WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reports device 0x%I64x is hybrid discrete device but it has VidPn source and target.",
          *((_QWORD *)this + 27),
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v136 = v67 ^ (v67 ^ (2 * *((_BYTE *)this + 2659))) & 2;
      *((_BYTE *)v61 + 1) = v136;
      v67 = v136;
    }
    v69 = v67 & 1;
    v70 = 0;
    if ( !v68 )
      v70 = v69 ^ 1;
    if ( !v70 && (v56 & 0x20) == 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7570LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports device 0x%I64x as hybrid device but does not support cross adapter resource.",
        *((_QWORD *)this + 27),
        7570LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( v69 )
    {
      if ( v68 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7577LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reports both HybridIntegrated and HybridDiscrete caps 0x%I64x",
          *((_QWORD *)this + 27),
          7577LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      if ( !*((_DWORD *)this + 387) )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), 7585LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver reports the HybridIntegrated cap, but the adapter has no outputs. 0x%I64x",
          *((_QWORD *)this + 27),
          7585LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
    }
    if ( *((_BYTE *)this + 2626) && (!*((_QWORD *)this + 100) || !*((_QWORD *)this + 101) || !*((_QWORD *)this + 102)) )
    {
      v118 = 7599LL;
      WdLogSingleEntry1(2LL, 7599LL);
      v119 = L"Driver reports SupportPerEngineTDR cap but does not fill in all of the required DDIs.";
      goto LABEL_189;
    }
    if ( (*((_DWORD *)this + 535) & 4) != 0 && !*((_QWORD *)this + 99) )
    {
      v118 = 7606LL;
      WdLogSingleEntry1(2LL, 7606LL);
      v119 = L"Driver reports SupportKernelModeCommandBuffer cap but does not fill in the pfnRenderKm DDI.";
      goto LABEL_189;
    }
    if ( *((_BYTE *)this + 2629) && (!*((_QWORD *)this + 104) || !*((_QWORD *)this + 105)) )
    {
      v118 = 7614LL;
      WdLogSingleEntry1(2LL, 7614LL);
      v119 = L"Driver reports SupportRuntimePowerManagement cap but does not fill in the pfnSetPowerComponentFState or pfn"
              "PowerRuntimeControlRequest DDI.";
      goto LABEL_189;
    }
    if ( v30 < 0x300C && *((_QWORD *)this + 104) && *((_QWORD *)this + 105) )
      *((_BYTE *)this + 2629) = 1;
  }
  *((_WORD *)this + 1353) = 0;
  *((_BYTE *)this + 2708) = 0;
  if ( *((_BYTE *)this + 2628) )
  {
    if ( v30 < 0x300B )
    {
      v118 = 7636LL;
      WdLogSingleEntry1(2LL, 7636LL);
      v119 = L"Driver reports SupportMultiPlaneOverlay cap but it is not compiled with expected header files.";
      goto LABEL_189;
    }
    if ( v30 < 0x4000 )
    {
      *((_BYTE *)this + 2706) = 1;
    }
    else if ( v30 == 0x4000 )
    {
      *((_BYTE *)this + 2707) = 1;
    }
    else
    {
      v120 = *((_DWORD *)this + 658);
      if ( !v120 )
      {
        v118 = 7649LL;
        WdLogSingleEntry1(2LL, 7649LL);
        v119 = L"Driver reports SupportMultiPlaneOverlay cap but doesn't report any overlay planes or panel fitter.";
        goto LABEL_189;
      }
      if ( v120 > 8 )
      {
        v137 = *((_DWORD *)this + 606);
        if ( v137 < 8704 )
        {
          if ( v137 >= 0x2000 && v120 == 10 )
          {
            *((_DWORD *)this + 658) = 8;
            goto LABEL_206;
          }
          v118 = 7672LL;
          WdLogSingleEntry1(2LL, 7672LL);
        }
        else
        {
          if ( v120 <= 0xA )
            goto LABEL_206;
          v118 = 7659LL;
          WdLogSingleEntry1(2LL, 7659LL);
        }
        v119 = L"Driver reports more than the supported number of overlay planes.";
        goto LABEL_189;
      }
      if ( v30 > 0x5000 )
        *((_BYTE *)this + 2708) = 1;
    }
LABEL_206:
    v121 = *((_QWORD *)this + 108);
    if ( v121 || *((_QWORD *)this + 124) || *((_QWORD *)this + 128) )
    {
      if ( v30 <= 0x4002 || *((_QWORD *)this + 112) || *((_QWORD *)this + 123) || *((_QWORD *)this + 127) )
      {
        if ( !*((_BYTE *)this + 2627) )
        {
          v118 = 7710LL;
          WdLogSingleEntry1(2LL, 7710LL);
          v119 = L"Driver reports SupportMultiPlaneOverlay cap but DirectFlip is not supported.";
          goto LABEL_189;
        }
        if ( v121 )
        {
          Global = DXGGLOBAL_GetGlobal();
          DXGGLOBAL::RecordFeatureUsage(Global, 1LL, 1LL);
        }
        if ( *((_QWORD *)this + 124) )
        {
          v138 = DXGGLOBAL_GetGlobal();
          DXGGLOBAL::RecordFeatureUsage(v138, 2LL, 1LL);
        }
        if ( *((_QWORD *)this + 128) )
        {
          v123 = DXGGLOBAL_GetGlobal();
          DXGGLOBAL::RecordFeatureUsage(v123, 3LL, 1LL);
        }
        goto LABEL_93;
      }
      v118 = 7700LL;
      WdLogSingleEntry1(2LL, 7700LL);
    }
    else
    {
      v118 = 7688LL;
      WdLogSingleEntry1(2LL, 7688LL);
    }
    v119 = L"Driver reports SupportMultiPlaneOverlay cap but does not fill in all of the required DDIs.";
    goto LABEL_189;
  }
LABEL_93:
  LOBYTE(v57) = *((_BYTE *)this + 209);
  *((_BYTE *)this + 2744) = 0;
  if ( (_BYTE)v57 )
    goto LABEL_216;
  LOBYTE(v56) = 0;
  if ( v30 >= 0x700A && *((int *)this + 606) >= 8704 && (!*((_QWORD *)this + 82) || *((_QWORD *)this + 145)) )
  {
    *((_BYTE *)this + 2744) = 1;
    LOBYTE(v56) = 1;
  }
  if ( *((int *)this + 606) < 8960 )
  {
LABEL_216:
    *((_DWORD *)this + 534) &= 0xFFFFFFE3;
  }
  else
  {
    v71 = (*((_DWORD *)this + 534) >> 3) & 1;
    v72 = (*((_DWORD *)this + 534) >> 2) & 1;
    if ( v72 < v71 || v71 < ((*((_DWORD *)this + 534) >> 4) & 1u) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports support higher level of colorSpaceTransform but not lower levels on device 0x%I64x, returning 0x%I64x.",
        *((_QWORD *)this + 27),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !(_BYTE)v56 && v72 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ColorSpaceTransform is supported on the device 0x%I64x which does not have pfnSetTargetGamma, returning 0x%I64x.",
        *((_QWORD *)this + 27),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 133LL) && !(_BYTE)v57 )
  {
    v73 = *((_DWORD *)this + 606) >= 0x2000;
    v74 = DXGGLOBAL_GetGlobal();
    v75 = DXGGLOBAL::DeferredInitialize(v74, v73);
    RenderCore = v75;
    if ( v75 < 0 )
    {
      WdLogSingleEntry1(2LL, v75);
      v128 = L"DXGGLOBAL::DeferredInitialize failed (Status = 0x%I64x).";
      v143 = 0LL;
      goto LABEL_242;
    }
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v61, v56, v57);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 337) ^= (**((_DWORD **)this + 337) ^ v14) & 0x20000;
    **((_DWORD **)this + 337) ^= (**((_DWORD **)this + 337) ^ v14) & 0x18000;
    **((_DWORD **)this + 337) ^= (**((_DWORD **)this + 337) ^ v14) & 0x100000;
    **((_DWORD **)this + 337) ^= (**((_DWORD **)this + 337) ^ v14) & 0xC0000;
    *((_BYTE *)this + 2709) = 0;
  }
  if ( *((int *)this + 606) < 9216 )
    goto LABEL_111;
  v76 = *((_QWORD *)this + 166);
  if ( !*((_QWORD *)this + 165) )
  {
    if ( !v76 )
    {
LABEL_111:
      *((_QWORD *)this + 165) = W32kStub_UserRemoveWindowedSwapChain;
      *((_QWORD *)this + 166) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_112;
    }
LABEL_375:
    v118 = 7842LL;
    WdLogSingleEntry1(2LL, 7842LL);
    v119 = L"Driver cannot support only one of DdiQueryDiagnosticTypesSupport and DdiControlDiagnosticReporting.";
    goto LABEL_189;
  }
  if ( !v76 )
    goto LABEL_375;
LABEL_112:
  result = DXGADAPTER::CheckMcdmDdiOverall(this);
  if ( (int)result < 0 )
    return result;
  DXGADAPTER::InitializeDriverDiagnosticReporting(this);
  v78 = (__int64 *)((char *)this + 2800);
  RenderCore = (int)ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 350);
  v79 = *((_QWORD *)this + 350);
  if ( (int)RenderCore < 0 )
  {
    if ( v79 )
    {
      WdLogSingleEntry1(1LL, 7865LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore == NULL", 7865LL, 0LL, 0LL, 0LL, 0LL);
    }
    WdLogSingleEntry2(2LL, this, RenderCore);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create ADAPTER_RENDER on adapter 0x%I64x (Status = 0x%I64x).",
      (__int64)this,
      RenderCore,
      0LL,
      0LL,
      0LL);
    return (unsigned int)RenderCore;
  }
  if ( v79 && IsAdapterSessionized )
  {
    v131 = 7882LL;
    WdLogSingleEntry1(2LL, 7882LL);
    v132 = L"Render capable adapter should NOT be sessionized!";
    goto LABEL_255;
  }
  v80 = (char *)this + 2792;
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 349);
  RenderCore = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *(_QWORD *)v80 )
    {
      WdLogSingleEntry1(1LL, 7892LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore == NULL", 7892LL, 0LL, 0LL, 0LL, 0LL);
    }
    WdLogSingleEntry2(2LL, this, RenderCore);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create ADAPTER_DISPLAY on adapter 0x%I64x (Status = 0x%I64x).",
      (__int64)this,
      RenderCore,
      0LL,
      0LL,
      0LL);
    return (unsigned int)RenderCore;
  }
  if ( *v78 )
  {
    v82 = *((_QWORD *)this + 349);
    goto LABEL_119;
  }
  v82 = *(_QWORD *)v80;
  if ( !*(_QWORD *)v80 )
  {
    WdLogSingleEntry2(2LL, this, -1073741735LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
      (__int64)this,
      -1073741735LL,
      0LL,
      0LL,
      0LL);
    return 3221225561LL;
  }
LABEL_119:
  v83 = *(_BYTE *)v61 & 0xFE | (v82 != 0);
  *(_BYTE *)v61 = v83;
  v84 = v83 & 0xFD | (*v78 != 0 ? 2 : 0);
  *(_BYTE *)v61 = v84;
  if ( *(_QWORD *)v80 )
    v85 = *(_DWORD *)(*(_QWORD *)v80 + 24LL);
  else
    LOBYTE(v85) = 0;
  v86 = v84 & 0x7F | ((_BYTE)v85 << 7);
  *(_BYTE *)v61 = v86;
  if ( (v86 & 1) != 0 )
    *((_BYTE *)v61 + 1) = *((_BYTE *)v61 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
  else
    *((_BYTE *)v61 + 1) &= ~4u;
  if ( !*v78 )
    *((_DWORD *)this + 535) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    v89 = *((_DWORD *)this + 109);
    if ( (v89 & 4) == 0
      && (v89 & 8) == 0
      && v87
      && v30 >= 0x5008
      && (!*((_QWORD *)this + 113) || !*((_QWORD *)this + 125)) )
    {
      v118 = 7949LL;
      WdLogSingleEntry1(2LL, 7949LL);
      v119 = L"Driver is compiled against DXGKDDI_INTERFACE_VERSION_WDDM2_0_M2_2_1 or greater, but does not fill in the pf"
              "nCalibrateGpuClock or pfnSetStablePowerState DDI.";
      goto LABEL_189;
    }
  }
  if ( *((_BYTE *)this + 2704) && DXGADAPTER::IsFullWDDMAdapter(v88) && *((int *)this + 606) >= 4608 )
  {
    if ( !*((_BYTE *)this + 2627) )
    {
      v118 = 7964LL;
      WdLogSingleEntry1(2LL, 7964LL);
      v119 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 full adapter features.";
      goto LABEL_189;
    }
  }
  else if ( !*((_BYTE *)this + 2627) )
  {
    goto LABEL_137;
  }
  if ( !*((_BYTE *)this + 209) )
  {
    if ( !v87
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v87 + 648) + 8LL) + 720LL))(*(_QWORD *)(v87 + 656)) )
    {
      *(_WORD *)((char *)this + 2627) = 0;
    }
LABEL_137:
    if ( !*((_BYTE *)this + 209) )
      goto LABEL_138;
  }
  *((_QWORD *)this + 113) = 0LL;
LABEL_138:
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
  v93 = *((_DWORD *)this + 109);
  *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
  if ( (v93 & 0x10) != 0 && !*(_QWORD *)v80 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v154);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v154);
    if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 123) )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
        (__int64)this,
        -1073741735LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 4) = -1LL;
      v124 = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::SetWarpAdapter(v124, this);
    }
    if ( v155 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v154);
  }
  if ( *((_BYTE *)this + 209) || (v94 = DXGADAPTER::InitializePowerManagement(this), RenderCore = v94, v94 >= 0) )
  {
    if ( *((_BYTE *)this + 2704) )
    {
      if ( *((int *)this + 606) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
      {
        v139 = *((_DWORD *)this + 109);
        if ( (v139 & 4) == 0 && (v139 & 0x20) == 0 && (*((_DWORD *)this + 537) & 0x10) == 0 )
        {
          v118 = 8045LL;
          WdLogSingleEntry1(2LL, 8045LL);
          v119 = L"WDDM 1.3 driver must support independent flip.";
          goto LABEL_189;
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, this, v94);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize power management for the adapter 0x%I64x (Status = 0x%I64x).",
      (__int64)this,
      RenderCore,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 109) & 0x10) != 0 )
    *((_BYTE *)this + 2747) = 1;
  if ( v30 >= 0xA008 )
  {
    *((_BYTE *)this + 2747) = 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NonDXArgonGpuSupport__private_reporting,
      0x1429797u,
      v91,
      v92,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
      0);
  }
  v95 = operator new[](0x28uLL, 0x4B677844u, 64LL, v92);
  if ( v95 )
  {
    *(_OWORD *)v95 = 0LL;
    *(_OWORD *)(v95 + 16) = 0LL;
    *(_QWORD *)(v95 + 32) = 0LL;
  }
  else
  {
    v95 = 0LL;
  }
  *((_QWORD *)this + 580) = v95;
  if ( !v95 )
  {
    WdLogSingleEntry1(2LL, 8083LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate MockDriverState object",
      8083LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  LODWORD(v9) = MOCKDRIVERSTATE::Initialize((MOCKDRIVERSTATE *)v95, this, v96, v97);
  if ( (int)v9 < 0 )
  {
    WdLogSingleEntry1(2LL, 8090LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize MockDriverState object",
      8090LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v9;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MockDriverValidation__private_reporting,
    0x14A2756u,
    v98,
    v99,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0);
  v102 = *((_DWORD *)this + 666) >> 3;
  *((_BYTE *)this + 4648) = 0;
  if ( (v102 & 1) != 0 )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_SupportComputeOnlyAdapters__private_reporting,
      0x124B067u,
      v100,
      v101,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
  LODWORD(v9) = DXGADAPTER::InitializeVSyncPhaseState(this);
  if ( (int)v9 < 0 )
  {
    v125 = 8109LL;
    WdLogSingleEntry1(6LL, 8109LL);
    v126 = L"Failed to allocate VSync Phase Timer state";
    goto LABEL_236;
  }
  if ( (int)DXGADAPTER::InitializeCABCState(v103) < 0 )
  {
    WdLogSingleEntry1(2LL, 8122LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initialize CABC State",
      8122LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v104 = *v78;
  if ( *v78 && !*((_BYTE *)this + 209) )
  {
    v105 = *(_QWORD *)(v104 + 624);
    v106 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v105 + 8) + 912LL))(
      *(_QWORD *)(v104 + 632),
      (__int64)v106 + 1360);
  }
  if ( (*((_DWORD *)this + 109) & 1) != 0 )
    *((_QWORD *)DXGGLOBAL_GetGlobal() + 127) = *(_QWORD *)((char *)this + 404);
  if ( (int)RenderCore < 0 )
    return (unsigned int)RenderCore;
  if ( v145 <= 1 )
    goto LABEL_162;
  v140 = *((_DWORD *)this + 103);
  if ( v140 == 4318 )
  {
    v141 = DXGGLOBAL_GetGlobal();
    v142 = 7LL;
LABEL_403:
    DXGGLOBAL::RecordFeatureUsage(v141, v142, 1LL);
    goto LABEL_162;
  }
  if ( v140 == 4098 )
  {
    v141 = DXGGLOBAL_GetGlobal();
    v142 = 8LL;
    goto LABEL_403;
  }
LABEL_162:
  v107 = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::RecordFeatureUsageWddmVersion(v107, this);
  return (unsigned int)RenderCore;
}
