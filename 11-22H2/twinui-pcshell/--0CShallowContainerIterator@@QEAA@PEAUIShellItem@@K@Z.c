/*
 * XREFs of ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1806CB808
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC2AC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC758 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1806CF3C4 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
