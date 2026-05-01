/*
 * XREFs of ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F05B4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_::operator() @ 0x18050CFD0 (wistd--__function--__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateHandwritingAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // r14d
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
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v15; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v16; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardHandwritingModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v4 = v15;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v16,
    L"KeyboardModeEnabled_handwritinglinenarrow",
    0x2Au,
    0x29u);
  v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v17, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x89E,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      (int)hstringHeader.Reserved.Reserved1);
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v17 = 0LL;
  if ( MdmPolicyValue == 2 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"0", 2u, 1u);
    v12 = v17;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v15, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A3,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        (int)hstringHeader.Reserved.Reserved1);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"1", 2u, 1u);
    v7 = v17;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v15, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A7,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        (int)hstringHeader.Reserved.Reserved1);
    v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"handwritingline", 0x10u, 0xFu);
    v10 = v17;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultPenKeyboardMode", 0x17u, 0x16u);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v15, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A8,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
