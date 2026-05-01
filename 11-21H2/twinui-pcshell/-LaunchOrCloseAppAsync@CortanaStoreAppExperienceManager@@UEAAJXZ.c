/*
 * XREFs of ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x180387BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x18038631C (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18038682C (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180387E28 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  winrt::hstring *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  CortanaStoreAppExperienceManager *v8; // rcx
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  __int64 result; // rax
  HWND v13; // rdi
  HMONITOR v14; // rsi
  HMONITOR v15; // r14
  HRESULT WindowAttribute; // eax
  winrt::hstring *StoreCortanaAumId; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  CortanaStoreAppExperienceManager *v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvAttribute; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 *v27; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 14);
    if ( v3 )
    {
      v13 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
      v14 = MonitorFromWindow(v13, 0);
      v15 = MonitorFromRect((LPCRECT)((char *)this + 184), 0);
      pvAttribute = 0;
      WindowAttribute = DwmGetWindowAttribute(v13, 0xEu, &pvAttribute, 4u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25B,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)WindowAttribute);
      if ( pvAttribute || v14 != v15 )
      {
        StoreCortanaAumId = (winrt::hstring *)CortanaExperienceHelpers::GetStoreCortanaAumId((volatile signed __int32 *)&v28);
        v27 = winrt::hstring::c_str(StoreCortanaAumId);
        v26 = 38;
        PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v26, &v27);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v28, v18, v19, v20);
        v22 = CortanaStoreAppExperienceManager::ActivateAppAsync(v21, 0, (unsigned __int16 *)&LocaleName);
        v23 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x262,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)v22);
          return v23;
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
      v4 = (winrt::hstring *)CortanaExperienceHelpers::GetStoreCortanaAumId((volatile signed __int32 *)&v28);
      v27 = winrt::hstring::c_str(v4);
      v26 = 38;
      PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v26, &v27);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v28, v5, v6, v7);
      v9 = CortanaStoreAppExperienceManager::ActivateAppAsync(v8, 0, (unsigned __int16 *)&LocaleName);
      v11 = v9;
      if ( v9 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x250,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        result = v11;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26A,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v10);
  }
  return result;
}
