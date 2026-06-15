/*
 * XREFs of ??$?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAJ@Z @ 0x140022540
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@_N@Z @ 0x1400223C4 (-InsertAtInternal@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$Defaul.c)
 *     ?SetAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x14008C670 (-SetAt@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPr.c)
 * Callees:
 *     ??$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAU23456@@Z @ 0x1400225E0 (--$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
