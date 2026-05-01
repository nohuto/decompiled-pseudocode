/*
 * XREFs of ??1TaskScheduler@shell@@QEAA@XZ @ 0x1806CBBB8
 * Callers:
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$0 @ 0x1806DE3CD (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$8 @ 0x1806DF76F (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall shell::TaskScheduler::~TaskScheduler(shell::TaskScheduler *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
}
