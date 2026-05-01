/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180039700 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_69bbf18e8e0f03bc10764316da6b6053___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180196CB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180196CB0.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180362BF8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180363960 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18036405C (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020198 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18004B658 (--$-0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004B70C (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@7@@Z @ 0x18004BFA0 (--$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@S.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800732BC (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x180195FC4 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x180196E90 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x18022C83C (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     ??$InvokeAll@PEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVToastCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180361CD4 (--$InvokeAll@PEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@She.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1805F30A8 (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  HMONITOR v8; // rsi
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v11; // rdx
  HWND WindowW; // rax
  HRESULT Service; // eax
  int PerMonitorDpi; // eax
  int v15; // r8d
  int v16; // esi
  double v17; // xmm0_8
  int v18; // eax
  int v19; // r8d
  LONG bottom; // ecx
  int v21; // r8d
  LONG top; // eax
  LONG v23; // ebx
  char v24; // r14
  LANGID ThreadUILanguage; // ax
  int v26; // eax
  int v27; // r8d
  float v28; // xmm0_4
  LONG v29; // ecx
  int v30; // eax
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  LANGID v34; // ax
  int v35; // eax
  int v37; // [rsp+20h] [rbp-E0h]
  POINT pt[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  struct tagRECT rcMonitor; // [rsp+50h] [rbp-B0h] BYREF
  RECT rc; // [rsp+60h] [rbp-A0h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-90h] BYREF
  RTL_SRWLOCK v46[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v46);
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_55;
  if ( *((_QWORD *)this + 95) && *((_DWORD *)this + 192) == 1 )
  {
    rcMonitor.left = 0;
    rcMonitor.top = 0;
    rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
    rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &rcMonitor);
    LastError = v2;
    if ( v2 < 0 )
    {
      v4 = 1362LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v37);
      goto LABEL_56;
    }
    pt[0].x = 0;
    pt[0].y = 0;
    *(float *)&pt[1].x = (float)(rcMonitor.right - rcMonitor.left);
    *(float *)&pt[1].y = (float)(rcMonitor.bottom - rcMonitor.top);
    v5 = (__int64 *)*((_QWORD *)this + 95);
    v6 = *v5;
    rc = *(RECT *)&pt[0].x;
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, RECT *))(v6 + 64))(
           v5,
           *((_QWORD *)this + 15),
           *((_QWORD *)this + 16),
           &rc);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x556,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v37);
    goto LABEL_55;
  }
  pt[0] = 0LL;
  v8 = MonitorFromPoint(0LL, 1u);
  if ( v8 == (HMONITOR)-1LL )
  {
    v10 = 1374LL;
  }
  else
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v8, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      if ( CToastCenterExperienceManager::ShouldShowWithinWorkArea(this) )
      {
        rcMonitor = mi.rcWork;
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        if ( WindowW )
        {
          if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
          {
            pt[0] = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
            Service = IUnknown_QueryService(
                        *((IUnknown **)this + 85),
                        (const GUID *const)&SID_EdgeUi,
                        &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                        (void **)pt);
            if ( Service >= 0 )
            {
              v30 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)pt + 152LL))(
                      *(_QWORD *)pt,
                      &rcMonitor);
              LastError = v30;
              if ( v30 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x574,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                  (const char *)(unsigned int)v30,
                  v37);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
                goto LABEL_56;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x572,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                (const char *)(unsigned int)Service,
                v37);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
          }
        }
      }
      PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v8, v11);
      v16 = PerMonitorDpi;
      v17 = *((double *)this + 54);
      if ( v17 > 0.0 )
        rcMonitor.bottom -= ExperienceManagerUtils::ScaleByDPI(
                              (ExperienceManagerUtils *)(unsigned int)(int)v17,
                              PerMonitorDpi,
                              v15);
      rc = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 58) + 40LL))(
              *((_QWORD *)this + 58),
              &rc,
              &v39);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x584,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v18,
          v37);
      if ( !IsRectEmpty(&rc) )
      {
        bottom = rcMonitor.bottom;
        if ( rcMonitor.bottom > rc.top )
        {
          if ( ((v39 - 1) & 0xFFFFFFFD) == 0 )
            bottom = rc.top;
          rcMonitor.bottom = bottom;
        }
      }
      rcMonitor.top = rcMonitor.bottom
                    - ExperienceManagerUtils::ScaleByDPI(
                        (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                        v16,
                        v19);
      if ( ToastSettingsHelper::IsStackedPriorityToastsEnabled()
        && CToastCenterExperienceManager::ShouldShowWithinWorkArea(this) )
      {
        top = rcMonitor.top;
        if ( rcMonitor.top < mi.rcWork.top )
          top = mi.rcWork.top;
        rcMonitor.top = top;
      }
      v23 = ExperienceManagerUtils::ScaleByDPI(
              (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
              v16,
              v21);
      pt[0].x = v23;
      v24 = 0;
      if ( *((_BYTE *)this + 443) )
      {
        ThreadUILanguage = GetThreadUILanguage();
        v26 = IsBiDiLocale(ThreadUILanguage);
        v28 = *((float *)this + 160);
        if ( v26 )
        {
          rcMonitor.right = (int)(float)(v28 + *((float *)this + 162));
          v29 = rcMonitor.right - v23;
        }
        else
        {
          v29 = (int)v28;
          rcMonitor.right = (int)v28 + v23;
        }
        rcMonitor.left = v29;
        v31 = (float)rcMonitor.top;
        v32 = (float)v23;
        v33 = (float)(rcMonitor.bottom - rcMonitor.top);
        if ( (float)v29 != *((float *)this + 156)
          || v31 != *((float *)this + 157)
          || v32 != *((float *)this + 158)
          || v33 != *((float *)this + 159) )
        {
          *((float *)this + 156) = (float)v29;
          *((float *)this + 157) = v31;
          *((float *)this + 158) = v32;
          *((float *)this + 159) = v33;
          v24 = 1;
        }
      }
      else
      {
        v34 = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(v34) )
          rcMonitor.right = v23 + rcMonitor.left;
        else
          rcMonitor.left = rcMonitor.right - v23;
      }
      v42 = ExperienceManagerUtils::ScaleByDPI(
              (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
              v16,
              v27);
      v40 = rcMonitor.bottom - rcMonitor.top;
      v41 = rcMonitor.right - rcMonitor.left;
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
        pt,
        &v42,
        &v41,
        &v40);
      v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &rcMonitor);
      LastError = v2;
      if ( v2 < 0 )
      {
        v4 = 1472LL;
        goto LABEL_49;
      }
      if ( v24 )
      {
        pt[0] = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
        v35 = Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
                pt,
                (char *)this + 624);
        if ( v35 >= 0 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ToastCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CToastCenterExperienceManager *,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs *>(
            (char *)this + 816,
            this,
            *(_QWORD *)pt);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5C6,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v35,
            v37);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
      }
LABEL_55:
      wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v46, 0);
      LastError = 0;
      goto LABEL_56;
    }
    v10 = 1377LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v10,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                v9);
LABEL_56:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v46);
  return LastError;
}
