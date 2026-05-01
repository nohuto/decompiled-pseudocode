/*
 * XREFs of ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18068BB10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E1320 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x18068A4E4 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 *     ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18068AD38 (--1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ?ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18068BD34 (-ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragH.c)
 *     ?StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18068BF84 (-StartActivity@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUPoint@Foundation@Wi.c)
 *     ?Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z @ 0x18068C12C (-Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowDragInputProvider::OnArrangementReset(
        RTL_SRWLOCK *this,
        const struct tagSHELL_WND_MGMT_SIMPLE_PAYLOAD *a2)
{
  float v3; // xmm1_4
  __int64 v4; // rdx
  __int64 v5; // rbx
  signed int v6; // eax
  bool v7; // dl
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  float v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v11[40]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (float)*((__int16 *)a2 + 5);
  v9[0] = (float)*((__int16 *)a2 + 4);
  v9[1] = v3;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"OnArrangementReset");
  v11[0] = (volatile signed __int32 *)&WindowDragInputProviderTelemetry::OnArrangementReset::`vftable';
  WindowDragInputProviderTelemetry::OnArrangementReset::StartActivity(
    (WindowDragInputProviderTelemetry::OnArrangementReset *)v11,
    (const struct winrt::Windows::Foundation::Point *)v9);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::operator()<std::nullptr_t,winrt::Windows::Foundation::Point>(
    this + 8,
    v4,
    (__int64)v9);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint(
    (const struct winrt::Windows::Foundation::Point *)v10,
    v9);
  v5 = v10[0];
  if ( v10[0] )
  {
    v8 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v10[0])(
           v10[0],
           &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>,
           &v8);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&this[7],
      (winrt::Windows::Foundation::IUnknown *)&v8);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
    WindowDragInputProviderTelemetry::OnArrangementReset::ReceivedHitTestResult(
      (WindowDragInputProviderTelemetry::OnArrangementReset *)v11,
      (const struct winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult *)&this[7]);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  WindowDragInputProviderTelemetry::OnArrangementReset::Stop(
    (WindowDragInputProviderTelemetry::OnArrangementReset *)v11,
    v7);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v10);
  WindowDragInputProviderTelemetry::OnArrangementReset::~OnArrangementReset(v11);
}
