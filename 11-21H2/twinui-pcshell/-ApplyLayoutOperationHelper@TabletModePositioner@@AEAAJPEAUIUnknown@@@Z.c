/*
 * XREFs of ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180500628 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1805007B0 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180501430 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180502C98 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180505920 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180505E20 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805093C8 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1805095A0 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A244 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18011B224 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180237DD6 (-NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B35C0 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@0AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1804FF3AC (--$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetr.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1804FFE08 (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFF44 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804FFF70 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180502840 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ @ 0x1805044D0 (-HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ.c)
 *     ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x18050456C (-HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?LookForAndHandlePPIVtcAppSpecialWindows@TabletModePositioner@@AEAAJXZ @ 0x180505774 (-LookForAndHandlePPIVtcAppSpecialWindows@TabletModePositioner@@AEAAJXZ.c)
 *     ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x180505C48 (-PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONME.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1805069C8 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x180506A18 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180506D48 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x180507348 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180509AE4 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TabletModePositioner::ApplyLayoutOperationHelper(TabletModePositioner *this, struct IUnknown *a2)
{
  __int64 (__fastcall ***v3)(__int64, GUID *, struct IAppLayoutOperation **); // rdx
  __int64 v4; // r9
  unsigned int v5; // ebx
  int v6; // eax
  struct IAppLayoutOperation *v7; // rbx
  __int64 (__fastcall *v8)(struct IAppLayoutOperation *, __int64 *); // rdi
  int v9; // eax
  struct IAppLayoutOperation *v10; // rbx
  __int64 (__fastcall *v11)(struct IAppLayoutOperation *, TabletModePositionerHelpers **); // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  struct IAppLayoutOperation *v16; // rbx
  DWORD v17; // edx
  unsigned int v18; // r15d
  struct IAppLayoutOperation *v19; // rbx
  __int64 v20; // rcx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v21; // r9
  int v22; // eax
  TabletModePositionerHelpers *v23; // rbx
  __int64 (__fastcall *v24)(TabletModePositionerHelpers *, GUID *, void **); // rdi
  int v25; // eax
  __int64 v26; // rdx
  unsigned int i; // r12d
  struct IAppLayoutOperation *v28; // rbx
  int (__fastcall *v29)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rdi
  __int64 v30; // rbx
  int (__fastcall *v31)(__int64, GUID *, TabletModePositionerHelpers **); // rdi
  struct IApplicationView *v32; // rdx
  struct IApplicationView *v33; // rdx
  struct IApplicationView *v34; // rdx
  struct IApplicationView *v35; // rdx
  TabletModePositioner *v36; // rcx
  int v37; // eax
  int v38; // eax
  struct IAppLayoutOperation *v39; // rbx
  __int64 (__fastcall *v40)(struct IAppLayoutOperation *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  struct IAppLayoutOperation *v46; // rcx
  struct IAppLayoutOperation *v48; // [rsp+30h] [rbp-D0h] BYREF
  TabletModePositionerHelpers *v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationViewOperation *v52; // [rsp+50h] [rbp-B0h] BYREF
  TabletModePositionerHelpers *v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-94h] BYREF
  struct tagRECT v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+98h] [rbp-68h]
  int v60; // [rsp+9Ch] [rbp-64h]
  __m128i si128; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B4h] [rbp-4Ch]
  _BYTE v64[40]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v65[40]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  if ( !TabletModePositioner::IsTabletMode(this) )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99E,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007139FLL);
    return v5;
  }
  v48 = 0LL;
  v6 = (**v3)(v4, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, &v48);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A1,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_75;
  }
  v54 = 0LL;
  v7 = v48;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v48 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v54);
  v9 = v8(v7, &v54);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v53 = 0LL;
    v10 = v48;
    v11 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, TabletModePositionerHelpers **))(*(_QWORD *)v48 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v53);
    v12 = v11(v10, &v53);
    v5 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 2469LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v13);
LABEL_73:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v53);
      goto LABEL_74;
    }
    v15 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v48 + 96LL))(v48);
    v5 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v14 = 2472LL;
      goto LABEL_13;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 200LL))(
            *((_QWORD *)this + 31),
            v54,
            3LL) )
    {
      v5 = -2147024809;
      v13 = 2147942487LL;
      v14 = 2475LL;
      goto LABEL_13;
    }
    v16 = v48;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v65,
      (__int64)"ApplyLayoutOperationHelper");
    v65[0] = &TabletModeTraceLogging::ApplyLayoutOperationHelper::`vftable';
    TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
      (TabletModeTraceLogging::ApplyLayoutOperationHelper *)v65,
      v16);
    (*(void (__fastcall **)(TabletModePositionerHelpers *, _BYTE *))(*(_QWORD *)v53 + 24LL))(v53, v64);
    v18 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v48 + 80LL))(v48);
    v56 = v18;
    if ( (v18 & 0x10000) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut) >= 0 )
      {
        if ( (v18 & 0x2000000) != 0 )
        {
          v19 = v48;
          if ( *((struct IAppLayoutOperation **)this + 41) != v48 )
          {
            v49 = v48;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v49);
            v20 = *((_QWORD *)this + 41);
            *((_QWORD *)this + 41) = v19;
            if ( v20 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        else
        {
          CAutoAppTransitionRequest::CAutoAppTransitionRequest(
            (CAutoAppTransitionRequest *)&v57,
            *((struct IAppTransitionManager **)this + 49));
          CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
            (CAutoAppTransitionRequest *)&v57,
            v48,
            (struct IImmersiveMonitor *)ppvOut,
            v21);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54));
          CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)&v57);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (v18 & 1) != 0 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
      v22 = TabletModePositioner::HandleFlashDetection(this, v48);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9D4,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v22);
      ppvOut = 0LL;
      v23 = v53;
      v24 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, GUID *, void **))(*(_QWORD *)v53 + 192LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v25 = v24(v23, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &ppvOut);
      v5 = v25;
      if ( v25 < 0 )
      {
        v26 = 2520LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_72:
        TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper((TabletModeTraceLogging::ApplyLayoutOperationHelper *)v65);
        goto LABEL_73;
      }
      v25 = TabletModePositioner::SetAppLayout(this, (struct IAppLayout *)ppvOut);
      v5 = v25;
      if ( v25 < 0 )
      {
        v26 = 2521LL;
        goto LABEL_31;
      }
      v25 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)v48 + 24LL))(v48, &v55);
      v5 = v25;
      if ( v25 < 0 )
      {
        v26 = 2526LL;
        goto LABEL_31;
      }
      for ( i = 0; i < v55; ++i )
      {
        v50 = 0LL;
        v49 = 0LL;
        v28 = v48;
        v29 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v48 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v50);
        if ( v29(v28, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v50) >= 0
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v50 + 80LL))(v50)
           || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v50 + 88LL))(v50)) )
        {
          v30 = v50;
          v31 = *(int (__fastcall **)(__int64, GUID *, TabletModePositionerHelpers **))(*(_QWORD *)v50 + 32LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v49);
          if ( v31(v30, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v49) >= 0
            && TabletModePositionerHelpers::IsControlledView(v49, v32) )
          {
            v52 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
            if ( (int)TabletModePositioner::CreateAndInitApplicationViewOperation(this, v33, &v52) >= 0 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v50 + 88LL))(v50) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v52 + 96LL))(v52, 1LL);
                if ( (v18 & 8) != 0 )
                {
                  v58 = 0LL;
                  v59 = 0;
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                  v62 = 0;
                  v60 = 1;
                  v63 = 1;
                  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int128 *))(*(_QWORD *)v52 + 144LL))(
                    v52,
                    &v58);
                }
                v57 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v50 + 72LL))(v50, 0LL, &v57);
                v37 = TabletModePositioner::PositionView(
                        v36,
                        v35,
                        &v57,
                        (const struct LAYOUT_ENVIRONMENT_DETAILS *)v64,
                        v52);
                if ( v37 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x9FF,
                    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                    (const char *)(unsigned int)v37);
              }
              else if ( TabletModePositionerHelpers::IsOperableView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v49,
                          v34) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v52 + 96LL))(v52, 0LL);
              }
              (*(void (__fastcall **)(TabletModePositionerHelpers *, struct IApplicationViewOperation *))(*(_QWORD *)v49 + 320LL))(
                v49,
                v52);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52);
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v49);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v50);
      }
      if ( (v18 & 0x20) == 0
        && (TabletModePositioner::ShouldShowLauncher(this)
         || TabletModePositioner::ShouldShowSnapAssist(this, (v18 & 2) != 0)) )
      {
        v38 = TabletModePositioner::ShowLauncherOrSnapAssistInHole(this, v18);
        if ( v38 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA1D,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v38);
      }
      else if ( (v18 & 2) != 0 && !*((_QWORD *)this + 36) )
      {
        v49 = 0LL;
        v39 = v48;
        v40 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v48 + 64LL);
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v49);
        v42 = v40(v39, AddressOf);
        if ( v42 >= 0 )
          (*(void (__fastcall **)(TabletModePositionerHelpers *))(*(_QWORD *)v49 + 48LL))(v49);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA27,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v42);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v49);
      }
      v43 = (*(__int64 (__fastcall **)(_QWORD, TabletModePositionerHelpers *))(**((_QWORD **)this + 39) + 24LL))(
              *((_QWORD *)this + 39),
              v53);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA2F,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v43);
      if ( !(*(unsigned int (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64))(*(_QWORD *)v53 + 200LL))(
              v53,
              v54,
              3LL) )
      {
        *((_BYTE *)this + 240) = 0;
        TabletModePositioner::HandleAutoRotationLock(this);
        v44 = TabletModePositioner::NotifyAppLayoutChanged((IUnknown **)this, v48);
        if ( v44 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA3E,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v44);
        v49 = v53;
        v50 = v54;
        TabletModeTelemetry::SplitViewCreated<IAppLayout *,IAppLayout *,enum APP_LAYOUT_OPERATION_ACTIONS const &>(
          &v50,
          &v49,
          &v56);
      }
      if ( IsSurfaceHubWithWin32VtcEnabled() )
      {
        v45 = TabletModePositioner::LookForAndHandlePPIVtcAppSpecialWindows(this);
        if ( v45 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA45,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v45);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v65, v17);
    v5 = 0;
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A3,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_74:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v54);
LABEL_75:
  v46 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v46 + 16LL))(v46);
  }
  return v5;
}
