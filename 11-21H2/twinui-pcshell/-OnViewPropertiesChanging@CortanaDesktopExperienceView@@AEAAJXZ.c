/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AA8EC
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803A69E0 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803A9F40 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180093870 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x1801F6120 (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180357098 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180357B7C (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18035BD1C (-StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035BF78 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x180397A30 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803A71F4 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1803A88A4 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803A8AA8 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803ABE68 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803AD10C (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  HSTRING v7; // rbx
  int v8; // eax
  int v9; // r15d
  HSTRING v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  CortanaFlightingHelpers *v14; // rcx
  unsigned __int8 v15; // bl
  bool v16; // di
  int v17; // eax
  __m128 v18; // xmm2
  float v19; // xmm1_4
  int v20; // ebx
  HMONITOR v21; // r8
  HMONITOR v22; // r8
  char IsViewVisible; // al
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v28; // eax
  __int64 v29; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  RECT rc; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v34; // [rsp+70h] [rbp-90h]
  _QWORD v35[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"CortanaExperienceManager_OnViewPropertiesChanging");
  v35[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v35);
  v30 = 0LL;
  v2 = *((_QWORD *)this + 21);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  v4 = v3(v2, &v30);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v29 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
    v6 = *((_DWORD *)this + 36);
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v7 = v34;
    *(_QWORD *)&rc.left = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&rc.left);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                v7,
                (struct Windows::Foundation::IPropertyValue **)&rc) >= 0 )
    {
      v8 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(*(__int64 *)&rc.left);
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&rc.left);
    *((_DWORD *)this + 36) = 0;
    v9 = *((_DWORD *)this + 35);
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v10 = v34;
    *(_QWORD *)&rc.left = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&rc.left);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                v10,
                (struct Windows::Foundation::IPropertyValue **)&rc) >= 0 )
    {
      v11 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(*(__int64 *)&rc.left);
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&rc.left);
    *((_DWORD *)this + 35) = 0;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
      v34,
      v12,
      &v32);
    v13 = (int)*(float *)&v32;
    *((_DWORD *)this + 37) = (int)*(float *)&v32;
    v14 = (CortanaFlightingHelpers *)(unsigned int)(int)*((float *)&v32 + 1);
    *((_DWORD *)this + 38) = (_DWORD)v14;
    *((_DWORD *)this + 39) = (int)(float)((float)v13 + *((float *)&v32 + 2));
    *((_DWORD *)this + 40) = (int)(float)((float)(int)v14 + *((float *)&v32 + 3));
    v15 = *((_DWORD *)this + 36) != 3;
    if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v14) && *((_DWORD *)this + 35) == 6 )
      v15 = 0;
    v16 = 0;
    v17 = *((_DWORD *)this + 36);
    if ( v6 == 9 )
    {
      if ( v17 != 9 )
      {
        v16 = 1;
        *((_BYTE *)this + 249) = 0;
      }
    }
    else if ( v17 == 9 )
    {
      *((_BYTE *)this + 249) = 1;
    }
    CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, v15);
    if ( *((_BYTE *)this + 288) )
    {
      v18 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 196));
      rc.left = (int)v18.m128_f32[0];
      v19 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
      rc.top = (int)v19;
      rc.right = (int)(float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] + v18.m128_f32[0]);
      rc.bottom = (int)(float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] + v19);
      v20 = (unsigned int)MonitorFromRect(&rc, 0);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1AC,
                                       v20,
                                       v21);
      *((float *)this + 54) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1EC,
                                       v20,
                                       v22);
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 48LL))(
              *((_QWORD *)this + 21),
              (char *)this + 212);
      v5 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E3,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v28);
LABEL_26:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        goto LABEL_27;
      }
    }
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v24 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v16);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v24);
    if ( v9 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 35) == 4 )
      {
        v26 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4F3,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v26);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v35,
      v25);
    v5 = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v35);
  return v5;
}
