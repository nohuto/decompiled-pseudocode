/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800079D8
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x180007910 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_298ff7ed3f48e3.c)
 *     ??1?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F73B8 (--1-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference(v1);
  if ( !(_DWORD)result )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
