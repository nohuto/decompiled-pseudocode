/*
 * XREFs of wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___ @ 0x180607C90
 * Callers:
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18060B720 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 *     _VirtualDesktopSwitcherHost::Show_::_1_::dtor$1 @ 0x18060B9CF (_VirtualDesktopSwitcherHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 40LL))(*(_QWORD *)a1 + 8LL);
  }
  return result;
}
