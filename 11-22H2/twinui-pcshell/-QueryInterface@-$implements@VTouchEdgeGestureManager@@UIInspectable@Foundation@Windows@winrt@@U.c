/*
 * XREFs of ?QueryInterface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B6120
 * Callers:
 *     ?QueryInterface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AAE70 (-QueryInterface@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Win_ea_1802AAE70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::query_interface(
           a1 + 24,
           a2,
           a3);
}
