/*
 * XREFs of ??1CShallowContainerIterator@@QEAA@XZ @ 0x1806CBB18
 * Callers:
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$3 @ 0x1806CC55B (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$2 @ 0x1806CCAC1 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$4 @ 0x1806CCAD9 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$0 @ 0x1806CF50D (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$7 @ 0x1806DF0E0 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 */

void __fastcall CShallowContainerIterator::~CShallowContainerIterator(CShallowContainerIterator *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeRelease<IShellItem>((__int64 *)this + 1);
}
