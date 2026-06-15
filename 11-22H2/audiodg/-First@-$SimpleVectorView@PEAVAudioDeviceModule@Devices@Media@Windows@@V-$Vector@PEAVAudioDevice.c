/*
 * XREFs of ?First@?$SimpleVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@345@@Z @ 0x140083CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@V_lambda_b604df33f0504b685457b96bcf3a28c5_@@@?$InvalidationChecker@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@AEBV_lambda_b604df33f0504b685457b96bcf3a28c5_@@@Z @ 0x14007DAF0 (--$Do@V_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@V_lambda_b604df33f0504b685457b96bcf3a28c5_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,XWinRT::IntVersionTag>::Do<_lambda_8ef619453896d5e01f26f7f9c9aeedcd_,_lambda_b604df33f0504b685457b96bcf3a28c5_>(
           (unsigned int *)(a1 + 32),
           *(_QWORD *)(a1 + 24),
           (__int64)v3,
           &v4);
}
