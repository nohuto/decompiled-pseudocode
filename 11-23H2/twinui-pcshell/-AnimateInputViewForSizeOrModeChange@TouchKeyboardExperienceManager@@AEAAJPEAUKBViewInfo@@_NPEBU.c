/*
 * XREFs of ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180514BE8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1804AB598 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C5C0 (--1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NPEBG@Z @ 0x1805175DC (-StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ?Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1805189D0 (-Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180748D8C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        const struct tagRECT *a4,
        int a5,
        unsigned __int16 *a6)
{
  int v6; // r13d
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  CExperienceManagerAnimationHelper *v14; // r12
  int v15; // ebx
  bool v16; // r15
  bool v17; // bp
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // r15
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64); // rbx
  const char *v28; // [rsp+20h] [rbp-1C8h]
  _QWORD v30[40]; // [rsp+50h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v6 = a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"SizeOrModeChangeAnimationScheduleActivity");
  v30[0] = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v30,
    v6,
    a6);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 112LL))(*(_QWORD *)(a2 + 8));
  v10 = v9;
  v11 = 0;
  if ( v9 < 0 )
  {
    v12 = 909LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v30);
    return v10;
  }
  switch ( a5 )
  {
    case 1:
      v13 = 680LL;
      break;
    case 2:
      v13 = 712LL;
      break;
    case 3:
      v13 = 744LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x39C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationType is not supported",
        v28);
  }
  v14 = (CExperienceManagerAnimationHelper *)(a1 + v13);
  v15 = (v6 ^ 1) << 29;
  v16 = 0;
  v17 = 1;
  if ( (_BYTE)v6 )
  {
    TouchKeyboardExperienceManager::ApplyRequestedRect(
      (TouchKeyboardExperienceManager *)a1,
      (struct KBViewInfo *)a2,
      a4);
    if ( *(_DWORD *)(a1 + 940) != 3 )
    {
      v17 = *(_BYTE *)(a2 + 34) != 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 940), 3);
      v18 = CExperienceManagerAnimationHelper::Begin(
              v14,
              *(_QWORD *)(a2 + 8),
              ((v6 ^ 1) + 25) | (unsigned int)v15,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), 0LL);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        (TouchKeyboardExperienceManager *)a1,
        (struct KBViewInfo *)a2,
        0);
      v20 = CExperienceManagerAnimationHelper::End(v14);
      if ( v18 < 0 || v20 < 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 940), 0);
        v11 = 1;
      }
      v16 = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 940) != 1 && *(_DWORD *)(a1 + 940) != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 940), 1);
    v21 = CExperienceManagerAnimationHelper::Begin(
            v14,
            *(_QWORD *)(a2 + 8),
            ((v6 ^ 1) + 25) | (unsigned int)v15,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), 1LL);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
      (TouchKeyboardExperienceManager *)a1,
      (struct KBViewInfo *)a2,
      1);
    v23 = CExperienceManagerAnimationHelper::End(v14);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D4,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    v24 = (_QWORD *)(a1 + 816);
    if ( !*(_QWORD *)(a1 + 816) )
    {
      v25 = *(_QWORD *)(a1 + 800);
      v26 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64))(*(_QWORD *)v25 + 144LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 816));
      v9 = v26(v25, TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback, a1, a1 + 816);
      v10 = v9;
      if ( v9 < 0 )
      {
        v12 = 987LL;
        goto LABEL_33;
      }
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 96LL))(*v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v12 = 990LL;
      goto LABEL_33;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v24 + 80LL))(*v24, 15000000LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v12 = 991LL;
      goto LABEL_33;
    }
    v16 = 1;
  }
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::Stop(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v30,
    v17,
    v16);
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v30);
  return v11;
}
