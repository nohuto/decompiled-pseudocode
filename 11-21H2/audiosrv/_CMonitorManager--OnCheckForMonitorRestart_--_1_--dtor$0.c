/*
 * XREFs of _CMonitorManager::OnCheckForMonitorRestart_::_1_::dtor$0 @ 0x18011D06F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::OnCheckForMonitorRestart_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
