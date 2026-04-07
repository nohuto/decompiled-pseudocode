/*
 * XREFs of ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x18003AFFC
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180038E08 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

bool CDesktopManager::IsInLogonDesktop(void)
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  GetDesktopID(1LL, &v1);
  return CDesktopManager::IsLogonDesktop(v1);
}
