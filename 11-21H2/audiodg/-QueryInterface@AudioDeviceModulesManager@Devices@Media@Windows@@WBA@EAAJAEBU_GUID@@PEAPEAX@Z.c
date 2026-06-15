/*
 * XREFs of ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
           (Windows::Media::Devices::AudioDeviceModulesManager *)(a1 - 16),
           a2,
           a3);
}
