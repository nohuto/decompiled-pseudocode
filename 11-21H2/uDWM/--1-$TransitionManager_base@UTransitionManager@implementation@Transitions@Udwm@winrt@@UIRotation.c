/*
 * XREFs of ??1?$TransitionManager_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F9758
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager_::_1_::dtor$0 @ 0x180066262 (_winrt--Udwm--Transitions--implementation--TransitionManager--TransitionManager_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionManager_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::~TransitionManager_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(a1 + 32);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
