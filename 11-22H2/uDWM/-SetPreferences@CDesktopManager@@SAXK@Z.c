/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180049090
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180048E1C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B52E0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
    16LL);
}
