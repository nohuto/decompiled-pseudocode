/*
 * XREFs of ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1806705E0
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1806920E8 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?GetForDisplay@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDisplayRegion@WindowManagement@UI@Windows@3@@Z @ 0x1801123DC (-GetForDisplay@-$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatic.c)
 */

_QWORD *__fastcall _lambda_706f938a80e432de8be00e3d53e53638_::operator()(_QWORD **a1, _QWORD *a2, __int64 *a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::GetForDisplay(
    a3,
    a2,
    *a1);
  return a2;
}
