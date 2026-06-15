/*
 * XREFs of _CMonitorManager::OnPowerStateChanged_::_1_::dtor$0 @ 0x18011DD99
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::OnPowerStateChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
