/*
 * XREFs of ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180474160
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800177A0 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014EAA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x180471574 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180471C74 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180475720 (-Stop@-$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA?AV12@XZ @ 0x180475A74 (-TransferToCurrentThread@ShowFlyoutActivity@MeetNowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MeetNowExperienceManager::OnViewShown(MeetNowExperienceManager *this, ExperienceManagerUtils **a2)
{
  char *v4; // rsi
  __int64 v5; // r9
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  __int64 v7; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  const char *v9; // r9
  HWND v10; // rax
  const char *v11; // r9
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  const char *v15; // r9
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-188h] BYREF
  int v19; // [rsp+28h] [rbp-180h] BYREF
  __int128 *v20; // [rsp+30h] [rbp-178h]
  int v21; // [rsp+38h] [rbp-170h]
  __int128 v22; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v23[320]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v4 = (char *)this - 56;
  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)((char *)this - 56));
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    v7 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v6);
    v22 = 0LL;
    v19 = 19;
    v20 = &v22;
    v21 = 16;
    if ( !(unsigned int)SetWindowCompositionAttribute(v7, &v19) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x115,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v9);
    v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v8);
    if ( !SetPropW(v10, L"MeetAndChatFallback", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x118,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        v11);
    v12 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
            (MeetNowExperienceManager *)((char *)this + 112),
            (struct ILightDismissNotification *)(((unsigned __int64)this - 40) & -(__int64)(v4 != 0LL)),
            a2[3]);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v18 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 91) + 24LL))(
            *((_QWORD *)this + 91),
            &GUID_eb298b37_68c2_5e60_86bf_72f8d0e513ff,
            &v18);
    if ( v13 >= 0 )
    {
      v14 = 2147943568LL;
      if ( !v18 )
        v13 = -2147023728;
    }
    if ( v13 >= 0 )
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    if ( **((_DWORD **)this + 55) == 1 )
    {
      v16 = MeetNowTelemetry::ShowFlyoutActivity::TransferToCurrentThread((char *)this + 392, v23);
      wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
      MeetNowTelemetry::ShowFlyoutActivity::~ShowFlyoutActivity((MeetNowTelemetry::ShowFlyoutActivity *)v23);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x127,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
                           v15);
  }
  return result;
}
