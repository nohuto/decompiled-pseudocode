/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$1 @ 0x18007B0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>(a2 + 40);
}
