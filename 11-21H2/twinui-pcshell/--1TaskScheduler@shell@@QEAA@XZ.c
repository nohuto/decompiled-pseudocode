/*
 * XREFs of ??1TaskScheduler@shell@@QEAA@XZ @ 0x1805D8580
 * Callers:
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$0 @ 0x1805DAFF4 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$8 @ 0x1805DC034 (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall shell::TaskScheduler::~TaskScheduler(shell::TaskScheduler *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
}
