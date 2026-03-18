/*
 * XREFs of ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400043A4
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002460 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140004448 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400044E8 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 */

void __fastcall CSettingsManager::PropagateUserLogon(RTL_SRWLOCK *this, HKEY a2, HKEY a3, HKEY a4, bool a5)
{
  CDwmAppHost *v9; // rcx

  CSettingsManager::Cleanup((CSettingsManager *)this);
  AcquireSRWLockExclusive(this + 6);
  GetCurrentThreadId();
  if ( a2 )
    this[1].Ptr = a2;
  if ( a3 )
    this[2].Ptr = a3;
  if ( a4 )
    this[3].Ptr = a4;
  LODWORD(this[7].Ptr) = 0;
  LOBYTE(this[4].Ptr) = a5;
  ReleaseSRWLockExclusive(this + 6);
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)this);
  CDwmAppHost::LpcNotifySettingsChange(v9, 2003);
}
