/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_294131ddbaaaaf7894731207a68c541a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18002E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@3@XZ @ 0x18002E4C0 (--$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IAc.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_294131ddbaaaaf7894731207a68c541a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>(
    a2,
    a1);
  return a1;
}
