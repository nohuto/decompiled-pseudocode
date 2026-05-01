/*
 * XREFs of ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801D063C
 * Callers:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801D0AD4 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 * Callees:
 *     ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1801D02C8 (--$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationF.c)
 *     ??$call@P6A?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801D0514 (--$call@P6A-AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFacto.c)
 */

struct IUnknown *__fastcall winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting(
        struct IUnknown *this)
{
  __int64 (__fastcall *v3)(__int64, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1807B47E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
      &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1807B47E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B47E8);
    v3 = _lambda_6642fb088f192eae1a0f474d97eaf06a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting,winrt::Windows::Foundation::IActivationFactory>::call<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
