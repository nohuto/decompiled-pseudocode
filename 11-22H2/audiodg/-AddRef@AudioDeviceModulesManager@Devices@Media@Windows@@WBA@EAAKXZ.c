/*
 * XREFs of ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x140031E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::AddRef(__int64 a1)
{
  return Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef((Windows::Media::Devices::Internal::AudioDeviceBroker *)(a1 - 16));
}
