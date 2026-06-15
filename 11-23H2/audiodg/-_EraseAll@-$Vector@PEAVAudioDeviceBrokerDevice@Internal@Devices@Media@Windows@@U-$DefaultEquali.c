/*
 * XREFs of ?_EraseAll@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAI@Z @ 0x14008D8E8
 * Callers:
 *     ??1?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x140080564 (--1-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?Clear@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140082A60 (-Clear@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPr.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::_EraseAll(
        __int64 a1,
        __int64 **a2,
        unsigned int *a3)
{
  __int64 *v3; // rax
  unsigned int v5; // edx

  ++*(_DWORD *)(a1 + 88);
  v3 = *(__int64 **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( a2 )
  {
    *a2 = v3;
    *a3 = v5;
  }
  else
  {
    Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::_Free(
      v3,
      v5);
  }
}
