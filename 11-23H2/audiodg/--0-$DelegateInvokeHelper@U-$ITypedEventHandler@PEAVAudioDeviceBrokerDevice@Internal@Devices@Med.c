/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@$0?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@@Z @ 0x14001C1F0
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001BFB0 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::`vftable';
  return a1;
}
