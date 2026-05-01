/*
 * XREFs of ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180049C0C
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18000AEF8 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800406E0 (-DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004A4A0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180195544 (-OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18004B658 (--$-0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004B70C (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@7@@Z @ 0x18004BFA0 (--$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@S.c)
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18004C110 (--$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@S.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004D420 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800732BC (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::PositionView(CControlCenterExperienceManager *this)
{
  HMONITOR v2; // rdi
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v5; // rdx
  unsigned int LastError; // edi
  int PerMonitorDpi; // eax
  int v8; // r14d
  double v9; // xmm0_8
  int v10; // eax
  BOOL v11; // eax
  LONG bottom; // esi
  int v13; // eax
  LONG top; // ecx
  int v15; // esi
  int v16; // r15d
  LANGID ThreadUILanguage; // ax
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  LONG left; // ecx
  int v22; // eax
  LONG right; // ecx
  int v24; // eax
  int v25; // eax
  LONG v26; // ecx
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  int v30; // eax
  int v31; // eax
  POINT pt; // [rsp+20h] [rbp-E0h] BYREF
  int v34; // [rsp+28h] [rbp-D8h] BYREF
  struct tagRECT rcMonitor; // [rsp+30h] [rbp-D0h] BYREF
  RECT rc; // [rsp+40h] [rbp-C0h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK v38[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v38);
  if ( !*((_QWORD *)this + 18) )
    goto LABEL_46;
  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 != (HMONITOR)-1LL )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v2, &mi) )
    {
      v4 = 1335LL;
      goto LABEL_6;
    }
    rcMonitor = mi.rcMonitor;
    if ( *((_BYTE *)this + 360) )
      rcMonitor = mi.rcWork;
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v2, v5);
    v8 = PerMonitorDpi;
    v9 = *((double *)this + 74);
    if ( v9 > 0.0 )
      rcMonitor.bottom -= MulDiv((int)v9, PerMonitorDpi, 96);
    rc = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 56) + 40LL))(
            *((_QWORD *)this + 56),
            &rc,
            &v34);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x54B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        pt.x);
    v11 = IsRectEmpty(&rc);
    bottom = rcMonitor.bottom;
    if ( !v11 && rcMonitor.bottom > rc.top )
    {
      if ( ((v34 - 1) & 0xFFFFFFFD) == 0 )
        bottom = rc.top;
      rcMonitor.bottom = bottom;
    }
    if ( *((_BYTE *)this + 361) )
    {
      v13 = MulDiv((int)*((float *)this + 42), v8, 96);
      bottom = rcMonitor.bottom;
      top = rcMonitor.bottom - v13;
      rcMonitor.top = rcMonitor.bottom - v13;
    }
    else
    {
      top = rcMonitor.top;
    }
    v15 = bottom - top;
    v16 = MulDiv((int)*((float *)this + 41), v8, 96);
    ThreadUILanguage = GetThreadUILanguage();
    v18 = IsBiDiLocale(ThreadUILanguage);
    v19 = *((double *)this + 75);
    if ( v18 )
    {
      if ( v19 <= 0.0 )
      {
        left = rcMonitor.left;
      }
      else
      {
        v20 = MulDiv((int)v19, v8, 96);
        left = v20 + rcMonitor.left;
        rcMonitor.left += v20;
      }
      rcMonitor.right = left + v16;
    }
    else
    {
      if ( v19 <= 0.0 )
      {
        right = rcMonitor.right;
      }
      else
      {
        v22 = MulDiv((int)v19, v8, 96);
        right = rcMonitor.right - v22;
        rcMonitor.right -= v22;
      }
      rcMonitor.left = right - v16;
    }
    v24 = CSingleViewShellExperience::SetPosition((CControlCenterExperienceManager *)((char *)this + 120), &rcMonitor);
    LastError = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v24,
        pt.x);
      goto LABEL_47;
    }
    if ( *((_BYTE *)this + 361) )
    {
      v26 = rcMonitor.top;
    }
    else
    {
      v25 = MulDiv((int)*((float *)this + 42), v8, 96);
      v26 = rcMonitor.bottom - v25;
      rcMonitor.top = rcMonitor.bottom - v25;
      v15 = v25;
    }
    v27 = (float)v26;
    v28 = (float)v16;
    v29 = (float)v15;
    if ( (float)rcMonitor.left != *((float *)this + 152)
      || v27 != *((float *)this + 153)
      || v28 != *((float *)this + 154)
      || v29 != *((float *)this + 155) )
    {
      *((float *)this + 152) = (float)rcMonitor.left;
      *((float *)this + 153) = v27;
      *((float *)this + 154) = v28;
      *((float *)this + 155) = v29;
      pt = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
      v30 = Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
              &pt,
              (char *)this + 608);
      if ( v30 >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CControlCenterExperienceManager *,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs *>)(
          (char *)this + 728,
          this,
          pt);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x57B,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v30,
          pt.x);
      if ( *((_DWORD *)this + 40) == 2 )
      {
        v31 = CControlCenterExperienceManager::SetWindowRegion(this);
        LastError = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x582,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v31,
            pt.x);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
          goto LABEL_47;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
    }
LABEL_46:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v38, 0);
    LastError = 0;
    goto LABEL_47;
  }
  v4 = 1332LL;
LABEL_6:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v4,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                v3);
LABEL_47:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v38);
  return LastError;
}
