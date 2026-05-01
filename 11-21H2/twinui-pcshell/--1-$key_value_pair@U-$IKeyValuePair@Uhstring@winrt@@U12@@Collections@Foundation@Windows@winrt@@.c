/*
 * XREFs of ??1?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@UEAA@XZ @ 0x18003128C
 * Callers:
 *     ??_E?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180031250 (--_E-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Founda.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::~key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>(
        __int64 a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 32);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 24);
  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference(a1);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
