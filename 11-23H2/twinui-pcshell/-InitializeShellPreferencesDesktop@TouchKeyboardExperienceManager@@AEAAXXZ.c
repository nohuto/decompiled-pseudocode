/*
 * XREFs of ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18014FB70
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
 *     ??$?0$01@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY01$$CBG@Z @ 0x1802DA028 (--$-0$01@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY01$$CBG@Z.c)
 *     ??$?0$0BJ@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BJ@$$CBG@Z @ 0x1803AAEDC (--$-0$0BJ@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BJ@$$CBG@Z.c)
 *     ??$?0$0BP@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BP@$$CBG@Z @ 0x1803F1C68 (--$-0$0BP@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BP@$$CBG@Z.c)
 *     ??$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z @ 0x180508BF4 (--$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x18051D894 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall TouchKeyboardExperienceManager::InitializeShellPreferencesDesktop(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  unsigned int v3; // r8d
  const WCHAR *v4; // rax
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING Reserved1; // rbx
  __int64 v7; // rax
  int v8; // eax
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  KeyboardHosting::TabTipAdapter *v18; // rdi
  HSTRING v19; // rbx
  int v20; // eax
  KeyboardHosting::TabTipAdapter *v21; // rdi
  HSTRING v22; // rbx
  int v23; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  HSTRING v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  KeyboardHosting::TabTipAdapter *v28; // rdi
  HSTRING v29; // rbx
  __int64 v30; // rax
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
  KeyboardHosting::TabTipAdapter *v50; // rdi
  HSTRING v51; // rbx
  int v52; // eax
  KeyboardHosting::TabTipAdapter *v53; // rdi
  HSTRING v54; // rbx
  int v55; // eax
  __int64 v56; // rdx
  KeyboardHosting::TabTipAdapter *v57; // rdi
  HSTRING v58; // rbx
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r9
  KeyboardHosting::TabTipAdapter *v62; // rdi
  HSTRING v63; // rbx
  int v64; // eax
  KeyboardHosting::TabTipAdapter *v65; // rdi
  HSTRING v66; // rbx
  int v67; // eax
  KeyboardHosting::TabTipAdapter *v68; // rdi
  HSTRING v69; // rbx
  int v70; // eax
  KeyboardHosting::TabTipAdapter *v71; // rdi
  HSTRING v72; // rbx
  int v73; // eax
  KeyboardHosting::TabTipAdapter *v74; // rdi
  HSTRING v75; // rbx
  int v76; // eax
  KeyboardHosting::TabTipAdapter *v77; // rdi
  HSTRING v78; // rbx
  int v79; // eax
  __int64 v80; // rdx
  KeyboardHosting::TabTipAdapter *v81; // rdi
  HSTRING v82; // rbx
  int v83; // eax
  KeyboardHosting::TabTipAdapter *v84; // rdi
  HSTRING v85; // rbx
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  unsigned int v89; // r8d
  KeyboardHosting::TabTipAdapter *v90; // rdi
  const WCHAR *p_hstringHeader; // rax
  HSTRING v92; // rbx
  int v93; // eax
  const WCHAR *v94; // rax
  KeyboardHosting::TabTipAdapter *v95; // rdi
  HSTRING v96; // rbx
  int v97; // eax
  KeyboardHosting::TabTipAdapter *v98; // rdi
  HSTRING v99; // rbx
  int v100; // eax
  KeyboardHosting::TabTipAdapter *v101; // rdi
  HSTRING v102; // rbx
  __int64 v103; // rax
  int v104; // eax
  KeyboardHosting::TabTipAdapter *v105; // rdi
  HSTRING v106; // rbx
  int v107; // eax
  KeyboardHosting::TabTipAdapter *v108; // rdi
  HSTRING v109; // rbx
  int v110; // eax
  KeyboardHosting::TabTipAdapter *v111; // rdi
  HSTRING v112; // rbx
  int v113; // eax
  int v114; // [rsp+28h] [rbp-49h] BYREF
  const WCHAR *v115; // [rsp+30h] [rbp-41h] BYREF
  double v116; // [rsp+38h] [rbp-39h] BYREF
  HSTRING_HEADER v117; // [rsp+40h] [rbp-31h] BYREF
  HSTRING v118; // [rsp+58h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-11h] BYREF
  HSTRING v120; // [rsp+78h] [rbp+7h]
  HSTRING_HEADER v121; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v114 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Handwriting", L"PanelDefaultModeDocked", &v114);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA81,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v4 = L"floating";
  if ( v114 )
    v4 = L"docked";
  v115 = v4;
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v117, &v115, v3)[1].Reserved.Reserved1;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
         (const unsigned __int16 (*)[31])L"DefaultHandWritingPositionType");
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, *(HSTRING *)(v7 + 24), Reserved1);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA89,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v10 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v120, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v13 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v120, v13);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v16 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v120, v16);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
  v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v19 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"0")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, v120, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA91,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v22 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, v120, v22);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA94,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
  v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v25 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
          (const unsigned __int16 (*)[25])L"NarrowTwoRowCandidateBar");
  v27 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, *(HSTRING *)(v26 + 24), v25);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA97,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
  v28 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v29 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
          (const unsigned __int16 (*)[31])L"FloatingCandidateWindowEnabled");
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v28, *(HSTRING *)(v30 + 24), v29);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA9A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  v32 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v33 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"0")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v32, v120, v33);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA9C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
  v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v36 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowScalingEnabled", 0x15u, 0x14u);
  v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, v120, v36);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA9F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v37);
  v38 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v39 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v40 = KeyboardHosting::TabTipAdapter::SetShellPreference(v38, v120, v39);
  if ( v40 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAA2,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v40);
  v41 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v42 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&v117,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v41, v120, v42);
  if ( v43 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAA5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v43);
  v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ms-settings:regionlanguage",
    0x1Bu,
    0x1Au);
  v45 = v120;
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"KeyboardSettingsLauncherTargetUri", 0x22u, 0x21u);
  v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v118, v45);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v46);
  v47 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v48 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v117,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, v118, v48);
  if ( v49 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v49);
  v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"wide", 5u, 4u);
  v51 = v118;
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
  v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, v120, v51);
  if ( v52 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v52);
  v53 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v54 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"0")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"FuzzyKeyLookupEnabled", 0x16u, 0x15u);
  v55 = KeyboardHosting::TabTipAdapter::SetShellPreference(v53, v118, v54);
  if ( v55 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v55);
  LOBYTE(v56) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    v56);
  v57 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v58 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SupportsThemeChanges", 0x15u, 0x14u);
  v59 = KeyboardHosting::TabTipAdapter::SetShellPreference(v57, v118, v58);
  if ( v59 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v59);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v60,
    v61);
  v62 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"Desktop", 8u, 7u);
  v63 = v118;
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SuggestionUIShell", 0x12u, 0x11u);
  v64 = KeyboardHosting::TabTipAdapter::SetShellPreference(v62, v120, v63);
  if ( v64 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xABF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v64);
  v65 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v66 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SuggestionUI", 0xDu, 0xCu);
  v67 = KeyboardHosting::TabTipAdapter::SetShellPreference(v65, v118, v66);
  if ( v67 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v67);
  v68 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v69 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SuggestionUIClipboardHistory", 0x1Du, 0x1Cu);
  v70 = KeyboardHosting::TabTipAdapter::SetShellPreference(v68, v118, v69);
  if ( v70 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC2,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v70);
  v71 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v72 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"GifSuggestion", 0xEu, 0xDu);
  v73 = KeyboardHosting::TabTipAdapter::SetShellPreference(v71, v118, v72);
  if ( v73 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v73);
  v74 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v75 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SIPSuggestionUI", 0x10u, 0xFu);
  v76 = KeyboardHosting::TabTipAdapter::SetShellPreference(v74, v118, v75);
  if ( v76 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v76);
  v77 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"ModernUX", 9u, 8u);
  v78 = v118;
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"VisualStyle", 0xCu, 0xBu);
  v79 = KeyboardHosting::TabTipAdapter::SetShellPreference(v77, v120, v78);
  if ( v79 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v79);
  LOBYTE(v80) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PasteAsPlainText>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PasteAsPlainText>::GetImpl'::`2'::impl,
    v80);
  v81 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v82 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SuggestionUI_PasteAsPlainText", 0x1Eu, 0x1Du);
  v83 = KeyboardHosting::TabTipAdapter::SetShellPreference(v81, v118, v82);
  if ( v83 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xACA,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v83);
  v84 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v85 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                       (const unsigned __int16 (*)[2])L"1")
                   + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"EnableTransparentAreaInKeyboard", 0x20u, 0x1Fu);
  v86 = KeyboardHosting::TabTipAdapter::SetShellPreference(v84, v118, v85);
  if ( v86 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xACD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v86);
  v116 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v116) && v116 >= 5.0 && v116 <= 100.0 )
  {
    std::to_wstring(&hstringHeader);
    v90 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    p_hstringHeader = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v120 >= 8 )
      p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v115 = p_hstringHeader;
    v92 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v121, &v115, v89)[1].Reserved.Reserved1;
    v118 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"OverrideMonitorSize", 0x14u, 0x13u);
    v93 = KeyboardHosting::TabTipAdapter::SetShellPreference(v90, v118, v92);
    if ( v93 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAD7,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v93);
    v94 = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v120 >= 8 )
      v94 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v115 = v94;
    TouchKeyboardExperienceTelemetryLogger::OverriddenMonitorSizeFound<unsigned short const *>(&v115);
    std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  }
  LOBYTE(v88) = 3;
  LOBYTE(v87) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
    v87,
    v88);
  v95 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"ModernUX", 9u, 8u);
  v96 = v118;
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameStyle", 0xBu, 0xAu);
  v97 = KeyboardHosting::TabTipAdapter::SetShellPreference(v95, v120, v96);
  if ( v97 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xADF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v97);
  v98 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"ModernUX", 9u, 8u);
  v99 = v118;
  v120 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DropShadowStyle", 0x10u, 0xFu);
  v100 = KeyboardHosting::TabTipAdapter::SetShellPreference(v98, v120, v99);
  if ( v100 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v100);
  v101 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v117,
    L"ms-settings:personalization-textinput",
    0x26u,
    0x25u);
  v102 = v118;
  v103 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (Microsoft::WRL::Wrappers::HStringReference *)&v121,
           (const unsigned __int16 (*)[31])L"PersonalizationSettingsPageUri");
  v104 = KeyboardHosting::TabTipAdapter::SetShellPreference(v101, *(HSTRING *)(v103 + 24), v102);
  if ( v104 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v104);
  v105 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v106 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (Microsoft::WRL::Wrappers::HStringReference *)&v121,
                        (const unsigned __int16 (*)[2])L"1")
                    + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"PersonalizationThemeEnabled", 0x1Cu, 0x1Bu);
  v107 = KeyboardHosting::TabTipAdapter::SetShellPreference(v105, v118, v106);
  if ( v107 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v107);
  v108 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v109 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (Microsoft::WRL::Wrappers::HStringReference *)&v121,
                        (const unsigned __int16 (*)[2])L"1")
                    + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"SystemIndependentFontSizeCHS", 0x1Du, 0x1Cu);
  v110 = KeyboardHosting::TabTipAdapter::SetShellPreference(v108, v118, v109);
  if ( v110 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAEB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v110);
  v111 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v112 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (Microsoft::WRL::Wrappers::HStringReference *)&v121,
                        (const unsigned __int16 (*)[2])L"1")
                    + 24);
  v118 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v117, L"CloudSuggestionUpdateEnabled", 0x1Du, 0x1Cu);
  v113 = KeyboardHosting::TabTipAdapter::SetShellPreference(v111, v118, v112);
  if ( v113 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAEE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v113);
}
