/*
 * XREFs of ?UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18020BF60
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateControllerLayoutAvailability(
        TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  HSTRING v6; // rbx
  int v7; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v10; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardControllerModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 2 )
  {
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v4 = v9;
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"KeyboardModeEnabled_controller", 0x1Fu, 0x1Eu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v11, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"1", 2u, 1u);
    v6 = v11;
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_controller",
      0x1Fu,
      0x1Eu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v9, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8CD,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
