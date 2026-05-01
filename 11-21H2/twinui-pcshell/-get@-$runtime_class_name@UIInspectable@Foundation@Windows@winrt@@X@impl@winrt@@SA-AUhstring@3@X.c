/*
 * XREFs of ?get@?$runtime_class_name@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805982E4
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@EEBA?AUhstring@2@XZ @ 0x180593D30 (-GetRuntimeClassName@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1805942C0 (-NonDelegatingGetRuntimeClassName@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspe.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IInspectable,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap((winrt::impl *)L"Object", (winrt::impl *)6);
  return a1;
}
