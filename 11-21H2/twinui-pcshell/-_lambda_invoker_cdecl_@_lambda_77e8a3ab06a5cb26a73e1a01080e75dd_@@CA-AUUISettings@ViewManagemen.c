/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_77e8a3ab06a5cb26a73e1a01080e75dd_@@CA?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z @ 0x180023190
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUISettings@ViewManagement@UI@23@XZ @ 0x1800231B8 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@.c)
 */

__int64 __fastcall _lambda_77e8a3ab06a5cb26a73e1a01080e75dd_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
    a2,
    a1);
  return a1;
}
