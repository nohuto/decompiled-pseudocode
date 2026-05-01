/*
 * XREFs of ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039B8F4
 * Callers:
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039BF30 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18036C15C (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18039AB18 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18039AE24 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18039B334 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039BC6C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3168 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged(SearchAppDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rax
  HMONITOR v5; // r8
  HMONITOR v6; // rsi
  unsigned int SearchBoxHeight; // eax
  HMONITOR v8; // r8
  int StuckPlace; // ebx
  __int64 v10; // rdx
  HMONITOR v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // r8
  bool v26; // [rsp+20h] [rbp-60h] BYREF
  bool v27; // [rsp+21h] [rbp-5Fh] BYREF
  POINT pt; // [rsp+28h] [rbp-58h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+30h] [rbp-50h] BYREF
  int v30; // [rsp+38h] [rbp-48h] BYREF
  RECT rc; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((float *)this + 47);
  rc.left = (int)v2;
  v3 = *((float *)this + 48);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 49));
  rc.bottom = (int)(float)(v3 + *((float *)this + 50));
  v4 = MonitorFromRect(&rc, 0);
  v6 = v4;
  if ( v4 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v4, v5);
    ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SearchBoxHeight, (int)v6, v8);
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, v6, (enum EDGEUI_TRAYSTUCKPLACE *)&v30);
    if ( StuckPlace < 0 )
    {
      v10 = 2129LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
      return (unsigned int)StuckPlace;
    }
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v6, &v26);
    if ( StuckPlace < 0 )
    {
      v10 = 2133LL;
      goto LABEL_4;
    }
    pt = 0LL;
    v12 = MonitorFromPoint(0LL, 1u);
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v12, &v27);
    if ( StuckPlace < 0 )
    {
      v10 = 2139LL;
      goto LABEL_4;
    }
    v29 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v33,
            (__int64 *)&v29);
    StuckPlace = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
LABEL_23:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      return (unsigned int)StuckPlace;
    }
    pt = (POINT)v29;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pt);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669620,
            v14);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            *(HSTRING *)(v15 + 24));
    StuckPlace = v16;
    if ( v16 < 0 )
    {
      v18 = 2145LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
      goto LABEL_23;
    }
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669618,
            v17);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            *(HSTRING *)(v19 + 24));
    StuckPlace = v16;
    if ( v16 < 0 )
    {
      v18 = 2147LL;
      goto LABEL_22;
    }
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669630,
            v20);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            *(HSTRING *)(v21 + 24),
            v22,
            v26);
    StuckPlace = v16;
    if ( v16 < 0 )
    {
      v18 = 2149LL;
      goto LABEL_22;
    }
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_180669628,
            v23);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            *(HSTRING *)(v24 + 24),
            v25,
            v27);
    StuckPlace = v16;
    if ( v16 < 0 )
    {
      v18 = 2151LL;
      goto LABEL_22;
    }
    v16 = SearchAppDesktopExperienceView::NotifyView(this, L"NotifyTaskbarSearchBoxChange", v29);
    StuckPlace = v16;
    if ( v16 < 0 )
    {
      v18 = 2153LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pt);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  }
  return 0LL;
}
