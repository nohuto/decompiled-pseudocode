/*
 * XREFs of ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CCC44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180394268 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x1803975B8 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewHidden(
        CBaseTrayFlyoutExperienceManager **this,
        struct CSingleViewShellExperience *a2,
        __int64 a3,
        __int64 a4)
{
  int ViewWindow; // eax
  const char *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    ViewWindow = CBaseTrayFlyoutExperienceManager::GetViewWindow(this[1], &hWnd);
    if ( ViewWindow >= 0 )
    {
      if ( !RemovePropW(hWnd, L"MeetAndChatFallback") )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x101,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
          v6);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)ViewWindow);
    }
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, GUID *, __int64 *))(*(_QWORD *)this[46] + 24LL))(
           this[46],
           &GUID_6c8f947b_b975_5910_ac52_f72ed79c4fe9,
           &v12);
    if ( v7 >= 0 && !v12 )
      v7 = -2147023728;
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 56LL))(v12, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    v9 = *(_DWORD **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                        v8,
                        _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v9 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_1806ACB46, 0LL, 0LL, 2u, &v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10C,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v10);
  }
  return result;
}
