/*
 * XREFs of ?GetRuntimeClassName@?$implements@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805D2930
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::implements<WindowRegistration,winrt::Windows::Foundation::IClosable>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  *a2 = winrt::impl::create_hstring_on_heap((winrt::impl *)L"Windows.Foundation.IClosable", (winrt::impl *)0x1C);
  return a2;
}
