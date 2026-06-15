/*
 * XREFs of ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x140035190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::Release(__int64 a1)
{
  return Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::Release((Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)(a1 - 8));
}
