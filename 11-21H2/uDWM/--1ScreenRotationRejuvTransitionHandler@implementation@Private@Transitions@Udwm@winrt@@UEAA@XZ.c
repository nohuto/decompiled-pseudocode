/*
 * XREFs of ??1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F3660
 * Callers:
 *     ??_G?$heap_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F3890 (--_G-$heap_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC (-Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@U?$IMapView@Uhstring@winrt@@N@5673@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x180045320 (-subtract_reference@-$root_implements@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$le.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::~ScreenRotationRejuvTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rcx
  CBaseObject *v7; // rcx

  *(_QWORD *)this = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>'};
  *((_QWORD *)this + 4) = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `IAnimationListener'};
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Cancel((CBaseObject **)this);
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((char *)this + 152));
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 12);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((char *)this + 40));
  winrt::impl::root_implements<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
