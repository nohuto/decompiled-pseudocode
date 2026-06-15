/*
 * XREFs of ??$?0PEAUIAudioDeviceModule@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceModule@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIAudioDeviceModule@Devices@Media@Windows@@PEAJ@Z @ 0x14007B9C0
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceModule@Devices@Media@5@_N@Z @ 0x140087C08 (-InsertAtInternal@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?SetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14008C800 (-SetAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAud.c)
 * Callees:
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x14007CBB4 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::Media::Devices::IAudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>>::AutoValue<Windows::Media::Devices::IAudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
