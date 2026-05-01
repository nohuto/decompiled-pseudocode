/*
 * XREFs of ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180516DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180176E38 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ??1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C5EC (--1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x180518CC8 (-Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback(
        TouchKeyboardExperienceManager *this)
{
  volatile int *v2; // rdx
  bool v3; // di
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  int ViewInfo; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  struct KBViewInfo *v11; // rsi
  int v12; // eax
  struct KBViewInfo *v14[2]; // [rsp+28h] [rbp-E0h] BYREF
  TouchKeyboardExperienceManager *v15; // [rsp+38h] [rbp-D0h] BYREF
  struct tagRECT v16; // [rsp+48h] [rbp-C0h] BYREF
  struct tagRECT v17; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v18[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"SizeOrModeChangeFadeOutAnimationTimerCallbackActivity");
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::`vftable';
  v3 = 0;
  v15 = this;
  if ( this )
  {
    v4 = *((_QWORD *)this + 31);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 31, v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), v2);
  }
LABEL_8:
  if ( !this || *((_DWORD *)this + 154) != 1 || *((_DWORD *)this + 235) != 1 && *((_DWORD *)this + 235) != 2 )
    goto LABEL_30;
  _InterlockedExchange((volatile __int32 *)this + 235, 0);
  *(_OWORD *)v14 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 153), (__int64)v14);
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 1019LL;
    goto LABEL_24;
  }
  v9 = 1;
  while ( _InterlockedExchange((volatile __int32 *)this + 210, 1) )
  {
    while ( *((_DWORD *)this + 210) )
    {
      v10 = v9;
      if ( !v9 )
        goto LABEL_19;
      do
      {
        _mm_pause();
        --v10;
      }
      while ( v10 );
      if ( v9 >= 64 )
        v9 = 64;
      else
LABEL_19:
        v9 *= 2;
    }
  }
  v17 = *(struct tagRECT *)((char *)this + 844);
  _InterlockedExchange((volatile __int32 *)this + 210, 0);
  v11 = v14[0];
  TouchKeyboardExperienceManager::ApplyRequestedRect(this, v14[0], &v17);
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v11 + 1) + 40LL))(*((_QWORD *)v11 + 1), 0LL);
  v7 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, v11, 0);
    v16 = *(struct tagRECT *)((char *)v11 + 120);
    v12 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
            (KeyboardHosting::TabTipAdapter **)this,
            (const struct tagRECT *)*((unsigned int *)this + 153),
            &v16,
            (struct tagRECT *)((char *)v11 + 136));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x400,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v3 = 1;
    if ( v14[1] )
      std::_Ref_count_base::_Decref(v14[1]);
LABEL_30:
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::Stop(
      (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *)v18,
      v3);
    v7 = 0;
    goto LABEL_31;
  }
  v8 = 1022LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
LABEL_31:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v15);
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::~SizeOrModeChangeFadeOutAnimationTimerCallbackActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *)v18);
  return v7;
}
