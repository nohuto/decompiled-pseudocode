/*
 * XREFs of ?GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18020C9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktop(__int64 a1, HMONITOR a2, struct IVirtualDesktop **a3)
{
  return CVirtualDesktopManager::GetCurrentDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
