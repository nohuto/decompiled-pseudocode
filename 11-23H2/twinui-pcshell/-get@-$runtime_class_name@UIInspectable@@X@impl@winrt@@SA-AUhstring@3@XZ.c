/*
 * XREFs of ?get@?$runtime_class_name@UIInspectable@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180666214
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@EEBA?AUhstring@2@XZ @ 0x180661140 (-GetRuntimeClassName@-$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@EEBA-AUhstring@2@X.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<IInspectable,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"{af86e2e0-b12d-4c6a-9c5a-d7aa65101e90}",
          (winrt::impl *)0x26);
  return a1;
}
