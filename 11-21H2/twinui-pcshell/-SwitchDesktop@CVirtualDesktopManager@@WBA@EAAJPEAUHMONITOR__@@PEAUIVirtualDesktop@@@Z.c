/*
 * XREFs of ?SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18020CCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::SwitchDesktop(__int64 a1, HMONITOR a2, struct IVirtualDesktop *a3)
{
  return CVirtualDesktopManager::SwitchDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
