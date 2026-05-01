/*
 * XREFs of ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18045FFC4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KPMUseRealTouchPoints@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180163594 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KPMUseRealTouchPoints@@@details@wil@@QEAA.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z @ 0x180457FBC (--$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x18046AC54 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TouchKeyboardExperienceManager::InitializeShellPreferencesHub(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v2; // rdi
  HSTRING v3; // rbx
  int v4; // eax
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING v6; // rbx
  int v7; // eax
  KeyboardHosting::TabTipAdapter *v8; // rdi
  HSTRING v9; // rbx
  int v10; // eax
  KeyboardHosting::TabTipAdapter *v11; // rdi
  HSTRING v12; // rbx
  int v13; // eax
  KeyboardHosting::TabTipAdapter *v14; // rdi
  HSTRING v15; // rbx
  int v16; // eax
  KeyboardHosting::TabTipAdapter *v17; // rdi
  HSTRING v18; // rbx
  int v19; // eax
  KeyboardHosting::TabTipAdapter *v20; // rdi
  HSTRING v21; // rbx
  int v22; // eax
  KeyboardHosting::TabTipAdapter *v23; // rdi
  HSTRING v24; // rbx
  int v25; // eax
  KeyboardHosting::TabTipAdapter *v26; // rdi
  HSTRING v27; // rbx
  int v28; // eax
  KeyboardHosting::TabTipAdapter *v29; // rdi
  HSTRING v30; // rbx
  int v31; // eax
  KeyboardHosting::TabTipAdapter *v32; // rdi
  HSTRING v33; // rbx
  int v34; // eax
  KeyboardHosting::TabTipAdapter *v35; // rdi
  HSTRING v36; // rbx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  KeyboardHosting::TabTipAdapter *v40; // rdi
  HSTRING v41; // rbx
  int v42; // eax
  KeyboardHosting::TabTipAdapter *v43; // rdi
  HSTRING v44; // rbx
  int v45; // eax
  KeyboardHosting::TabTipAdapter *v46; // rdi
  HSTRING v47; // rbx
  int v48; // eax
  KeyboardHosting::TabTipAdapter *v49; // rdi
  HSTRING v50; // rbx
  int v51; // eax
  KeyboardHosting::TabTipAdapter *v52; // rdi
  HSTRING v53; // rbx
  int v54; // eax
  KeyboardHosting::TabTipAdapter *v55; // rdi
  HSTRING v56; // rbx
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // r8d
  KeyboardHosting::TabTipAdapter *v61; // rdi
  const WCHAR *p_hstringHeader; // rax
  HSTRING v63; // rbx
  int v64; // eax
  const WCHAR *Reserved1; // rax
  const WCHAR *v66; // [rsp+28h] [rbp-49h] BYREF
  double v67; // [rsp+30h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v69; // [rsp+50h] [rbp-21h]
  HSTRING_HEADER v70; // [rsp+58h] [rbp-19h] BYREF
  HSTRING v71; // [rsp+70h] [rbp-1h]
  _BYTE v72[32]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"floating", 9u, 8u);
  v3 = v69;
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"DefaultHandWritingPositionType", 0x1Fu, 0x1Eu);
  v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(v2, v71, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v6 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v69, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v9 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v69, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v12 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v69, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC42,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v15 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v69, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC45,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v18 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v69, v18);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC48,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v21 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"FloatingCandidateWindowEnabled",
    0x1Fu,
    0x1Eu);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v69, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v24 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, v69, v24);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v27 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v69, v27);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC50,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v30 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, v69, v30);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC53,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  v32 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v33 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v32, v69, v33);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC55,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
  v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"wide", 5u, 4u);
  v36 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
  v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, v69, v36);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC58,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v37);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KPMUseRealTouchPoints>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_KPMUseRealTouchPoints>::GetImpl'::`2'::impl,
    1u,
    v38,
    v39);
  v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v41 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FuzzyKeyLookupEnabled", 0x16u, 0x15u);
  v42 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, v69, v41);
  if ( v42 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC5D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v42);
  v43 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v44 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportsThemeChanges", 0x15u, 0x14u);
  v45 = KeyboardHosting::TabTipAdapter::SetShellPreference(v43, v69, v44);
  if ( v45 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC65,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v45);
  v46 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"1", 2u, 1u);
  v47 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"IsNearCaretKeyboardAvailable",
    0x1Du,
    0x1Cu);
  v48 = KeyboardHosting::TabTipAdapter::SetShellPreference(v46, v69, v47);
  if ( v48 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC67,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v48);
  v49 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"3", 2u, 1u);
  v50 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"HandwritingScalingFactor", 0x19u, 0x18u);
  v51 = KeyboardHosting::TabTipAdapter::SetShellPreference(v49, v69, v50);
  if ( v51 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC68,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v51);
  v52 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"floating", 9u, 8u);
  v53 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"KeyboardLayoutPosition", 0x17u, 0x16u);
  v54 = KeyboardHosting::TabTipAdapter::SetShellPreference(v52, v69, v53);
  if ( v54 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC69,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v54);
  v55 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"0", 2u, 1u);
  v56 = v71;
  v69 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"MultiUserAwareLocalSettingsEnabled",
    0x23u,
    0x22u);
  v57 = KeyboardHosting::TabTipAdapter::SetShellPreference(v55, v69, v56);
  if ( v57 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC6A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v57);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v58,
    v59);
  v67 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v67) && v67 >= 5.0 && v67 <= 100.0 )
  {
    std::to_wstring(&hstringHeader);
    v61 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    p_hstringHeader = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v69 >= 8 )
      p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v66 = p_hstringHeader;
    v63 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v72, &v66, v60) + 24);
    v71 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v70, L"OverrideMonitorSize", 0x14u, 0x13u);
    v64 = KeyboardHosting::TabTipAdapter::SetShellPreference(v61, v71, v63);
    if ( v64 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC75,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v64);
    Reserved1 = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v69 >= 8 )
      Reserved1 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v66 = Reserved1;
    TouchKeyboardExperienceTelemetryLogger::OverriddenMonitorSizeFound<unsigned short const *>((__int64 *)&v66);
    std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  }
}
