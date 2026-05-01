/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1804813D0
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1804828BC (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x1804761FC (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1804789AC (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180478BD0 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180478E84 (-GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1804837EC (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z @ 0x180483C44 (-IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180483DF0 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493DC (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
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
  char ColorPrevalenceEnabled; // al
  const WCHAR *v14; // rcx
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HRESULT v17; // eax
  bool IsCortiniSupported; // al
  const WCHAR *v19; // rcx
  unsigned int v20; // r8d
  HSTRING_HEADER *v21; // rax
  HRESULT v22; // eax
  HRESULT StuckPlace; // eax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  HSTRING v26; // rbx
  HRESULT v27; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v29; // rdx
  const WCHAR *v30; // rax
  unsigned int v31; // r8d
  HSTRING_HEADER *v32; // rax
  HMONITOR v33; // rax
  HRESULT v34; // eax
  __int64 v35; // rdx
  const WCHAR *v36; // rax
  unsigned int v37; // r8d
  HSTRING_HEADER *v38; // rax
  SearchAppDesktopExperienceView *v39; // rcx
  char AppsUseLightTheme; // al
  const WCHAR *v41; // rcx
  unsigned int v42; // r8d
  HSTRING_HEADER *v43; // rax
  HRESULT v44; // eax
  SearchAppDesktopExperienceView *v45; // rcx
  __int64 v46; // rdx
  char HideFileExtensionsEnabled; // al
  unsigned int v48; // r8d
  const WCHAR *v49; // rcx
  HSTRING_HEADER *v50; // rax
  bool v52; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v53; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v54; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v55; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string2; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v57; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING newStringa; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v59; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v60; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING string; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER v63; // [rsp+78h] [rbp-88h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  HSTRING string1; // [rsp+B0h] [rbp-50h]
  WCHAR sourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v67[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, (HMONITOR)a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, sourceString, v8)[1].Reserved.Reserved1;
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
    v53 = v14;
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v15);
    v17 = WindowsConcatString(string, (HSTRING)v16[1].Reserved.Reserved1, &newStringa);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v17);
LABEL_48:
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
      goto LABEL_49;
    }
    v57 = 0LL;
    IsCortiniSupported = CortanaDesktopExperienceView::IsCortiniSupported(this, a2);
    v19 = L"&PersonaOnlySupported=true";
    if ( !IsCortiniSupported )
      v19 = L"&PersonaOnlySupported=false";
    v53 = v19;
    WindowsDeleteString(v57);
    v57 = 0LL;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v20);
    v22 = WindowsConcatString(newStringa, (HSTRING)v21[1].Reserved.Reserved1, &v57);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v22);
LABEL_47:
      WindowsDeleteString(v57);
      v57 = 0LL;
      goto LABEL_48;
    }
    string2 = 0LL;
    StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v62);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v24 = 1652LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
LABEL_46:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_47;
    }
    memset_0(v67, 0, 0x44uLL);
    _o__itow_s(v62, v67, 34LL, 10LL);
    WindowsDeleteString(string2);
    string2 = 0LL;
    v26 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, v67, v25)[1].Reserved.Reserved1;
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
    StuckPlace = WindowsConcatString(string1, v26, &string2);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v24 = 1655LL;
      goto LABEL_15;
    }
    v60 = 0LL;
    WindowsDeleteString(0LL);
    v60 = 0LL;
    v27 = WindowsConcatString(v57, string2, &v60);
    v12 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v27);
LABEL_45:
      WindowsDeleteString(v60);
      v60 = 0LL;
      goto LABEL_46;
    }
    v55 = 0LL;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v52);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v29 = 1663LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_44:
      WindowsDeleteString(v55);
      v55 = 0LL;
      goto LABEL_45;
    }
    v30 = L"&SearchBoxInTaskbar=true";
    if ( !v52 )
      v30 = L"&SearchBoxInTaskbar=false";
    v53 = v30;
    WindowsDeleteString(v55);
    v55 = 0LL;
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v31);
    IsTraySearchBoxVisible = WindowsConcatString(v60, (HSTRING)v32[1].Reserved.Reserved1, &v55);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v29 = 1665LL;
      goto LABEL_24;
    }
    v54 = 0LL;
    v53 = 0LL;
    v33 = MonitorFromPoint(0LL, 1u);
    v34 = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, v33, &v52);
    v12 = v34;
    if ( v34 < 0 )
    {
      v35 = 1672LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v34);
LABEL_43:
      WindowsDeleteString(v54);
      v54 = 0LL;
      goto LABEL_44;
    }
    v36 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
    if ( !v52 )
      v36 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
    v53 = v36;
    WindowsDeleteString(v54);
    v54 = 0LL;
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v37);
    v34 = WindowsConcatString(v55, (HSTRING)v38[1].Reserved.Reserved1, &v54);
    v12 = v34;
    if ( v34 < 0 )
    {
      v35 = 1674LL;
      goto LABEL_31;
    }
    v59 = 0LL;
    AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v39);
    v41 = L"&AppsUseLightTheme=true";
    if ( !AppsUseLightTheme )
      v41 = L"&AppsUseLightTheme=false";
    v53 = v41;
    WindowsDeleteString(v59);
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v42);
    v44 = WindowsConcatString(v54, (HSTRING)v43[1].Reserved.Reserved1, &v59);
    v12 = v44;
    if ( v44 >= 0 )
    {
      HideFileExtensionsEnabled = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v45);
      v49 = L"&HideFileExtensions=true";
      if ( !HideFileExtensionsEnabled )
        v49 = L"&HideFileExtensions=false";
      v53 = v49;
      v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v63, &v53, v48);
      v44 = WindowsConcatString(v59, (HSTRING)v50[1].Reserved.Reserved1, newString);
      v12 = v44;
      if ( v44 >= 0 )
      {
        v12 = 0;
        goto LABEL_42;
      }
      v46 = 1683LL;
    }
    else
    {
      v46 = 1679LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v44);
LABEL_42:
    WindowsDeleteString(v59);
    v59 = 0LL;
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x665,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_49:
  WindowsDeleteString(string);
  return v12;
}
