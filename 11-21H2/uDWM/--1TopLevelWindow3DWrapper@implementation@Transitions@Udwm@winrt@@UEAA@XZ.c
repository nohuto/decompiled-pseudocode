/*
 * XREFs of ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800450F0
 * Callers:
 *     ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800450A0 (--_G-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winr.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x180010A40 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800454CC (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        __int64 a2)
{
  __int64 v3; // rcx
  CTopLevelWindow *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  std::_Func_class<long,>::_Tidy(*((_QWORD *)this + 4) + 552LL, a2);
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 336LL);
  if ( v3 )
  {
    v4 = *(CTopLevelWindow **)(v3 + 440);
    if ( v4 )
      CTopLevelWindow::SetSuppressBorderUpdates(v4, 0);
  }
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40));
  v5 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v5 )
    CBaseObject::Release(v5);
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference((char *)this + 16);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
