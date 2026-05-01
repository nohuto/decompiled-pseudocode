/*
 * XREFs of ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180083BA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1803D9C5C (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180082C2C (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1801BF15C (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x1803D3060 (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D576C (-ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV-$vector@U-$pair@KVString@I.c)
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1803D82CC (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D877C (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z @ 0x1803D8C38 (-IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1803DAF30 (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 *     ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x1803DC100 (-TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Interna.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x1803DC2A4 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x1803DCEB4 (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803DCFE0 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 *     ?erase@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@0@Z @ 0x1803DD13C (-erase@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall BroadcastDVRComponent::EvaluateAppForGameMode(
        BroadcastDVRComponent *this,
        struct IApplicationView *a2,
        HWND *a3)
{
  BroadcastDVRComponent *v6; // rcx
  struct GameConfigInfo *v7; // r12
  HWND v8; // r15
  HWND v9; // rbx
  int IsExpandedResources; // eax
  BroadcastDVRComponent *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HSTRING *v16; // rdx
  HSTRING *i; // rbx
  HANDLE v18; // rax
  const char *v19; // r9
  char *v20; // rbx
  const WCHAR *FileNameW; // rax
  int LargestValidResourceRequest; // r14d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27; // [rsp+30h] [rbp-2B8h] BYREF
  DWORD v28; // [rsp+34h] [rbp-2B4h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-2B0h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64); // [rsp+40h] [rbp-2A8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-2A0h] BYREF
  HANDLE hProcess; // [rsp+50h] [rbp-298h] BYREF
  __int128 v33; // [rsp+58h] [rbp-290h] BYREF
  __int64 v34; // [rsp+68h] [rbp-280h]
  __int128 v35; // [rsp+70h] [rbp-278h] BYREF
  __int128 v36; // [rsp+80h] [rbp-268h]
  __int64 v37; // [rsp+90h] [rbp-258h]
  WCHAR Filename[264]; // [rsp+A0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  v29 = 0;
  if ( (SHRegGetDWORD(
          HKEY_LOCAL_MACHINE,
          L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
          L"AllowAutoGameMode",
          &v29) < 0
     || v29)
    && (SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"AutoGameModeEnabled", &v29) < 0 || v29) )
  {
    v28 = 0;
    v27 = 0;
    v7 = (struct GameConfigInfo *)(a3 + 2);
    v8 = *a3;
    v9 = a3[1];
    IsExpandedResources = BroadcastDVRComponent::IsExpandedResources(v6, a2, &v27);
    if ( IsExpandedResources != -2147023728 && IsExpandedResources != -2147024444 )
    {
      v11 = retaddr;
      if ( IsExpandedResources < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7DD,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)IsExpandedResources);
    }
    LOBYTE(v11) = v27;
    v12 = v27 ? 5 : 0;
    LODWORD(v30) = v12;
    if ( !v27 )
    {
      if ( !BroadcastDVRComponent::IsGameModeGame(v11, v7, (enum GameModeReason *)&v30) )
        return;
      v12 = (unsigned int)v30;
    }
    if ( v8 )
      v9 = v8;
    GetWindowThreadProcessId(v9, &v28);
    if ( v28 )
    {
      if ( v28 == *((_DWORD *)this + 114) )
      {
        try
        {
          v33 = 0LL;
          v34 = 0LL;
          BroadcastDVRComponent::GetNonServiceProcessListAndIds(this, &v33);
          BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess((__int64)this, v28, &v33);
          v35 = 0LL;
          *(_QWORD *)&v36 = 0LL;
          BroadcastDVRComponent::GetSortedUniqueProcessList(v13, &v33, &v35);
          BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(v14, (char *)this + 352, &v35);
          BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame(v15, &v35);
          for ( i = (HSTRING *)v35; i != *((HSTRING **)&v35 + 1); ++i )
          {
            v16 = (HSTRING *)*((_QWORD *)this + 45);
            if ( v16 == *((HSTRING **)this + 46) )
            {
              std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
                (__int64 *)this + 44,
                (__int64)v16,
                i);
            }
            else
            {
              *v16 = *i;
              *i = 0LL;
              *((_QWORD *)this + 45) += 8LL;
            }
          }
          std::vector<Windows::Internal::String>::erase(&v35, &hProcess, v35, *((_QWORD *)&v35 + 1));
          std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
            *((Windows::Internal::String **)this + 44),
            *((Windows::Internal::String **)this + 45),
            (__int64)(*((_QWORD *)this + 45) - *((_QWORD *)this + 44)) >> 3,
            0);
          std::vector<Windows::Internal::String>::_Tidy((__int64)&v35);
          std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v33);
        }
        catch ( std::bad_alloc )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x804,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)0x8007000ELL);
          return;
        }
        return;
      }
      hProcess = 0LL;
      v18 = OpenProcess(0x1000u, 0, v28);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &hProcess,
        v18);
      v20 = (char *)hProcess;
      if ( hProcess )
      {
        v31 = 0LL;
        v30 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
        if ( a2 )
        {
          if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v30, (__int64)&v31) >= 0 )
          {
            if ( K32GetModuleFileNameExW(v20, 0LL, Filename, 0x104u) )
            {
              FileNameW = PathFindFileNameW(Filename);
              if ( CompareStringOrdinal(FileNameW, -1, L"applicationframehost.exe", -1, 1) == 2 )
                goto LABEL_28;
            }
          }
        }
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        RmGameModeInitializeResourceRequest(&v35);
        LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&v35);
        if ( LargestValidResourceRequest < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x825,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(LargestValidResourceRequest | 0x10000000u));
          goto LABEL_28;
        }
        BroadcastDVRComponent::GetGameModeRequest(this, v12, v7, &v35);
        v23 = RmGameModeRegisterProcess(v20, &v35, 0LL);
        if ( v23 < 0 )
        {
          if ( v23 != -1073740008 )
          {
            v24 = v23 | 0x10000000;
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x833,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v24);
          }
LABEL_28:
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v30);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
          if ( v20 == (char *)-1LL )
            return;
LABEL_39:
          CloseHandle(v20);
          return;
        }
        *((_DWORD *)this + 114) = v28;
        v33 = 0LL;
        v34 = 0LL;
        BroadcastDVRComponent::GetNonServiceProcessListAndIds(this, &v33);
        BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess((__int64)this, v28, &v33);
        std::vector<Windows::Internal::String>::clear((char *)this + 352);
        BroadcastDVRComponent::GetSortedUniqueProcessList(v25, &v33, (char *)this + 352);
        BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame(v26, (char *)this + 352);
        std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v33);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v30);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      }
      else
      {
        wil::details::in1diag3::Log_GetLastError(
          retaddr,
          (void *)0x845,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          v19);
      }
      if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return;
      goto LABEL_39;
    }
  }
}
