/*
 * XREFs of ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804650F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ADB0 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SizeOrModeChangeFadeOutAnimationTimerCallback@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x180458420 (--$SizeOrModeChangeFadeOutAnimationTimerCallback@AEA_N@TouchKeyboardExperienceTelemetryLogger@@S.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback(
        TouchKeyboardExperienceManager *this,
        volatile int *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rsi
  int v10; // eax
  char v12[8]; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-48h] BYREF
  TouchKeyboardExperienceManager *v14; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[0] = 0;
  v14 = this;
  if ( this )
  {
    v3 = *((_QWORD *)this + 31);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 31, v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), a2);
  }
LABEL_8:
  if ( !this || *((_DWORD *)this + 192) != 1 || *((_DWORD *)this + 286) != 1 && *((_DWORD *)this + 286) != 2 )
    goto LABEL_23;
  _InterlockedExchange((volatile __int32 *)this + 286, 0);
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, *((_DWORD *)this + 191), (__int64 *)v13);
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 945LL;
    goto LABEL_17;
  }
  while ( _InterlockedExchange((volatile __int32 *)this + 260, 1) )
    ;
  v16 = *(struct tagRECT *)((char *)this + 1044);
  _InterlockedExchange((volatile __int32 *)this + 260, 0);
  v9 = v13[0];
  TouchKeyboardExperienceManager::ApplyRequestedRect(v6, v13[0], &v16);
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 1) + 40LL))(*((_QWORD *)v9 + 1), 0LL);
  v7 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    *((_BYTE *)v9 + 34) = 0;
    v15 = *(struct tagRECT *)((char *)v9 + 120);
    v10 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
            (KeyboardHosting::TabTipAdapter **)this,
            *((_DWORD *)this + 191),
            &v15,
            (const struct tagRECT *)((char *)v9 + 136));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v12[0] = 1;
    if ( v13[1] )
      std::_Ref_count_base::_Decref(v13[1]);
LABEL_23:
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallback<bool &>(v12);
    v7 = 0;
    goto LABEL_24;
  }
  v8 = 948LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_24:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v14);
  return v7;
}
