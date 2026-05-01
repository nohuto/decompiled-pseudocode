/*
 * XREFs of ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACE38
 * Callers:
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800ACD00 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180651874 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 *     ?ReportTouchEdgePerformed_@TouchEdgeGestureTelemetry@@QEAAXIAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@@Z @ 0x180655688 (-ReportTouchEdgePerformed_@TouchEdgeGestureTelemetry@@QEAAXIAEBU-$com_ptr@UIImmersiveMonitor@@@w.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z @ 0x1801F2148 (--$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<bool>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h]
  int v13; // [rsp+6Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  *a2 = 0;
  v9 = a3;
  v6 = 1;
  v12 = 1;
  v7 = NtQueryWnfStateData(a1, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<bool>(a3, v12, v11);
    if ( !v11 || v12 != 1 )
      v6 = 0;
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7,
      v9);
    return v7;
  }
}
