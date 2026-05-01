/*
 * XREFs of ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1805F31F0
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803690C0 (-OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWi.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18036B290 (-OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClient.c)
 *     ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180394AB0 (-OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWin.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::UpdateLightDismiss(
        __int64 *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        ExperienceManagerUtils *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
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
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    v7 = *a1;
    v14[1] = v5;
    v14[0] = v3;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 32LL))(
           v7,
           *((unsigned int *)a1 + 2),
           v14);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
    v11 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v9,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u )
    {
      v12 = *((_DWORD *)a1 + 2);
      v18 = 0;
      v13 = v12;
      v17 = 4;
      v16 = &v13;
      tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_1806D0424, 0LL, 0LL, 3u, &v15);
    }
  }
  return 0LL;
}
