/*
 * XREFs of ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D52DC
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180083BA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1800B53F0 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x1803D3EDC (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 *     ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x1803D4060 (--$make_shared@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$.c)
 *     ?DisplayName@?$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803D6C48 (-DisplayName@-$consume_Windows_ApplicationModel_IPackage2@UPackage@ApplicationModel@Windows@winr.c)
 *     ?GetFromAppUserModelId@?$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803D8274 (-GetFromAppUserModelId@-$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@Appli.c)
 *     ?Package@?$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803DA744 (-Package@-$consume_Windows_ApplicationModel_IAppInfo2@UAppInfo@ApplicationModel@Windows@winrt@@@.c)
 *     ?TryGetTitleFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1803DC448 (-TryGetTitleFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV1.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x1803E3158 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall BroadcastDVRComponent::AddGameToMruList(
        BroadcastDVRComponent *this,
        struct BroadcastDVRActiveAppInfo *a2)
{
  __int64 ticks; // rax
  _QWORD *v5; // rdx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  HWND v9; // rcx
  char *v10; // rbx
  unsigned __int64 v11; // r8
  __int64 TitleFromExePath; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  const char *v15; // r9
  volatile signed __int32 *dwProcessId; // [rsp+30h] [rbp-328h] BYREF
  __int64 v17; // [rsp+38h] [rbp-320h] BYREF
  __int64 v18; // [rsp+40h] [rbp-318h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-310h] BYREF
  __int64 v20[3]; // [rsp+50h] [rbp-308h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp-2F0h] BYREF
  unsigned __int16 v22[8]; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v23; // [rsp+98h] [rbp-2C0h]
  __int64 v24; // [rsp+A0h] [rbp-2B8h]
  __int128 v25; // [rsp+A8h] [rbp-2B0h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-2A0h]
  char v27[16]; // [rsp+C8h] [rbp-290h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-280h]
  __int64 v29; // [rsp+E0h] [rbp-278h]
  _QWORD v30[5]; // [rsp+E8h] [rbp-270h] BYREF
  WCHAR Filename[264]; // [rsp+110h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  if ( *((_QWORD *)this + 70) )
  {
    ticks = _Xtime_get_ticks();
    try
    {
      v20[0] = ticks;
      *(_QWORD *)&v25 = 0LL;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(_QWORD *)v22 = 0LL;
      v23 = 0LL;
      v24 = 7LL;
      *(_QWORD *)v27 = 0LL;
      v28 = 0LL;
      v29 = 7LL;
      if ( *((_QWORD *)a2 + 11) )
      {
        v5 = (_QWORD *)((char *)a2 + 72);
        if ( v22 != (unsigned __int16 *)((char *)a2 + 72) )
        {
          if ( *((_QWORD *)a2 + 12) >= 8uLL )
            v5 = (_QWORD *)*v5;
          std::wstring::assign((char *)v22, v5, *((_QWORD *)a2 + 11));
        }
        winrt::param::hstring::hstring((winrt::param::hstring *)v21, v22);
        v19 = v21;
        v20[2] = (__int64)&qword_180990AA8;
        _InterlockedIncrement64(&qword_180990AA8);
        if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics> )
        {
          winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>,
            &v17,
            v21);
          _InterlockedAdd64(&qword_180990AA8, 0xFFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAdd64(&qword_180990AA8, 0xFFFFFFFFFFFFFFFFuLL);
          winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_93cf3dd1a637ea07f09c92a2c241488e_ &>(
            v6,
            (__int64)&v17,
            &v19);
        }
        winrt::impl::consume_Windows_ApplicationModel_IAppInfo2<winrt::Windows::ApplicationModel::AppInfo>::Package(
          &v17,
          &v18);
        v7 = winrt::impl::consume_Windows_ApplicationModel_IPackage2<winrt::Windows::ApplicationModel::Package>::DisplayName(
               &v18,
               &dwProcessId);
        std::wstring::assign<winrt::hstring,0>((__int64)&v25, v7, v8);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&dwProcessId);
        if ( v18 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
        if ( v17 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
      }
      else
      {
        v9 = *(HWND *)a2;
        if ( !*(_QWORD *)a2 )
          v9 = (HWND)*((_QWORD *)a2 + 1);
        GetWindowThreadProcessId(v9, (LPDWORD)&dwProcessId);
        if ( (_DWORD)dwProcessId )
        {
          v10 = (char *)OpenProcess(0x1000u, 0, (DWORD)dwProcessId);
          v20[1] = (__int64)v10;
          if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            memset_0(Filename, 0, 0x208uLL);
            if ( K32GetModuleFileNameExW(v10, 0LL, Filename, 0x104u) )
            {
              v11 = -1LL;
              do
                ++v11;
              while ( Filename[v11] );
              std::wstring::assign(v27, Filename, v11);
              TitleFromExePath = TryGetTitleFromExePath(v30, v27);
              if ( &v25 != (__int128 *)TitleFromExePath )
              {
                std::wstring::_Tidy_deallocate((__int64)&v25);
                v25 = *(_OWORD *)TitleFromExePath;
                si128 = *(__m128i *)(TitleFromExePath + 16);
                *(_QWORD *)(TitleFromExePath + 16) = 0LL;
                *(_QWORD *)(TitleFromExePath + 24) = 7LL;
                *(_WORD *)TitleFromExePath = 0;
              }
              std::wstring::_Tidy_deallocate((__int64)v30);
            }
          }
          if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v10);
        }
      }
      if ( v23 || v28 )
      {
        v13 = *((_QWORD *)this + 70);
        v14 = std::make_shared<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,std::wstring &,std::wstring &,std::wstring &>(
                v30,
                v20,
                &v25,
                v22,
                v27);
        JsonGameMruManager::AddMruItem(v13, v14);
        *((_DWORD *)a2 + 14) |= 0x100u;
      }
      std::wstring::_Tidy_deallocate((__int64)v27);
      std::wstring::_Tidy_deallocate((__int64)v22);
      std::wstring::_Tidy_deallocate((__int64)&v25);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1037,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)0x8007000ELL);
      return;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x1039,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v15);
    }
  }
}
