/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x18020CA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetDesktops(__int64 a1, HMONITOR a2, struct IObjectArray **a3)
{
  return CVirtualDesktopManager::GetDesktops((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
