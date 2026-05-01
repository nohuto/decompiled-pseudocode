/*
 * XREFs of ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047B224
 * Callers:
 *     ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180477EB0 (-ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18047A9F0 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
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
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180479D9C (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18047E1D8 (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchAppDesktopExperienceView::OnViewPropertiesChanging(
        SearchAppDesktopExperienceView *this,
        char a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  unsigned __int8 v17; // dl
  bool v18; // di
  int v19; // eax
  char IsViewVisible; // al
  int v21; // eax
  int v22; // edx
  int v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v29; // [rsp+60h] [rbp-A0h]
  _QWORD v30[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::CortanaExperienceManager_OnViewPropertiesChanging(
    (__int64)v30,
    a2);
  v26 = 0LL;
  v3 = *((_QWORD *)this + 18);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  v5 = v4(v3, &v26);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v25 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v7 = *((_DWORD *)this + 30);
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
           v29,
           v8,
           &v24);
    v10 = v24;
    if ( v9 < 0 )
      v10 = 0;
    *((_DWORD *)this + 30) = v10;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
            v29,
            v11,
            &v24);
    v13 = v24;
    if ( v12 < 0 )
      v13 = 0;
    *((_DWORD *)this + 29) = v13;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
      v29,
      v14,
      &v27);
    v15 = (int)*(float *)&v27;
    *((_DWORD *)this + 31) = (int)*(float *)&v27;
    v16 = (int)*((float *)&v27 + 1);
    *((_DWORD *)this + 32) = (int)*((float *)&v27 + 1);
    *((_DWORD *)this + 33) = (int)(float)((float)v15 + *((float *)&v27 + 2));
    *((_DWORD *)this + 34) = (int)(float)((float)v16 + *((float *)&v27 + 3));
    v17 = *((_DWORD *)this + 30) != 3;
    v18 = 0;
    if ( v7 == 9 )
    {
      if ( *((_DWORD *)this + 30) != 9 )
      {
        v18 = 1;
        *((_BYTE *)this + 203) = 0;
      }
    }
    else if ( *((_DWORD *)this + 30) == 9 )
    {
      *((_BYTE *)this + 203) = 1;
    }
    SearchAppDesktopExperienceView::UpdateSuggestionsShowing(this, v17);
    v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 18) + 48LL))(
            *((_QWORD *)this + 18),
            (char *)this + 172);
    v6 = v19;
    if ( v19 >= 0 )
    {
      IsViewVisible = SearchAppDesktopExperienceView::IsViewVisible(this);
      v21 = SearchAppDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v18);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AB,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v21);
      wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v30, v22);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v19);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x389,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v30);
  return v6;
}
