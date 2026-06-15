/*
 * XREFs of ?_Free@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIAudioDeviceModule@Devices@Media@5@I@Z @ 0x14008DA38
 * Callers:
 *     ?Clear@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140082BA0 (-Clear@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAud.c)
 *     ?_EraseAll@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x14008D970 (-_EraseAll@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEA.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x14007CD94 (--$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::_Free(
        __int64 *Block,
        unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::IAudioDeviceModule>(v3++);
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
