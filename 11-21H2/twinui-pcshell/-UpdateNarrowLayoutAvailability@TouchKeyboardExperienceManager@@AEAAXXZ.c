/*
 * XREFs of ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801650D8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_::operator() @ 0x18045B7C0 (wistd--__function--__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
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
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v24; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v25; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( (unsigned int)KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardNarrowModeAvailability") == 2
    || IsPPIEdition() )
  {
    v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
    v15 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow",
      0x1Bu,
      0x1Au);
    v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v24, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A1,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
    v18 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow12key",
      0x20u,
      0x1Fu);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v24, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A2,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
    v21 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_stroke",
      0x1Bu,
      0x1Au);
    v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v24, v21);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22);
  }
  else
  {
    v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v6 = v24;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"KeyboardModeEnabled_narrow", 0x1Bu, 0x1Au);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v26, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"1", 2u, 1u);
    v9 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow12key",
      0x20u,
      0x1Fu);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v24, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"1", 2u, 1u);
    v12 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_stroke",
      0x1Bu,
      0x1Au);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v24, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
  }
}
