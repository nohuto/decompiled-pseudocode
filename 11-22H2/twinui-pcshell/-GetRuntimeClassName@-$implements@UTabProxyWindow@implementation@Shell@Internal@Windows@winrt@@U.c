/*
 * XREFs of ?GetRuntimeClassName@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x180639120
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"{c9b8fa8b-63d2-54a5-a095-d4e4668ae79b}",
          (winrt::impl *)0x26);
  return a2;
}
