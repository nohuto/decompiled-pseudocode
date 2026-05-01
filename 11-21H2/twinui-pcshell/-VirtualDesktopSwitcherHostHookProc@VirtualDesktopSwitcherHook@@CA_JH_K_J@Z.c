/*
 * XREFs of ?VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z @ 0x18060C760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180607498 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806074C8 (--$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIWeakReference@@Uerr_failfa.c)
 */

// Hidden C++ exception states: #wind=4
LRESULT __fastcall VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHostHookProc(
        int code,
        WPARAM wParam,
        _DWORD *lParam)
{
  struct IWeakReference *v6; // rcx
  void *v7; // rbx
  __int64 v8; // rax
  struct IWeakReference *v10; // [rsp+20h] [rbp-10h] BYREF
  void *v11; // [rsp+28h] [rbp-8h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+38h] BYREF

  if ( !code && ((wParam - 256) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
  {
    v6 = *(struct IWeakReference **)VirtualDesktopSwitcherHook::s_vdsHookData;
    v10 = v6;
    if ( v6 )
      ((void (__fastcall *)(struct IWeakReference *))v6->lpVtbl->AddRef)(v6);
    wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(&v10, &v11);
    v7 = v11;
    if ( !v11 )
      goto LABEL_15;
    wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(
      &v10,
      (void **)&v12);
    if ( *lParam != 27 )
    {
      v8 = *v12;
      if ( *lParam == 40 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v8 + 40))(v12)
          && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v12 + 32))(v12) )
        {
          goto LABEL_14;
        }
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v8 + 32))(v12)
             || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v12 + 48))(v12) )
      {
        goto LABEL_14;
      }
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, 0LL);
LABEL_14:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_15:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v10);
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
