/*
 * XREFs of ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806F96C0
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1806F95E8 (--0-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Intern.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x18008B3D0 (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$make@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@@Z @ 0x1806F7FC4 (--$make@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@s.c)
 */

// Hidden C++ exception states: #wind=13
winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  _QWORD *v2; // rsi
  GUID v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v2 = (_QWORD *)((char *)this + 24);
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 24));
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IWindowSnappingEvents,void>'};
  *v2 = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  v4 = 0LL;
  v5 = 0LL;
  winrt::make<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::hstring>>(
    (_QWORD *)this + 51,
    (__int64 *)&v4);
  if ( *(_QWORD *)&v4.Data1 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(
      *(volatile signed __int32 ***)&v4.Data1,
      *(volatile signed __int32 ***)v4.Data4);
    std::_Deallocate<16,0>(*(void **)&v4.Data1, (v5 - *(_QWORD *)&v4.Data1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_BYTE *)this + 464) = 0;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((_QWORD *)this + 59);
  *((_QWORD *)this + 66) = 0LL;
  *((_BYTE *)this + 536) = 0;
  v4 = GUID_b2f053b6_daf6_403a_882b_e0fa5a93d3d6;
  winrt::immersive_shell_component::register_service_information<_GUID const>((__int64)v2, (__int128 *)&v4);
  return this;
}
