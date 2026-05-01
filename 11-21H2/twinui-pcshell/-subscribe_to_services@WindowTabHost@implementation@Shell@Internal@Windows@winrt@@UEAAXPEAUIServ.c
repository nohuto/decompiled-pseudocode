/*
 * XREFs of ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800DA040
 * Callers:
 *     <none>
 * Callees:
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180066A10 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTileStore@Tiles@Internal@Windows@3@AEBUUser@System@73@@Z @ 0x180066B38 (-Create@-$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Win.c)
 *     ??$call@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@2@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@Z @ 0x180067D9C (--$call@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@-$factory_cache_entry@UWindowTabBroker@S.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18010CDEC (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_18010CDEC.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18010CE9C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_18010CE9C.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x18010CF40 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_18010CF40.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Tiles@345@AEBUITileStoreChangedEventArgs@7345@@Z@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@PEAUWindowTabHost@implementation@Shell@Internal@23@P8456723@EAAXAEBUITileStore@Tiles@723@AEBUITileStoreChangedEventArgs@9723@@Z@Z @ 0x18017586C (--$-0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Til.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v4; // rdi
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  _QWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
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
  int v24; // r9d
  int v25; // eax
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-78h]
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v34[3]; // [rsp+48h] [rbp-50h] BYREF
  void (__fastcall *v35)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, const struct winrt::Windows::Internal::Tiles::ITileStore *, const struct winrt::Windows::Internal::Tiles::ITileStoreChangedEventArgs *); // [rsp+60h] [rbp-38h] BYREF
  int v36; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v38; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+20h] BYREF

  v4 = this;
  if ( !*((_DWORD *)this + 62) )
  {
    QueryService = a2->lpVtbl->QueryService;
    v6 = (_QWORD *)((char *)this + 112);
    v7 = *((_QWORD *)this + 14);
    *v6 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, _QWORD *))QueryService)(
           a2,
           &unk_1806845F0,
           &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
           v6);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v8,
        v28);
    v11 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
            (int)v4 + 128,
            *v6,
            v9,
            v10,
            (__int64)v4 - 48);
    this = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v11,
        v28);
  }
  if ( !*((_DWORD *)v4 + 94) )
  {
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IClassicWindowManager,
            &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5,
            (char *)v4 + 104);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v12,
        v28);
    v13 = a2->lpVtbl->QueryService;
    v14 = *((_QWORD *)v4 + 15);
    *((_QWORD *)v4 + 15) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)v4 + 120);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v15,
        v28);
    v18 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
            (int)v4 + 256,
            *((_QWORD *)v4 + 15),
            v16,
            v17,
            (__int64)v4 - 48);
    this = retaddr;
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v18,
        v29);
  }
  if ( !*((_QWORD *)v4 + 49) )
  {
    v31 = 0LL;
    v34[0] = &v31;
    v34[1] = &qword_1807B45F8;
    _InterlockedIncrement64(&qword_1807B45F8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory> )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
        &v39,
        &v31);
      _InterlockedDecrement64(&qword_1807B45F8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B45F8);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
        (__int64)&v39,
        v34);
    }
    winrt::Windows::Foundation::IUnknown::operator=((char *)v4 + 384, &v39);
    if ( v39 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    v35 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged;
    v36 = 0;
    v19 = (_QWORD *)winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
                      &v33,
                      (char *)v4 - 48,
                      &v35);
    v32 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v4 + 48) + 112LL))(
            *((_QWORD *)v4 + 48),
            *v19,
            &v32);
    if ( v20 < 0 )
      winrt::throw_hresult((unsigned int)v20);
    *((_QWORD *)v4 + 49) = v32;
    if ( v33 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v33);
  }
  if ( !*((_DWORD *)v4 + 136) )
  {
    v21 = a2->lpVtbl->QueryService;
    v22 = (_QWORD *)((char *)v4 + 416);
    v23 = *((_QWORD *)v4 + 52);
    *((_QWORD *)v4 + 52) = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v21)(
           a2,
           &SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           (char *)v4 + 416) >= 0 )
    {
      if ( *v22 )
      {
        v25 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
                (int)v4 + 424,
                *v22,
                (_DWORD)a3,
                v24,
                (__int64)v4 - 48);
        if ( v25 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3E,
            (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
            (const char *)(unsigned int)v25,
            v30);
      }
      v26 = a2->lpVtbl->QueryService;
      v27 = *((_QWORD *)v4 + 51);
      *((_QWORD *)v4 + 51) = 0LL;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v26)(
        a2,
        &SID_VirtualDesktopManager,
        &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
        (char *)v4 + 408);
    }
  }
  _InterlockedIncrement64(&qword_1807B4278);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics> )
  {
    v38 = winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v38);
    _InterlockedDecrement64(&qword_1807B4278);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4278);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::call<_lambda_c4edbeba96dcef3322467452933ed6cc_ &>(
      (__int64)this,
      (winrt::Windows::Foundation::IUnknown *)&v38,
      a3);
  }
  winrt::Windows::Foundation::IUnknown::operator=((char *)v4 + 96, &v38);
  if ( v38 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
  *((_BYTE *)v4 + 785) = 1;
}
