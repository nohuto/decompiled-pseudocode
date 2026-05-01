/*
 * XREFs of ?GetAnimationClippingRect@ApplicationFlyoutView@@AEAA?AUtagRECT@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1806C56A8
 * Callers:
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1806C6210 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall ApplicationFlyoutView::GetAnimationClippingRect(
        ApplicationFlyoutView *this,
        struct tagRECT *__return_ptr retstr,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  float v4; // xmm1_4
  float v6; // xmm0_4
  LONG v7; // eax
  float v8; // xmm1_4
  HMONITOR v9; // rax
  const char *v10; // r9
  int v11; // eax
  int v13; // [rsp+20h] [rbp-60h] BYREF
  RECT rc; // [rsp+28h] [rbp-58h] BYREF
  RECT v15; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = *((float *)a3 + 1);
  v6 = *(float *)a3 + *((float *)a3 + 2);
  rc.left = (int)*(float *)a3;
  v7 = (int)v4;
  v8 = v4 + *((float *)a3 + 3);
  rc.top = v7;
  rc.right = (int)v6;
  rc.bottom = (int)v8;
  v9 = MonitorFromRect(&rc, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v9, &mi) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x162,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v10);
  if ( !CopyRect(retstr, &mi.rcWork) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x165,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)0x80004005LL,
      v13);
  v11 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 2) + 40LL))(
          *((_QWORD *)this + 2),
          &v15,
          &v13);
  if ( v11 >= 0 )
  {
    if ( !IsRectEmpty(&v15) && retstr->bottom > v15.top && ((v13 - 1) & 0xFFFFFFFD) == 0 )
      retstr->bottom = v15.top;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x169,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      (const char *)(unsigned int)v11);
  }
  return retstr;
}
