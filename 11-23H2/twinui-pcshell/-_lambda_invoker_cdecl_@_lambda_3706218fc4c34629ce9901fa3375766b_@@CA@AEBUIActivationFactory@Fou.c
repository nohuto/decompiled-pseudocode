/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3706218fc4c34629ce9901fa3375766b_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DFED0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1805E019C (--$ActivateInstance@ULogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Founda.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_3706218fc4c34629ce9901fa3375766b_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::LogoLoadOptions>(
    a2,
    a1);
  return a1;
}
