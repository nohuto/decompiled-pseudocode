/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18009D580
 * Callers:
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x18009C7F0 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180016C2C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@1@@Z @ 0x18009BDEC (--$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@F.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x18009CE90 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x18009D4E8 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009DB20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor@@@detail.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x18009DE78 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18009E190 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(CAnalogCompositorManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  UDwmTrace *v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  CAnalogCompositorManager *Instance; // rax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( UDwmTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<UDwmTrace>::get(v3, _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicDeviceDriverDetected_(v4);
  }
  if ( !*((_QWORD *)this + 6) )
  {
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.Internal.HolographicDisplayMonitorManager",
      0x47u,
      0x46u);
    v5 = v10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
    v6 = Windows::Foundation::ActivateInstance<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>(
           v5,
           (_QWORD *)this + 6);
    if ( v6 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBE,
        (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v6,
        (int)hstringHeader.Reserved.Reserved1);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6));
    if ( v7 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v7,
        (int)hstringHeader.Reserved.Reserved1);
  }
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor>::GetImpl'::`2'::impl,
    v2);
  if ( !*((_QWORD *)this + 10) )
  {
    Instance = CAnalogCompositorManager::GetInstance();
    CAnalogCompositorManager::InitializeDisplayManager(Instance);
  }
}
