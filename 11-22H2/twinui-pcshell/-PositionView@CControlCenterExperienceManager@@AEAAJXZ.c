/*
 * XREFs of ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804217F8
 * Callers:
 *     CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801DF010 (CControlCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18041EB70 (-DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180420F18 (-OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005C310 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802D3F94 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionCha.c)
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1802D403A (--$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@S.c)
 *     ??0CViewPositionChangedEventArgs@@QEAA@XZ @ 0x1802D41AA (--0CViewPositionChangedEventArgs@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1802D4390.c)
 *     ??$?0$$V@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B630 (--$-0$$V@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integr.c)
 *     ??$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18041BE90 (--$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITe.c)
 *     ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18041C3B0 (--$NewWindowRegionRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITeleme.c)
 *     ??$ViewExperienceRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18041C8B8 (--$ViewExperienceRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemet.c)
 *     ??1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DEE0 (--1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422F24 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CControlCenterExperienceManager::PositionView(CControlCenterExperienceManager *this, char a2)
{
  HMONITOR v3; // rsi
  const char *v4; // r9
  __int64 v5; // rdx
  HMONITOR v6; // rdx
  unsigned int LastError; // esi
  POINT v8; // rbx
  int PerMonitorDpi; // eax
  int v10; // r14d
  double v11; // xmm0_8
  int v12; // eax
  int v13; // eax
  BOOL v14; // eax
  LONG bottom; // ebx
  int v16; // eax
  LONG top; // ecx
  int v18; // ebx
  int v19; // r15d
  LANGID ThreadUILanguage; // ax
  int v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  LONG left; // ecx
  LONG right; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  LONG v29; // edx
  float v30; // xmm6_4
  float v31; // xmm7_4
  void *v32; // rax
  int v33; // esi
  CViewPositionChangedEventArgs *v34; // rbx
  int v35; // eax
  POINT pt; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D8h] BYREF
  void *v39; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+50h] [rbp-B8h] BYREF
  RECT rcMonitor; // [rsp+58h] [rbp-B0h] BYREF
  RECT rc_8; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[320]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity((__int64)v45, a2);
  if ( !*((_QWORD *)this + 18) )
    goto LABEL_54;
  pt = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  if ( v3 != (HMONITOR)-1LL )
  {
    mi_4.cbSize = 40;
    memset(&mi_4.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v3, &mi_4) )
    {
      v5 = 1624LL;
      goto LABEL_6;
    }
    rcMonitor = mi_4.rcMonitor;
    if ( *((_BYTE *)this + 416) && *((_QWORD *)this + 41) )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        (__int64 *)this + 41,
        &pt,
        (__int64)v3);
      v8 = pt;
      if ( pt )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
          &pt,
          &v40);
        rcMonitor.left = mi_4.rcMonitor.left;
        rcMonitor.top = (int)*((float *)&v40 + 1);
        rcMonitor.right = mi_4.rcMonitor.right;
        rcMonitor.bottom = (int)(float)(*((float *)&v40 + 3) + *((float *)&v40 + 1));
      }
      else
      {
        rcMonitor = mi_4.rcWork;
      }
      if ( v8 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pt);
    }
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v3, v6);
    v10 = PerMonitorDpi;
    v11 = *((double *)this + 81);
    if ( v11 > 0.0 )
    {
      v12 = MulDiv((int)v11, PerMonitorDpi, 96);
      rcMonitor.bottom -= v12;
    }
    rc_8 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 63) + 40LL))(
            *((_QWORD *)this + 63),
            &rc_8,
            &v41);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x682,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    v14 = IsRectEmpty(&rc_8);
    bottom = rcMonitor.bottom;
    if ( !v14 && rcMonitor.bottom > rc_8.top )
    {
      if ( ((v41 - 1) & 0xFFFFFFFD) == 0 )
        bottom = rc_8.top;
      rcMonitor.bottom = bottom;
    }
    if ( *((_BYTE *)this + 417) )
    {
      v16 = MulDiv((int)*((float *)this + 42), v10, 96);
      bottom = rcMonitor.bottom;
      top = rcMonitor.bottom - v16;
      rcMonitor.top = rcMonitor.bottom - v16;
    }
    else
    {
      top = rcMonitor.top;
    }
    v18 = bottom - top;
    v19 = MulDiv((int)*((float *)this + 41), v10, 96);
    ThreadUILanguage = GetThreadUILanguage();
    v21 = IsBiDiLocale(ThreadUILanguage);
    v22 = *((double *)this + 82);
    if ( v21 )
    {
      if ( v22 <= 0.0 )
      {
        left = rcMonitor.left;
      }
      else
      {
        v23 = MulDiv((int)v22, v10, 96);
        left = v23 + rcMonitor.left;
        rcMonitor.left += v23;
      }
      right = left + v19;
      rcMonitor.right = left + v19;
    }
    else
    {
      if ( v22 <= 0.0 )
      {
        right = rcMonitor.right;
      }
      else
      {
        v26 = MulDiv((int)v22, v10, 96);
        right = rcMonitor.right - v26;
        rcMonitor.right -= v26;
      }
      left = right - v19;
      rcMonitor.left = right - v19;
    }
    *(float *)&v38 = (float)rcMonitor.bottom;
    *((float *)&v38 + 1) = (float)right;
    *(float *)&v39 = (float)rcMonitor.top;
    *(float *)&pt.x = (float)left;
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::ViewExperienceRect<float,float,float,float>(
      (int *)&pt,
      (int *)&v39,
      (int *)&v38 + 1,
      (int *)&v38);
    v27 = CSingleViewShellExperience::SetPosition((CControlCenterExperienceManager *)((char *)this + 120), &rcMonitor);
    LastError = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v27);
      goto LABEL_55;
    }
    if ( *((_BYTE *)this + 417) )
    {
      v29 = rcMonitor.bottom;
    }
    else
    {
      v28 = MulDiv((int)*((float *)this + 42), v10, 96);
      v29 = rcMonitor.bottom;
      v18 = v28;
    }
    v30 = (float)rcMonitor.left;
    v31 = (float)(v29 - v18 - rcMonitor.top);
    *(float *)&v40 = (float)rcMonitor.left;
    *((float *)&v40 + 1) = v31;
    *((float *)&v40 + 2) = (float)v19;
    *((float *)&v40 + 3) = (float)v18;
    *(float *)&pt.x = (float)v18;
    *(float *)&v39 = (float)v19;
    *((float *)&v38 + 1) = v31;
    *(float *)&v38 = (float)rcMonitor.left;
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>(
      (int *)&v38,
      (int *)&v38 + 1,
      (int *)&v39,
      (int *)&pt);
    pt.x = *((_DWORD *)this + 169);
    LODWORD(v39) = *((_DWORD *)this + 168);
    v38 = *((_QWORD *)this + 83);
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::CurrentWindowRegionRect<float,float,float,float>(
      (int *)&v38,
      (int *)&v38 + 1,
      (int *)&v39,
      (int *)&pt);
    if ( v30 != *((float *)this + 166)
      || v31 != *((float *)this + 167)
      || (float)v19 != *((float *)this + 168)
      || (float)v18 != *((float *)this + 169) )
    {
      *(_OWORD *)((char *)this + 664) = v40;
      pt = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
      pt = 0LL;
      v32 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v39 = v32;
      if ( v32 )
      {
        v34 = CViewPositionChangedEventArgs::CViewPositionChangedEventArgs((CViewPositionChangedEventArgs *)v32);
        v39 = 0LL;
        *((_OWORD *)v34 + 4) = *(_OWORD *)((char *)this + 664);
        v33 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>>(
                (__int64)v34,
                &GUID_a125a7cc_7993_4050_9333_9ab63091f258,
                &pt);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v34);
      }
      else
      {
        v33 = -2147024882;
      }
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v39);
      if ( v33 >= 0 )
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CControlCenterExperienceManager *,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs *>(
          (__int64)this + 824,
          (__int64)this,
          *(_QWORD *)&pt);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6BA,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v33);
      if ( *((_DWORD *)this + 40) == 2 )
      {
        v35 = CControlCenterExperienceManager::SetWindowRegion(this);
        LastError = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6C1,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v35);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
          goto LABEL_55;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
    }
LABEL_54:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v45, 0LL);
    LastError = 0;
    goto LABEL_55;
  }
  v5 = 1621LL;
LABEL_6:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v5,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                v4);
LABEL_55:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity *)v45);
  return LastError;
}
