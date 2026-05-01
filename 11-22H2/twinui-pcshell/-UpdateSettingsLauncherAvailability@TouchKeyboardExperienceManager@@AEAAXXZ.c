/*
 * XREFs of ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0DD4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180515380 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800F1854 (-IsAnyOOBE@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1801AD924 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(
        TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v2; // rcx
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v2)
    || IsAnyOOBE()
    || IsPPIEdition() )
  {
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"0", 2u, 1u);
    v7 = v12;
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsSettingsLauncherAvailable",
      0x1Cu,
      0x1Bu);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v10, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3C,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        (int)hstringHeader.Reserved.Reserved1);
  }
  else
  {
    v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v10;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v12, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA40,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)hstringHeader.Reserved.Reserved1);
  }
}
