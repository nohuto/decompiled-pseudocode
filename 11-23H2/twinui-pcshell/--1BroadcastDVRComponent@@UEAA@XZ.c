/*
 * XREFs of ??1BroadcastDVRComponent@@UEAA@XZ @ 0x1801653E0
 * Callers:
 *     ??_GBroadcastDVRComponent@@UEAAPEAXI@Z @ 0x1801653A4 (--_GBroadcastDVRComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x180165690 (--1JsonGameMruManager@@QEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801656CC (-clear@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroad.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@1@@Z @ 0x18016570C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Microsof.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?UnregisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1801660C4 (-UnregisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1801BF15C (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::~BroadcastDVRComponent(BroadcastDVRComponent *this)
{
  REGHANDLE v2; // rcx
  _QWORD *v3; // r14
  void *v4; // rdi
  unsigned __int64 *v5; // rsi
  unsigned __int64 i; // rbp
  char *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &BroadcastDVRComponent::`vftable'{for `IBroadcastDVRComponent'};
  *((_QWORD *)this + 1) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 2) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 7) = &BroadcastDVRComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 15) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 16) = &BroadcastDVRComponent::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 17) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 19) = &BroadcastDVRComponent::`vftable';
  *((_QWORD *)this + 20) = &BroadcastDVRComponent::`vftable'{for `IGameFocusNotificationService'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = RegHandle;
  dword_180986E98 = 0;
  RegHandle = 0LL;
  EventUnregister(v2);
  BroadcastDVRComponent::UnregisterNotifications(this);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  v3 = (_QWORD *)((char *)this + 264);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::clear((char *)this + 264);
  GameDVR_OutputDebug::s_fOutputToDebugger = 0;
  wil::EnterCriticalSection(&lpCriticalSection, &GameDVR_OutputDebug::s_csLock);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &GameDVR_OutputDebug::s_hTraceOutputFile,
    0LL);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v4 = (void *)*((_QWORD *)this + 70);
  if ( v4 )
  {
    JsonGameMruManager::~JsonGameMruManager(*((JsonGameMruManager **)this + 70));
    operator delete(v4, 0x50uLL);
  }
  v5 = (unsigned __int64 *)((char *)this + 536);
  if ( *((_QWORD *)this + 66) )
  {
    for ( i = 0LL; i < *v5; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 66) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 66));
    *((_QWORD *)this + 66) = 0LL;
  }
  *v5 = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 64);
  v7 = (char *)*((_QWORD *)this + 50);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  std::vector<Windows::Internal::String>::_Tidy((char *)this + 352);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 43);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 41);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 40);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 38);
  v10 = (std::_Ref_count_base *)*((_QWORD *)this + 37);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 35);
  std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>,void *>>>(
    (char *)this + 264,
    (char *)this + 264,
    *(_QWORD *)(*v3 + 8LL));
  std::_Deallocate<16,0>(*v3, 56LL);
  v11 = *((_QWORD *)this + 32);
  if ( v11 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  *((_DWORD *)this + 55) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  CImmersiveShellComponent::~CImmersiveShellComponent((BroadcastDVRComponent *)((char *)this + 56));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((BroadcastDVRComponent *)((char *)this + 16));
}
