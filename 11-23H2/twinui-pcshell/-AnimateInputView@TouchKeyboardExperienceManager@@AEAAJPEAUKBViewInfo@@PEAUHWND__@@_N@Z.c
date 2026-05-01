/*
 * XREFs of ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884
 * Callers:
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18050E0C0 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801BF404 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1804AB598 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI@Z @ 0x180509060 (--$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180509104 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1805100B8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180513030 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x180517698 (_anonymous_namespace_--StartAnimationTelemetryForInputViewKeyMoment.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748D8C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
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
  HMONITOR v12; // r14
  const struct tagRECT *v13; // rdx
  float v14; // xmm1_4
  int v15; // r14d
  float v16; // xmm2_4
  float v17; // xmm0_4
  struct tagRECT *p_Rect; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  char v21; // al
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rdx
  unsigned int FirstViewType; // eax
  winrt::Windows::Foundation::IUnknown *started; // rax
  const unsigned __int16 *v28; // r8
  int v29; // eax
  char *v30; // [rsp+20h] [rbp-89h]
  const char *v31; // [rsp+28h] [rbp-81h]
  char v32[8]; // [rsp+40h] [rbp-69h] BYREF
  char v33; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v34[3]; // [rsp+49h] [rbp-60h] BYREF
  int v35; // [rsp+4Ch] [rbp-5Dh] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-59h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-49h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-39h] BYREF
  int v39[4]; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = a4;
  v32[0] = a4;
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x30E,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(IsAnimationEnabled == 0),
    (__int64)"Should not animate window if system animation is disabled",
    v31);
  v35 = *((_DWORD *)a2 + 39);
  TouchKeyboardExperienceTelemetryLogger::StartAnimatingInputView<unsigned int &,bool &,unsigned int>(
    (int *)a2 + 26,
    v32,
    &v35);
  Rect = 0LL;
  if ( !GetWindowRect(a3, &Rect) )
  {
    v10 = 790LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v39 = Rect;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(a3, 1u);
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 796LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  if ( !v12 )
    return 2147500037LL;
  v14 = 0.0;
  if ( !KeyboardHosting::IsRectNull((struct KBViewInfo *)((char *)a2 + 136), v13) )
    v14 = (float)(*((_DWORD *)a2 + 35) - *((_DWORD *)a2 + 31));
  if ( *((_DWORD *)a2 + 39) == 1 )
  {
    v15 = (v4 != 0) + 2;
    v17 = (float)(mi.rcMonitor.bottom - Rect.top) - v14;
  }
  else
  {
    if ( *((_DWORD *)a2 + 39) != 2 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x347,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationKind is not supported",
        v30);
    v15 = 26 - (v4 != 0);
    if ( v4 )
      v16 = FLOAT_0_1;
    else
      v16 = FLOAT_0_050000001;
    v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(Rect.bottom - Rect.top) - v14) & _xmm) * v16;
  }
  p_Rect = (struct tagRECT *)v39;
  if ( !v4 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, (int)v17);
  rc = *(struct tagRECT *)v39;
  v38 = Rect;
  OffsetRect(&rc, -v39[0], -v39[1]);
  OffsetRect(&v38, -v38.left, -v38.top);
  v19 = CExperienceManagerAnimationHelper::Begin(
          (char *)this + 648,
          *((_QWORD *)a2 + 1),
          v15 | (v4 != 0 ? 25165824 : 562036736),
          &rc,
          v39,
          &v38,
          &Rect,
          &mi.rcMonitor);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x354,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    return v20;
  }
  if ( !v4 )
  {
    v21 = *((_BYTE *)this + 937);
    *((_BYTE *)this + 937) = 0;
    if ( v21 )
    {
      v34[0] = 0;
      v33 = 1;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (int *)this + 233,
        v34,
        &v33);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 233),
        L"Hide",
        0);
    }
    v4 = v32[0];
  }
  v22 = (__int64 *)*((_QWORD *)a2 + 1);
  v23 = *v22;
  if ( v4 )
  {
    v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v23 + 40))(v22, 0LL);
    if ( v24 < 0 )
    {
      v25 = 864LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v24);
      return (unsigned int)v24;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 0);
    *((_BYTE *)this + 936) = 1;
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    started = (winrt::Windows::Foundation::IUnknown *)anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment(
                                                        v36,
                                                        FirstViewType);
    winrt::Windows::Foundation::IUnknown::operator=((TouchKeyboardExperienceManager *)((char *)this + 832), started);
    if ( v36[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v36);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v23 + 40))(v22, 1LL);
    if ( v24 < 0 )
    {
      v25 = 874LL;
      goto LABEL_28;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 1);
    *((_BYTE *)this + 937) = 1;
  }
  v28 = L"Show";
  _InterlockedExchange((volatile __int32 *)this + 233, *((_DWORD *)a2 + 26));
  if ( !v32[0] )
    v28 = L"Hide";
  TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(this, *((_DWORD *)this + 233), v28, 1);
  v29 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 648));
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x374,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
  return 0LL;
}
