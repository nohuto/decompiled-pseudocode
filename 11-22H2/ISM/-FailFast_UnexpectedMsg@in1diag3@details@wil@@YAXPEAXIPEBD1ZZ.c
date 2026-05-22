/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18010B948
 * Callers:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x1800715D4 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?SetShapeForInputType@SystemCursorService2@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@I@Z @ 0x1801156D0 (-SetShapeForInputType@SystemCursorService2@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE.c)
 *     ?CreateCursorForDevice@DesktopSystemCursorService@@UEAAJ_K@Z @ 0x180115C50 (-CreateCursorForDevice@DesktopSystemCursorService@@UEAAJ_K@Z.c)
 *     ?CreateCursorShape@DesktopSystemCursorService@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180115C80 (-CreateCursorShape@DesktopSystemCursorService@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 *     ?CursorExists@DesktopSystemCursorService@@UEAA_N_K@Z @ 0x180115CB0 (-CursorExists@DesktopSystemCursorService@@UEAA_N_K@Z.c)
 *     ?CustomCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x180115CE0 (-CustomCursor@DesktopSystemCursorService@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@XZ.c)
 *     ?GetCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x180115D10 (-GetCursor@DesktopSystemCursorService@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@_K@Z.c)
 *     ?ResetForNewShellInstance@DesktopSystemCursorService@@UEAAJK@Z @ 0x180115D40 (-ResetForNewShellInstance@DesktopSystemCursorService@@UEAAJK@Z.c)
 *     ?SetCursorClientOwner@DesktopSystemCursorService@@UEAAJUCursorId@@@Z @ 0x180115D70 (-SetCursorClientOwner@DesktopSystemCursorService@@UEAAJUCursorId@@@Z.c)
 *     ?SetCursorShellMagnification@DesktopSystemCursorService@@UEAAJ_KM@Z @ 0x180115DA0 (-SetCursorShellMagnification@DesktopSystemCursorService@@UEAAJ_KM@Z.c)
 *     ?SetCursorShellVisibility@DesktopSystemCursorService@@UEAAJ_K_N@Z @ 0x180115DD0 (-SetCursorShellVisibility@DesktopSystemCursorService@@UEAAJ_K_N@Z.c)
 *     ?SetCursorSuppressionStateForInputType@DesktopSystemCursorService@@UEAA_NW4InputType@@_N@Z @ 0x180115E00 (-SetCursorSuppressionStateForInputType@DesktopSystemCursorService@@UEAA_NW4InputType@@_N@Z.c)
 *     ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x18017E39C (-CheckForGesture@ShellEdgyRecognizer@@AEAA-AW4GestureRecognizerState@@XZ.c)
 *     ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x18017E56C (-GetRectForLocation@ShellEdgyRecognizer@@AEAA-AUtagRECT@@U2@W4EdgyLocation@1@@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801BD338 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18010ACF8 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void __noreturn wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v5; // [rsp+20h] [rbp-38h]
  wil::details *v6; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  LODWORD(v6) = -2147418113;
  wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6, (__int64)a4, (__int64)&a5);
}
