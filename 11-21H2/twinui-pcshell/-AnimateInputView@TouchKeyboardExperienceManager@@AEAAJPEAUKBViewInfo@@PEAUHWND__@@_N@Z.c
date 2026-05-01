/*
 * XREFs of ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18045BD28
 * Callers:
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18045C530 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@w.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1803CE518 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI@Z @ 0x1804584B8 (--$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180458548 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18045D568 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180460CE8 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z @ 0x180469C2C (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1805F2AD4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1805F2DD0 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::AnimateInputView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        HWND a3,
        char a4)
{
  char v4; // bl
  char IsAnimationEnabled; // al
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v12; // rdi
  __int64 v13; // r8
  float v14; // xmm6_4
  struct tagRECT *v15; // rdx
  int v16; // edi
  float v17; // xmm1_4
  float v18; // xmm0_4
  struct tagRECT *p_Rect; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // edi
  char v24; // al
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  const unsigned __int16 *v31; // r8
  int v32; // eax
  char *v33; // [rsp+28h] [rbp-A9h]
  const char *v34; // [rsp+30h] [rbp-A1h]
  char v35[8]; // [rsp+48h] [rbp-89h] BYREF
  char v36; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v37[3]; // [rsp+51h] [rbp-80h] BYREF
  int v38; // [rsp+54h] [rbp-7Dh] BYREF
  __int128 v39; // [rsp+58h] [rbp-79h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-69h] BYREF
  struct tagRECT v41; // [rsp+78h] [rbp-59h] BYREF
  int v42[4]; // [rsp+88h] [rbp-49h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp-39h] BYREF
  struct tagMONITORINFO mi; // [rsp+A8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v4 = a4;
  v35[0] = a4;
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x2B9,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(IsAnimationEnabled == 0),
    (bool)"Should not animate window if system animation is disabled",
    v34);
  v38 = *((_DWORD *)a2 + 39);
  TouchKeyboardExperienceTelemetryLogger::StartAnimatingInputView<unsigned int &,bool &,unsigned int>(
    (_DWORD *)a2 + 26,
    v35,
    &v38);
  Rect = 0LL;
  if ( !GetWindowRect(a3, &Rect) )
  {
    v10 = 705LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v42 = Rect;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(a3, 1u);
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 711LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  if ( !v12 )
    return 2147500037LL;
  v14 = 0.0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v13,
    (__int64)v9);
  v39 = *(_OWORD *)((char *)a2 + 136);
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v39, v15) )
    v14 = (float)(*((_DWORD *)a2 + 35) - *((_DWORD *)a2 + 31));
  if ( *((_DWORD *)a2 + 39) == 1 )
  {
    v16 = (v4 != 0) + 2;
    v18 = (float)(mi.rcMonitor.bottom - Rect.top) - v14;
  }
  else
  {
    if ( *((_DWORD *)a2 + 39) != 2 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x2F2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationKind is not supported",
        v33);
    v16 = 26 - (v4 != 0);
    if ( v4 )
      v17 = FLOAT_0_1;
    else
      v17 = FLOAT_0_050000001;
    v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(Rect.bottom - Rect.top) - v14) & _xmm) * v17;
  }
  p_Rect = (struct tagRECT *)v42;
  if ( !v4 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, (int)v18);
  rc = *(struct tagRECT *)v42;
  v41 = Rect;
  OffsetRect(&rc, -v42[0], -v42[1]);
  OffsetRect(&v41, -v41.left, -v41.top);
  v20 = CExperienceManagerAnimationHelper::Begin(
          (char *)this + 856,
          *((_QWORD *)a2 + 1),
          v16 | (v4 != 0 ? 25165824 : 562036736),
          &rc,
          v42,
          &v41,
          &Rect,
          &mi.rcMonitor);
  v23 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
    return v23;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
    1u,
    v21,
    v22);
  if ( !v4 )
  {
    v24 = *((_BYTE *)this + 1139);
    *((_BYTE *)this + 1139) = 0;
    if ( v24 )
    {
      v37[0] = 0;
      v36 = 1;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (_DWORD *)this + 283,
        v37,
        &v36);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 283),
        L"Hide",
        0);
    }
    v4 = v35[0];
  }
  v25 = (__int64 *)*((_QWORD *)a2 + 1);
  v26 = *v25;
  if ( v4 )
  {
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v26 + 40))(v25, 0LL);
    if ( v27 < 0 )
    {
      v28 = 791LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v27);
      return (unsigned int)v27;
    }
    v29 = 0;
    v30 = 1138LL;
  }
  else
  {
    v27 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v26 + 40))(v25, 1LL);
    if ( v27 < 0 )
    {
      v28 = 798LL;
      goto LABEL_28;
    }
    v29 = 1;
    v30 = 1139LL;
  }
  *((_BYTE *)a2 + 34) = v29;
  v31 = L"Show";
  *((_BYTE *)this + v30) = 1;
  _InterlockedExchange((volatile __int32 *)this + 283, *((_DWORD *)a2 + 26));
  if ( !v35[0] )
    v31 = L"Hide";
  TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(this, *((_DWORD *)this + 283), v31, 1);
  v32 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 856));
  if ( v32 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x328,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
  return 0LL;
}
