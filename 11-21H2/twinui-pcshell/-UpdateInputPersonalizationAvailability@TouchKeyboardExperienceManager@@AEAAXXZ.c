/*
 * XREFs of ?UpdateInputPersonalizationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC8DC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_1e608ed1c32ad64581b29d697dcdae70__void___cdecl(void)_::operator() @ 0x18045B7E0 (wistd--__function--__func__lambda_1e608ed1c32ad64581b29d697dcdae70__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateInputPersonalizationAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  int PolicyInt; // eax
  int v5; // ecx
  const WCHAR *v6; // rax
  KeyboardHosting::TabTipAdapter *v7; // rdi
  HSTRING v8; // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-68h] BYREF
  const WCHAR *v11; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-58h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-40h]
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::GetImpl'::`2'::impl,
    a2,
    a3);
  PolicyInt = PolicyManager_GetPolicyInt(L"Privacy", L"AllowInputPersonalization", &v10);
  if ( PolicyInt < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
    v5 = 1;
    v10 = 1;
  }
  else
  {
    v5 = v10;
  }
  v6 = L"1";
  if ( v5 != 1 )
    v6 = L"0";
  v11 = v6;
  v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v8 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v14, &v11, (unsigned int)L"0")
                  + 24);
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"AllowInputPersonalization",
    0x1Au,
    0x19u);
  v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v13, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xABC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
}
