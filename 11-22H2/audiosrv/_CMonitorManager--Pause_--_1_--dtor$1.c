/*
 * XREFs of _CMonitorManager::Pause_::_1_::dtor$1 @ 0x18012E665
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::Pause_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISpatialAudioDevicePropertyWriter>::~CComPtr<ISpatialAudioDevicePropertyWriter>((__int64 *)(a2 + 64));
}
