/*
 * XREFs of ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0B70
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_2c37fed8dd6b30d5ff4aaa224260faa2__void___cdecl(void)_::operator() @ 0x18050D0C0 (wistd--__function--__func__lambda_2c37fed8dd6b30d5ff4aaa224260faa2__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x1800A2E08 (-GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F0958 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSuggestionUIUpdateAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // dl
  const unsigned __int16 *v6; // rcx
  bool MdmBoolPolicyValue; // al
  KeyboardHosting::TabTipAdapter *v8; // rdi
  HSTRING v9; // rbx
  int v10; // eax
  HSTRING v11; // rbx
  int v12; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v14; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v15; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v16; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  MdmBoolPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue(v6, v5);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmBoolPolicyValue )
  {
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v9 = v14;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v15, L"SuggestionUIUpdateEnabled", 0x1Au, 0x19u);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v16, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x95D,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        (int)hstringHeader.Reserved.Reserved1);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v15, L"0", 2u, 1u);
    v11 = v16;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SuggestionUIUpdateEnabled",
      0x1Au,
      0x19u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v14, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x961,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
