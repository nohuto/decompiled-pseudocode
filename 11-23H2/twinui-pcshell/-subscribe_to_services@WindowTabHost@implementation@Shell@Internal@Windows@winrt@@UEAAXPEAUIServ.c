/*
 * XREFs of ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800FD1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x1800FDDB0 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@@Z @ 0x1800FDF08 (-Create@-$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Win.c)
 *     ??$?0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Tiles@345@AEBUITileStoreChangedEventArgs@7345@@Z@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@PEAUWindowTabHost@implementation@Shell@Internal@23@P8456723@EAAXAEBUITileStore@Tiles@723@AEBUITileStoreChangedEventArgs@9723@@Z@Z @ 0x1800FDF60 (--$-0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Til.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@Z @ 0x18019E4A8 (--$call@AEAV_lambda_56da5598f90a70830cdcd2deb45a78f6_@@@-$factory_cache_entry@UWindowTabBroker@S.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1801B4310 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_1801B4310.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1801B4C2C (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_1801B4C2C.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1801B6C44 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1801B6C44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v3; // rdi
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  _QWORD *v5; // r14
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // eax
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  _QWORD *v22; // r14
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v35[3]; // [rsp+48h] [rbp-50h] BYREF
  void (__fastcall *v36)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, const struct winrt::Windows::Internal::Tiles::ITileStore *, const struct winrt::Windows::Internal::Tiles::ITileStoreChangedEventArgs *); // [rsp+60h] [rbp-38h] BYREF
  int v37; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+20h] BYREF

  v3 = this;
  v35[1] = this;
  if ( !*((_DWORD *)this + 62) )
  {
    QueryService = a2->lpVtbl->QueryService;
    v5 = (_QWORD *)((char *)this + 112);
    v6 = *((_QWORD *)this + 14);
    *v5 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, _QWORD *))QueryService)(
           a2,
           &unk_1808153E0,
           &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v7,
        v29);
    v10 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
            (int)v3 + 128,
            *v5,
            v8,
            v9,
            (__int64)v3 - 48);
    this = retaddr;
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v10,
        v29);
  }
  if ( !*((_DWORD *)v3 + 94) )
  {
    v11 = a2->lpVtbl->QueryService;
    if ( *((_QWORD *)v3 + 13) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v3 + 13);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
            a2,
            &IID_IClassicWindowManager,
            &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5,
            (char *)v3 + 104);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v12,
        v29);
    v13 = a2->lpVtbl->QueryService;
    v14 = *((_QWORD *)v3 + 15);
    *((_QWORD *)v3 + 15) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)v3 + 120);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v15,
        v29);
    v18 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
            (int)v3 + 256,
            *((_QWORD *)v3 + 15),
            v16,
            v17,
            (__int64)v3 - 48);
    this = retaddr;
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v18,
        v30);
  }
  if ( !*((_QWORD *)v3 + 49) )
  {
    v32 = 0LL;
    v35[0] = &v32;
    v35[2] = &qword_18098EB18;
    _InterlockedIncrement64(&qword_18098EB18);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory> )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
        &v40,
        &v32);
      _InterlockedDecrement64(&qword_18098EB18);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098EB18);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
        this,
        &v40,
        v35);
    }
    winrt::Windows::Foundation::IUnknown::operator=((char *)v3 + 384, &v40);
    if ( v40 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
    if ( v32 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
    v36 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged;
    v37 = 0;
    v19 = (_QWORD *)winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
                      &v34,
                      (char *)v3 - 48,
                      &v36);
    v33 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v3 + 48) + 112LL))(
            *((_QWORD *)v3 + 48),
            *v19,
            &v33);
    if ( v20 < 0 )
      winrt::throw_hresult((unsigned int)v20);
    *((_QWORD *)v3 + 49) = v33;
    if ( v34 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
  }
  if ( !*((_DWORD *)v3 + 136) )
  {
    v21 = a2->lpVtbl->QueryService;
    v22 = (_QWORD *)((char *)v3 + 416);
    v23 = *((_QWORD *)v3 + 52);
    *((_QWORD *)v3 + 52) = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v21)(
           a2,
           &SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           (char *)v3 + 416) >= 0 )
    {
      if ( *v22 )
      {
        v26 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
                (int)v3 + 424,
                *v22,
                v24,
                v25,
                (__int64)v3 - 48);
        if ( v26 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x46,
            (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
            (const char *)(unsigned int)v26,
            v31);
      }
      v27 = a2->lpVtbl->QueryService;
      v28 = *((_QWORD *)v3 + 51);
      *((_QWORD *)v3 + 51) = 0LL;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v27)(
        a2,
        &SID_VirtualDesktopManager,
        &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
        (char *)v3 + 408);
    }
  }
  _InterlockedIncrement64(&qword_18098E598);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics> )
  {
    v39 = winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v39);
    _InterlockedDecrement64(&qword_18098E598);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E598);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::call<_lambda_56da5598f90a70830cdcd2deb45a78f6_ &>(
      this,
      &v39);
  }
  winrt::Windows::Foundation::IUnknown::operator=((char *)v3 + 96, &v39);
  if ( v39 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
  *((_BYTE *)v3 + 825) = 1;
  if ( !*((_BYTE *)v3 + 825) )
    (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, _QWORD))(*(_QWORD *)v3 + 56LL))(
      v3,
      0LL);
}
