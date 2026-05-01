/*
 * XREFs of ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800A4778
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008B088 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x1800FDDB0 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@@Z @ 0x1800FDF08 (-Create@-$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Win.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ @ 0x1801AF5D4 (-RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::Initialize(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this)
{
  const char *v2; // r9
  wil::details *v3; // rcx
  HANDLE Event; // r15
  wil::details *v5; // r14
  int LastErrorFailHr; // eax
  wil::details *v7; // rcx
  HANDLE v8; // r15
  wil::details *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  HRESULT Instance; // eax
  __int64 v13; // rcx
  HRESULT v14; // eax
  int v15; // eax
  HANDLE Thread; // rax
  const char *v17; // r9
  DWORD LastError; // ebx
  void *v20; // rdx
  DWORD v21; // ebx
  void *v22; // rdx
  int ppv; // [rsp+20h] [rbp-48h]
  int ppva; // [rsp+20h] [rbp-48h]
  int ppvb; // [rsp+20h] [rbp-48h]
  _QWORD v26[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *v30; // [rsp+88h] [rbp+20h] BYREF

  if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterClass() )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x11,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v2);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v5 = (wil::details *)*((_QWORD *)this + 5);
    if ( v5 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v5, v20);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 5) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
  }
  if ( LastErrorFailHr < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      ppv);
  v8 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v8 )
  {
    GetLastError();
    v9 = (wil::details *)*((_QWORD *)this + 4);
    if ( v9 )
    {
      v21 = GetLastError();
      wil::details::CloseHandle(v9, v22);
      SetLastError(v21);
    }
    *((_QWORD *)this + 4) = v8;
    v10 = 0;
  }
  else
  {
    v10 = wil::details::GetLastErrorFailHr(v7);
  }
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v10,
      ppv);
  v11 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)this + 7);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)Instance,
      ppva);
  v13 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = CoCreateInstance(&CLSID_TaskbarList, 0LL, 1u, &GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a, (LPVOID *)this + 8);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v14,
      ppvb);
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v15,
      ppvb);
  v29 = 0LL;
  v26[0] = &v29;
  v26[1] = &qword_18098EB18;
  _InterlockedIncrement64(&qword_18098EB18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory> )
  {
    winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
      &v28,
      &v29);
    _InterlockedDecrement64(&qword_18098EB18);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EB18);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
      retaddr,
      &v28,
      v26);
  }
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 72, &v28);
  if ( v28 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
  if ( v29 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  v30 = 0LL;
  if ( this )
  {
    v30 = this;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v30);
  }
  Thread = CreateThread(0LL, 0LL, lambda_e637c9f76490f66fe2e1ec9f853f38ce_::_lambda_invoker_cdecl_, this, 0, 0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 24,
    Thread);
  if ( !*((_QWORD *)this + 3) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3D,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v17);
  return 0LL;
}
