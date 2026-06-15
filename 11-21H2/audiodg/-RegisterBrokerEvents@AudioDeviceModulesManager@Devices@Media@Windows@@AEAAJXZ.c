/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140020AD0
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400218B4 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_511023af88e174782ac1e7ddac964c62_@@$0?0PEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBroker@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_511023af88e174782ac1e7ddac964c62_@@@Z @ 0x14001FE28 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  void *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-38h]
  Windows::Media::Devices::AudioDeviceModulesManager *v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v10; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)v6 = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  v6[2] = 0;
  v7 = this;
  v8 = *(_OWORD *)v6;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v2 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBroker *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
                   (__int64)v2,
                   (__int64)&v7);
  v10 = v2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**((_QWORD **)this + 13) + 64LL))(
         *((_QWORD *)this + 13),
         v2,
         (char *)this + 120);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v3,
      (int)Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged);
  }
  else
  {
    *((_BYTE *)this + 128) = 1;
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v4;
}
