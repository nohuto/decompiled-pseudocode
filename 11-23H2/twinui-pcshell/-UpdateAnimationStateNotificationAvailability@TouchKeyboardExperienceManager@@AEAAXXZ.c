/*
 * XREFs of ?UpdateAnimationStateNotificationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0D2C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateAnimationStateNotificationAvailability(
        TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v1; // rdi
  HSTRING v2; // rbx
  int v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-58h] BYREF
  HSTRING v5; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER v6; // [rsp+40h] [rbp-38h] BYREF
  HSTRING v7; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v5 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
  v2 = v5;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v6, L"IsAnimationStateNotificationEnabled", 0x24u, 0x23u);
  v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(v1, v7, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x975,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      (int)hstringHeader.Reserved.Reserved1);
}
