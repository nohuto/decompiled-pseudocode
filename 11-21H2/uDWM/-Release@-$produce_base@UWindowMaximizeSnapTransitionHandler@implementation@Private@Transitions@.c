/*
 * XREFs of ?Release@?$produce_base@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x1800452D0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::Release(
        unsigned __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(v1);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v2;
}
