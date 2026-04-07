/*
 * XREFs of ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F73F4
 * Callers:
 *     ??_EWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F7500 (--_EWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180002660 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800121F8 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::~WindowMaximizeSnapTransitionHandler(
        CAnimationResource **this)
{
  std::_Ref_count_base *v2; // rcx
  CAnimationResource *v3; // rcx
  CAnimationResource *v4; // rcx

  *this = (CAnimationResource *)&winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::`vftable';
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::Cancel((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)this);
  v2 = this[13];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = this[8];
  if ( v3 )
    CAnimationResource::Release(v3);
  v4 = this[7];
  if ( v4 )
    CAnimationResource::Release(v4);
  if ( this[5] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 5));
  if ( this[4] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 4));
  if ( this[3] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 3));
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
