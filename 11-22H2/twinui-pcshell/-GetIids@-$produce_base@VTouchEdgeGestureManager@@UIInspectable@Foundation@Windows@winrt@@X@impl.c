/*
 * XREFs of ?GetIids@?$produce_base@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18064D460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  return winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::NonDelegatingGetIids(v1);
}
