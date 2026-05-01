/*
 * XREFs of ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x180386024
 * Callers:
 *     ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385AA0 (-OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _anonymous_namespace_::ComputeInsightsPanelRect @ 0x180384EC0 (_anonymous_namespace_--ComputeInsightsPanelRect.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x180385F54 (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SizeViewOnCreation(CInsightsExperienceManager *this)
{
  _DWORD *v2; // rcx
  HMONITOR v3; // rbx
  HMONITOR v4; // r8
  int v5; // esi
  HMONITOR v6; // r8
  int v7; // r14d
  int v8; // ebx
  __int64 v9; // rdx
  POINT pt[2]; // [rsp+30h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806AA2CA, 0LL, 0LL, 2u, &v13);
  pt[0] = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x148, (int)v3, v4);
  mi.cbSize = 40;
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x22C, (int)v3, v6);
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v8 = -2147418113;
    v9 = 411LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  *(RECT *)&pt[0].x = mi.rcWork;
  *(_OWORD *)&pt[0].x = *(_OWORD *)anonymous_namespace_::ComputeInsightsPanelRect(&v13, v5, v7, (int *)pt);
  v8 = CInsightsExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)pt);
  if ( v8 < 0 )
  {
    v9 = 413LL;
    goto LABEL_5;
  }
  return 0LL;
}
