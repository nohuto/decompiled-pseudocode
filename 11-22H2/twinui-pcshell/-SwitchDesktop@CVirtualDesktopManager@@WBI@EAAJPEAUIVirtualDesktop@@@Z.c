/*
 * XREFs of ?SwitchDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x1802A8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::SwitchDesktop(__int64 a1, struct IVirtualDesktop *a2)
{
  return CVirtualDesktopManager::SwitchDesktop((CVirtualDesktopManager *)(a1 - 24), a2);
}
