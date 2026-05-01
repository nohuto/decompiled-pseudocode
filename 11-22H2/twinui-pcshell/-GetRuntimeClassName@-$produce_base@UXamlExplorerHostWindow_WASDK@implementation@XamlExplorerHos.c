/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804F9BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 16;
  if ( !a1 )
    v1 = 24LL;
  return winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::NonDelegatingGetRuntimeClassName(v1);
}
