/*
 * XREFs of ??R_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@QEBA@AEBUIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094360
 * Callers:
 *     ??0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180093E4C (--0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800942B4 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 */

_QWORD *__fastcall _lambda_c784a7e41fe1a5698e55a9117bd5b7f8_::operator()(unsigned int **a1, _QWORD *a2, __int64 *a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
    a3,
    a2,
    *a1);
  return a2;
}
