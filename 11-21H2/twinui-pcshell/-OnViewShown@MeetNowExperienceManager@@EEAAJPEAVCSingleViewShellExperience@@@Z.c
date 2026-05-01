/*
 * XREFs of ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1803933F8 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180393B70 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180394268 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180396E94 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x1803971E4 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewShown(
        CBaseTrayFlyoutExperienceManager **this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // r9
  int ViewWindow; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // r9
  int v8; // eax
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  const char *v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-198h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-190h] BYREF
  int v17; // [rsp+30h] [rbp-188h] BYREF
  __int128 *v18; // [rsp+38h] [rbp-180h]
  int v19; // [rsp+40h] [rbp-178h]
  __int128 v20; // [rsp+48h] [rbp-170h] BYREF
  _BYTE v21[320]; // [rsp+60h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)(this - 6));
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      v3);
    ViewWindow = CBaseTrayFlyoutExperienceManager::GetViewWindow(this[1], &hWnd);
    if ( ViewWindow >= 0 )
    {
      v20 = 0LL;
      v17 = 19;
      v18 = &v20;
      v19 = 16;
      if ( !(unsigned int)SetWindowCompositionAttribute(hWnd, &v17, v5, v6) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xE4,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
          v7);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)ViewWindow);
    }
    v8 = CBaseTrayFlyoutExperienceManager::GetViewWindow(this[1], &hWnd);
    if ( v8 >= 0 )
    {
      if ( !SetPropW(hWnd, L"MeetAndChatFallback", HANDLE_FLAG_INHERIT) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xEA,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
          v9);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, GUID *, __int64 *))(*(_QWORD *)this[46] + 24LL))(
            this[46],
            &GUID_6c8f947b_b975_5910_ac52_f72ed79c4fe9,
            &v15);
    if ( v10 >= 0 )
    {
      v11 = 2147943568LL;
      if ( !v15 )
        v10 = -2147023728;
    }
    if ( v10 >= 0 )
    {
      LOBYTE(v11) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
    if ( *(_DWORD *)this[10] == 1 )
    {
      v13 = MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread(this + 4, v21);
      wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
      MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v21);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF8,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v12);
  }
  return result;
}
