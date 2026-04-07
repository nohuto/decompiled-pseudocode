/*
 * XREFs of ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x1800581CC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

char __fastcall CDesktopManager::IsInLogonDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  GetDesktopID(1LL, &v6, a3);
  return CDesktopManager::IsLogonDesktop(v6, v3, v4);
}
