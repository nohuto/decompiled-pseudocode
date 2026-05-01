/*
 * XREFs of ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1801D0208 (--$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActiva.c)
 *     ??$as@U?$IReference@_N@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$IReference@_N@123@XZ @ 0x1801D0388 (--$as@U-$IReference@_N@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$IR.c)
 *     ??$call@P6A?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801D03EC (--$call@P6A-AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivation.c)
 *     ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1801D06C0 (--0hresult_no_interface@winrt@@QEAA@XZ.c)
 *     ?GetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1801D0900 (-GetValue@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Deskt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall DashboardTaskbarSettings::GetTaskbarBadgingEnabled(DashboardTaskbarSettings *this)
{
  __int64 (__fastcall ****Value)(_QWORD, void *, _QWORD **); // rax
  _QWORD *v2; // rax
  unsigned int v3; // eax
  char v4; // bl
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v7[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall *v8)(__int64, __int64); // [rsp+80h] [rbp+18h] BYREF
  struct IUnknown v9; // [rsp+88h] [rbp+20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  char v11; // [rsp+98h] [rbp+30h] BYREF

  _InterlockedIncrement64(&qword_1807B4808);
  if ( winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>(
      &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory>,
      &v9);
    _InterlockedDecrement64(&qword_1807B4808);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4808);
    v8 = _lambda_ad8d6bf895fdeda767c5ede3379139c0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory>::call<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v9,
      (void (__fastcall **)(__int64, __int64 *))&v8);
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"Value");
  Value = (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::GetValue(
                                                                  &v9,
                                                                  &v11,
                                                                  v7);
  if ( !*Value )
  {
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)pExceptionObject);
    throw (winrt::hresult_no_interface *)pExceptionObject;
  }
  v2 = winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Foundation::IReference<bool>>(Value, &v10);
  LOBYTE(v8) = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 48LL))(*v2, &v8);
  winrt::check_hresult(v3);
  v4 = (char)v8;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v10);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  return v4;
}
