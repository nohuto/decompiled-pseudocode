/*
 * XREFs of ??1StartupAppMonitor@@UEAA@XZ @ 0x18063E0A8
 * Callers:
 *     ??_EStartupAppMonitor@@UEAAPEAXI@Z @ 0x18063E964 (--_EStartupAppMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1801BD1EC (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18063DF84 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

void __fastcall StartupAppMonitor::~StartupAppMonitor(StartupAppMonitor *this, void *a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  wil::details::folder_change_reader_state **v5; // rbx
  void *v6; // rdx
  wil::details *v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  std::_Ref_count_base *v11; // rcx
  _Thrd_t v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<CServiceHostComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = &StartupAppMonitor::`vftable'{for `IServiceHostComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  wil::details::SetEvent(*((wil::details **)this + 22), a2);
  if ( !*((_DWORD *)this + 42) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
    JUMPOUT(0x18063E2BELL);
  }
  if ( *((_DWORD *)this + 42) == _Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v12 = (_Thrd_t)*((_OWORD *)this + 10);
  if ( _Thrd_join(&v12, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  v13 = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 18);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (wil::details::registry_watcher_state **)(i[2] + 96LL),
      0LL);
  v5 = (wil::details::folder_change_reader_state **)((char *)this + 496);
  if ( (char *)this + 496 != (char *)this + 672 )
  {
    do
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
        v5 + 10,
        0LL);
      v5 += 11;
    }
    while ( v5 != (wil::details::folder_change_reader_state **)((char *)this + 672) );
  }
  `eh vector destructor iterator'((char *)this + 496, 88LL, 2LL, (void (*)(void *))FOLDERINFO::~FOLDERINFO);
  `eh vector destructor iterator'((char *)this + 184, 104LL, 3LL, (void (*)(void *))REGKEYINFO::~REGKEYINFO);
  v7 = (wil::details *)*((_QWORD *)this + 22);
  if ( v7 )
    wil::details::CloseHandle(v7, v6);
  if ( *((_DWORD *)this + 42) )
  {
    _o_terminate();
    __debugbreak();
  }
  v8 = (_QWORD **)*((_QWORD *)this + 18);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( *v8 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      v11 = (std::_Ref_count_base *)v9[3];
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      std::_Deallocate<16,0>(v9, 0x20uLL);
      v9 = v10;
    }
    while ( v10 );
  }
  std::_Deallocate<16,0>(*((void **)this + 18), 0x20uLL);
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  CServiceHostComponent::~CServiceHostComponent((StartupAppMonitor *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
