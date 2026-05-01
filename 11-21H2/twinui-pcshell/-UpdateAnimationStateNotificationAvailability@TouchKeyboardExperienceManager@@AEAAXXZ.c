/*
 * XREFs of ?UpdateAnimationStateNotificationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B88D0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateAnimationStateNotificationAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-58h] BYREF
  HSTRING v7; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER v8; // [rsp+40h] [rbp-38h] BYREF
  HSTRING v9; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
    a2);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
  v4 = v7;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"IsAnimationStateNotificationEnabled", 0x24u, 0x23u);
  v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v9, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
}
