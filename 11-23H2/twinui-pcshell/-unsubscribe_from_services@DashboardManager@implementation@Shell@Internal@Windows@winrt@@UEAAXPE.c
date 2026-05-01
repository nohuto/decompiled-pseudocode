/*
 * XREFs of ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180184100
 * Callers:
 *     <none>
 * Callees:
 *     ??0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z @ 0x18008A8A4 (--0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x180184190 (-UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4IInspectable@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1803918A4 (--4IInspectable@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  if ( *((_DWORD *)this + 46) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 64LL))(*v2);
    *((_DWORD *)this + 46) = 0;
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v2);
  DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged((char *)this + 192, *((_QWORD *)this + 25));
  winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper(&v4);
  winrt::Windows::Foundation::IInspectable::operator=((char *)this + 192, &v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
}
