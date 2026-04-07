/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800490C0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 53) = 0x3FF0000000000000LL;
  if ( CDesktopManager::CheckAnyPreference(1u) )
    *((double *)this + 53) = (double)(int)GetDpiForSystem() / 96.0;
}
