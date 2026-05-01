/*
 * XREFs of ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180461AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x180462A30 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463708 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180463910 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804650F0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180473CE0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x18045DB84 (-FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18045E50C (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180460E00 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18046A010 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180470C24 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18047151C (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter **this,
        unsigned int a2,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  struct tagRECT v8; // xmm0
  struct tagRECT *v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  TouchKeyboardExperienceTelemetryLogger *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __m128i *v19; // r8
  HWND v20; // r15
  __m128 v21; // xmm2
  float v22; // xmm1_4
  int CurrentTextSelectionRect; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  void (__fastcall *v25)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  _DWORD v27[4]; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v28; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  v8 = *a4;
  v28 = *a4;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v28, v9) )
    *a3 = v8;
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled(v11, v10) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v12,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::FireInputPaneShowingEvent_(v13, a2, a3);
  }
  v14 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(this[92], a2, a3);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( a2 == *((_DWORD *)this + 191) )
    {
      FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
      Ancestor = GetAncestor(FocusedWindow, 2u);
      v19 = (__m128i *)this[92];
      v20 = Ancestor;
      v21 = (__m128)_mm_loadu_si128(v19 + 31);
      v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v27[0] = (int)v21.m128_f32[0];
      v27[1] = (int)v22;
      v27[2] = (int)(float)(_mm_shuffle_ps(v21, v21, 170).m128_f32[0] + v21.m128_f32[0]);
      v28 = 0LL;
      v27[3] = (int)(float)(_mm_shuffle_ps(v21, v21, 255).m128_f32[0] + v22);
      CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
                                   (KeyboardHosting::TabTipAdapter *)v19,
                                   &v28);
      if ( CurrentTextSelectionRect < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1302,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)CurrentTextSelectionRect);
      v24 = this[44];
      v25 = *(void (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *))(*(_QWORD *)v24 + 24LL);
      PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this[92]);
      v25(v24, v20, a3, PrimaryViewDisplayMode, v27, &v28);
      *((_DWORD *)this + 193) = 1;
    }
    TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference((TouchKeyboardExperienceManager *)this, a2, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
}
