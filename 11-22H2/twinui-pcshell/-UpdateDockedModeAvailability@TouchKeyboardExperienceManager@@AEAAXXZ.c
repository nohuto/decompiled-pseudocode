/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F1338
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_::operator() @ 0x18050D140 (wistd--__function--__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateDockedModeAvailability(TouchKeyboardExperienceManager *this)
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
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  HSTRING v18; // rbx
  int v19; // eax
  KeyboardHosting::TabTipAdapter *v20; // rdi
  HSTRING v21; // rbx
  int v22; // eax
  KeyboardHosting::TabTipAdapter *v23; // rdi
  HSTRING v24; // rbx
  int v25; // eax
  KeyboardHosting::TabTipAdapter *v26; // rdi
  HSTRING v27; // rbx
  int v28; // eax
  KeyboardHosting::TabTipAdapter *v29; // rdi
  HSTRING v30; // rbx
  int v31; // eax
  HSTRING_HEADER v32; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v33; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v35; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"ForceTouchKeyboardDockedState");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 1 )
  {
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"0", 2u, 1u);
    v18 = v33;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v35, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F1,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        (int)v32.Reserved.Reserved1);
    v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v21 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v33, v21);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F2,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22,
        (int)v32.Reserved.Reserved1);
    v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v24 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, v33, v24);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F3,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v25,
        (int)v32.Reserved.Reserved1);
    v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v27 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v33, v27);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F4,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v28,
        (int)v32.Reserved.Reserved1);
    v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v30 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, v33, v30);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F5,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v31,
        (int)v32.Reserved.Reserved1);
  }
  else
  {
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v33, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F9,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)v32.Reserved.Reserved1);
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v7 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v33, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FA,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        (int)v32.Reserved.Reserved1);
    v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v10 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v33, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FB,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11,
        (int)v32.Reserved.Reserved1);
    v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v13 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v33, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FC,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14,
        (int)v32.Reserved.Reserved1);
    v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v16 = v35;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v32,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v33, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FD,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17,
        (int)v32.Reserved.Reserved1);
  }
}
