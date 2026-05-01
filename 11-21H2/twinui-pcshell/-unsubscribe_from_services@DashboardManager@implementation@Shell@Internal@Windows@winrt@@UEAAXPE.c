/*
 * XREFs of ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801803D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged@@@details@wil@@QEAA_NXZ @ 0x1801CED74 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardS.c)
 *     ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x1801D0B94 (-UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4IInspectable@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18032C830 (--4IInspectable@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 152);
  if ( *((_DWORD *)this + 40) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 64LL))(*v2);
    *((_DWORD *)this + 40) = 0;
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v2);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::GetImpl'::`2'::impl) )
  {
    DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged((char *)this + 168, *((_QWORD *)this + 22));
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout(&v4);
    winrt::Windows::Foundation::IInspectable::operator=((char *)this + 168, &v4);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v4);
  }
}
