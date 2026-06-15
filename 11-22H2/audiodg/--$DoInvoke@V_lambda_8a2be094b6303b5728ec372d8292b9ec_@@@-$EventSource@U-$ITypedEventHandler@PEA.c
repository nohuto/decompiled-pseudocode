/*
 * XREFs of ??$DoInvoke@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@@Z @ 0x14007DFA0
 * Callers:
 *     ?OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDevice@2345@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@Z @ 0x140088C30 (-OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_8a2be094b6303b5728ec372d8292b9ec_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14007E304 (--$InvokeDelegates@V_lambda_8a2be094b6303b5728ec372d8292b9ec_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140080F4C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_8a2be094b6303b5728ec372d8292b9ec_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rbx
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v10, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v10;
  if ( v10 )
  {
    v9 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_8a2be094b6303b5728ec372d8292b9ec_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
           &v9,
           v10,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v7);
  }
  return v4;
}
