/*
 * XREFs of ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x180396B20
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x180396BFC (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180393B44 (-CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x180396934 (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::ShowFlyout(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2,
        HWND a3)
{
  _DWORD *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1806AC8FC, 0LL, 0LL, 2u, &v10);
  if ( CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow((CBaseTrayFlyoutExperienceManager *)((char *)this + 448)) )
  {
    *((_QWORD *)this + 59) = a3;
    v7 = CBaseTrayFlyoutExperienceManager::SetTrayItemRect(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x259,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    CSingleViewShellExperience::Show(
      (__int64)this + 72,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
  }
  return 0LL;
}
