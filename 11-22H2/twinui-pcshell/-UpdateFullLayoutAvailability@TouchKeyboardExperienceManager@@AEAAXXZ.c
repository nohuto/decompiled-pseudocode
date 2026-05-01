/*
 * XREFs of ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0EC0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_::operator() @ 0x18050D0E0 (wistd--__function--__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1801AD924 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x180513128 (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  KeyboardHosting::TabTipAdapter *v4; // rdi
  HSTRING v5; // rbx
  int v6; // eax
  KeyboardHosting::TabTipAdapter *v7; // rdi
  HSTRING v8; // rbx
  int v9; // eax
  KeyboardHosting::TabTipAdapter *v10; // rdi
  HSTRING v11; // rbx
  int v12; // eax
  KeyboardHosting::TabTipAdapter *v13; // rdi
  HSTRING v14; // rbx
  int v15; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v17; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v18; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardFullModeAvailability");
  if ( MdmPolicyValue == 2
    || !MdmPolicyValue
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3))
    && !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v3) )
  {
    v10 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"0", 2u, 1u);
    v11 = v19;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full",
      0x19u,
      0x18u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v10, v17, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86B,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12,
        (int)hstringHeader.Reserved.Reserved1);
    v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"0", 2u, 1u);
    v14 = v19;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, v17, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86C,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        (int)hstringHeader.Reserved.Reserved1);
  }
  else
  {
    v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v5 = v17;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v19, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x870,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        (int)hstringHeader.Reserved.Reserved1);
    v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"1", 2u, 1u);
    v8 = v19;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v17, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x871,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
