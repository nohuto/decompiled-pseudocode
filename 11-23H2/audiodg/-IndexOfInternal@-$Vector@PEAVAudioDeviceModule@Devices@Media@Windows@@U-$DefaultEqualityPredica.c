/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIAudioDeviceModule@Devices@Media@5@IPEAU6785@PEAIPEAE@Z @ 0x1400874CC
 * Callers:
 *     ?IndexOf@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@PEAIPEAE@Z @ 0x140087130 (-IndexOf@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 * Callees:
 *     ??$?RUIAudioDeviceModule@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceModule@Devices@Media@Windows@@0PEA_N@Z @ 0x14007BBC4 (--$-RUIAudioDeviceModule@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceMo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::InterfaceEquals::operator()<Windows::Media::Devices::IAudioDeviceModule>(v6, a4, *a2, &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
