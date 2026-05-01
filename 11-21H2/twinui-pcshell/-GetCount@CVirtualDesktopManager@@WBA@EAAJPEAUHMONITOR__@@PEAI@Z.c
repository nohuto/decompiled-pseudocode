/*
 * XREFs of ?GetCount@CVirtualDesktopManager@@WBA@EAAJPEAUHMONITOR__@@PEAI@Z @ 0x18020C9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetCount(__int64 a1, HMONITOR a2, unsigned int *a3)
{
  return CVirtualDesktopManager::GetCount((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
