/*
 * XREFs of ?Run@?$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ @ 0x180114EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void<_lambda_ef4795d9d67b2631c82caa1661802619_ &>::Run(__int64 a1)
{
  __int64 v1; // rdx
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = **(_BYTE **)(v1 + 8) == 0;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    *(_QWORD *)v1 + 96LL,
    &v3);
  return 0LL;
}
