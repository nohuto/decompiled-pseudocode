/*
 * XREFs of ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045C14C
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x180462A30 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463708 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1803CE518 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045B008 (--1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NPEBG@Z @ 0x180465B5C (-StartActivity@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ?Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x180466BAC (-Stop@SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1805F2AD4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1805F2DD0 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
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
  TouchKeyboardExperienceManager *v15; // rcx
  int v16; // ebx
  bool v17; // r15
  bool v18; // di
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64); // rbx
  const char *v29; // [rsp+20h] [rbp-1C8h]
  _QWORD v31[40]; // [rsp+50h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v6 = a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"SizeOrModeChangeAnimationScheduleActivity");
  v31[0] = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v31,
    v6,
    a6);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 112LL))(*(_QWORD *)(a2 + 8));
  v10 = v9;
  v11 = 0;
  if ( v9 < 0 )
  {
    v12 = 834LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v31);
    return v10;
  }
  switch ( a5 )
  {
    case 1:
      v13 = 888LL;
      break;
    case 2:
      v13 = 920LL;
      break;
    case 3:
      v13 = 952LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x351,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationType is not supported",
        v29);
  }
  v14 = (CExperienceManagerAnimationHelper *)(a1 + v13);
  v15 = (TouchKeyboardExperienceManager *)((v6 ^ 1u) + 25);
  v16 = (v6 ^ 1) << 29;
  v17 = 0;
  v18 = 1;
  if ( (_BYTE)v6 )
  {
    TouchKeyboardExperienceManager::ApplyRequestedRect(v15, (struct KBViewInfo *)a2, a4);
    if ( *(_DWORD *)(a1 + 1144) != 3 )
    {
      v18 = *(_BYTE *)(a2 + 34) != 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 1144), 3);
      v19 = CExperienceManagerAnimationHelper::Begin(
              v14,
              *(_QWORD *)(a2 + 8),
              ((v6 ^ 1) + 25) | (unsigned int)v16,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), 0LL);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
      *(_BYTE *)(a2 + 34) = 0;
      v21 = CExperienceManagerAnimationHelper::End(v14);
      if ( v19 < 0 || v21 < 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 1144), 0);
        v11 = 1;
      }
      v17 = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 1144) != 1 && *(_DWORD *)(a1 + 1144) != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 1144), 1);
    v22 = CExperienceManagerAnimationHelper::Begin(
            v14,
            *(_QWORD *)(a2 + 8),
            (unsigned int)v15 | v16,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x386,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), 1LL);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x387,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    *(_BYTE *)(a2 + 34) = 1;
    v24 = CExperienceManagerAnimationHelper::End(v14);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v24);
    v25 = *(_QWORD *)(a1 + 1024);
    if ( !v25 )
    {
      v26 = *(_QWORD *)(a1 + 1008);
      v27 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), __int64, __int64))(*(_QWORD *)v26 + 144LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 1024));
      v9 = v27(v26, TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback, a1, a1 + 1024);
      v10 = v9;
      if ( v9 < 0 )
      {
        v12 = 912LL;
        goto LABEL_34;
      }
      v25 = *(_QWORD *)(a1 + 1024);
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 96LL))(v25);
    v10 = v9;
    if ( v9 < 0 )
    {
      v12 = 915LL;
      goto LABEL_34;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 1024) + 80LL))(
           *(_QWORD *)(a1 + 1024),
           15000000LL,
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v12 = 916LL;
      goto LABEL_34;
    }
    v17 = 1;
    v18 = 1;
  }
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::Stop(
    (TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v31,
    v18,
    v17);
  TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity((TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *)v31);
  return v11;
}
