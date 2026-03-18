/*
 * XREFs of ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0208314
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A8B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C7578 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z @ 0x1C0017224 (--0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006C720 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C019E0C4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C0208A00 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C0208A80 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1C0208B44 (--0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z.c)
 *     ?GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z @ 0x1C0208C70 (-GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C9D1C (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03CB8B4 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03CBA6C (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x1C03CC1C8 (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03CC508 (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorNoDriver(
        struct DxgMonitor::IMonitorComponentParent *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6,
        unsigned int a7,
        __int64 a8)
{
  int v9; // ebp
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  bool v16; // cf
  char v17; // al
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbp
  VIDPN_MGR *v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rax
  DxgMonitor::MonitorPnpState *v27; // rdi
  _QWORD *v29; // rax
  DxgMonitor::MonitorDataStore *v30; // rcx
  DxgMonitor::MonitorDescriptorState *v31; // rax
  __int64 v32; // rax
  struct _ERESOURCE *v33; // rdi
  DxgMonitor::MonitorColorState *v34; // rax
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  void *v39; // rcx
  DxgMonitor::MonitorModes *v40; // rax
  __int64 v41; // rax
  DxgMonitor::MonitorModes *v42; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rdi
  DxgMonitor::MonitorGammaState *v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  DxgMonitor::MonitorUsb4State *v49; // rdi
  DxgMonitor::MonitorDisplayPortState *v50; // rax
  DxgMonitor::MonitorDisplayPortState *v51; // rax
  void *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v56; // edi
  __int64 v57; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v58; // [rsp+90h] [rbp+18h]

  v58 = a3;
  v9 = a3;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a7;
  *(_QWORD *)(v12 + 24) = a1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( a4 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
  if ( a4 )
LABEL_7:
    WdLogSingleEntry0(1LL);
LABEL_8:
  *((_DWORD *)a1 + 45) = v9;
  *((_DWORD *)a1 + 78) = v13;
  *((_DWORD *)a1 + 79) = v13;
  v14 = *a2;
  *a2 = 0LL;
  v15 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 24) = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  if ( (_BYTE)a5 )
  {
    v16 = a6 != 0;
    a6 = -a6;
    *((_BYTE *)a1 + 176) = *((_BYTE *)a1 + 176) & 0xFB | (v16 ? 0 : 4) | 2;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 21) + 88LL))(*((_QWORD *)a1 + 21));
  v18 = *((_DWORD *)a1 + 45);
  v19 = -1;
  v20 = (v17 != 0 ? 0x40 : 0) | *((_BYTE *)a1 + 177) & 0xBF;
  a7 = -1;
  *((_BYTE *)a1 + 177) = v20;
  v21 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 24LL);
  v22 = *(_QWORD *)(v21 + 16);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 2920);
    if ( v23 )
    {
      v24 = *(VIDPN_MGR **)(v23 + 104);
      if ( v24 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v57, (__int64)v24);
        VIDPN_MGR::GetTargetPowerComponentIndex(v24, v18, &a7);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v57 + 40));
        v19 = a7;
      }
      else
      {
        WdLogSingleEntry1(2LL, *(_QWORD *)(v21 + 16));
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, *(_QWORD *)(v21 + 16));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v22,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 21) + 24LL) + 16LL) + 3032LL);
  v26 = operator new[](0x50uLL, 0x4D677844u, 64LL);
  if ( v26 )
  {
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_QWORD *)(v26 + 40) = 0LL;
    *(_QWORD *)v26 = a1;
    *(_BYTE *)(v26 + 16) = 0;
    *(_OWORD *)(v26 + 48) = 0LL;
    *(_OWORD *)(v26 + 64) = 0LL;
    *(_QWORD *)(v26 + 8) = a4;
  }
  else
  {
    v26 = 0LL;
  }
  v27 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)a1 + 25);
  *((_QWORD *)a1 + 25) = v26;
  if ( v27 )
  {
    DxgMonitor::MonitorPnpState::~MonitorPnpState(v27);
    operator delete(v27);
  }
  if ( !*((_QWORD *)a1 + 25) )
    goto LABEL_25;
  v29 = (_QWORD *)operator new[](0x18uLL, 0x4D677844u, 256LL);
  if ( v29 )
  {
    v29[1] = a1;
    *v29 = &DxgMonitor::MonitorDataStore::`vftable';
    v29[2] = (char *)a1 + 8;
  }
  else
  {
    v29 = 0LL;
  }
  v30 = (DxgMonitor::MonitorDataStore *)*((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 26) = v29;
  if ( v30 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v30, 1);
  if ( !*((_QWORD *)a1 + 26) )
    goto LABEL_25;
  v31 = (DxgMonitor::MonitorDescriptorState *)operator new[](0xB8uLL, 0x4D677844u, 64LL);
  if ( v31 )
    v32 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
            v31,
            a1,
            *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v32 = 0LL;
  v33 = (struct _ERESOURCE *)*((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 27) = v32;
  if ( v33 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v33);
    operator delete(v33);
  }
  if ( !*((_QWORD *)a1 + 27) )
    goto LABEL_25;
  v34 = (DxgMonitor::MonitorColorState *)operator new[](0x1B0uLL, 0x4D677844u, 256LL);
  if ( v34 )
    v35 = DxgMonitor::MonitorColorState::MonitorColorState(v34, a1, *((struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v35 = 0LL;
  v36 = (void *)*((_QWORD *)a1 + 28);
  *((_QWORD *)a1 + 28) = v35;
  if ( v36 )
    operator delete(v36);
  if ( !*((_QWORD *)a1 + 28) )
    goto LABEL_25;
  v37 = operator new[](0x18uLL, 0x4D677844u, 256LL);
  if ( v37 )
  {
    v38 = *((_QWORD *)a1 + 26);
    *(_WORD *)(v37 + 20) = 0;
    *(_QWORD *)(v37 + 8) = v38;
    *(_QWORD *)v37 = a1;
    *(_DWORD *)(v37 + 16) = 0;
  }
  else
  {
    v37 = 0LL;
  }
  v39 = (void *)*((_QWORD *)a1 + 30);
  *((_QWORD *)a1 + 30) = v37;
  if ( v39 )
    operator delete(v39);
  if ( !*((_QWORD *)a1 + 30) )
    goto LABEL_25;
  v40 = (DxgMonitor::MonitorModes *)operator new[](0xF8uLL, 0x4D677844u, 64LL);
  if ( v40 )
    v41 = DxgMonitor::MonitorModes::MonitorModes(v40, a1, *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v41 = 0LL;
  v42 = (DxgMonitor::MonitorModes *)*((_QWORD *)a1 + 29);
  *((_QWORD *)a1 + 29) = v41;
  if ( v42 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v42);
    operator delete(v42);
  }
  if ( !*((_QWORD *)a1 + 29) )
    goto LABEL_25;
  v43 = (_QWORD *)operator new[](0x90uLL, 0x4D677844u, 64LL);
  v44 = v43;
  if ( v43 )
  {
    *v43 = a1;
    v43[1] = (char *)a1 + 16;
    memset(v43 + 2, 0, 0x40uLL);
    *((_DWORD *)v44 + 29) = -1;
    v44[11] = 0LL;
    v44[12] = 0LL;
    v44[13] = 0LL;
    *((_DWORD *)v44 + 28) = 0;
    *((_DWORD *)v44 + 30) = 1;
    v44[16] = 0LL;
    *((_BYTE *)v44 + 136) = 0;
  }
  else
  {
    v44 = 0LL;
  }
  v45 = (DxgMonitor::MonitorGammaState *)*((_QWORD *)a1 + 31);
  *((_QWORD *)a1 + 31) = v44;
  if ( v45 )
  {
    DxgMonitor::MonitorGammaState::~MonitorGammaState(v45);
    operator delete(v45);
  }
  if ( !*((_QWORD *)a1 + 31) )
    goto LABEL_25;
  v46 = operator new[](0x68uLL, 0x4D677844u, 64LL);
  v47 = v46;
  if ( v46 )
  {
    v48 = a8;
    *(_QWORD *)v46 = a1;
    *(_BYTE *)(v46 + 8) = 0;
    *(_OWORD *)(v46 + 12) = 0LL;
    *(_QWORD *)(v46 + 32) = 0LL;
    *(_OWORD *)(v46 + 40) = 0LL;
    *(_WORD *)(v46 + 56) = 0;
    *(_QWORD *)(v46 + 64) = 0LL;
    *(_DWORD *)(v46 + 72) = v19;
    *(_QWORD *)(v46 + 80) = v25;
    *(_BYTE *)(v46 + 88) = 0;
    *(_QWORD *)(v46 + 96) = 0LL;
    if ( v48 )
    {
      *(_BYTE *)(v46 + 8) = 1;
      *(_OWORD *)(v46 + 12) = *(_OWORD *)v48;
      *(_QWORD *)(v46 + 48) = *(_QWORD *)(v48 + 24);
      *(_WORD *)(v46 + 40) = *(_WORD *)(v48 + 16);
      *(_WORD *)(v46 + 42) = *(_WORD *)(v48 + 18);
    }
  }
  else
  {
    v47 = 0LL;
  }
  v49 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 33) = v47;
  if ( v49 )
  {
    DxgMonitor::MonitorUsb4State::~MonitorUsb4State(v49);
    operator delete(v49);
  }
  if ( !*((_QWORD *)a1 + 33) )
    goto LABEL_25;
  v50 = (DxgMonitor::MonitorDisplayPortState *)operator new[](0x28uLL, 0x4D677844u, 256LL);
  if ( v50 )
    v51 = DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(v50, a1);
  else
    v51 = 0LL;
  v52 = (void *)*((_QWORD *)a1 + 34);
  *((_QWORD *)a1 + 34) = v51;
  if ( v52 )
    operator delete(v52);
  if ( !*((_QWORD *)a1 + 34) )
    goto LABEL_25;
  if ( !(_BYTE)a5 )
    goto LABEL_82;
  v53 = operator new[](0x50uLL, 0x4D677844u, 64LL);
  if ( v53 )
  {
    *(_QWORD *)v53 = a1;
    *(_OWORD *)(v53 + 8) = 0LL;
    *(_DWORD *)(v53 + 24) = 0;
    *(_DWORD *)(v53 + 68) = -1;
    *(_QWORD *)(v53 + 40) = 0LL;
    *(_QWORD *)(v53 + 48) = 0LL;
    *(_QWORD *)(v53 + 56) = 0LL;
    *(_DWORD *)(v53 + 64) = 0;
    *(_DWORD *)(v53 + 72) = 9;
  }
  else
  {
    v53 = 0LL;
  }
  v54 = *((_QWORD *)a1 + 32);
  *((_QWORD *)a1 + 32) = v53;
  if ( v54 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(v54 + 32));
    operator delete((void *)v54);
  }
  if ( *((_QWORD *)a1 + 32) )
  {
LABEL_82:
    v55 = *((_QWORD *)a1 + 21);
    a5 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(*(_QWORD *)(v55 + 24) + 16LL), v58, &a5, 0LL) < 0 )
      WdLogSingleEntry0(1LL);
    v56 = a5;
    if ( a5 == D3DKMDT_VOT_UNINITIALIZED )
      WdLogSingleEntry0(1LL);
    *((_DWORD *)a1 + 46) = v56;
    return 0LL;
  }
  else
  {
LABEL_25:
    WdLogSingleEntry1(2LL, -1073741801LL);
    return 3221225495LL;
  }
}
