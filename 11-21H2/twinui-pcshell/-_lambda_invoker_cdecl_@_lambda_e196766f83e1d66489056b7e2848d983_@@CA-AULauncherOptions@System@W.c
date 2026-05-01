/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e196766f83e1d66489056b7e2848d983_@@CA?AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z @ 0x18056F450
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULauncherOptions@System@23@XZ @ 0x18056F478 (--$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Window.c)
 */

__int64 __fastcall _lambda_e196766f83e1d66489056b7e2848d983_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::System::LauncherOptions>(a2, a1);
  return a1;
}
