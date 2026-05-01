/*
 * XREFs of ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x1806407F8
 * Callers:
 *     ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x18063DF34 (--1-$unique_ptr@VStartupApproval@StartupDB@@U-$default_delete@VStartupApproval@StartupDB@@@std@@.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x18063EB24 (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18063EBE8 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StartupDB::StartupApproval::Uninitialize(HKEY *this)
{
  if ( (unsigned __int64)*this > 2 )
    RegCloseKey(*this);
  *this = 0LL;
}
