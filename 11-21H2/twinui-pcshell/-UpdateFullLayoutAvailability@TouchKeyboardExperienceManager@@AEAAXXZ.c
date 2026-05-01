/*
 * XREFs of ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC2D0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_::operator() @ 0x18045B820 (wistd--__function--__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1800BD238 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x180460D30 (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  int MdmPolicyValue; // eax
  TouchKeyboardExperienceManager *v4; // rcx
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
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v18; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v19; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v20; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardFullModeAvailability");
  if ( MdmPolicyValue == 2
    || !MdmPolicyValue
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v4))
    && !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v4)
    || IsPPIEdition() )
  {
    v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"0", 2u, 1u);
    v12 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full",
      0x19u,
      0x18u);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v18, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x96F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"0", 2u, 1u);
    v15 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v18, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x970,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
  }
  else
  {
    v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v6 = v18;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v20, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x974,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"1", 2u, 1u);
    v9 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v18, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x975,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
}
