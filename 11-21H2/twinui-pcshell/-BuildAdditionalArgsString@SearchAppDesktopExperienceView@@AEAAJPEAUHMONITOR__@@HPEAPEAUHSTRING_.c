/*
 * XREFs of ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180398A78
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180399E10 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18039778C (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18039A08C (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18039A2B8 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18039A580 (-GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18039AE24 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18039B334 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3168 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchAppDesktopExperienceView::BuildAdditionalArgsString(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2,
        ExperienceManagerUtils *a3,
        HSTRING *newString)
{
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  HSTRING Reserved1; // rbx
  HRESULT v10; // eax
  CortanaDesktopExperienceView *v11; // rcx
  unsigned int v12; // ebx
  bool ColorPrevalenceEnabled; // al
  const WCHAR *v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  HRESULT v17; // eax
  HRESULT StuckPlace; // eax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  HSTRING v21; // rbx
  HRESULT v22; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v24; // rdx
  const WCHAR *v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rax
  HMONITOR v28; // rax
  HRESULT v29; // eax
  __int64 v30; // rdx
  const WCHAR *v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  SearchAppDesktopExperienceView *v34; // rcx
  bool AppsUseLightTheme; // al
  const WCHAR *v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rax
  HRESULT v39; // eax
  SearchAppDesktopExperienceView *v40; // rcx
  __int64 v41; // rdx
  bool HideFileExtensionsEnabled; // al
  unsigned int v43; // r8d
  const WCHAR *v44; // rcx
  __int64 v45; // rax
  bool v47; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v48; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v49; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v50; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string2; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING newStringa; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v53; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v54; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-98h] BYREF
  HSTRING_HEADER v57; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING string1; // [rsp+A8h] [rbp-58h]
  WCHAR sourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v61[40]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, (HMONITOR)a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, sourceString, v8)[1].Reserved.Reserved1;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  v10 = WindowsConcatString(string1, Reserved1, &string);
  v12 = v10;
  if ( v10 >= 0 )
  {
    newStringa = 0LL;
    ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v11);
    v14 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v14 = L"&ColorPrevalenceEnabled=false";
    v48 = v14;
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v48, v15);
    v17 = WindowsConcatString(string, *(HSTRING *)(v16 + 24), &newStringa);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v17);
LABEL_43:
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
      goto LABEL_44;
    }
    string2 = 0LL;
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v56);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v19 = 1140LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
LABEL_42:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_43;
    }
    memset_0(v61, 0, 0x44uLL);
    _o__itow_s(v56, v61, 34LL, 10LL);
    WindowsDeleteString(string2);
    string2 = 0LL;
    v21 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, v61, v20)[1].Reserved.Reserved1;
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
    StuckPlace = WindowsConcatString(string1, v21, &string2);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v19 = 1143LL;
      goto LABEL_11;
    }
    v54 = 0LL;
    WindowsDeleteString(0LL);
    v54 = 0LL;
    v22 = WindowsConcatString(newStringa, string2, &v54);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v22);
LABEL_41:
      WindowsDeleteString(v54);
      v54 = 0LL;
      goto LABEL_42;
    }
    v50 = 0LL;
    IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v47);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v24 = 1151LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_40:
      WindowsDeleteString(v50);
      v50 = 0LL;
      goto LABEL_41;
    }
    v25 = L"&SearchBoxInTaskbar=true";
    if ( !v47 )
      v25 = L"&SearchBoxInTaskbar=false";
    v48 = v25;
    WindowsDeleteString(v50);
    v50 = 0LL;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v48, v26);
    IsTraySearchBoxVisible = WindowsConcatString(v54, *(HSTRING *)(v27 + 24), &v50);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v24 = 1153LL;
      goto LABEL_20;
    }
    v49 = 0LL;
    v48 = 0LL;
    v28 = MonitorFromPoint(0LL, 1u);
    v29 = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v28, &v47);
    v12 = v29;
    if ( v29 < 0 )
    {
      v30 = 1160LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v29);
LABEL_39:
      WindowsDeleteString(v49);
      v49 = 0LL;
      goto LABEL_40;
    }
    v31 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
    if ( !v47 )
      v31 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
    v48 = v31;
    WindowsDeleteString(v49);
    v49 = 0LL;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v48, v32);
    v29 = WindowsConcatString(v50, *(HSTRING *)(v33 + 24), &v49);
    v12 = v29;
    if ( v29 < 0 )
    {
      v30 = 1162LL;
      goto LABEL_27;
    }
    v53 = 0LL;
    AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v34);
    v36 = L"&AppsUseLightTheme=true";
    if ( !AppsUseLightTheme )
      v36 = L"&AppsUseLightTheme=false";
    v48 = v36;
    WindowsDeleteString(v53);
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v48, v37);
    v39 = WindowsConcatString(v49, *(HSTRING *)(v38 + 24), &v53);
    v12 = v39;
    if ( v39 >= 0 )
    {
      HideFileExtensionsEnabled = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v40);
      v44 = L"&HideFileExtensions=true";
      if ( !HideFileExtensionsEnabled )
        v44 = L"&HideFileExtensions=false";
      v48 = v44;
      v45 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v57, &v48, v43);
      v39 = WindowsConcatString(v53, *(HSTRING *)(v45 + 24), newString);
      v12 = v39;
      if ( v39 >= 0 )
      {
        v12 = 0;
        goto LABEL_38;
      }
      v41 = 1171LL;
    }
    else
    {
      v41 = 1167LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v39);
LABEL_38:
    WindowsDeleteString(v53);
    v53 = 0LL;
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_44:
  WindowsDeleteString(string);
  return v12;
}
