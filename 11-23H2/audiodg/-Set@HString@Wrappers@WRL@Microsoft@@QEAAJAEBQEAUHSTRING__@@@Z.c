/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14008C478
 * Callers:
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x14007FDF0 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *newString, HSTRING *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*a2 || *a2 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    return (unsigned int)WindowsDuplicateString(*a2, newString);
  }
  return v2;
}
