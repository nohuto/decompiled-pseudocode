/*
 * XREFs of ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180511C14
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F0958 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PasteAsPlainText@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PasteAsPlainText@@@details@wil@@QEAAX_NW4.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150B4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150D64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z @ 0x180508BF4 (--$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x18051D894 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
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
  KeyboardHosting::TabTipAdapter *v38; // rdi
  HSTRING v39; // rbx
  int v40; // eax
  KeyboardHosting::TabTipAdapter *v41; // rdi
  HSTRING v42; // rbx
  int v43; // eax
  KeyboardHosting::TabTipAdapter *v44; // rdi
  HSTRING v45; // rbx
  int v46; // eax
  KeyboardHosting::TabTipAdapter *v47; // rdi
  HSTRING v48; // rbx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  KeyboardHosting::TabTipAdapter *v52; // rdi
  HSTRING v53; // rbx
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  KeyboardHosting::TabTipAdapter *v57; // rdi
  HSTRING v58; // rbx
  int v59; // eax
  KeyboardHosting::TabTipAdapter *v60; // rdi
  HSTRING v61; // rbx
  int v62; // eax
  KeyboardHosting::TabTipAdapter *v63; // rdi
  HSTRING v64; // rbx
  int v65; // eax
  KeyboardHosting::TabTipAdapter *v66; // rdi
  HSTRING v67; // rbx
  int v68; // eax
  KeyboardHosting::TabTipAdapter *v69; // rdi
  HSTRING v70; // rbx
  int v71; // eax
  KeyboardHosting::TabTipAdapter *v72; // rdi
  HSTRING v73; // rbx
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // r9
  KeyboardHosting::TabTipAdapter *v77; // rdi
  HSTRING v78; // rbx
  int v79; // eax
  KeyboardHosting::TabTipAdapter *v80; // rdi
  HSTRING v81; // rbx
  int v82; // eax
  KeyboardHosting::TabTipAdapter *v83; // rdi
  HSTRING v84; // rbx
  int v85; // eax
  KeyboardHosting::TabTipAdapter *v86; // rdi
  HSTRING v87; // rbx
  int v88; // eax
  KeyboardHosting::TabTipAdapter *v89; // rdi
  HSTRING v90; // rbx
  int v91; // eax
  __int64 v92; // r9
  unsigned int v93; // r8d
  KeyboardHosting::TabTipAdapter *v94; // rdi
  const WCHAR *p_hstringHeader; // rax
  HSTRING Reserved1; // rbx
  int v97; // eax
  const WCHAR *v98; // rax
  KeyboardHosting::TabTipAdapter *v99; // rdi
  HSTRING v100; // rbx
  int v101; // eax
  KeyboardHosting::TabTipAdapter *v102; // rdi
  HSTRING v103; // rbx
  int v104; // eax
  KeyboardHosting::TabTipAdapter *v105; // rdi
  HSTRING v106; // rbx
  int v107; // eax
  const WCHAR *v108; // [rsp+28h] [rbp-49h] BYREF
  double v109; // [rsp+30h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v111; // [rsp+50h] [rbp-21h]
  HSTRING_HEADER v112; // [rsp+58h] [rbp-19h] BYREF
  HSTRING v113; // [rsp+70h] [rbp-1h]
  HSTRING_HEADER v114; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
  v3 = v111;
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(v2, v113, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAF4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v6 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v111, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAF5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v9 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ChsNarrowLayoutsFollowVelocity",
    0x1Fu,
    0x1Eu);
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v111, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAF8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v12 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v111, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAFB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"0", 2u, 1u);
  v15 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v111, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAFE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v18 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v111, v18);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB01,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v21 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowTwoRowCandidateBar", 0x19u, 0x18u);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v111, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB04,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v24 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"FloatingCandidateWindowEnabled",
    0x1Fu,
    0x1Eu);
  v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, v111, v24);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB07,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"0", 2u, 1u);
  v27 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v111, v27);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB09,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v30 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowScalingEnabled", 0x15u, 0x14u);
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, v111, v30);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  v32 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v33 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v32, v111, v33);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
  v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v36 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, v111, v36);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v37);
  v38 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"ms-settings:regionlanguage", 0x1Bu, 0x1Au);
  v39 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsLauncherTargetUri",
    0x22u,
    0x21u);
  v40 = KeyboardHosting::TabTipAdapter::SetShellPreference(v38, v111, v39);
  if ( v40 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v40);
  v41 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"0", 2u, 1u);
  v42 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v41, v111, v42);
  if ( v43 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v43);
  v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"wide", 5u, 4u);
  v45 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
  v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v111, v45);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v46);
  v47 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"0", 2u, 1u);
  v48 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FuzzyKeyLookupEnabled", 0x16u, 0x15u);
  v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, v111, v48);
  if ( v49 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB22,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v49);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    1u,
    v50,
    v51);
  v52 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v53 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportsThemeChanges", 0x15u, 0x14u);
  v54 = KeyboardHosting::TabTipAdapter::SetShellPreference(v52, v111, v53);
  if ( v54 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB27,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v54);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v55,
    v56);
  v57 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"Desktop", 8u, 7u);
  v58 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SuggestionUIShell", 0x12u, 0x11u);
  v59 = KeyboardHosting::TabTipAdapter::SetShellPreference(v57, v111, v58);
  if ( v59 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB2C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v59);
  v60 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v61 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SuggestionUI", 0xDu, 0xCu);
  v62 = KeyboardHosting::TabTipAdapter::SetShellPreference(v60, v111, v61);
  if ( v62 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB2D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v62);
  v63 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v64 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuggestionUIClipboardHistory",
    0x1Du,
    0x1Cu);
  v65 = KeyboardHosting::TabTipAdapter::SetShellPreference(v63, v111, v64);
  if ( v65 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB2F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v65);
  v66 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v67 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"GifSuggestion", 0xEu, 0xDu);
  v68 = KeyboardHosting::TabTipAdapter::SetShellPreference(v66, v111, v67);
  if ( v68 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB30,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v68);
  v69 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v70 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SIPSuggestionUI", 0x10u, 0xFu);
  v71 = KeyboardHosting::TabTipAdapter::SetShellPreference(v69, v111, v70);
  if ( v71 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB32,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v71);
  v72 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"ModernUX", 9u, 8u);
  v73 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"VisualStyle", 0xCu, 0xBu);
  v74 = KeyboardHosting::TabTipAdapter::SetShellPreference(v72, v111, v73);
  if ( v74 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB33,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v74);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PasteAsPlainText>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PasteAsPlainText>::GetImpl'::`2'::impl,
    1u,
    v75,
    v76);
  v77 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v78 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuggestionUI_PasteAsPlainText",
    0x1Eu,
    0x1Du);
  v79 = KeyboardHosting::TabTipAdapter::SetShellPreference(v77, v111, v78);
  if ( v79 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB37,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v79);
  v80 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v81 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"EnableTransparentAreaInKeyboard",
    0x20u,
    0x1Fu);
  v82 = KeyboardHosting::TabTipAdapter::SetShellPreference(v80, v111, v81);
  if ( v82 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v82);
  v83 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v84 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"IsNearCaretKeyboardAvailable",
    0x1Du,
    0x1Cu);
  v85 = KeyboardHosting::TabTipAdapter::SetShellPreference(v83, v111, v84);
  if ( v85 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v85);
  v86 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"3", 2u, 1u);
  v87 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"HandwritingScalingFactor", 0x19u, 0x18u);
  v88 = KeyboardHosting::TabTipAdapter::SetShellPreference(v86, v111, v87);
  if ( v88 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v88);
  v89 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"floating", 9u, 8u);
  v90 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"KeyboardLayoutPosition", 0x17u, 0x16u);
  v91 = KeyboardHosting::TabTipAdapter::SetShellPreference(v89, v111, v90);
  if ( v91 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB40,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v91);
  v109 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v109) && v109 >= 5.0 && v109 <= 100.0 )
  {
    std::to_wstring(&hstringHeader);
    v94 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    p_hstringHeader = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v111 >= 8 )
      p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v108 = p_hstringHeader;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v114, &v108, v93)[1].Reserved.Reserved1;
    v113 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"OverrideMonitorSize", 0x14u, 0x13u);
    v97 = KeyboardHosting::TabTipAdapter::SetShellPreference(v94, v113, Reserved1);
    if ( v97 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v97);
    v98 = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v111 >= 8 )
      v98 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v108 = v98;
    TouchKeyboardExperienceTelemetryLogger::OverriddenMonitorSizeFound<unsigned short const *>((__int64 *)&v108);
    std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v92);
  v99 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"ModernUX", 9u, 8u);
  v100 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameStyle", 0xBu, 0xAu);
  v101 = KeyboardHosting::TabTipAdapter::SetShellPreference(v99, v111, v100);
  if ( v101 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB54,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v101);
  v102 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"ModernUX", 9u, 8u);
  v103 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DropShadowStyle", 0x10u, 0xFu);
  v104 = KeyboardHosting::TabTipAdapter::SetShellPreference(v102, v111, v103);
  if ( v104 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB58,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v104);
  v105 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v113 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v112, L"1", 2u, 1u);
  v106 = v113;
  v111 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SystemIndependentFontSizeCHS",
    0x1Du,
    0x1Cu);
  v107 = KeyboardHosting::TabTipAdapter::SetShellPreference(v105, v111, v106);
  if ( v107 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB5A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v107);
}
