/*
 * XREFs of ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800E4958
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800CD4A4 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180066A10 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTileStore@Tiles@Internal@Windows@3@AEBUUser@System@73@@Z @ 0x180066B38 (-Create@-$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Win.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801610B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4Re.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ @ 0x1801793B0 (-RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  HRESULT v15; // eax
  int v16; // eax
  wil::details *Thread; // rax
  const char *v18; // r9
  DWORD LastError; // ebx
  void *v21; // rdx
  DWORD v22; // ebx
  void *v23; // rdx
  int ppv; // [rsp+20h] [rbp-48h]
  int ppva; // [rsp+20h] [rbp-48h]
  int ppvb; // [rsp+20h] [rbp-48h]
  _QWORD v27[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *v31; // [rsp+88h] [rbp+20h] BYREF

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
      wil::details::CloseHandle(v5, v21);
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
      v22 = GetLastError();
      wil::details::CloseHandle(v9, v23);
      SetLastError(v22);
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
  LOBYTE(v13) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl,
    v13);
  v14 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = CoCreateInstance(&CLSID_TaskbarList, 0LL, 1u, &GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a, (LPVOID *)this + 8);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v15,
      ppvb);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v16,
      ppvb);
  v30 = 0LL;
  v27[0] = &v30;
  v27[1] = &qword_1807B45F8;
  _InterlockedIncrement64(&qword_1807B45F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory> )
  {
    winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>,
      &v29,
      &v30);
    _InterlockedDecrement64(&qword_1807B45F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B45F8);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_6df14372073018d27f98c8bc6eefd2b7_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))retaddr,
      (__int64)&v29,
      v27);
  }
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 72, &v29);
  if ( v29 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  if ( v30 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v30);
  v31 = 0LL;
  if ( this )
  {
    v31 = this;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v31);
  }
  Thread = (wil::details *)CreateThread(
                             0LL,
                             0LL,
                             (LPTHREAD_START_ROUTINE)lambda_3e351382f4c08c633b195a0370cc279b_::_lambda_invoker_cdecl_,
                             this,
                             0,
                             0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 3,
    Thread);
  if ( !*((_QWORD *)this + 3) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3D,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v18);
  return 0LL;
}
