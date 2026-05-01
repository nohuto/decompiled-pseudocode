/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180481E00 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180485350 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x180394590 (--$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18042793C (--$-0$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@AEAA@U-$in.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429ED8 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042DEF4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1804764A0 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180482644 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180483CB4 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180483EB8 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804871C8 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1804883FC (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this, char a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v8; // r8
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  __int64 v12; // r8
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  CortanaFlightingHelpers *v17; // rcx
  unsigned __int8 v18; // bl
  bool v19; // di
  int v20; // eax
  __m128 v21; // xmm2
  float v22; // xmm1_4
  int v23; // ebx
  HMONITOR v24; // r8
  HMONITOR v25; // r8
  char IsViewVisible; // al
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v31; // eax
  int v32; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER rc; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v38[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::CortanaExperienceManager_OnViewPropertiesChanging(
    (__int64)v38,
    a2);
  v34 = 0LL;
  v3 = *((_QWORD *)this + 21);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  v5 = v4(v3, &v34);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v33 = v34;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
    v7 = *((_DWORD *)this + 36);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&rc, L"WindowMode", 0xBu, 0xAu);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
           v36,
           v8,
           &v32);
    v10 = v32;
    if ( v9 < 0 )
      v10 = 0;
    *((_DWORD *)this + 36) = v10;
    v11 = *((_DWORD *)this + 35);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&rc, L"ViewMode", 9u, 8u);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
            v36,
            v12,
            &v32);
    v14 = v32;
    if ( v13 < 0 )
      v14 = 0;
    *((_DWORD *)this + 35) = v14;
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&rc, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
      v36,
      v15,
      &v37);
    v16 = (int)*(float *)&v37;
    *((_DWORD *)this + 37) = (int)*(float *)&v37;
    v17 = (CortanaFlightingHelpers *)(unsigned int)(int)*((float *)&v37 + 1);
    *((_DWORD *)this + 38) = (_DWORD)v17;
    *((_DWORD *)this + 39) = (int)(float)((float)v16 + *((float *)&v37 + 2));
    *((_DWORD *)this + 40) = (int)(float)((float)(int)v17 + *((float *)&v37 + 3));
    v18 = *((_DWORD *)this + 36) != 3;
    if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v17) && *((_DWORD *)this + 35) == 6 )
      v18 = 0;
    v19 = 0;
    v20 = *((_DWORD *)this + 36);
    if ( v7 == 9 )
    {
      if ( v20 != 9 )
      {
        v19 = 1;
        *((_BYTE *)this + 249) = 0;
      }
    }
    else if ( v20 == 9 )
    {
      *((_BYTE *)this + 249) = 1;
    }
    CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, v18);
    if ( *((_BYTE *)this + 288) )
    {
      v21 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 196));
      LODWORD(rc.Reserved.Reserved1) = (int)v21.m128_f32[0];
      v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      *(_DWORD *)&rc.Reserved.Reserved2[4] = (int)v22;
      *(_DWORD *)&rc.Reserved.Reserved2[8] = (int)(float)(_mm_shuffle_ps(v21, v21, 170).m128_f32[0] + v21.m128_f32[0]);
      *(_DWORD *)&rc.Reserved.Reserved2[12] = (int)(float)(_mm_shuffle_ps(v21, v21, 255).m128_f32[0] + v22);
      v23 = (unsigned int)MonitorFromRect((LPCRECT)&rc, 0);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1AC,
                                       v23,
                                       v24);
      *((float *)this + 54) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1EC,
                                       v23,
                                       v25);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 48LL))(
              *((_QWORD *)this + 21),
              (char *)this + 212);
      v6 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v31);
LABEL_24:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        goto LABEL_25;
      }
    }
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v27 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v19);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v27);
    if ( v11 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 35) == 4 )
      {
        v29 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v29 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4F2,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v29);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v38, v28);
    v6 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AB,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v5);
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v38);
  return v6;
}
