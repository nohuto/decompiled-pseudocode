/*
 * XREFs of ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F1018
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180515380 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800F1854 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateOobeRunningState(TouchKeyboardExperienceManager *this)
{
  bool v2; // al
  unsigned int v3; // r8d
  const WCHAR *v4; // rdx
  const WCHAR *v5; // rsi
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING Reserved1; // rbx
  int v8; // eax
  unsigned int v9; // r8d
  KeyboardHosting::TabTipAdapter *v10; // rdi
  HSTRING v11; // rbx
  int v12; // eax
  unsigned int v13; // r8d
  KeyboardHosting::TabTipAdapter *v14; // rdi
  HSTRING v15; // rbx
  int v16; // eax
  const WCHAR *v17; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v20; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = IsAnyOOBE();
  v4 = L"0";
  v5 = L"1";
  if ( !v2 )
    v4 = L"1";
  v17 = v4;
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v17, v3)[1].Reserved.Reserved1;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsOobeCompleted", 0x10u, 0xFu);
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v19, Reserved1);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA47,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      (int)v17);
  if ( !IsAnyOOBE() )
    v5 = L"0";
  v17 = v5;
  v10 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v11 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v17, v9)[1].Reserved.Reserved1;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ToolBar\\AlwaysShow", 0x13u, 0x12u);
  v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v10, v19, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA4B,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      (int)v17);
  v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v15 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v17, v13)[1].Reserved.Reserved1;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ToolBar\\MinifiedMode", 0x15u, 0x14u);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v19, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA4C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16,
      (int)v17);
}
