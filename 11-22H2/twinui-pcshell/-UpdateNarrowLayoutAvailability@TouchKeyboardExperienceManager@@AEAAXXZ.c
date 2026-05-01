/*
 * XREFs of ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F119C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_::operator() @ 0x18050D010 (wistd--__function--__func__lambda_1c1d9d604a06d58e211af7dfd46b8574__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  int v11; // eax
  HSTRING v12; // rbx
  int v13; // eax
  KeyboardHosting::TabTipAdapter *v14; // rdi
  HSTRING v15; // rbx
  int v16; // eax
  KeyboardHosting::TabTipAdapter *v17; // rdi
  HSTRING v18; // rbx
  int v19; // eax
  HSTRING_HEADER v20; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v23; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardNarrowModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 2 )
  {
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"0", 2u, 1u);
    v12 = v21;
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow",
      0x1Bu,
      0x1Au);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v23, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88D,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        (int)v20.Reserved.Reserved1);
    v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v15 = v23;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"KeyboardModeEnabled_narrow12key", 0x20u, 0x1Fu);
    v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v21, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88E,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16,
        (int)v20.Reserved.Reserved1);
    v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v18 = v23;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"KeyboardModeEnabled_stroke", 0x1Bu, 0x1Au);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v21, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88F,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        (int)v20.Reserved.Reserved1);
  }
  else
  {
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v23;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"KeyboardModeEnabled_narrow", 0x1Bu, 0x1Au);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v21, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x893,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)v20.Reserved.Reserved1);
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v7 = v23;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"KeyboardModeEnabled_narrow12key", 0x20u, 0x1Fu);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v21, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x894,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        (int)v20.Reserved.Reserved1);
    v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v10 = v23;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"KeyboardModeEnabled_stroke", 0x1Bu, 0x1Au);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v21, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x895,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11,
        (int)v20.Reserved.Reserved1);
  }
}
