/*
 * XREFs of ?CanShowNewWindowTransition@CDesktopManager@@SA_NXZ @ 0x180037E84
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool CDesktopManager::CanShowNewWindowTransition(void)
{
  return *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9) < *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 167);
}
