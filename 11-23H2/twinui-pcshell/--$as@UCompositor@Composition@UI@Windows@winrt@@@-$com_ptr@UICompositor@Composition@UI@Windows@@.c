/*
 * XREFs of ??$as@UCompositor@Composition@UI@Windows@winrt@@@?$com_ptr@UICompositor@Composition@UI@Windows@@@winrt@@QEBA?A_PXZ @ 0x18054BA8C
 * Callers:
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18020D440 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x18054BAB0 (--$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA-AUComposito.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::UI::Composition::ICompositor>::as<winrt::Windows::UI::Composition::Compositor>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(a2, *a1);
  return a2;
}
