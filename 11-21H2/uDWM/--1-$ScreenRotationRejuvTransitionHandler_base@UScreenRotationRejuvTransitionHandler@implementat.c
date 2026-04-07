/*
 * XREFs of ??1?$ScreenRotationRejuvTransitionHandler_base@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F32F8
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler_::_1_::dtor$0 @ 0x180065E9E (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_180065E9E.c)
 *     _winrt::impl::map_impl_winrt::hstring_double_std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double______winrt::impl::single_threaded_collection_base_::map_impl_winrt::hstring_double_std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double______winrt::impl::single_threaded_collection_base__::_1_::dtor$0 @ 0x1800F96EC (_winrt--impl--map_impl_winrt--hstring_double_std--map_winrt--hstring_double_std--less_winrt--hst.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>::~ScreenRotationRejuvTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(a1);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
