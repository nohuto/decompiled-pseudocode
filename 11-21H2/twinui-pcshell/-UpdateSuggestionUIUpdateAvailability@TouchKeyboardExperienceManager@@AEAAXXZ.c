/*
 * XREFs of ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD598
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_2c37fed8dd6b30d5ff4aaa224260faa2__void___cdecl(void)_::operator() @ 0x18045B800 (wistd--__function--__func__lambda_2c37fed8dd6b30d5ff4aaa224260faa2__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD824 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x1800BFC68 (-GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchKeyboardExperienceManager::UpdateSuggestionUIUpdateAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  __int64 v3; // rdx
  bool v4; // dl
  const unsigned __int16 *v5; // rcx
  bool MdmBoolPolicyValue; // al
  KeyboardHosting::TabTipAdapter *v7; // rdi
  HSTRING v8; // rbx
  int v9; // eax
  HSTRING v10; // rbx
  int v11; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v13; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v14; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    a2);
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    v3);
  MdmBoolPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue(v5, v4);
  v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  if ( MdmBoolPolicyValue )
  {
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v8 = v13;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"SuggestionUIUpdateEnabled", 0x1Au, 0x19u);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v15, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"0", 2u, 1u);
    v10 = v15;
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SuggestionUIUpdateEnabled",
      0x1Au,
      0x19u);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v13, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAAC,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
}
