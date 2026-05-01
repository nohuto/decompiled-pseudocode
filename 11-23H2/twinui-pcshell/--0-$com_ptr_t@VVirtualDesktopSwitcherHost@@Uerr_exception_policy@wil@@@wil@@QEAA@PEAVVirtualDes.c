/*
 * XREFs of ??0?$com_ptr_t@VVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopSwitcherHost@@@Z @ 0x1807713E0
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
