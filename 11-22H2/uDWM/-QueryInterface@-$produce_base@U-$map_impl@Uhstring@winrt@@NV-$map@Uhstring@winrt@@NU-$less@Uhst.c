/*
 * XREFs of ?QueryInterface@?$produce_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F5D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::query_interface(
           (a1 - 16) & -(__int64)(a1 != 0),
           a2,
           a3);
}
