/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x180043B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call(
        __int64 a1,
        int *a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8) + 344LL;
  v4 = *a2;
  return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
           v2,
           &v4);
}
