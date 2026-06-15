/*
 * XREFs of ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x140031E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::AddRef(__int64 a1)
{
  return Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef((Windows::Media::Devices::Internal::AudioDeviceBroker *)(a1 - 8));
}
