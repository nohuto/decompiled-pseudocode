/*
 * XREFs of ?UpdateInputPersonalizationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0C3C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_667fd7e99eed23067ce923c3254328c4__void___cdecl(void)_::operator() @ 0x18050D160 (wistd--__function--__func__lambda_667fd7e99eed23067ce923c3254328c4__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateInputPersonalizationAvailability(
        TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  int v3; // ecx
  const WCHAR *v4; // rax
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING Reserved1; // rbx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-68h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-58h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-40h]
  HSTRING_HEADER v12; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  PolicyInt = PolicyManager_GetPolicyInt(L"Privacy", L"AllowInputPersonalization", &v8);
  if ( PolicyInt < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x969,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt,
      v8);
    v3 = 1;
    v8 = 1;
  }
  else
  {
    v3 = v8;
  }
  v4 = L"1";
  if ( v3 != 1 )
    v4 = L"0";
  v9 = v4;
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, &v9, (unsigned int)L"0")[1].Reserved.Reserved1;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"AllowInputPersonalization",
    0x1Au,
    0x19u);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v11, Reserved1);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96F,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v8);
}
