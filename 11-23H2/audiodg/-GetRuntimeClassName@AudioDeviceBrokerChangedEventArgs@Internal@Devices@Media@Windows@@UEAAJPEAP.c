/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1400863F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::GetRuntimeClassName(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBrokerChangedEventArgs", 0x40u, a2);
}
