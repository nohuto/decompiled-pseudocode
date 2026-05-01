/*
 * XREFs of ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC7F0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180463F90 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800BCF18 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1800BD238 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
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
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
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
        (void *)0xB4E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v10;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v12, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB52,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
}
