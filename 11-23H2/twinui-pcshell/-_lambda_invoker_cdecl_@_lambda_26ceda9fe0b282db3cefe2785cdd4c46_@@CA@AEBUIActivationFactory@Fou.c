/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_26ceda9fe0b282db3cefe2785cdd4c46_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1803E18E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1803E1BC4 (--$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@w.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_26ceda9fe0b282db3cefe2785cdd4c46_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(a2, a1);
  return a1;
}
