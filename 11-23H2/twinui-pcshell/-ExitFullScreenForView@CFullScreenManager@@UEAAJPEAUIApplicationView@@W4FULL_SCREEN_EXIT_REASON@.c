/*
 * XREFs of ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803EFA50
 * Callers:
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803EF9A0 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015908 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180015AD0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_eec20f64a69276a1868af05215daa949___ @ 0x1803EEE00 (ShellPositionerHelpers--PerformCallbackOnView__lambda_eec20f64a69276a1868af05215daa949___.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1803EF260 (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803F0B3C (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreenForView(
        IUnknown **a1,
        int (__fastcall ***a2)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        unsigned int a3)
{
  struct IApplicationView *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  IUnknown *v10; // rcx
  __int64 *v11; // rbx
  HRESULT Service; // eax
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( (int)CFullScreenManager::IsViewFullScreen(a1, (struct IApplicationView *)a2, &v17) >= 0 && v17 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)"FSMExitFullScreenForView");
    v19[0] = &FullScreenManagerTelemetry::FSMExitFullScreenForView::`vftable';
    FullScreenManagerTelemetry::FSMExitFullScreenForView::StartActivity(v19, a2, a3);
    if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v6) )
    {
      v9 = -2147024809;
LABEL_11:
      FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v19);
      return v9;
    }
    LOBYTE(v15) = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    v10 = *(a1 - 9);
    *((_QWORD *)&v18 + 1) = &v15;
    *(_QWORD *)&v18 = a2;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_eec20f64a69276a1868af05215daa949___(v10, (__int64)a2, &v18);
    if ( !(_BYTE)v15 )
    {
      v16 = 0LL;
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
      Service = IUnknown_QueryService(
                  *(a1 - 9),
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  (void **)v11);
      v9 = Service;
      if ( Service < 0 )
      {
        v13 = 215LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)Service);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        goto LABEL_11;
      }
      Service = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 32LL))(v16, a2, 3LL);
      v9 = Service;
      if ( Service < 0 )
      {
        v13 = 216LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
    FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v19);
  }
  return 0LL;
}
