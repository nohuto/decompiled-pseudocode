/*
 * XREFs of ??1StartupAppMonitor@@UEAA@XZ @ 0x18057F030
 * Callers:
 *     ??_EStartupAppMonitor@@UEAAPEAXI@Z @ 0x18057F964 (--_EStartupAppMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800E50C8 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x18057EF74 (--1CServiceHostComponent@@UEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1805826BC (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 */

void __fastcall StartupAppMonitor::~StartupAppMonitor(StartupAppMonitor *this, void *a2)
{
  wil::details **v3; // r15
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  StartupAppMonitor *j; // rbx
  void *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD **v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  std::_Ref_count_base *v15; // rcx
  _Thrd_t v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  *(_QWORD *)this = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<CServiceHostComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = &StartupAppMonitor::`vftable'{for `IServiceHostComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  v3 = (wil::details **)((char *)this + 176);
  wil::details::SetEvent(*((wil::details **)this + 22), a2);
  if ( !*((_DWORD *)this + 42) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
    JUMPOUT(0x18057F23DLL);
  }
  if ( *((_DWORD *)this + 42) == _Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v16 = (_Thrd_t)*((_OWORD *)this + 10);
  if ( _Thrd_join(&v16, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  v17 = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 18);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (wil::details **)(i[2] + 96LL),
      0LL);
  for ( j = (StartupAppMonitor *)((char *)this + 496);
        j != (StartupAppMonitor *)((char *)this + 672);
        j = (StartupAppMonitor *)((char *)j + 88) )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
      (char *)j + 80,
      0LL);
  }
  `eh vector destructor iterator'((char *)this + 496, 88LL, 2LL, (void (*)(void *))FOLDERINFO::~FOLDERINFO);
  `eh vector destructor iterator'((char *)this + 184, 104LL, 3LL, (void (*)(void *))REGKEYINFO::~REGKEYINFO);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    v3,
    v7);
  if ( *((_DWORD *)this + 42) )
  {
    _o_terminate(v9, v8, v10, v11);
    __debugbreak();
  }
  v12 = (_QWORD **)*((_QWORD *)this + 18);
  *v12[1] = 0LL;
  v13 = *v12;
  if ( *v12 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      v15 = (std::_Ref_count_base *)v13[3];
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      std::_Deallocate<16,0>(v13, 0x20uLL);
      v13 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16,0>(*((void **)this + 18), 0x20uLL);
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  CServiceHostComponent::~CServiceHostComponent((StartupAppMonitor *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
