/*
 * XREFs of ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x18004AE74
 * Callers:
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18004AE18 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEU.c)
 * Callees:
 *     ?TextScaleFactor@?$consume_Windows_UI_ViewManagement_IUISettings2@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004AF0C (-TextScaleFactor@-$consume_Windows_UI_ViewManagement_IUISettings2@UUISettings@ViewManagement@UI@.c)
 *     ??$call@P6A?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUISettings@ViewManagement@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1800B3E84 (--$call@P6A-AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUISettings@ViewManagement@UI@23@XZ @ 0x180184D48 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SearchAppSizeHelpers::IsWideAtStartupEnabled(SearchAppSizeHelpers *this)
{
  int v1; // edi
  bool v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall *v5)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+48h] [rbp+20h] BYREF

  v1 = (int)this;
  v2 = 1;
  _InterlockedAdd64(&qword_18098E408, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>,
      &v4);
    _InterlockedDecrement64(&qword_18098E408);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E408);
    v5 = _lambda_77e8a3ab06a5cb26a73e1a01080e75dd_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::UISettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      &v4,
      &v5);
  }
  if ( winrt::impl::consume_Windows_UI_ViewManagement_IUISettings2<winrt::Windows::UI::ViewManagement::UISettings>::TextScaleFactor(&v4) <= 1.25 )
    v2 = v1 >= 1024;
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  return v2;
}
