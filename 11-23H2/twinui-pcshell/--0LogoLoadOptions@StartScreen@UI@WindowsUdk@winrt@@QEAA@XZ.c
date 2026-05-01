/*
 * XREFs of ??0LogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1805E13C8
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$ActivateInstance@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1805E019C (--$ActivateInstance@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Founda.c)
 *     ??$call@P6A?AULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AULogoLoadOptions@StartScreen@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805E0D40 (--$call@P6A-AULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation.c)
 */

winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions *__fastcall winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions::LogoLoadOptions(
        winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1809912D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1809912D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1809912D8);
    v3 = _lambda_3706218fc4c34629ce9901fa3375766b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
