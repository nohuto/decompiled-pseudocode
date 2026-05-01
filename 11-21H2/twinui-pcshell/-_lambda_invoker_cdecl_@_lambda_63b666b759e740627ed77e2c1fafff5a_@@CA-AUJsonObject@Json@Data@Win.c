/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_63b666b759e740627ed77e2c1fafff5a_@@CA?AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z @ 0x1801C11D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonObject@Json@Data@23@XZ @ 0x1801C1AF4 (--$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@.c)
 */

__int64 __fastcall _lambda_63b666b759e740627ed77e2c1fafff5a_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonObject>(a2, a1);
  return a1;
}
