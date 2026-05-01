/*
 * XREFs of ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x18063DF34
 * Callers:
 *     _StartupAppMonitor::IsStartupAppEnabled_::_1_::dtor$0 @ 0x18063ECB4 (_StartupAppMonitor--IsStartupAppEnabled_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x1806407F8 (-Uninitialize@StartupApproval@StartupDB@@QEAAXXZ.c)
 */

void __fastcall std::unique_ptr<StartupDB::StartupApproval>::~unique_ptr<StartupDB::StartupApproval>(
        StartupDB::StartupApproval **a1)
{
  StartupDB::StartupApproval *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StartupDB::StartupApproval::Uninitialize(*a1);
    operator delete(v1);
  }
}
