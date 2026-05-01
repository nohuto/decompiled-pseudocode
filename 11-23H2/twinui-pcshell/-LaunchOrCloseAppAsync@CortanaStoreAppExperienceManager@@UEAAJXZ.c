/*
 * XREFs of ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18045BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x18045A97C (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18045AE44 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18045B814 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18045BFD0 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  winrt::hstring *v4; // rax
  CortanaStoreAppExperienceManager *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  HWND v10; // rdi
  HMONITOR v11; // rsi
  HMONITOR v12; // r14
  HRESULT WindowAttribute; // eax
  bool *v14; // rdx
  winrt::hstring *StoreCortanaAumId; // rax
  CortanaStoreAppExperienceManager *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvAttribute; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 *v22; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 14);
    if ( v3 )
    {
      v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
      v11 = MonitorFromWindow(v10, 0);
      v12 = MonitorFromRect((LPCRECT)((char *)this + 184), 0);
      pvAttribute = 0;
      WindowAttribute = DwmGetWindowAttribute(v10, 0xEu, &pvAttribute, 4u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1F7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)WindowAttribute);
      if ( pvAttribute || v11 != v12 )
      {
        StoreCortanaAumId = (winrt::hstring *)CortanaExperienceHelpers::GetStoreCortanaAumId(
                                                (volatile signed __int32 *)&v23,
                                                v14);
        v22 = winrt::hstring::c_str(StoreCortanaAumId);
        v21 = 38;
        PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v21, &v22);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
        v17 = CortanaStoreAppExperienceManager::ActivateAppAsync(v16, 0, (unsigned __int16 *)&LocaleName);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FE,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
          return v18;
        }
      }
      else
      {
        CortanaStoreAppExperienceManager::OnViewConsolidationRequested((CortanaStoreAppExperienceManager *)((char *)this - 120));
      }
      result = 0LL;
    }
    else
    {
      v4 = (winrt::hstring *)CortanaExperienceHelpers::GetStoreCortanaAumId((volatile signed __int32 *)&v23, (bool *)a2);
      v22 = winrt::hstring::c_str(v4);
      v21 = 38;
      PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v21, &v22);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
      v6 = CortanaStoreAppExperienceManager::ActivateAppAsync(v5, 0, (unsigned __int16 *)&LocaleName);
      v8 = v6;
      if ( v6 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EC,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        result = v8;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x206,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v7);
  }
  return result;
}
