/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_59762283627f7fdd9316b5187be5bad3_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DFF00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1805E024C (--$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFa.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_59762283627f7fdd9316b5187be5bad3_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions>(
    a2,
    a1);
  return a1;
}
