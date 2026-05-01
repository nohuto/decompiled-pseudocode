/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f635e0c3324166f0c8ad227de6175e83_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1806808E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUValueSet@Collections@123@XZ @ 0x180680908 (--$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundati.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_f635e0c3324166f0c8ad227de6175e83_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Foundation::Collections::ValueSet>(
    a2,
    a1);
  return a1;
}
