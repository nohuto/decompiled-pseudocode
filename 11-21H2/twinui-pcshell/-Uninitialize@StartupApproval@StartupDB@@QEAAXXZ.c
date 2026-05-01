/*
 * XREFs of ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x18058178C
 * Callers:
 *     ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x18057EF24 (--1-$unique_ptr@VStartupApproval@StartupDB@@U-$default_delete@VStartupApproval@StartupDB@@@std@@.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x18057FBF0 (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18057FCB4 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StartupDB::StartupApproval::Uninitialize(HKEY *this)
{
  if ( (unsigned __int64)*this > 2 )
    RegCloseKey(*this);
  *this = 0LL;
}
