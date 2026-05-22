/*
 * XREFs of ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800DA590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180041F08 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x1800A7684 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D4240 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D4994 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800D4E1C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D7E84 (--1TraceSessionConfig@@QEAA@XZ.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D8584 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     GetHolographicInputSession @ 0x1800D8CB8 (GetHolographicInputSession.c)
 *     ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800DBA2C (-SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800DBC78 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::OnFinalRelease(SpatialRimDeviceCollection *this)
{
  __int64 v2; // rcx
  RawInputProvidersTracing *v3; // rcx
  RTL_SRWLOCK *Instance; // rax
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _BYTE v9[128]; // [rsp+20h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( RawInputProvidersTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v2,
      (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::SpatialInputControllerCollection_Released_(v3);
  }
  if ( *((_DWORD *)this + 725) )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 725));
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 345) + 280LL))(
    *((_QWORD *)this + 345),
    *((_QWORD *)this + 372));
  SpatialRimDeviceCollection::DisableHeadEventHandler(this);
  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v9);
  v6 = TracingSessionHelper::StartOrStop(HolographicInputSession, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      534LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v9);
  v7 = *((_QWORD *)this + 354);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        538LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 354);
  }
  RIMDeviceCollection::Close((HANDLE *)this);
}
