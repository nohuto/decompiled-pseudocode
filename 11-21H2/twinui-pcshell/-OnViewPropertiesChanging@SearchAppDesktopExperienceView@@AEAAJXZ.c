/*
 * XREFs of ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C8AC
 * Callers:
 *     ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803995A0 (-ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18039C070 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
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
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18039B3FC (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039FACC (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SearchAppDesktopExperienceView::OnViewPropertiesChanging(SearchAppDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  HSTRING v7; // rbx
  int v8; // eax
  HSTRING v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  bool v15; // di
  int v16; // eax
  char IsViewVisible; // al
  int v18; // eax
  int v19; // edx
  struct Windows::Foundation::IPropertyValue *v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v26; // [rsp+70h] [rbp-98h]
  _QWORD v27[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"CortanaExperienceManager_OnViewPropertiesChanging");
  v27[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v27);
  v23 = 0LL;
  v2 = *((_QWORD *)this + 19);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v4 = v3(v2, &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v22 = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v6 = *((_DWORD *)this + 32);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v7 = v26;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                v7,
                &v21) >= 0 )
    {
      v8 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)v21);
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    *((_DWORD *)this + 32) = 0;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v9 = v26;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                v9,
                &v21) >= 0 )
    {
      v10 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    *((_DWORD *)this + 31) = 0;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
      v26,
      v11,
      &v24);
    v12 = (int)*(float *)&v24;
    *((_DWORD *)this + 33) = (int)*(float *)&v24;
    v13 = (int)*((float *)&v24 + 1);
    *((_DWORD *)this + 34) = (int)*((float *)&v24 + 1);
    *((_DWORD *)this + 35) = (int)(float)((float)v12 + *((float *)&v24 + 2));
    *((_DWORD *)this + 36) = (int)(float)((float)v13 + *((float *)&v24 + 3));
    v14 = *((_DWORD *)this + 32);
    v15 = 0;
    if ( v6 == 9 )
    {
      if ( v14 != 9 )
      {
        v15 = 1;
        *((_BYTE *)this + 211) = 0;
      }
    }
    else if ( v14 == 9 )
    {
      *((_BYTE *)this + 211) = 1;
    }
    SearchAppDesktopExperienceView::UpdateSuggestionsShowing(this, v14 != 3);
    v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 48LL))(
            *((_QWORD *)this + 19),
            (char *)this + 180);
    v5 = v16;
    if ( v16 >= 0 )
    {
      IsViewVisible = SearchAppDesktopExperienceView::IsViewVisible(this);
      v18 = SearchAppDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v15);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B4,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v18);
      wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v27,
        v19);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v16);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x392,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v27);
  return v5;
}
