/*
 * XREFs of ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x18038E2C8
 * Callers:
 *     ??_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z @ 0x18038E8B0 (--_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??1?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18019BC0C (--1-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayout@She.c)
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x18019BD98 (--1-$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U-$default_delete@VSearchBoxOnTaskbarSea.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5448 (--1-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802D6820 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$D.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038FC10 (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::~UndockedSearchAppExperienceManager(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &UndockedSearchAppExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &UndockedSearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>'};
  *((_QWORD *)this + 2) = &UndockedSearchAppExperienceManager::`vftable'{for `IInitializeTrustedComponentForegroundControl'};
  *((_QWORD *)this + 3) = &UndockedSearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeferralMessage>'};
  if ( *((_DWORD *)this + 52) )
  {
    v2 = *((_QWORD *)this + 10);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
      *((_DWORD *)this + 52) = 0;
    }
  }
  UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(this);
  UndockedSearchAppExperienceManager::UnregisterViewEventDispatcherHandler(this);
  __1__event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 98);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>((__int64)this + 760);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 94);
  winrt::hstring::~hstring((volatile signed __int32 **)this + 93, v3, v4, v5);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>((__int64)this + 728);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 90);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 88);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 86);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 84);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 83);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 82);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 81);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 76);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 73);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 70);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 67);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 64);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 61);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 58);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 55);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 52);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 49);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 46);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 43);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 40);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 37);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 34);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 31);
  if ( *((_QWORD *)this + 28) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((UndockedSearchAppExperienceManager *)((char *)this + 224));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((UndockedSearchAppExperienceManager *)((char *)this + 160));
  winrt::hstring::~hstring((volatile signed __int32 **)this + 18, v7, v8, v9);
  wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>((__int64 (__fastcall ****)(_QWORD, __int64))this + 14);
  wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>((__int64 (__fastcall ****)(_QWORD, __int64))this + 13);
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v10 )
    (**v10)(v10, 1LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>((__int64)this);
}
