/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003D77C
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180015344 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003D5F0 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003DAE4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18010A40C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           a1);
}
