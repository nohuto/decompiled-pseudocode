/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180435E50 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804361F8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180436650 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180436650.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804378C0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180437FE4 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18001A360 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
 *     ??0CViewPositionChangedEventArgs@@QEAA@XZ @ 0x1802D41AA (--0CViewPositionChangedEventArgs@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1802D4390.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1802D4948 (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     ??$?0$$V@EM_PositionViewActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804341F0 (--$-0$$V@EM_PositionViewActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@ToastCenterTelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x1804348C0 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@ToastCenterTelemetry@@SAXAEBHAEAH$$QEAJ2@Z.c)
 *     ??$InvokeAll@PEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVToastCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180434A24 (--$InvokeAll@PEAVCToastCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@She.c)
 *     ??$ToastCenterMovedForOcclusionAPI@AEAH@ToastCenterTelemetry@@SAXAEAH@Z @ 0x180434D38 (--$ToastCenterMovedForOcclusionAPI@AEAH@ToastCenterTelemetry@@SAXAEAH@Z.c)
 *     ??$ViewExperienceRect@MMMM@EM_PositionViewActivity@ToastCenterTelemetry@@SAX$$QEAM000@Z @ 0x180434E40 (--$ViewExperienceRect@MMMM@EM_PositionViewActivity@ToastCenterTelemetry@@SAX$$QEAM000@Z.c)
 *     ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435574 (--1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1804369D0 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 *     ?TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ @ 0x18043CF0C (-TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_ToastOcclusionWindowShiftedTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ToastOcclusionWindowShiftedTest@@@details@tip@@@std@@XZ @ 0x18043D2C4 (-ensure_data@-$tip_test@U_tip_ToastOcclusionWindowShiftedTest@@@tip@@AEBAAEAV-$shared_ptr@V-$tes.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(CToastCenterExperienceManager *this, char a2)
{
  int v3; // eax
  unsigned int LastError; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  HMONITOR v9; // rsi
  const char *v10; // r9
  __int64 v11; // rdx
  HMONITOR v12; // rdx
  POINT v13; // rbx
  int PerMonitorDpi; // eax
  int v15; // r14d
  double v16; // xmm0_8
  int v17; // eax
  int v18; // eax
  int OcclusionMarginFromProtectedForegroundWindow; // ebx
  _QWORD *v20; // rax
  POINT *v21; // rax
  POINT v22; // rcx
  POINT v23; // rbx
  std::_Ref_count_base *v24; // rsi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  LONG top; // eax
  LONG v29; // ebx
  char v30; // si
  LANGID ThreadUILanguage; // ax
  int v32; // eax
  float v33; // xmm0_4
  LONG v34; // ecx
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  LANGID v38; // ax
  std::_Ref_count_base *v39; // rax
  int v40; // esi
  CViewPositionChangedEventArgs *v41; // rbx
  POINT pt[2]; // [rsp+30h] [rbp-D0h] BYREF
  float left; // [rsp+40h] [rbp-C0h] BYREF
  float v45; // [rsp+44h] [rbp-BCh] BYREF
  std::_Ref_count_base *v46[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcMonitor; // [rsp+80h] [rbp-80h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-70h] BYREF
  RECT rc; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v53[40]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  ToastCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity((__int64)v53, a2);
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_69;
  if ( *((_QWORD *)this + 97) && *((_DWORD *)this + 196) == 1 )
  {
    rcMonitor.left = 0;
    rcMonitor.top = 0;
    rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
    rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v3 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &rcMonitor);
    LastError = v3;
    if ( v3 < 0 )
    {
      v5 = 1384LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      goto LABEL_70;
    }
    pt[0].x = 0;
    pt[0].y = 0;
    *(float *)&pt[1].x = (float)(rcMonitor.right - rcMonitor.left);
    *(float *)&pt[1].y = (float)(rcMonitor.bottom - rcMonitor.top);
    v6 = (__int64 *)*((_QWORD *)this + 97);
    v7 = *v6;
    v48 = *(_OWORD *)&pt[0].x;
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v7 + 64))(
           v6,
           *((_QWORD *)this + 15),
           *((_QWORD *)this + 16),
           &v48);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x56C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    goto LABEL_69;
  }
  pt[0] = 0LL;
  v9 = MonitorFromPoint(0LL, 1u);
  if ( v9 == (HMONITOR)-1LL )
  {
    v11 = 1396LL;
  }
  else
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v9, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      if ( CToastCenterExperienceManager::ShouldShowWithinWorkArea(this) && *((_QWORD *)this + 40) )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
          (__int64 *)this + 40,
          pt,
          (__int64)v9);
        v13 = pt[0];
        if ( pt[0] )
        {
          winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
            pt,
            &v48);
          rcMonitor.left = mi.rcMonitor.left;
          rcMonitor.right = mi.rcMonitor.right;
          rcMonitor.bottom = (int)(float)(*((float *)&v48 + 3) + *((float *)&v48 + 1));
        }
        else
        {
          rcMonitor = mi.rcWork;
        }
        if ( v13 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)pt);
      }
      PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v9, v12);
      v15 = PerMonitorDpi;
      v16 = *((double *)this + 57);
      if ( v16 > 0.0 )
      {
        v17 = MulDiv((int)v16, PerMonitorDpi, 96);
        rcMonitor.bottom -= v17;
      }
      rc = 0LL;
      v18 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 61) + 40LL))(
              *((_QWORD *)this + 61),
              &rc,
              &v47);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v18);
      if ( IsRectEmpty(&rc) || rcMonitor.bottom <= rc.top || ((v47 - 1) & 0xFFFFFFFD) != 0 )
      {
        OcclusionMarginFromProtectedForegroundWindow = CToastCenterExperienceManager::TryGetOcclusionMarginFromProtectedForegroundWindow();
        left = *(float *)&OcclusionMarginFromProtectedForegroundWindow;
        if ( OcclusionMarginFromProtectedForegroundWindow )
        {
          *(_OWORD *)v46 = 0LL;
          v20 = (_QWORD *)tip::tip_test<_tip_ToastOcclusionWindowShiftedTest>::ensure_data(v46);
          tip::details::test_common_data<1>::start(*v20 + 8LL, &v49);
          rcMonitor.bottom -= MulDiv(OcclusionMarginFromProtectedForegroundWindow, v15, 96);
          v21 = (POINT *)tip::tip_test<_tip_ToastOcclusionWindowShiftedTest>::ensure_data(v46);
          v22 = v21[1];
          if ( v22 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v22 + 8LL));
          v23 = *v21;
          pt[0] = v23;
          v24 = (std::_Ref_count_base *)v21[1];
          pt[1] = (POINT)v24;
          tip::details::test_common_data<1>::begin_update(*(_QWORD *)&v23 + 8LL);
          v25 = *(_QWORD *)&v23 + 184LL;
          if ( !*(_QWORD *)&v23 )
            v25 = 8LL;
          *(_BYTE *)v25 = 1;
          if ( v23 )
          {
            tip::details::test_common_data<1>::end_update(*(_QWORD *)&v23 + 8LL);
            std::shared_ptr<PeoplePaneViewInfo>::reset(pt);
            v24 = (std::_Ref_count_base *)pt[1];
          }
          if ( v24 )
            std::_Ref_count_base::_Decref(v24);
          ToastCenterTelemetry::ToastCenterMovedForOcclusionAPI<int &>((int *)&left);
          if ( v46[0] )
            tip::details::test_common_data<1>::complete((__int64)v46[0] + 8);
          if ( v46[1] )
            std::_Ref_count_base::_Decref(v46[1]);
        }
      }
      else
      {
        rcMonitor.bottom = rc.top;
      }
      v26 = MulDiv((int)*((float *)this + 38), v15, 96);
      rcMonitor.top = rcMonitor.bottom - v26;
      if ( ToastSettingsHelper::IsStackedPriorityToastsEnabled((unsigned int)(rcMonitor.bottom - v26), v27)
        && CToastCenterExperienceManager::ShouldShowWithinWorkArea(this) )
      {
        top = rcMonitor.top;
        if ( rcMonitor.top < mi.rcWork.top )
          top = mi.rcWork.top;
        rcMonitor.top = top;
      }
      v29 = MulDiv((int)*((float *)this + 37), v15, 96);
      pt[0].x = v29;
      v30 = 0;
      if ( *((_BYTE *)this + 467) )
      {
        ThreadUILanguage = GetThreadUILanguage();
        v32 = IsBiDiLocale(ThreadUILanguage);
        v33 = *((float *)this + 164);
        if ( v32 )
        {
          rcMonitor.right = (int)(float)(v33 + *((float *)this + 166));
          v34 = rcMonitor.right - v29;
        }
        else
        {
          v34 = (int)v33;
          rcMonitor.right = (int)v33 + v29;
        }
        rcMonitor.left = v34;
        v35 = (float)rcMonitor.top;
        v36 = (float)v29;
        v37 = (float)(rcMonitor.bottom - rcMonitor.top);
        if ( (float)v34 != *((float *)this + 160)
          || v35 != *((float *)this + 161)
          || v36 != *((float *)this + 162)
          || v37 != *((float *)this + 163) )
        {
          *((float *)this + 160) = (float)v34;
          *((float *)this + 161) = v35;
          *((float *)this + 162) = v36;
          *((float *)this + 163) = v37;
          v30 = 1;
        }
      }
      else
      {
        v38 = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(v38) )
          rcMonitor.right = v29 + rcMonitor.left;
        else
          rcMonitor.left = rcMonitor.right - v29;
      }
      LODWORD(v46[0]) = MulDiv((int)*((float *)this + 38), v15, 96);
      LODWORD(left) = rcMonitor.bottom - rcMonitor.top;
      LODWORD(v45) = rcMonitor.right - rcMonitor.left;
      ToastCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
        pt,
        (int *)v46,
        (int *)&v45,
        (int *)&left);
      *(float *)&pt[0].x = (float)rcMonitor.bottom;
      *(float *)v46 = (float)rcMonitor.right;
      v45 = (float)rcMonitor.top;
      left = (float)rcMonitor.left;
      ToastCenterTelemetry::EM_PositionViewActivity::ViewExperienceRect<float,float,float,float>(
        (int *)&left,
        (int *)&v45,
        (int *)v46,
        (int *)pt);
      v3 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &rcMonitor);
      LastError = v3;
      if ( v3 < 0 )
      {
        v5 = 1522LL;
        goto LABEL_60;
      }
      if ( v30 )
      {
        pt[0] = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
        pt[0] = 0LL;
        v39 = (std::_Ref_count_base *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
        v46[0] = v39;
        if ( v39 )
        {
          v41 = CViewPositionChangedEventArgs::CViewPositionChangedEventArgs(v39);
          v46[0] = 0LL;
          *((_OWORD *)v41 + 4) = *((_OWORD *)this + 40);
          v40 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>>(
                  (__int64)v41,
                  &GUID_a125a7cc_7993_4050_9333_9ab63091f258,
                  pt);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v41);
        }
        else
        {
          v40 = -2147024882;
        }
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)v46);
        if ( v40 >= 0 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ToastCenterExperienceManager *,Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CToastCenterExperienceManager *,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs *>(
            (__int64)this + 832,
            (__int64)this,
            *(_QWORD *)pt);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5F8,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v40);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pt);
      }
LABEL_69:
      wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v53, 0);
      LastError = 0;
      goto LABEL_70;
    }
    v11 = 1399LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v11,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                v10);
LABEL_70:
  ToastCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((ToastCenterTelemetry::EM_PositionViewActivity *)v53);
  return LastError;
}
