/*
 * XREFs of _StartupAppMonitor::IsStartupAppEnabled_::_1_::dtor$0 @ 0x18063ECB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::IsStartupAppEnabled_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<StartupDB::StartupApproval>::~unique_ptr<StartupDB::StartupApproval>((StartupDB::StartupApproval **)(a2 + 104));
}
