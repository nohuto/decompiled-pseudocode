/*
 * XREFs of ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18039BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18039A08C (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18039A2B8 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x18039B1F8 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039B7A4 (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039BC6C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x18039DE30 (CortanaHelpers--SetIsAssignedAccess.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnMessage(
        SearchAppDesktopExperienceView *this,
        int a2,
        SearchAppDesktopExperienceView *a3,
        const WCHAR *a4)
{
  SearchAppDesktopExperienceView *v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  CortanaDesktopExperienceView *v10; // rcx
  char v11; // bl
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  SearchAppDesktopExperienceView *v16; // rcx
  __int64 v17; // rdx
  char v18; // bl
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // r8
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v23; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(26, a4) )
      return 0LL;
    v23 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v25,
           (__int64 *)&v23);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v22 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v11 = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v10) != 0;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)&off_180669678,
              v12);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
              *(HSTRING *)(v13 + 24),
              v14,
              v11);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v18 = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v16) != 0;
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&hstringHeader,
                (const WCHAR **)&off_180669670,
                v19);
        v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                *(HSTRING *)(v20 + 24),
                v21,
                v18);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v15 = SearchAppDesktopExperienceView::NotifyView(
                  (SearchAppDesktopExperienceView *)((char *)this - 32),
                  L"NotifyThemeChange",
                  v23);
          v6 = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
            return 0LL;
          }
          v17 = 697LL;
        }
        else
        {
          v17 = 695LL;
        }
      }
      else
      {
        v17 = 694LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    return v6;
  }
  v5 = (SearchAppDesktopExperienceView *)((char *)this - 32);
  if ( a3 == (SearchAppDesktopExperienceView *)((char *)this - 32) )
  {
    if ( (_WORD)a4 )
    {
      if ( (unsigned __int16)a4 != 1 )
      {
        v6 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x405,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2AA,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)0x8000FFFFLL);
        return v6;
      }
      LOBYTE(v8) = (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v8);
    }
    else
    {
      *((_BYTE *)v5 + 210) = WORD1(a4) != 0;
      SearchAppDesktopExperienceView::NotifyShellModeChanged(v5);
    }
  }
  return 0LL;
}
