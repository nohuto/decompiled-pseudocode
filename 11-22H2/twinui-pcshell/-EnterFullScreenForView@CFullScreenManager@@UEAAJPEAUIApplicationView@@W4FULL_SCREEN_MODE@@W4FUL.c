/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF780
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF6D0 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015908 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180015AD0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044818 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_312fc7501d297601e27e2a0436e50146___ @ 0x1803EEC80 (ShellPositionerHelpers--PerformCallbackOnView__lambda_312fc7501d297601e27e2a0436e50146___.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1803EF234 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803F0A08 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreenForView(
        IUnknown **a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned int a4)
{
  int IsViewFullScreen; // ebx
  __int64 v8; // rdx
  struct IApplicationView *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  IUnknown *v13; // rcx
  __int64 *v14; // rbx
  HRESULT Service; // eax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v22[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v19);
  if ( IsViewFullScreen < 0 )
  {
    v8 = 144LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)IsViewFullScreen);
    return (unsigned int)IsViewFullScreen;
  }
  if ( v19 )
  {
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v20);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 148LL;
      goto LABEL_3;
    }
    if ( !v20 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)"FSMEnterFullScreenForView");
      v22[0] = &FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
      FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v22, a2, a4);
      if ( FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(a2, v10) )
      {
        IsViewFullScreen = -2147024891;
LABEL_19:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)v22);
        return (unsigned int)IsViewFullScreen;
      }
      LOBYTE(v17) = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
        1u,
        v11,
        v12);
      v13 = *(a1 - 9);
      *((_QWORD *)&v21 + 1) = &v17;
      *(_QWORD *)&v21 = a2;
      ShellPositionerHelpers::PerformCallbackOnView__lambda_312fc7501d297601e27e2a0436e50146___(v13, (__int64)a2, &v21);
      if ( !(_BYTE)v17 )
      {
        v18 = 0LL;
        v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v21);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
        Service = IUnknown_QueryService(
                    *(a1 - 9),
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    (void **)v14);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v16 = 176LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)Service);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          goto LABEL_19;
        }
        Service = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64))(*(_QWORD *)v18 + 24LL))(
                    v18,
                    a2,
                    3LL);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v16 = 177LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
      IsViewFullScreen = 0;
      goto LABEL_19;
    }
  }
  return 2147942487LL;
}
