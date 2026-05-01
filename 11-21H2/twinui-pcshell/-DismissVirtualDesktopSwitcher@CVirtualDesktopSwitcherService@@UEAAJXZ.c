/*
 * XREFs of ?DismissVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJXZ @ 0x1804949D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358___ @ 0x1804946F0 (MakeMultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopSwitcherService::DismissVirtualDesktopSwitcher(
        CVirtualDesktopSwitcherService *this,
        __int64 a2)
{
  int MultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  MultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358 = MakeMultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358_(
                                                                            &v10,
                                                                            a2);
  v4 = MultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358;
  if ( MultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358 >= 0 )
  {
    try
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      v7 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
      result = v7;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x60,
                             (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_8a637bc88d7ef4a2763f737bdc8d5358);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
    return v4;
  }
  return result;
}
