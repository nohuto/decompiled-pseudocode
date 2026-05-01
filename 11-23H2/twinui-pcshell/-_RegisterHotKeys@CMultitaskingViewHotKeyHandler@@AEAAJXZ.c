/*
 * XREFs of ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x1801AF834
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1801395EC (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1801AF950 (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::_RegisterHotKeys(CMultitaskingViewHotKeyHandler *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[24]; // [rsp+30h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(this) )
    return 0LL;
  v6[0] = 0;
  v6[4] = 0;
  v6[8] = 0;
  v6[12] = 0;
  v6[16] = 0;
  v6[20] = 0;
  v2 = *((_QWORD *)this + 4);
  v6[1] = 40;
  v6[2] = 1;
  v6[3] = 9;
  v6[5] = 41;
  v6[6] = 5;
  v6[7] = 9;
  v6[9] = 42;
  v6[10] = 9;
  v6[11] = 9;
  v6[13] = 43;
  v6[14] = 13;
  v6[15] = 9;
  v6[17] = 44;
  v6[18] = 3;
  v6[19] = 9;
  v6[21] = 45;
  v6[22] = 7;
  v6[23] = 9;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64, char *))(*(_QWORD *)v2 + 56LL))(
         v2,
         6LL,
         v6,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         (char *)this + 64);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
