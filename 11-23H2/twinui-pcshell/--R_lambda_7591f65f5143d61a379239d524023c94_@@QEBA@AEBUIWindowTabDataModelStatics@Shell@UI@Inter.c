/*
 * XREFs of ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180034680
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x180034574 (--$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 * Callees:
 *     ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@IAEBUUser@System@Windows@3@@Z @ 0x1800346FC (-TryGetForWindowAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTab.c)
 */

__int64 __fastcall _lambda_7591f65f5143d61a379239d524023c94_::operator()(unsigned int **a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::TryGetForWindowAsync(
    a3,
    a2,
    **a1,
    a1[1]);
  return a2;
}
