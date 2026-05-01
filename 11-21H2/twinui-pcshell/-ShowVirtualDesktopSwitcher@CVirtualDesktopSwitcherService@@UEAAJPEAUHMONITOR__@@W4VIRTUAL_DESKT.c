/*
 * XREFs of ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180494B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x18000FCC8 (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___ @ 0x18049479C (MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopSwitcherService::ShowVirtualDesktopSwitcher(__int64 a1, __int64 a2, int a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  int MultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0LL;
  v5 = *(__int64 **)(a1 + 24);
  v6 = *v5;
  v18 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 72);
  try
  {
    v8 = v7(v5);
    v9 = v8;
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
        &v15,
        v18);
      v16 = a3;
      v19 = 0LL;
      MultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf = MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_(
                                                                                &v19,
                                                                                (__int64)&v15);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
      if ( MultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                *(_QWORD *)(a1 + 16),
                v19,
                1LL);
        v14 = v13;
        if ( v13 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x48,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
            (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
        result = v14;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
        result = (unsigned int)MultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4A,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           v10);
  }
  return result;
}
