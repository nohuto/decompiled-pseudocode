/*
 * XREFs of ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400323F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
           (Windows::Media::Devices::Internal::AudioDeviceBroker *)(a1 - 16),
           a2,
           a3);
}
