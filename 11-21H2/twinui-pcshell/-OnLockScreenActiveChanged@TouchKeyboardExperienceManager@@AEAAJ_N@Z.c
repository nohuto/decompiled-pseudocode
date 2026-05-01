/*
 * XREFs of ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x1800382C8
 * Callers:
 *     wistd::__function::__func__lambda_fd1fb3cc1dfa65b16fd1b2f47571851e__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800382B0 (wistd--__function--__func__lambda_fd1fb3cc1dfa65b16fd1b2f47571851e__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rdi
  const WCHAR *v3; // rax
  HSTRING v4; // rbx
  int v5; // eax
  const WCHAR *v7; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  if ( v2 )
  {
    v3 = L"1";
    if ( !a2 )
      v3 = L"0";
    v7 = v3;
    v4 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v7) + 24);
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LockScreenState", 0x10u, 0xFu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v2, v9, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14DB,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        (int)v7);
  }
  return 0LL;
}
