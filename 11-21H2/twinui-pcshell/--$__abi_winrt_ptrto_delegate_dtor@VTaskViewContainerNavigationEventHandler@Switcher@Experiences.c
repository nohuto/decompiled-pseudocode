/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VTaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVTaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18042CBB8
 * Callers:
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$3 @ 0x18021312E (_TaskViewFrame--RegisterForEvents_--_1_--dtor$3.c)
 *     _MonitorFrame::Initialize_::_1_::dtor$3 @ 0x1804350F9 (_MonitorFrame--Initialize_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
