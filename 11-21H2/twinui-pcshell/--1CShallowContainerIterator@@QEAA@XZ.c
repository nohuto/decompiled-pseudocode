/*
 * XREFs of ??1CShallowContainerIterator@@QEAA@XZ @ 0x1805D848C
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$3 @ 0x1801D85D0 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$3.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$2 @ 0x1801D88F5 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$4 @ 0x1801D890D (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$4.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$0 @ 0x1801DA61E (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$7 @ 0x1805DB9A7 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CShallowContainerIterator::~CShallowContainerIterator(CShallowContainerIterator *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
