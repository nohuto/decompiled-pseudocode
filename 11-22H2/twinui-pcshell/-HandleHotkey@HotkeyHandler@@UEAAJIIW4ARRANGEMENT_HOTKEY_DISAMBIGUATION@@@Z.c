/*
 * XREFs of ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004C2A0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18019140C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18058ED54 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_18058ED54.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180667060 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ??$HotkeyPressed@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z @ 0x180675534 (--$HotkeyPressed@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z.c)
 *     ??$StartEndWindowStates@II@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI0@Z @ 0x1806756F4 (--$StartEndWindowStates@II@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI0@Z.c)
 *     ??$TraversedMonitors@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z @ 0x180675794 (--$TraversedMonitors@I@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI@Z.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1806759B8 (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x1806759E4 (--1WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180675A10 (--4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x180675ACC (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x180675D34 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x180675E58 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?SnappingModeForAction@HotkeyHandler@@AEAA?AW4WINDOW_SNAPPING_MODE@@W4SnapAction@1@@Z @ 0x180677138 (-SnappingModeForAction@HotkeyHandler@@AEAA-AW4WINDOW_SNAPPING_MODE@@W4SnapAction@1@@Z.c)
 *     ?StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ @ 0x1806771A0 (-StartActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ @ 0x180677244 (-StartActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x1806779C4 (-TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA-AV12@XZ.c)
 *     ?WindowArrangementHotkeyIgnoredForDeviceLockdown@CSnapComponentTelemetry@@SAXXZ @ 0x180677A00 (-WindowArrangementHotkeyIgnoredForDeviceLockdown@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?WindowArrangementHotkeyIgnoredForTabletMode@CSnapComponentTelemetry@@SAXXZ @ 0x180677A78 (-WindowArrangementHotkeyIgnoredForTabletMode@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180677AF0 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x180677C40 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 *     ?_SnapWindowToLocation@HotkeyHandler@@AEAAJPEAUHWND__@@PEAUIImmersiveMonitor@@W4SNAP_LOCATION@@@Z @ 0x180677C74 (-_SnapWindowToLocation@HotkeyHandler@@AEAAJPEAUHWND__@@PEAUIImmersiveMonitor@@W4SNAP_LOCATION@@@.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180686FD8 (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1807461F0 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall HotkeyHandler::HandleHotkey(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // r13
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v14; // eax
  const struct _GUID *v15; // r8
  int v16; // eax
  DWORD v17; // edx
  int Instance; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  HWND v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // di
  SnapLayoutHelpers *v25; // rcx
  unsigned int v26; // esi
  BOOL v27; // r14d
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, BOOL, _QWORD, __int64 *); // rdi
  __int64 *v30; // rbx
  _QWORD *v31; // rax
  int v32; // eax
  char v33; // bl
  int v34; // edi
  int v35; // eax
  wil::details::in1diag3 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdi
  int (__fastcall *v39)(__int64, HWND, ApplicationViewHelpers **); // rbx
  struct IApplicationView *v40; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v42; // eax
  DWORD v43; // edx
  int v45; // eax
  __int64 *v46; // r8
  int *v47; // rdx
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r9
  int v54; // eax
  int v55; // eax
  char v56; // [rsp+40h] [rbp-C0h]
  struct IImmersiveApplication *v57; // [rsp+48h] [rbp-B8h] BYREF
  char v58; // [rsp+50h] [rbp-B0h]
  char v59; // [rsp+51h] [rbp-AFh]
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  void *v61; // [rsp+60h] [rbp-A0h] BYREF
  ApplicationViewHelpers *v62; // [rsp+68h] [rbp-98h] BYREF
  void *ppvOut; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+78h] [rbp-88h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveMonitor *v66; // [rsp+88h] [rbp-78h] BYREF
  int pvParam; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  char v70; // [rsp+A8h] [rbp-58h]
  HWND v71; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  __int128 v74; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v75[320]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v76[40]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v77[40]; // [rsp+350h] [rbp+250h] BYREF
  _QWORD v78[40]; // [rsp+490h] [rbp+390h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+618h] [rbp+518h]

  LODWORD(v60) = a3;
  v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), &v64);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 1;
    if ( v64 == 1 && !IsPPIEdition() )
    {
      CSnapComponentTelemetry::WindowArrangementHotkeyIgnoredForTabletMode();
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 408) )
    {
      CSnapComponentTelemetry::WindowArrangementHotkeyIgnoredForDeviceLockdown();
      return 0LL;
    }
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v77,
      (__int64)"WindowArrangementHotkeyProcessing");
    v77[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::`vftable';
    CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::StartActivity((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v77);
    v69 = a1;
    v70 = 1;
    v66 = 0LL;
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v66);
    v14 = v12(v11, AddressOf);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11E,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v14);
LABEL_113:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
      if ( v10 )
        HotkeyHandler::_ResetState((HotkeyHandler *)a1);
      CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::~WindowArrangementHotkeyProcessing((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v77);
      return v9;
    }
    v61 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
    v16 = CSnappedWindow::s_CreateInstance(v66, *(struct IApplicationView **)(a1 + 40), v15, &v61);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v16);
LABEL_112:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
      goto LABEL_113;
    }
    if ( !a2 && a3 == 8 || a4 == 1 )
    {
      if ( *(_BYTE *)(a1 + 80) )
        HotkeyHandler::_OnHotkeyModeEnd(a1, v61, a4);
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v77,
        v17);
      v10 = 0;
      v9 = 0;
      goto LABEL_112;
    }
    if ( *(_BYTE *)(a1 + 80) )
    {
      v19 = a1 + 88;
      v68 = (_QWORD *)(a1 + 88);
    }
    else
    {
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v78,
        (__int64)"WindowArrangementHotkeyMode");
      v78[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartActivity((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v78);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 32));
      Instance = CSnappedWindowModel_CreateInstance(
                   *(_QWORD *)(a1 + 40),
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 48),
                   1,
                   (__int64)&GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06,
                   (_QWORD *)(a1 + 32));
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x143,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)Instance);
      *(_BYTE *)(a1 + 80) = 1;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v76,
        (__int64)v78,
        0);
      v76[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
      v19 = a1 + 88;
      v68 = (_QWORD *)(a1 + 88);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::operator=((_QWORD *)(a1 + 88), (__int64)v76);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v76);
      CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v78);
    }
    CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToCurrentThread(v19, v75);
    switch ( a2 )
    {
      case '%':
        v20 = 0;
        break;
      case '\'':
        v20 = 1;
        break;
      case '&':
        v20 = 2;
        break;
      case '(':
        v20 = 3;
        break;
      default:
        v9 = -2147024809;
        v22 = 331LL;
        goto LABEL_110;
    }
    LODWORD(v57) = v20;
    CSnapComponentTelemetry::WindowArrangementHotkeyMode::HotkeyPressed<unsigned int>((__int64)v75, (int *)&v57);
    v21 = (HWND)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v61 + 80LL))(v61);
    v71 = v21;
    if ( !v21 )
    {
      v9 = -2147019873;
      v22 = 335LL;
LABEL_110:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)v9);
      goto LABEL_111;
    }
    v59 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v61 + 32LL))(v61);
    v58 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v61 + 40LL))(v61);
    v24 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v61 + 24LL))(v61);
    v56 = v24;
    if ( v24 && SystemParametersInfoW(0x82u, 0, &pvParam, 0) )
    {
      v23 = (unsigned int)-pvParam;
      v56 = pvParam != 0 ? v24 : 0;
    }
    v26 = HotkeyHandler::DetermineCurrentSnapState(v23, (__int64)v61);
    LODWORD(v57) = v26;
    if ( !v26 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v61 + 96LL))(v61) )
        v26 = 17;
      else
        v26 = ((*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v61 + 104LL))(v61) != 0) + 15;
      LODWORD(v57) = v26;
    }
    HotkeyHandler::DetermineNewSnapState(v25, &v62, v26, v20, v60, (__int64 *)v66);
    (*(void (__fastcall **)(void *, IUnknown **))(*(_QWORD *)v61 + 64LL))(v61, &punk);
    if ( HIDWORD(v62) )
    {
      v27 = HIDWORD(v62) == 1;
      ppvOut = 0LL;
      v28 = *(_QWORD *)(a1 + 48);
      v29 = *(__int64 (__fastcall **)(__int64, BOOL, _QWORD, __int64 *))(*(_QWORD *)v28 + 104LL);
      v30 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&ppvOut);
      v31 = (_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v61 + 64LL))(v61, &v60);
      v32 = v29(v28, v27, *v31, v30);
      if ( v32 >= 0 )
      {
        v33 = 1;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x176,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v32);
        v33 = 0;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
      if ( v33 )
      {
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(
          (__int64 *)&punk,
          (__int64 *)&ppvOut);
        LODWORD(v60) = HIDWORD(v62);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::TraversedMonitors<unsigned int>((__int64)v75, (int *)&v60);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v26 = (unsigned int)v57;
      v21 = v71;
    }
    v34 = (int)v62;
    if ( !(_DWORD)v62 )
      goto LABEL_74;
    if ( v26 == 15 && (_DWORD)v62 == 6 )
    {
      if ( v56 )
        goto LABEL_84;
      v34 = 16;
    }
    switch ( v34 )
    {
      case 17:
        if ( v58 )
        {
          if ( v64 == 1 )
          {
            v35 = HotkeyHandler::_SnapWindowToLocation(a1, v21, punk, 2LL);
            v36 = retaddr;
            if ( v35 < 0 )
            {
              v37 = 396LL;
LABEL_60:
              wil::details::in1diag3::_Log_Hr(
                v36,
                (void *)v37,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                (const char *)(unsigned int)v35);
            }
          }
          else
          {
            v35 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), v21);
            v36 = retaddr;
            if ( v35 < 0 )
            {
              v37 = 402LL;
              goto LABEL_60;
            }
          }
          LODWORD(v60) = 17;
LABEL_81:
          LODWORD(v57) = v26;
          v46 = &v60;
          v47 = (int *)&v57;
LABEL_82:
          CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
            (__int64)v75,
            v47,
            (int *)v46);
        }
LABEL_74:
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v76,
          (__int64)v75,
          0);
        v76[0] = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::operator=(v68, (__int64)v76);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v76);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v77,
          v43);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v75);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v61);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
        CSnapComponentTelemetry::WindowArrangementHotkeyProcessing::~WindowArrangementHotkeyProcessing((CSnapComponentTelemetry::WindowArrangementHotkeyProcessing *)v77);
        return 0LL;
      case 16:
        if ( v64 == 1 )
          goto LABEL_74;
        if ( v59 )
        {
          PostMessageW(v21, 0x112u, 0xF020uLL, 0LL);
          LODWORD(v60) = 16;
          goto LABEL_81;
        }
        v62 = 0LL;
        v38 = *(_QWORD *)(a1 + 56);
        v39 = *(int (__fastcall **)(__int64, HWND, ApplicationViewHelpers **))(*(_QWORD *)v38 + 48LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v62);
        if ( v39(v38, v21, &v62) < 0 )
        {
LABEL_73:
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v62);
          goto LABEL_74;
        }
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        if ( IUnknown_QueryService(
               punk,
               (const GUID *const)&SID_FullScreenManager,
               &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
               &ppvOut) < 0 )
        {
LABEL_72:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_73;
        }
        ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v62, v40);
        v57 = ApplicationFromView;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v57);
        if ( !ApplicationFromView )
        {
LABEL_71:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
          goto LABEL_72;
        }
        v42 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64 *))(*(_QWORD *)ppvOut + 64LL))(
                ppvOut,
                ApplicationFromView,
                &v60);
        if ( v42 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1AC,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
            (const char *)(unsigned int)v42);
          goto LABEL_71;
        }
        if ( !(_DWORD)v60 )
          goto LABEL_71;
        v45 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 56LL))(
                ppvOut,
                ApplicationFromView,
                5LL);
        v9 = v45;
        if ( v45 >= 0 )
          goto LABEL_71;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v45);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v62);
LABEL_108:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
LABEL_111:
        CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v75);
        goto LABEL_112;
      case 15:
        PostMessageW(v21, 0x112u, 0xF120uLL, 0LL);
        LODWORD(v60) = 15;
        goto LABEL_81;
    }
    if ( !v56 )
      goto LABEL_74;
LABEL_84:
    v74 = 0LL;
    v48 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[3].Release)(punk, &v74);
    v9 = v48;
    if ( v48 < 0 )
    {
      v49 = (unsigned int)v48;
      v50 = 448LL;
LABEL_107:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)v49);
      goto LABEL_108;
    }
    v51 = ((__int64 (__fastcall *)(IUnknown *, __int64 *, void **))punk->lpVtbl[4].Release)(punk, &v60, &ppvOut);
    v9 = v51;
    if ( v51 < 0 )
    {
      v49 = (unsigned int)v51;
      v50 = 449LL;
      goto LABEL_107;
    }
    HotkeyHandler::DetermineRectForSnapAction(
      a1,
      (__int64)&v71,
      (__int64)v61,
      (SnapRectHelpers *)punk,
      v34,
      (const struct Geometry::CRect *)&v74,
      v60);
    if ( (int)v71 >= v72 || SHIDWORD(v71) >= v73 )
    {
      v9 = -2147467259;
      v49 = 2147500037LL;
      v50 = 455LL;
      goto LABEL_107;
    }
    *(_DWORD *)(a1 + 412) = HotkeyHandler::SnappingModeForAction(v52, (unsigned int)v34);
    if ( v64 != 1 )
    {
      v55 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND *, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
              *(_QWORD *)(a1 + 16),
              v21,
              &v71,
              0LL);
      v9 = v55;
      if ( v55 < 0 )
      {
        v49 = (unsigned int)v55;
        v50 = 474LL;
        goto LABEL_107;
      }
      goto LABEL_105;
    }
    if ( v34 > 6 )
    {
      if ( v34 != 7 && v34 != 8 )
        goto LABEL_105;
    }
    else
    {
      if ( v34 == 6 )
        goto LABEL_105;
      if ( v34 != 1 )
      {
        if ( v34 == 2 || v34 != 3 && (unsigned int)(v34 - 4) > 1 )
          goto LABEL_105;
        v53 = 1LL;
        goto LABEL_101;
      }
    }
    v53 = 0LL;
LABEL_101:
    v54 = HotkeyHandler::_SnapWindowToLocation(a1, v21, punk, v53);
    v9 = v54;
    if ( v54 < 0 )
    {
      v49 = (unsigned int)v54;
      v50 = 469LL;
      goto LABEL_107;
    }
LABEL_105:
    LODWORD(v57) = v34;
    LODWORD(v62) = v26;
    v46 = (__int64 *)&v57;
    v47 = (int *)&v62;
    goto LABEL_82;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x109,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
