/*
 * XREFs of ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C0231100
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0230C10 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 */

void __fastcall CInputManager::NotifyDwmInputThreadShutdown(struct _ETHREAD *a1)
{
  CInputManager *v1; // rcx

  v1 = g_pInputManager;
  if ( g_pInputManager )
  {
    *((_DWORD *)g_pInputManager + 16) = 0;
    CInputManager::CleanupDwmInputThread(v1);
  }
}
