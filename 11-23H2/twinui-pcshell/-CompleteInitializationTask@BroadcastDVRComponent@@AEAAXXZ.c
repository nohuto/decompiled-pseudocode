/*
 * XREFs of ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___::Run @ 0x18008EB50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e3513c216c4aa17901f526f5b36627d___--Run.c)
 * Callees:
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x18008DEFC (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 *     ??$call@P6A?AUUserDataPaths@Storage@Windows@winrt@@AEBUIUserDataPathsStatics@234@@Z@?$factory_cache_entry@UUserDataPaths@Storage@Windows@winrt@@UIUserDataPathsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUserDataPaths@Storage@Windows@2@AEBUIUserDataPathsStatics@452@@Z@Z @ 0x18008DF60 (--$call@P6A-AUUserDataPaths@Storage@Windows@winrt@@AEBUIUserDataPathsStatics@234@@Z@-$factory_ca.c)
 *     ?LocalAppData@?$consume_Windows_Storage_IUserDataPaths@UIUserDataPaths@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008E1BC (-LocalAppData@-$consume_Windows_Storage_IUserDataPaths@UIUserDataPaths@Storage@Windows@winrt@@@i.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180090AC8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800A7798 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1800A9F84 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800B08F4 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ @ 0x18014890C (-BroadcastDVRComponent_CompleteInitializationTask_OnExit@GameDVRTraceProvider@@SAXXZ.c)
 *     ?BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x18014899C (-BroadcastDVRComponent_CompleteInitializationTask_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x180165690 (--1JsonGameMruManager@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180182CF8 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180196744 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 *     ?GetDefault@?$consume_Windows_Storage_IUserDataPathsStatics@UIUserDataPathsStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B38F8 (-GetDefault@-$consume_Windows_Storage_IUserDataPathsStatics@UIUserDataPathsStatics@Storage@Windo.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1801BD0C8 (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1803DCE24 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     __std_fs_create_directory @ 0x1807375B0 (__std_fs_create_directory.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall BroadcastDVRComponent::CompleteInitializationTask(BroadcastDVRComponent *this)
{
  _BYTE *v2; // rsi
  BroadcastDVRComponent *v3; // rcx
  int v4; // eax
  char *EventW; // rax
  const char *v6; // r9
  _QWORD *v7; // rbx
  int IsGameManager; // eax
  __int64 v9; // rdx
  int v10; // eax
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v12; // rbx
  winrt::hstring *v13; // rax
  const unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  const struct std::filesystem::path *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  JsonGameMruManager **v23; // rax
  JsonGameMruManager *v24; // rdx
  JsonGameMruManager **v25; // rdi
  JsonGameMruManager *v26; // rbx
  JsonGameMruManager *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  const WCHAR *v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34[2]; // [rsp+20h] [rbp-208h] BYREF
  JsonGameMruManager *v35[2]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v37)(const struct winrt::Windows::Storage::IUserDataPathsStatics *); // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v38[3]; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-1B8h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v41[2]; // [rsp+90h] [rbp-198h] BYREF
  _QWORD v42[2]; // [rsp+A0h] [rbp-188h] BYREF
  LPCWSTR lpFileName[4]; // [rsp+B0h] [rbp-178h] BYREF
  _QWORD v44[4]; // [rsp+D0h] [rbp-158h] BYREF
  _BYTE v45[32]; // [rsp+F0h] [rbp-138h] BYREF
  _BYTE v46[32]; // [rsp+110h] [rbp-118h] BYREF
  _BYTE v47[32]; // [rsp+130h] [rbp-F8h] BYREF
  _BYTE v48[32]; // [rsp+150h] [rbp-D8h] BYREF
  _BYTE v49[32]; // [rsp+170h] [rbp-B8h] BYREF
  _BYTE v50[32]; // [rsp+190h] [rbp-98h] BYREF
  _BYTE v51[32]; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE v52[32]; // [rsp+1D0h] [rbp-58h] BYREF
  _BYTE Src[32]; // [rsp+1F0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v2 = (char *)this + 432;
  v38[1] = (char *)this + 432;
  if ( !*((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v3) )
  {
    v4 = GameDVR_OutputDebug::Initialize();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEC,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v4,
        v34[0]);
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnEntry();
    EventW = (char *)CreateEventW(0LL, 1, 0, L"Local\\BcastdvrStartup73BD1D72-A850-47FF-82E1-8F30D2C38FFE");
    if ( (JsonGameMruManager **)((char *)this + 400) == v35 )
    {
      if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(EventW);
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 400,
        EventW);
    }
    if ( !*((_QWORD *)this + 50) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xF2,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v6);
    v7 = (_QWORD *)((char *)this + 256);
    IsGameManager = CreateIsGameManager((struct IIsGameManager **)this + 32);
    if ( IsGameManager < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF4,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)IsGameManager,
        v34[0]);
    BroadcastDVRComponent::RegisterNotifications(this);
    if ( *v7 )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(void *), BroadcastDVRComponent *))(*(_QWORD *)*v7 + 80LL))(
        *v7,
        BroadcastDVRComponent::KGLRefreshedCallback,
        this);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
    }
    BroadcastDVRComponent::IsGameDVREnabled(this);
    if ( *v7 )
    {
      LOBYTE(v9) = *((_BYTE *)this + 444);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 72LL))(*v7, v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x108,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v10,
          v34[0]);
    }
    LOBYTE(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
      v9);
    v34[1] = (__int64)&qword_18098DE28;
    _InterlockedIncrement64(&qword_18098DE28);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics> )
    {
      winrt::impl::consume_Windows_Storage_IUserDataPathsStatics<winrt::Windows::Storage::IUserDataPathsStatics>::GetDefault(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>,
        v34);
      v12 = -1LL;
      _InterlockedAdd64(&qword_18098DE28, 0xFFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v12 = -1LL;
      _InterlockedAdd64(&qword_18098DE28, 0xFFFFFFFFFFFFFFFFuLL);
      v37 = _lambda_6303e3e5e10b4f0abde3a9b07bd3902f_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>::call<winrt::Windows::Storage::UserDataPaths (*)(winrt::Windows::Storage::IUserDataPathsStatics const &)>(
        v11,
        (__int64)v34,
        (void (__fastcall **)(__int64, __int64 *))&v37);
    }
    v13 = (winrt::hstring *)winrt::impl::consume_Windows_Storage_IUserDataPaths<winrt::Windows::Storage::IUserDataPaths>::LocalAppData(
                              v34,
                              v38);
    v14 = winrt::hstring::c_str(v13);
    v39[0] = v14;
    do
      ++v12;
    while ( v14[v12] );
    v39[1] = v12;
    std::wstring::wstring(v48, v39);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v38);
    if ( v34[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v34);
    v40[0] = L"Microsoft\\GameDVR";
    v40[1] = 17LL;
    std::wstring::wstring(v45, v40);
    std::wstring::wstring(v49, v48);
    std::filesystem::operator/(Src);
    std::wstring::_Tidy_deallocate(v49, v15);
    std::wstring::_Tidy_deallocate(v45, v16);
    v41[0] = L"GameMRU";
    v41[1] = 7LL;
    std::wstring::wstring(v46, v41);
    std::wstring::wstring(v50, Src);
    std::filesystem::operator/(lpFileName);
    std::wstring::_Tidy_deallocate(v50, v17);
    std::wstring::_Tidy_deallocate(v46, v18);
    if ( !std::filesystem::exists((std::filesystem *)lpFileName, v19) )
    {
      v32 = (const WCHAR *)lpFileName;
      if ( lpFileName[3] >= (LPCWSTR)8 )
        v32 = lpFileName[0];
      v33 = (unsigned __int64)_std_fs_create_directory(v32) >> 32;
      if ( (_DWORD)v33 )
        std::filesystem::_Throw_fs_error("create_directory", (unsigned int)v33, lpFileName);
    }
    v42[0] = L"LocalMruGameList.json";
    v42[1] = 21LL;
    std::wstring::wstring(v47, v42);
    std::wstring::wstring(v51, lpFileName);
    std::filesystem::operator/(v52);
    std::wstring::_Tidy_deallocate(v51, v20);
    std::wstring::_Tidy_deallocate(v47, v21);
    std::wstring::wstring(v44, v52);
    v22 = v44;
    if ( v44[3] >= 8uLL )
      v22 = (_QWORD *)v44[0];
    v36[0] = v22;
    v36[1] = v44[2];
    v23 = (JsonGameMruManager **)JsonGameMruManager::Create(v35, v36);
    v25 = (JsonGameMruManager **)((char *)this + 560);
    if ( v25 != v23 )
    {
      v24 = *v23;
      *v23 = 0LL;
      v26 = *v25;
      *v25 = v24;
      if ( v26 )
      {
        JsonGameMruManager::~JsonGameMruManager(v26);
        operator delete(v26, 0x50uLL);
      }
    }
    v27 = v35[0];
    if ( v35[0] )
    {
      JsonGameMruManager::~JsonGameMruManager(v35[0]);
      operator delete(v27, 0x50uLL);
    }
    std::wstring::_Tidy_deallocate(v44, v24);
    std::wstring::_Tidy_deallocate(v52, v28);
    std::wstring::_Tidy_deallocate(lpFileName, v29);
    std::wstring::_Tidy_deallocate(Src, v30);
    std::wstring::_Tidy_deallocate(v48, v31);
    *v2 = 1;
    GameDVRTraceProvider::BroadcastDVRComponent_CompleteInitializationTask_OnExit();
  }
}
