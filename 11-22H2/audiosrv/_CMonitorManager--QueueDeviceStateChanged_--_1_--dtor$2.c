/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$2 @ 0x18007AAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 64));
}
