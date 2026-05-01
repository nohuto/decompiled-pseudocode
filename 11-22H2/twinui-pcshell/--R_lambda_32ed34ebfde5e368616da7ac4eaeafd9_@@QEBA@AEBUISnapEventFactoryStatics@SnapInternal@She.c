/*
 * XREFs of ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180682ED8
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?CreateWindowDraggingEventArgs@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@@Z @ 0x180683430 (-CreateWindowDraggingEventArgs@-$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStati.c)
 */

__int64 __fastcall _lambda_32ed34ebfde5e368616da7ac4eaeafd9_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgs(
    a3,
    a2,
    *a1);
  return a2;
}
