/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x140082EF0
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_511023af88e174782ac1e7ddac964c62_@@$0?0PEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBroker@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@789Windows@@@Z @ 0x140087E60 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Medi.c)
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@$0?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@789Windows@@@Z @ 0x140087EB0 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Device.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v3);
}
