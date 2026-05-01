/*
 * XREFs of ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800664B0 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014EAA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x180475F70 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewHidden(
        MeetNowExperienceManager *this,
        ExperienceManagerUtils **a2,
        __int64 a3,
        __int64 a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v6);
    if ( !RemovePropW(v7, L"MeetAndChatFallback") )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v8);
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((MeetNowExperienceManager *)((char *)this + 112));
    v9 = CExperienceManagerAnimationHelper::End((MeetNowExperienceManager *)((char *)this + 80));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x131,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 91) + 24LL))(
            *((_QWORD *)this + 91),
            &GUID_eb298b37_68c2_5e60_86bf_72f8d0e513ff,
            &v15);
    if ( v10 >= 0 && !v15 )
      v10 = -2147023728;
    if ( v10 >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    v12 = *(_DWORD **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                         v11,
                         _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v12 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v12, (unsigned __int8 *)dword_180854ECF, 0LL, 0LL, 2u, &v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13B,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v13);
  }
  return result;
}
