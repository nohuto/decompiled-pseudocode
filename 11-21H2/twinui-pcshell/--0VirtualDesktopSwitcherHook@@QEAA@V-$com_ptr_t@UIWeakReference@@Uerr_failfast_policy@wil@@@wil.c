/*
 * XREFs of ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x180607750
 * Callers:
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060B36C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@QEAA@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@Z @ 0x1806054A0 (--$-0AEAV-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@-$_Ref_co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHook(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const char *a4)
{
  std::_Ref_count_base *v6; // rax
  std::_Ref_count_base *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HHOOK v10; // [rsp+40h] [rbp+18h] BYREF
  void *v11; // [rsp+48h] [rbp+20h]

  if ( VirtualDesktopSwitcherHook::s_vdsHookData )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35F,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
      a4);
  v10 = SetWindowsHookExW(13, VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHostHookProc, &_ImageBase, 0);
  v11 = operator new(0x20uLL);
  v6 = (std::_Ref_count_base *)std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::_Ref_count_obj2<VirtualDesktopSwitcherHookData>(
                                 (__int64)v11,
                                 a2,
                                 (__int64 *)&v10);
  VirtualDesktopSwitcherHook::s_vdsHookData = (__int64)v6 + 16;
  v7 = qword_1807B4B90;
  qword_1807B4B90 = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a2);
  return a1;
}
