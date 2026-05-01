/*
 * XREFs of ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC638
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_::operator() @ 0x18045B7A0 (wistd--__function--__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EICinTIConDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BC444 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EICinTIConDesktop@@@details@wil@@QEAAX_NW.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchKeyboardExperienceManager::UpdateHandwritingAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  int MdmPolicyValue; // r14d
  KeyboardHosting::TabTipAdapter *v4; // rdi
  HSTRING v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v19; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v20; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardHandwritingModeAvailability");
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v5 = v19;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v20,
    L"KeyboardModeEnabled_handwritinglinenarrow",
    0x2Au,
    0x29u);
  v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v21, v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9BA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  if ( MdmPolicyValue == 2 )
  {
    v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"0", 2u, 1u);
    v16 = v21;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v19, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9BF,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EICinTIConDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_EICinTIConDesktop>::GetImpl'::`2'::impl,
      0,
      v7,
      v8);
    v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"1", 2u, 1u);
    v10 = v21;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v19, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9CB,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"handwritingline", 0x10u, 0xFu);
    v13 = v21;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultPenKeyboardMode", 0x17u, 0x16u);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v19, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9CC,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
  }
}
