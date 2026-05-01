/*
 * XREFs of ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180749464
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18043EFC0 (-OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWi.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180440F80 (-OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClient.c)
 *     ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180472B50 (-OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWin.c)
 *     ?OnClientWindowReadyForPresentationChangedHandler@MeetNowExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180472B80 (-OnClientWindowReadyForPresentationChangedHandler@MeetNowExperienceManager@@AEAAJPEAUIClientWind.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::UpdateLightDismiss(
        __int64 *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        ExperienceManagerUtils *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp+7h] BYREF
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = (unsigned int)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    v5 = ExperienceManagerUtils::WindowFromViewWrapper(a3, a2);
    if ( !v5 )
    {
      v6 = -2147467259;
      v7 = 147LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v9 = *a1;
    v14[1] = v5;
    v14[0] = v3;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v9 + 32LL))(
           v9,
           *((unsigned int *)a1 + 2),
           v14);
    if ( v6 < 0 )
    {
      v7 = 153LL;
      goto LABEL_4;
    }
    v11 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v10,
                      (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u )
    {
      v12 = *((_DWORD *)a1 + 2);
      v18 = 0;
      v13 = v12;
      v17 = 4;
      v16 = &v13;
      tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_18087F1F2, 0LL, 0LL, 3u, &v15);
    }
  }
  return 0LL;
}
