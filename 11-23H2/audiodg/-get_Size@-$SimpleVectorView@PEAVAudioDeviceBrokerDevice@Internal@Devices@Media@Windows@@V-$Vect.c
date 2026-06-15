/*
 * XREFs of ?get_Size@?$SimpleVectorView@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x14008E170
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_0d8b650c7e3a1e17b6162536ffea8fa3_@@V_lambda_963b5670260c1720ed7092db7f190471_@@@?$InvalidationChecker@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_0d8b650c7e3a1e17b6162536ffea8fa3_@@AEBV_lambda_963b5670260c1720ed7092db7f190471_@@@Z @ 0x14007CE8C (--$Do@V_lambda_0d8b650c7e3a1e17b6162536ffea8fa3_@@V_lambda_963b5670260c1720ed7092db7f190471_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,XWinRT::IntVersionTag,0>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v4; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v3[0] = (_QWORD *)a1;
  v4 = &v5;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>,XWinRT::IntVersionTag>::Do<_lambda_0d8b650c7e3a1e17b6162536ffea8fa3_,_lambda_963b5670260c1720ed7092db7f190471_>(
           (unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           v3,
           &v4);
}
