/*
 * XREFs of ?Run@?$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ @ 0x1801BC8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void<_lambda_ef4795d9d67b2631c82caa1661802619_ &>::Run(__int64 a1)
{
  _BYTE **v1; // rdx
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE ***)(a1 + 8);
  v3 = *v1[1] == 0;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (_QWORD *)*v1 + 12,
    (unsigned int *)&v3);
  return 0LL;
}
