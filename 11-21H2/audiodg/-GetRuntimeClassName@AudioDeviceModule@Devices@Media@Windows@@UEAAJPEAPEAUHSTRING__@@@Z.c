/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140079200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::AudioDeviceModule::GetRuntimeClassName(
        Windows::Media::Devices::AudioDeviceModule *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModule", 0x27u, a2);
}
