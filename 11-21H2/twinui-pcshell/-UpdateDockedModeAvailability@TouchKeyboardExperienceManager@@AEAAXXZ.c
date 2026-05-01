/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD314
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_::operator() @ 0x18045B8A0 (wistd--__function--__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_--operato.c)
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
void __fastcall TouchKeyboardExperienceManager::UpdateDockedModeAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
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
  int v26; // eax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  HSTRING v28; // rbx
  int v29; // eax
  KeyboardHosting::TabTipAdapter *v30; // rdi
  HSTRING v31; // rbx
  int v32; // eax
  HSTRING_HEADER v33; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v34; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v36; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  if ( (unsigned int)KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"ForceTouchKeyboardDockedState") != 1
    || IsPPIEdition() )
  {
    v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v34, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA25,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v7 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v34, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA26,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v10 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v34, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA27,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v13 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v34, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA28,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v16 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v34, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA29,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
  else
  {
    v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v33, L"0", 2u, 1u);
    v19 = v34;
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, v36, v19);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA1D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v22 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, v34, v22);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA1E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v25 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v34, v25);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA1F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
    v27 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v28 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, v34, v28);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA20,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
    v30 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v31 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v33,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, v34, v31);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA21,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v32);
  }
}
