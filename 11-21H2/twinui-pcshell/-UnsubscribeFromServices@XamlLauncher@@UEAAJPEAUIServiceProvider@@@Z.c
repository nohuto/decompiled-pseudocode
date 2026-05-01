/*
 * XREFs of ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18015D220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18009DCDC (-UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C89D4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C9560 (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x1800C95C0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18013304C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x180158A08 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x18015D440 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ @ 0x18015D46C (-StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18015D504 (-UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18044D490 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::UnsubscribeFromServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  __int64 v3; // r9
  FocusHoldingTank *v4; // rbx
  ImmersiveMonitorHelper *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *ppvOut[2]; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK v14[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"UnsubscribeFromServices");
  v14[0].Ptr = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  StartWindowTelemetry::UnsubscribeFromServices::StartActivity((StartWindowTelemetry::UnsubscribeFromServices *)v14);
  if ( *((_DWORD *)this + 41) )
  {
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
    if ( IUnknown_QueryService(
           *((IUnknown **)this - 5),
           (const GUID *const)&SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           ppvOut) >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 32LL))(ppvOut[0], *((unsigned int *)this + 41));
      *((_DWORD *)this + 41) = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    1u,
    3u,
    v3);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 14,
    0LL);
  v4 = (FocusHoldingTank *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v4 )
  {
    FocusHoldingTank::~FocusHoldingTank(v4);
    operator delete(v4, 0x18uLL);
  }
  XamlLauncher::UninitializeStartExperienceManager((XamlLauncher *)((char *)this - 56));
  XamlLauncher::UninitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  v5 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = ImmersiveMonitorHelper::SetSite(v5, 0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v11 = 932LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((volatile signed __int32 **)this + 19);
  }
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    v7 = v6;
    if ( v6 >= 0 )
    {
      ppvOut[0] = 0LL;
      v9 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 36,
             (__int64 *)ppvOut);
      v7 = v9;
      if ( v9 < 0 )
      {
        v12 = 940LL;
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 24LL))(ppvOut[0], 0LL);
        v7 = v9;
        if ( v9 >= 0 )
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
          goto LABEL_15;
        }
        v12 = 941LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
      goto LABEL_16;
    }
    v11 = 938LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_16;
  }
LABEL_15:
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
  v7 = 0;
LABEL_16:
  StartWindowTelemetry::UnsubscribeFromServices::~UnsubscribeFromServices((StartWindowTelemetry::UnsubscribeFromServices *)v14);
  return v7;
}
