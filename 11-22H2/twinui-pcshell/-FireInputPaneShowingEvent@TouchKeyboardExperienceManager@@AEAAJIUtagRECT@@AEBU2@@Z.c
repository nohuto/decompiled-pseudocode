/*
 * XREFs of ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z @ 0x18050F870 (-FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180514BE8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180514E70 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180516DE0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x18050F92C (-FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180510108 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180523008 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1805239A8 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180525280 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter **this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rcx
  _OWORD *v8; // r8
  _OWORD *v9; // r9
  __int64 v10; // rcx
  TouchKeyboardExperienceTelemetryLogger *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  float *v17; // rcx
  HWND v18; // r15
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  int v22; // edx
  float v23; // xmm2_4
  int CurrentTextSelectionRect; // eax
  KeyboardHosting::TabTipAdapter *v25; // rdi
  void (__fastcall *v26)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  _DWORD v28[4]; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v29; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v6 = (unsigned int)a2;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a4, a2) )
    *v8 = *v9;
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled(v7) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v10,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::FireInputPaneShowingEvent_(v11, v6, a3);
  }
  v12 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(this[73], v6, a3);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v6 == *((_DWORD *)this + 153) )
    {
      FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
      Ancestor = GetAncestor(FocusedWindow, 2u);
      v17 = (float *)this[73];
      v18 = Ancestor;
      v19 = v17[110];
      v20 = v17[111];
      v21 = v17[113];
      v22 = (int)v19;
      v23 = v19 + v17[112];
      v28[0] = v22;
      v28[1] = (int)v20;
      v28[2] = (int)v23;
      v29 = 0LL;
      v28[3] = (int)(float)(v20 + v21);
      CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
                                   (KeyboardHosting::TabTipAdapter *)v17,
                                   &v29);
      if ( CurrentTextSelectionRect < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11B2,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)CurrentTextSelectionRect);
      v25 = this[44];
      v26 = *(void (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *))(*(_QWORD *)v25 + 24LL);
      PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this[73]);
      v26(v25, v18, a3, PrimaryViewDisplayMode, v28, &v29);
      *((_DWORD *)this + 155) = 1;
    }
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(this[73], v6, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
}
