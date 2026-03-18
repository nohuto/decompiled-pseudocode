/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C019BA70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0007198 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00071EC (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0007208 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000A924 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage @ 0x1C0025BD4 (Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C019B7CC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C019B888 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C019D04C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C019D0F4 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C019D414 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C019D480 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C019D9FC (MonitorGetAdvancedColorParams.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C019DDF4 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C019DE38 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C019DEB8 (MonitorReleaseMonitorHandle.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C019DF4C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C019DFFC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C019E244 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AC420 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01B4048 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C022F9AC (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02FA4C4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rbx
  _QWORD **v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // r13
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // eax
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v20; // eax
  __int64 v21; // r13
  int v22; // r14d
  __int64 v23; // rbx
  int v24; // r8d
  _BOOL8 v25; // rbx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v28; // rcx
  _BOOL8 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned __int64 *v33; // rcx
  struct DXGADAPTER **v34; // rax
  volatile signed __int64 *v35; // r14
  struct DXGADAPTER *v36; // r9
  bool v37; // zf
  signed __int64 v38; // rax
  struct DXGADAPTER *v39; // r14
  struct DXGADAPTER *v40; // r14
  struct DXGADAPTER *v41; // r10
  _WORD *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int16 v46; // ax
  _WORD *v47; // rax
  unsigned __int16 *v48; // rax
  _WORD *v49; // rdx
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // r9
  __int16 v53; // ax
  _WORD *v54; // rax
  struct DXGADAPTER *v55; // rbx
  struct DXGADAPTER *v56; // r14
  __int64 v57; // rcx
  struct DXGADAPTER *v58; // r13
  __int64 v59; // rdx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rbx
  __int64 v74; // rax
  MONITOR_MGR *v75; // rbx
  int MonitorInstance; // eax
  __int64 v77; // rdx
  MONITOR_MGR *v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  unsigned int v81; // eax
  DXGMONITOR *v82; // rbx
  int CurrentWireFormatAndColorSpace; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v84; // ecx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v85; // ebx
  int v86; // eax
  DXGMONITOR *v87; // rbx
  int v88; // edx
  DXGMONITOR *v89; // rbx
  unsigned int v90; // edx
  __int64 v91; // rsi
  _WORD *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int16 v96; // ax
  _WORD *v97; // rax
  unsigned __int16 *v98; // rax
  _WORD *v99; // rdx
  __int64 v100; // r9
  unsigned __int64 v101; // rcx
  __int64 v102; // r8
  __int16 v103; // ax
  _WORD *v104; // rax
  __int64 v105; // rax
  char *v106; // rcx
  struct DXGADAPTER *v107; // rcx
  struct DXGADAPTER *v108; // rcx
  int v109; // eax
  __int64 v110; // r8
  unsigned __int8 v113[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v115[8]; // [rsp+70h] [rbp-98h] BYREF
  struct _LUID v116; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *v117; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v118; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *v119; // [rsp+90h] [rbp-78h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v120; // [rsp+98h] [rbp-70h] BYREF
  DXGMONITOR *v121; // [rsp+A0h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v122; // [rsp+A8h] [rbp-60h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *v123; // [rsp+B0h] [rbp-58h]
  DXGFASTMUTEX *v124; // [rsp+B8h] [rbp-50h] BYREF
  char v125; // [rsp+C0h] [rbp-48h]
  DXGMONITOR *v126; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v127; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGADAPTER *v128; // [rsp+D8h] [rbp-30h]
  char v129; // [rsp+E0h] [rbp-28h]
  int v130; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v131; // [rsp+F0h] [rbp-18h]
  char v132; // [rsp+F8h] [rbp-10h]
  __int128 v133; // [rsp+100h] [rbp-8h] BYREF
  __int128 v134; // [rsp+110h] [rbp+8h]
  __int128 v135; // [rsp+120h] [rbp+18h]
  unsigned __int64 v136; // [rsp+130h] [rbp+28h] BYREF
  DXGADAPTER *v137[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v138[2]; // [rsp+148h] [rbp+40h] BYREF
  char v139; // [rsp+158h] [rbp+50h]
  char v140; // [rsp+160h] [rbp+58h] BYREF
  char v141; // [rsp+168h] [rbp+60h] BYREF
  char v142; // [rsp+169h] [rbp+61h]
  _BYTE v143[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v144; // [rsp+178h] [rbp+70h]
  struct DXGADAPTER *v145; // [rsp+180h] [rbp+78h]
  char v146; // [rsp+188h] [rbp+80h]
  __int64 v147; // [rsp+190h] [rbp+88h]
  _BYTE v148[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v149; // [rsp+1B8h] [rbp+B0h]
  struct DXGADAPTER *v150; // [rsp+1C0h] [rbp+B8h]
  char v151; // [rsp+1C8h] [rbp+C0h]
  __int64 v152; // [rsp+1D0h] [rbp+C8h]

  v4 = 0;
  v116 = a1;
  v130 = -1;
  v131 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v132 = 1;
    v130 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v132 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v130, 2185);
  v119 = 0LL;
  v7 = 0LL;
  v117 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 6667LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDisplayInfo", 6667LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  v9 = Global;
  if ( !a1.LowPart && !v116.HighPart )
  {
    WdLogSingleEntry1(3LL, 3073LL);
LABEL_204:
    LODWORD(v21) = -1073741811;
    v22 = 1144079361;
    WdLogSingleEntry3(2LL, v116.HighPart, a1.LowPart, 1144079361LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetAdapterDeviceDesc function.",
      v116.HighPart,
      a1.LowPart,
      1144079361LL,
      0LL,
      0LL);
    goto LABEL_205;
  }
  v125 = 0;
  v124 = (struct DXGGLOBAL *)((char *)Global + 720);
  if ( Global == (struct DXGGLOBAL *)-720LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v124 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v124);
  v10 = (_QWORD **)((char *)v9 + 768);
  v125 = 1;
  v11 = *v10;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v10 || !v11 )
    {
      if ( v125 )
      {
        v125 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v124);
      }
      goto LABEL_204;
    }
    v12 = v11;
    v11 = (_QWORD *)*v11;
    if ( *(_QWORD *)((char *)v12 + 404) == __PAIR64__(v116.HighPart, a1.LowPart) )
    {
      _m_prefetchw(v12 + 3);
      v13 = v12[3];
      if ( v13 )
        break;
    }
  }
  while ( 1 )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange64(v12 + 3, v13 + 1, v13);
    if ( v14 == v13 )
      break;
    if ( !v13 )
      goto LABEL_15;
  }
  if ( v125 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v124);
  v15 = DxgkAcquireSessionModeChangeLock(0LL);
  if ( v15 < 0 )
  {
    v22 = 1144079362;
    v21 = v15;
    WdLogSingleEntry2(2LL, v15, 1144079362LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v21,
      1144079362LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_205;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v24 = a2;
  }
  else
  {
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v17
      || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                              v17,
                                              CurrentProcessSessionId)) == 0LL) )
    {
      LODWORD(v21) = -1073741811;
      v22 = 1144079369;
      v25 = PsGetCurrentProcess(v16) != (_QWORD)PsInitialSystemProcess;
      CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry3(2LL, ProcessSessionId, v25, 1144079369LL);
      v29 = PsGetCurrentProcess(v28) != (_QWORD)PsInitialSystemProcess;
      v30 = PsGetCurrentProcess(PsInitialSystemProcess);
      v31 = PsGetProcessSessionId(v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session: No session data for session 0x%I64x!!! System Process %I64d (0x%I64x)",
        v31,
        v29,
        1144079369LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4627) == *((_DWORD *)v12 + 101)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4628) == *((_DWORD *)v12 + 102) )
    {
      v20 = *((_DWORD *)SessionDataForSpecifiedSession + 4629);
    }
    else
    {
      v20 = 0;
    }
    if ( a2 != -1 && a2 >= v20 )
    {
      LODWORD(v21) = -1073741811;
      v22 = 1144079363;
      v23 = v20;
      WdLogSingleEntry3(2LL, a2, v20, 1144079363LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session: VidPnSourceId 0x%I64x is not less than the number of VidPnSources 0x%I64x.  (0x%I64x)",
        a2,
        v23,
        1144079363LL,
        0LL,
        0LL);
LABEL_35:
      DxgkReleaseSessionModeChangeLock();
      goto LABEL_205;
    }
    v24 = -1;
    a2 = -1;
  }
  v32 = 0;
  v33 = (unsigned __int64 *)&v140;
  if ( v24 == -1 )
    v33 = 0LL;
  v34 = &v119;
  if ( v24 == -1 )
    v34 = 0LL;
  else
    v32 = v24;
  if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v12, v32, &v117, &v136, v34, v33, 0) < 0 )
  {
    LODWORD(v21) = -1073741811;
    v22 = 1144079364;
    WdLogSingleEntry4(2LL, v116.HighPart, a1.LowPart, a2, 1144079364LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter (0x%I64x%08I64x) VidPn source 0x%I64x! (0x%I64x)",
      v116.HighPart,
      a1.LowPart,
      a2,
      1144079364LL,
      0LL);
    goto LABEL_35;
  }
  v35 = (volatile signed __int64 *)v117;
  if ( !v117 )
  {
    WdLogSingleEntry1(1LL, 6784LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 6784LL, 0LL, 0LL, 0LL, 0LL);
  }
  v36 = v119;
  SessionViewOwner = v119;
  if ( (a2 == -1) != (v119 == 0LL) )
  {
    WdLogSingleEntry1(1LL, 6785LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_UNINITIALIZED) == (pDisplayAdapter == NULL)",
      6785LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v36 = SessionViewOwner;
  }
  v37 = v36 == 0LL;
  if ( v36 )
  {
    if ( (*((_DWORD *)v36 + 109) & 0x100) != 0 )
    {
      v137[0] = 0LL;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter(v36, 0, (struct DXGADAPTER_REFERENCE *)v137) >= 0 )
        v7 = *(_QWORD *)((char *)v137[0] + 404);
      DXGADAPTER_REFERENCE::Assign(v137, 0LL);
      v36 = SessionViewOwner;
    }
    v37 = v36 == 0LL;
  }
  if ( v37 )
    v36 = (struct DXGADAPTER *)v35;
  v142 = 0;
  v145 = (struct DXGADAPTER *)v35;
  v146 = 0;
  v147 = 0LL;
  if ( v35 )
  {
    _InterlockedIncrement64(v35 + 3);
    v35 = (volatile signed __int64 *)v117;
    v144 = -1LL;
  }
  v151 = 0;
  v152 = 0LL;
  if ( v36 )
  {
    v35 = (volatile signed __int64 *)v36;
    v150 = v36;
    goto LABEL_64;
  }
  v150 = (struct DXGADAPTER *)v35;
  if ( v35 )
  {
LABEL_64:
    _InterlockedIncrement64(v35 + 3);
    v149 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v12[2], (struct DXGADAPTER *)v12);
  SessionViewOwner = v117;
  v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v39 = v117;
  if ( v38 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117 + 2), v117);
  if ( v119 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v119 + 2), v119);
    v39 = v117;
  }
  else
  {
    v119 = v39;
  }
  v138[1] = v39;
  _InterlockedIncrement64((volatile signed __int64 *)SessionViewOwner + 3);
  v40 = v117;
  v138[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v40 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v40 + 38);
  v139 = 1;
  if ( *((_DWORD *)v117 + 50) != 1 )
  {
    LODWORD(v21) = -1073741130;
    v22 = 1144079365;
    WdLogSingleEntry4(3LL, v116.HighPart, a1.LowPart, a2, 1144079365LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v141);
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_205;
  }
  v41 = v117;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v117 + 108);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v41 + 103);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v41 + 104);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v41 + 105);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v41 + 106);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v41 + 107);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v41 + 109) >> 7) & 1;
  v42 = (_WORD *)(a4 + 860);
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v41 + 72) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v41 + 705);
  v43 = *((_QWORD *)v41 + 217);
  if ( v43 )
  {
    v44 = 128LL;
    v45 = v43 - (_QWORD)v42;
    do
    {
      if ( v44 == -2147483518 )
        break;
      v46 = *(_WORD *)((char *)v42 + v45);
      if ( !v46 )
        break;
      *v42++ = v46;
      --v44;
    }
    while ( v44 );
    v47 = v42 - 1;
    if ( v44 )
      v47 = v42;
    *v47 = 0;
  }
  else if ( a4 != -860 )
  {
    *v42 = 0;
  }
  v48 = (unsigned __int16 *)*((_QWORD *)v41 + 218);
  v49 = (_WORD *)(a4 + 1116);
  v50 = 260LL;
  v51 = ((unsigned __int64)*v48 >> 1) - 260;
  v52 = *((_QWORD *)v48 + 1) - (a4 + 1116);
  do
  {
    if ( !(v50 + v51) )
      break;
    v53 = *(_WORD *)((char *)v49 + v52);
    if ( !v53 )
      break;
    *v49++ = v53;
    --v50;
  }
  while ( v50 );
  v54 = v49 - 1;
  if ( v50 )
    v54 = v49;
  *v54 = 0;
  _InterlockedDecrement((volatile signed __int32 *)v41 + 38);
  ExReleasePushLockSharedEx((char *)v41 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117 + 2), v117);
  if ( !v119 )
    goto LABEL_184;
  v128 = v119;
  _InterlockedIncrement64((volatile signed __int64 *)v119 + 3);
  v55 = v119;
  v127 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v55 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v55 + 38);
  v129 = 1;
  if ( *((_DWORD *)v119 + 50) != 1 )
  {
    LODWORD(v21) = -1073741130;
    v22 = 1144079366;
    WdLogSingleEntry4(3LL, v116.HighPart, a1.LowPart, a2, 1144079366LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v127);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v141);
    DxgkReleaseSessionModeChangeLock();
LABEL_205:
    if ( *(_DWORD *)a4 == -21 )
      *(_DWORD *)(a4 + 2024) = v22;
    v4 = v21;
    goto LABEL_208;
  }
  if ( a2 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v56 = v119;
    goto LABEL_162;
  }
  v56 = v119;
  v57 = *((_QWORD *)v119 + 365);
  if ( !v57 )
  {
    v90 = -1;
    goto LABEL_160;
  }
  if ( a2 >= *(_DWORD *)(v57 + 96) )
  {
    v90 = *(_DWORD *)(v57 + 96);
LABEL_160:
    LODWORD(v21) = -1073741811;
    v121 = (DXGMONITOR *)1144079367;
    v91 = v90;
    WdLogSingleEntry5(2LL, a2, v90, v116.HighPart, a1.LowPart, 1144079367LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified VidPnSourceId 0x%I64x is bigger than the total number of VidPnSources 0x%I64x on adapter"
                " (0x%I64x%08I64x). (0x%I64x)",
      a2,
      v91,
      v116.HighPart,
      a1.LowPart,
      1144079367LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v127);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v141);
    DxgkReleaseSessionModeChangeLock();
    v22 = (int)v121;
    goto LABEL_205;
  }
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v12[365], a2);
  v58 = SessionViewOwner;
  if ( SessionViewOwner )
  {
    v118 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v56, a2, &v118);
    v59 = v118;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v56 + 109) >> 3)) & 0x8000;
    if ( (_DWORD)v59 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v56, v59, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v56 + 365), a2);
    v123 = DisplayModeInfo;
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)v58 + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(4000LL * a2 + *(_QWORD *)(*((_QWORD *)v56 + 365) + 128LL) + 688);
    }
    *(_DWORD *)(a4 + 1916) = v118;
    *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v56 + 365), a2);
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)DisplayModeInfo;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)DisplayModeInfo + 1);
    v62 = *((_DWORD *)DisplayModeInfo + 2);
    if ( v62 == 21 )
      goto LABEL_115;
    v63 = v62 - 20;
    if ( !v63 )
    {
      v66 = 3;
      goto LABEL_116;
    }
    v64 = v63 - 2;
    if ( !v64 )
    {
LABEL_115:
      v66 = 4;
      goto LABEL_116;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      if ( v65 == 18 )
        v66 = 1;
      else
        v66 = 5;
    }
    else
    {
      v66 = 2;
    }
LABEL_116:
    *(_DWORD *)(a4 + 1932) = v66;
    v67 = *((_DWORD *)DisplayModeInfo + 4);
    if ( v67 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v68 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v67;
      v68 = *((_DWORD *)DisplayModeInfo + 5);
    }
    *(_DWORD *)(a4 + 1940) = v68;
    *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v56 + 365), a2, 2);
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    DxgkpCopyMonitorLinkInfoToFlags(v56, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)v58 + 8);
    SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    if ( *((_DWORD *)SessionViewOwner + 10) == 1 )
    {
      v73 = v118;
      LODWORD(SessionViewOwner) = v118;
      v74 = WdLogNewEntry5_WdTrace(v70, v69, v71, v72);
      *(_QWORD *)(v74 + 24) = v73;
      *(_QWORD *)(v74 + 32) = v56;
      if ( (_DWORD)v73 != -1 )
      {
        if ( !*((_QWORD *)v56 + 365) )
          WdLogSingleEntry0(1LL);
        v75 = *(MONITOR_MGR **)(*((_QWORD *)v56 + 365) + 112LL);
        if ( !v75 )
        {
          WdLogSingleEntry1(2LL, v56);
          goto LABEL_129;
        }
        v121 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v75, (unsigned int)SessionViewOwner, 0, &v121);
        if ( MonitorInstance == -1073741275 )
        {
          v77 = (unsigned int)SessionViewOwner;
          v78 = v75;
          v79 = 7LL;
LABEL_128:
          WdLogSingleEntry2(v79, v77, v78);
          goto LABEL_129;
        }
        if ( MonitorInstance < 0 )
        {
          v77 = (unsigned int)SessionViewOwner;
          v78 = v75;
          v79 = 2LL;
          goto LABEL_128;
        }
        v82 = v121;
        if ( !v121 )
          WdLogSingleEntry0(1LL);
        DXGMONITOR::_AddReference(v82, DxgkGetAdapterDeviceDesc);
        if ( !v82 )
          WdLogSingleEntry0(1LL);
        v120.Value = 0;
        v122 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
        CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(v56, a2, v118, &v120, &v122);
        v84.0 = v120.0;
        if ( CurrentWireFormatAndColorSpace >= 0 )
        {
          v85 = v122;
        }
        else
        {
          v85 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v84.Value = v120.Value & 0xFFFFFF03 | 8;
          v122 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v120.0 = v84.0;
        }
        *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v84);
        *(_DWORD *)(a4 + 1980) = v85;
        Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage();
        v133 = 0LL;
        v134 = 0LL;
        *(_DWORD *)(a4 + 2040) = *((_DWORD *)v123 + 19);
        v116.LowPart = 0;
        LOWORD(v116.HighPart) = 0;
        v135 = 0LL;
        if ( (v85 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
           || (v115[0] = 0, v85 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL))
          && (v115[0] = 1, v85 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
        {
          v86 = *((_DWORD *)v56 + 109);
          v115[1] = 1;
          if ( (v86 & 0x200) == 0 && (v86 & 8) == 0 )
          {
            WdLogSingleEntry1(1LL, 7023LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(PickedColorSpace != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) || pDisplayAdapter->GetAdap"
                        "ter()->IsXBoxOneDevice() || pDisplayAdapter->GetAdapter()->IsSoftGPU()",
              7023LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          v115[1] = 0;
        }
        v87 = v121;
        if ( (int)MonitorGetAdvancedColorParams(v121, v115, &v133, &v116) >= 0 )
        {
          *(_OWORD *)(a4 + 1984) = v133;
          *(_OWORD *)(a4 + 2000) = v134;
          v88 = *(_DWORD *)(a4 + 2052);
          *(_QWORD *)(a4 + 2016) = v135;
          *(_DWORD *)(a4 + 2024) = DWORD2(v135);
          *(_DWORD *)(a4 + 2052) = (BYTE1(v116.LowPart) != 0 ? 0x1000 : 0) | (LOBYTE(v116.LowPart) != 0 ? 0x200 : 0) | v88 & 0xFFFFEDFF;
        }
        v113[0] = 0;
        v115[5] = 0;
        v115[4] = 0;
        MONITOR_MGR::AcquireMonitorShared(&v126, (__int64)v87);
        v89 = v126;
        if ( !v126 )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v126);
          goto LABEL_152;
        }
        LODWORD(SessionViewOwner) = DXGMONITOR::_GetMonitorNativeFlags(v126, v113, &v115[5], &v115[4]);
        ExReleaseResourceLite((PERESOURCE)((char *)v89 + 24));
        KeLeaveCriticalRegion();
        if ( (int)SessionViewOwner < 0 )
LABEL_152:
          *(_DWORD *)(a4 + 2052) &= ~0x2000u;
        else
          *(_DWORD *)(a4 + 2052) = (v113[0] != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
        MonitorReleaseMonitorHandle(v56, v121, DxgkGetAdapterDeviceDesc);
      }
    }
LABEL_129:
    *(_DWORD *)(a4 + 2052) &= ~0x400u;
    v80 = 4000LL * a2;
    v81 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v56 + 365) + 128LL) + v80 + 3780);
    *(_QWORD *)(a4 + 2032) = v81;
    if ( v81 )
    {
      _mm_lfence();
      v56 = v119;
      if ( *(_DWORD *)(*((_QWORD *)v119 + 365)
                     + 80LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v119 + 365) + 128LL) + v80 + 3780)
                     + 872) == 1 )
      {
        *(_DWORD *)(a4 + 2036) = 1;
      }
      else
      {
        WdLogSingleEntry1(1LL, 7085LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid DXGK_SYNC_LOCK_STYLE, fallback to disable the output SyncLock.",
          7085LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)(a4 + 2032) = 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(a4 + 1916) = -1;
    SessionViewOwner = 0LL;
    *(_OWORD *)(a4 + 1644) = 0LL;
    *(_OWORD *)(a4 + 1952) = 0LL;
    *(_QWORD *)(a4 + 1924) = 0LL;
    *(_QWORD *)(a4 + 1932) = 5LL;
    *(_DWORD *)(a4 + 1940) = 1;
    *(_QWORD *)(a4 + 1944) = 1LL;
    *(_QWORD *)(a4 + 1968) = 0LL;
    SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  }
LABEL_162:
  v92 = (_WORD *)(a4 + 48);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)v56 + 108);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)v56 + 103);
  *(_DWORD *)(a4 + 28) = *((_DWORD *)v56 + 104);
  *(_DWORD *)(a4 + 32) = *((_DWORD *)v56 + 105);
  *(_DWORD *)(a4 + 36) = *((_DWORD *)v56 + 106);
  *(_DWORD *)(a4 + 40) = *((_DWORD *)v56 + 107);
  *(_DWORD *)(a4 + 824) = (*((_DWORD *)v56 + 109) >> 7) & 1;
  *(_DWORD *)(a4 + 828) = *((_DWORD *)v56 + 72) > 1u;
  *(_DWORD *)(a4 + 44) = *((_DWORD *)v56 + 705);
  v93 = *((_QWORD *)v56 + 217);
  if ( v93 )
  {
    v94 = v93 - (_QWORD)v92;
    v95 = 128LL;
    do
    {
      if ( v95 == -2147483518 )
        break;
      v96 = *(_WORD *)((char *)v92 + v94);
      if ( !v96 )
        break;
      *v92++ = v96;
      --v95;
    }
    while ( v95 );
    v97 = v92 - 1;
    if ( v95 )
      v97 = v92;
    *v97 = 0;
  }
  else if ( a4 != -48 )
  {
    *v92 = 0;
  }
  v98 = (unsigned __int16 *)*((_QWORD *)v56 + 218);
  v99 = (_WORD *)(a4 + 304);
  v100 = 260LL;
  v101 = ((unsigned __int64)*v98 >> 1) - 260;
  v102 = *((_QWORD *)v98 + 1) - (a4 + 304);
  do
  {
    if ( !(v101 + v100) )
      break;
    v103 = *(_WORD *)((char *)v99 + v102);
    if ( !v103 )
      break;
    *v99++ = v103;
    --v100;
  }
  while ( v100 );
  v104 = v99 - 1;
  if ( v100 )
    v104 = v99;
  *v104 = 0;
  v105 = 0LL;
  if ( (*((_DWORD *)v56 + 109) & 0x100) != 0 )
    v105 = v7;
  *(_QWORD *)(a4 + 2044) = v105;
  if ( v129 )
  {
    v106 = (char *)v128 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v128 + 38);
    ExReleasePushLockSharedEx(v106, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v128 + 2), v128);
  }
LABEL_184:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  if ( v142 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v141);
  v107 = v150;
  if ( v150 )
  {
    if ( v151 )
    {
      COREACCESS::Release((COREACCESS *)v148);
      v107 = v150;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v107 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v107 + 2), v107);
  }
  v108 = v145;
  if ( v145 )
  {
    if ( v146 )
    {
      COREACCESS::Release((COREACCESS *)v143);
      v108 = v145;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v108 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
  }
  DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v113[2] = 0;
    v113[1] = 0;
    v109 = DxgkpAdapterCheckStereoMode(a1, a2, &v113[1], &v113[2]);
    if ( v109 < 0 )
      WdLogSingleEntry1(3LL, v109);
    else
      *(_DWORD *)(a4 + 2052) = (v113[2] != 0 ? 8 : 0) | (v113[1] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
  }
LABEL_208:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v130);
  if ( v132 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v110, v130);
  return v4;
}
