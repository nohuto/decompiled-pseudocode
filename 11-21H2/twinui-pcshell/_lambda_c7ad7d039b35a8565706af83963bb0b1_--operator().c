/*
 * XREFs of _lambda_c7ad7d039b35a8565706af83963bb0b1_::operator() @ 0x1801C5694
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___::Invoke @ 0x1801C8E10 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801C95F0 (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c7ad7d039b35a8565706af83963bb0b1_::operator()(
        DashboardTaskbarSettings *a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, __int64 *, void **); // rbx
  void **v6; // rax
  bool DashboardButtonEnabled; // al
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = 0LL;
    v5 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v3 + 24LL);
    v6 = winrt::put_abi((winrt *)&v9, a2);
    v5(
      v3,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardManager>>::value,
      v6);
    if ( v9 )
      v4 = (__int64)&v9[-2];
    else
      v4 = 0LL;
    v9 = 0LL;
    v8 = v4;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  }
  else
  {
    v8 = 0LL;
    v4 = 0LL;
  }
  if ( v4 )
  {
    DashboardButtonEnabled = DashboardTaskbarSettings::GetDashboardButtonEnabled(a1);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
      v4,
      &v10,
      !DashboardButtonEnabled);
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
  }
}
