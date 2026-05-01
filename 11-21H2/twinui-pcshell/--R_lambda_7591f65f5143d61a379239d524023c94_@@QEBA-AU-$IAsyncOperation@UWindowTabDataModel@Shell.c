/*
 * XREFs of ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@34@@Z @ 0x18001A918
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x18001A7F0 (--$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 * Callees:
 *     ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@3@IAEBUUser@System@63@@Z @ 0x18001A948 (-TryGetForWindowAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTab.c)
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
