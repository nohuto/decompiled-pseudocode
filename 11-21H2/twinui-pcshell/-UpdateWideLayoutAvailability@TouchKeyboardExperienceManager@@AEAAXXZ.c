/*
 * XREFs of ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180174344
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_::operator() @ 0x18045B930 (wistd--__function--__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateWideLayoutAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  HSTRING v9; // rbx
  int v10; // eax
  HSTRING_HEADER v11; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v12; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v14; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardWideModeAvailability");
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  if ( MdmPolicyValue == 2 )
  {
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"0", 2u, 1u);
    v9 = v12;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_wide",
      0x19u,
      0x18u);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v14, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x988,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
  else
  {
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v7 = v14;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"KeyboardModeEnabled_wide", 0x19u, 0x18u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v12, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x98C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
}
