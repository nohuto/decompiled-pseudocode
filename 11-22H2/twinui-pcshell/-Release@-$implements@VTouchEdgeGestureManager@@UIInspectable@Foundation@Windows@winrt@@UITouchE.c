/*
 * XREFs of ?Release@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAKXZ @ 0x1800D9C10
 * Callers:
 *     ?Release@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@W7EAAKXZ @ 0x1802AAE90 (-Release@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@wi_ea_1802AAE90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::NonDelegatingRelease((volatile __int64 *)(a1 + 24));
}
