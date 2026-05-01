/*
 * XREFs of ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1805D8230
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

CShallowContainerIterator *__fastcall CShallowContainerIterator::CShallowContainerIterator(
        CShallowContainerIterator *this,
        struct IShellItem *a2,
        int a3)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = a3;
  ((void (__fastcall *)(struct IShellItem *))a2->lpVtbl->AddRef)(a2);
  return this;
}
