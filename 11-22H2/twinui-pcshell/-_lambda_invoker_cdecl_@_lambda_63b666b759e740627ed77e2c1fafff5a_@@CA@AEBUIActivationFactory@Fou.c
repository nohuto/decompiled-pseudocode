/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_63b666b759e740627ed77e2c1fafff5a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1803E1910
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonObject@Json@Data@23@XZ @ 0x1803E1C74 (--$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_63b666b759e740627ed77e2c1fafff5a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonObject>(a2, a1);
  return a1;
}
