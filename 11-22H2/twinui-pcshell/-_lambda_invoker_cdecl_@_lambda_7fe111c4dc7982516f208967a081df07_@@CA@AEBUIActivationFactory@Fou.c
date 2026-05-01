/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7fe111c4dc7982516f208967a081df07_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180214960
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@3@XZ @ 0x180214A04 (--$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IA.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_7fe111c4dc7982516f208967a081df07_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings>(
    a2,
    a1);
  return a1;
}
