/*
 * XREFs of ?CreateDesktopW@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18020C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::CreateDesktopW(__int64 a1, HMONITOR a2, struct IVirtualDesktop **a3)
{
  return CVirtualDesktopManager::CreateDesktopW((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
