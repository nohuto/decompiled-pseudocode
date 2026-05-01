/*
 * XREFs of ?get@?$runtime_class_name@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180554240
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805536C0 (-GetRuntimeClassName@-$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibi.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<IMultitaskingViewVisibilityNotification,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"{c59a7a3c-0676-4526-8192-5d0bf9b89b95}",
          (winrt::impl *)0x26);
  return a1;
}
