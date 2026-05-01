/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_4412af45f4a36015e2ea70df7029dae5_@@CA?AUShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z @ 0x1805E2EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x1805E2F18 (--$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundat.c)
 */

__int64 __fastcall _lambda_4412af45f4a36015e2ea70df7029dae5_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>(
    a2,
    a1);
  return a1;
}
