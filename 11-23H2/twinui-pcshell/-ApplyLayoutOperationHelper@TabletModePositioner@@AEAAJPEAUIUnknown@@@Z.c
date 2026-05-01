/*
 * XREFs of ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4
 * Callers:
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180065BA0 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805B8DE8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1805B8F70 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805B9BF0 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805BB474 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1805BE060 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1805C141C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805C1890 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1805C1A68 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805C2734 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA56C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x180107880 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802E6468 (-NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FD90 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@0AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1805B7C4C (--$SplitViewCreated@PEAUIAppLayout@@PEAU1@AEBW4APP_LAYOUT_OPERATION_ACTIONS@@@TabletModeTelemetr.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1805B858C (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B8700 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1805B872C (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ @ 0x1805BCA68 (-HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ.c)
 *     ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1805BCB00 (-HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?LookForAndHandlePPIVtcAppSpecialWindows@TabletModePositioner@@AEAAJXZ @ 0x1805BDD04 (-LookForAndHandlePPIVtcAppSpecialWindows@TabletModePositioner@@AEAAJXZ.c)
 *     ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x1805BDF0C (-PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONME.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1805BEC08 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1805BEC58 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1805BEF88 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1805BF870 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805C1FA4 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
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
  unsigned int v17; // r15d
  struct IAppLayoutOperation *v18; // rbx
  __int64 v19; // rcx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v20; // r9
  int v21; // eax
  TabletModePositionerHelpers *v22; // rbx
  __int64 (__fastcall *v23)(TabletModePositionerHelpers *, GUID *, void **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  unsigned int i; // r12d
  struct IAppLayoutOperation *v27; // rbx
  int (__fastcall *v28)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rdi
  __int64 v29; // rbx
  int (__fastcall *v30)(__int64, GUID *, TabletModePositionerHelpers **); // rdi
  struct IApplicationView *v31; // rdx
  struct IApplicationView *v32; // rdx
  struct IApplicationView *v33; // rdx
  struct IApplicationView *v34; // rdx
  TabletModePositioner *v35; // rcx
  int v36; // eax
  int v37; // eax
  struct IAppLayoutOperation *v38; // rbx
  __int64 (__fastcall *v39)(struct IAppLayoutOperation *, TabletModePositionerHelpers **); // rdi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  struct IAppLayoutOperation *v44; // rcx
  TabletModePositionerHelpers *v46; // [rsp+30h] [rbp-D0h] BYREF
  struct IAppLayoutOperation *v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationViewOperation *v50; // [rsp+50h] [rbp-B0h] BYREF
  TabletModePositionerHelpers *v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v54[3]; // [rsp+6Ch] [rbp-94h] BYREF
  struct tagRECT v55; // [rsp+78h] [rbp-88h] BYREF
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  int v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A4h] [rbp-5Ch]
  __m128i si128; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  _BYTE v62[48]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v63[40]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  if ( !TabletModePositioner::IsTabletMode(this) )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007139FLL);
    return v5;
  }
  v47 = 0LL;
  v6 = (**v3)(v4, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, &v47);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A0,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_75;
  }
  v52 = 0LL;
  v7 = v47;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v47 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v52);
  v9 = v8(v7, &v52);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v51 = 0LL;
    v10 = v47;
    v11 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, TabletModePositionerHelpers **))(*(_QWORD *)v47 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v51);
    v12 = v11(v10, &v51);
    v5 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 2468LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v13);
LABEL_73:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v51);
      goto LABEL_74;
    }
    v15 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v47 + 96LL))(v47);
    v5 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v14 = 2471LL;
      goto LABEL_13;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 200LL))(
            *((_QWORD *)this + 31),
            v52,
            3LL) )
    {
      v5 = -2147024809;
      v13 = 2147942487LL;
      v14 = 2474LL;
      goto LABEL_13;
    }
    v16 = v47;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v63,
      (__int64)"ApplyLayoutOperationHelper");
    v63[0] = &TabletModeTraceLogging::ApplyLayoutOperationHelper::`vftable';
    TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
      (TabletModeTraceLogging::ApplyLayoutOperationHelper *)v63,
      v16);
    (*(void (__fastcall **)(TabletModePositionerHelpers *, _BYTE *))(*(_QWORD *)v51 + 24LL))(v51, v62);
    v17 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v47 + 80LL))(v47);
    v54[0] = v17;
    if ( (v17 & 0x10000) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut) >= 0 )
      {
        if ( (v17 & 0x2000000) != 0 )
        {
          v18 = v47;
          if ( *((struct IAppLayoutOperation **)this + 41) != v47 )
          {
            v46 = v47;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v46);
            v19 = *((_QWORD *)this + 41);
            *((_QWORD *)this + 41) = v18;
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
        else
        {
          CAutoAppTransitionRequest::CAutoAppTransitionRequest(
            (CAutoAppTransitionRequest *)&v55,
            *((struct IAppTransitionManager **)this + 49));
          CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
            (CAutoAppTransitionRequest *)&v55,
            v47,
            (struct IImmersiveMonitor *)ppvOut,
            v20);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54));
          CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)&v55);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (v17 & 1) != 0 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
      v21 = TabletModePositioner::HandleFlashDetection(this, v47);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9D3,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v21);
      ppvOut = 0LL;
      v22 = v51;
      v23 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, GUID *, void **))(*(_QWORD *)v51 + 192LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v24 = v23(v22, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &ppvOut);
      v5 = v24;
      if ( v24 < 0 )
      {
        v25 = 2519LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_72:
        TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper((TabletModeTraceLogging::ApplyLayoutOperationHelper *)v63);
        goto LABEL_73;
      }
      v24 = TabletModePositioner::SetAppLayout(this, (struct IAppLayout *)ppvOut);
      v5 = v24;
      if ( v24 < 0 )
      {
        v25 = 2520LL;
        goto LABEL_31;
      }
      v24 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)v47 + 24LL))(v47, &v53);
      v5 = v24;
      if ( v24 < 0 )
      {
        v25 = 2525LL;
        goto LABEL_31;
      }
      for ( i = 0; i < v53; ++i )
      {
        v48 = 0LL;
        v46 = 0LL;
        v27 = v47;
        v28 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v47 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
        if ( v28(v27, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v48) >= 0
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 80LL))(v48)
           || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 88LL))(v48)) )
        {
          v29 = v48;
          v30 = *(int (__fastcall **)(__int64, GUID *, TabletModePositionerHelpers **))(*(_QWORD *)v48 + 32LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v46);
          if ( v30(v29, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v46) >= 0
            && TabletModePositionerHelpers::IsControlledView(v46, v31) )
          {
            v50 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
            if ( (int)TabletModePositioner::CreateAndInitApplicationViewOperation(this, v32, &v50) >= 0 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 88LL))(v48) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v50 + 96LL))(v50, 1LL);
                if ( (v17 & 8) != 0 )
                {
                  v56 = 0LL;
                  v57 = 0;
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                  v60 = 0;
                  v58 = 1;
                  v61 = 1;
                  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int128 *))(*(_QWORD *)v50 + 144LL))(
                    v50,
                    &v56);
                }
                v55 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v48 + 72LL))(v48, 0LL, &v55);
                v36 = TabletModePositioner::PositionView(
                        v35,
                        v34,
                        &v55,
                        (const struct LAYOUT_ENVIRONMENT_DETAILS *)v62,
                        v50);
                if ( v36 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x9FE,
                    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                    (const char *)(unsigned int)v36);
              }
              else if ( TabletModePositionerHelpers::IsOperableView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v46,
                          v33) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v50 + 96LL))(v50, 0LL);
              }
              (*(void (__fastcall **)(TabletModePositionerHelpers *, struct IApplicationViewOperation *))(*(_QWORD *)v46 + 320LL))(
                v46,
                v50);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v46);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
      }
      if ( (v17 & 0x20) == 0
        && (TabletModePositioner::ShouldShowLauncher(this)
         || TabletModePositioner::ShouldShowSnapAssist(this, (v17 & 2) != 0)) )
      {
        v37 = TabletModePositioner::ShowLauncherOrSnapAssistInHole(this, v17);
        if ( v37 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA1C,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v37);
      }
      else if ( (v17 & 2) != 0 && !*((_QWORD *)this + 36) )
      {
        v46 = 0LL;
        v38 = v47;
        v39 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, TabletModePositionerHelpers **))(*(_QWORD *)v47 + 64LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v46);
        v40 = v39(v38, &v46);
        if ( v40 >= 0 )
          (*(void (__fastcall **)(TabletModePositionerHelpers *))(*(_QWORD *)v46 + 48LL))(v46);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA26,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v40);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v46);
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD, TabletModePositionerHelpers *))(**((_QWORD **)this + 39) + 24LL))(
              *((_QWORD *)this + 39),
              v51);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA2E,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v41);
      if ( !(*(unsigned int (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64))(*(_QWORD *)v51 + 200LL))(
              v51,
              v52,
              3LL) )
      {
        *((_BYTE *)this + 240) = 0;
        TabletModePositioner::HandleAutoRotationLock(this);
        v42 = TabletModePositioner::NotifyAppLayoutChanged((IUnknown **)this, v47);
        if ( v42 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA3D,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v42);
        v46 = v51;
        v48 = v52;
        TabletModeTelemetry::SplitViewCreated<IAppLayout *,IAppLayout *,enum APP_LAYOUT_OPERATION_ACTIONS const &>(
          &v48,
          &v46,
          v54);
      }
      if ( IsSurfaceHubWithWin32VtcEnabled() )
      {
        v43 = TabletModePositioner::LookForAndHandlePPIVtcAppSpecialWindows(this);
        if ( v43 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA44,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v43);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v63);
    v5 = 0;
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A2,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_74:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v52);
LABEL_75:
  v44 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v44 + 16LL))(v44);
  }
  return v5;
}
