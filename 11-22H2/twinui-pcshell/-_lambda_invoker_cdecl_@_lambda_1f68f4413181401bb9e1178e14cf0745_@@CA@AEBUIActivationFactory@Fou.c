/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1f68f4413181401bb9e1178e14cf0745_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180048620
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@3@XZ @ 0x180048D20 (--$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_1f68f4413181401bb9e1178e14cf0745_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources>(
    a2,
    a1);
  return a1;
}
